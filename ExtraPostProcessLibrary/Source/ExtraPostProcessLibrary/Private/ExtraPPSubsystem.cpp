// Fill out your copyright notice in the Description page of Project Settings.


#include "ExtraPPSubsystem.h"

void UExtraPPSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	PostProcessSceneViewExtension = FSceneViewExtensions::NewExtension<FExtraPPExtension>(this);
}

void UExtraPPSubsystem::Deinitialize()
{
}

void UExtraPPSubsystem::EnablePassThrough(bool IsEnable)
{
	PostProcessSceneViewExtension->EnablePassThrough = IsEnable;
}
