// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "SceneViewExtension.h"
#include "ExtraPPSubsystem.h"

class UExtraPPSubsystem;

/**
 * 
 */
class FExtraPPExtension : public FSceneViewExtensionBase
{
public:
    FExtraPPExtension(const FAutoRegister& AutoRegister, UExtraPPSubsystem* InSubsystem);
    virtual void SetupViewFamily(FSceneViewFamily& InViewFamily) override {};
    virtual void SetupView(FSceneViewFamily& InViewFamily, FSceneView& InView) override {};
    virtual void BeginRenderViewFamily(FSceneViewFamily& InViewFamily) override {};
    virtual void PreRenderViewFamily_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneViewFamily& InViewFamily) override {};
    virtual void PreRenderView_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneView& InView) override {};
    //
    virtual void SubscribeToPostProcessingPass(EPostProcessingPass PassId, FAfterPassCallbackDelegateArray& InOutPassCallbacks, bool bIsPassEnabled) override;
    //
    //passes
    FScreenPassTexture PassThrough_RenderThread(FRDGBuilder& GraphBuilder, const FSceneView& View, const FPostProcessMaterialInputs& InOutInputs);

private:
    UExtraPPSubsystem* CachedSubsystem;

public:
    bool EnablePassThrough = false;
};
