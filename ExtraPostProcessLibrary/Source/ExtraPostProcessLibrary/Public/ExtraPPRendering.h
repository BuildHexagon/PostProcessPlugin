// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

//
#include "GlobalShader.h"
#include "ShaderParameterStruct.h"
#include "ScreenPass.h"
//

/**
 * 
 */
class EXTRAPOSTPROCESSLIBRARY_API ExtraPPRendering
{
public:
	ExtraPPRendering();
	~ExtraPPRendering();
};

class FPassThroughPS : public FGlobalShader {
	DECLARE_GLOBAL_SHADER(FPassThroughPS);
	SHADER_USE_PARAMETER_STRUCT(FPassThroughPS, FGlobalShader);

	BEGIN_SHADER_PARAMETER_STRUCT(FParameters, )
		SHADER_PARAMETER_STRUCT(FScreenPassTextureViewportParameters, Input)
		SHADER_PARAMETER_SAMPLER(SamplerState, Sampler)
		SHADER_PARAMETER_RDG_TEXTURE(Texture2D, InTexture)
		RENDER_TARGET_BINDING_SLOTS()
	END_SHADER_PARAMETER_STRUCT()
};