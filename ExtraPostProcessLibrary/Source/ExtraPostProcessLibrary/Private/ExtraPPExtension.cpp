// Fill out your copyright notice in the Description page of Project Settings.


#include "ExtraPPExtension.h"
//
#include "PostProcess/PostProcessing.h"
#include "PostProcess/PostProcessMaterial.h"
#include "PixelShaderUtils.h"
#include "RenderGraphEvent.h"
//
#include "ExtraPPRendering.h"

IMPLEMENT_GLOBAL_SHADER(FPassThroughPS, "/ExtraPostProcessLibrary/Shaders/PassThrough.usf", "MainPS", SF_Pixel);

FExtraPPExtension::FExtraPPExtension(const FAutoRegister& AutoRegister, UExtraPPSubsystem* InSubsystem) :
	FSceneViewExtensionBase(AutoRegister), 
	CachedSubsystem(InSubsystem)
{
}

void FExtraPPExtension::SubscribeToPostProcessingPass(EPostProcessingPass PassId, FAfterPassCallbackDelegateArray& InOutPassCallbacks, bool bIsPassEnabled)
{
	//option:
	//MotionBlur,
	//Tonemap,
	//FXAA,
	//VisualizeDepthOfField,
	if (PassId == EPostProcessingPass::FXAA)
	{
		InOutPassCallbacks.Add(FAfterPassCallbackDelegate::CreateRaw(this, &FExtraPPExtension::PassThrough_RenderThread));
	}
}

FScreenPassTexture FExtraPPExtension::PassThrough_RenderThread(FRDGBuilder& GraphBuilder, const FSceneView& View, const FPostProcessMaterialInputs& InOutInputs)
{
	const FScreenPassTexture SceneColor = InOutInputs.Textures[(uint32)EPostProcessMaterialInput::SceneColor];
	if (!(this->EnablePassThrough)) {
		return SceneColor;
	}

	bool bIsCompute = false;

	//View
	const FViewInfo& ViewInfo = static_cast<const FViewInfo&>(View);

	//Desc
	FRDGTextureDesc TextureDesc = SceneColor.Texture->Desc;
	TextureDesc.Reset();
	TextureDesc.Flags = bIsCompute ? ETextureCreateFlags::UAV : ETextureCreateFlags::RenderTargetable;

	//Viewport
	const FScreenPassTextureViewport Viewport(SceneColor);

	//output
	FScreenPassRenderTarget Output;

	//input
	FRDGTextureRef InTexture = SceneColor.Texture;

	if (bIsCompute) 
	{

	}
	else 
	{

		GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Blue, TEXT("1"));
		//PS output
		FScreenPassRenderTarget OutRenderTarget(GraphBuilder.CreateTexture(TextureDesc, TEXT("PSTexture")), ERenderTargetLoadAction::ELoad);

		//Params
		FPassThroughPS::FParameters* PassParameters = GraphBuilder.AllocParameters<FPassThroughPS::FParameters>();
		PassParameters->InTexture = InTexture;
		PassParameters->Sampler = TStaticSamplerState<SF_Point, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI();
		PassParameters->RenderTargets[0] = OutRenderTarget.GetRenderTargetBinding();
		PassParameters->Input = GetScreenPassTextureViewportParameters(Viewport);

		//
		TShaderMapRef<FPassThroughPS> PixelShader(ViewInfo.ShaderMap);

		//Add Pass
		FPixelShaderUtils::AddFullscreenPass(
			GraphBuilder,
			ViewInfo.ShaderMap,
			RDG_EVENT_NAME("PassThrough (PS)"),
			PixelShader,
			PassParameters,
			ViewInfo.ViewRect);

		Output = OutRenderTarget;
	}

	if (Output.IsValid())
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Blue, TEXT("2"));
		return MoveTemp(Output);
	}
	else
	{
		return SceneColor;
	}
}
