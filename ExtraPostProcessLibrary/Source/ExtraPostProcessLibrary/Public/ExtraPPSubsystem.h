// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ExtraPPExtension.h"
#include "ExtraPPSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class EXTRAPOSTPROCESSLIBRARY_API UExtraPPSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:

	// Subsystem Init/Deinit
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	UFUNCTION(BlueprintCallable)
		void EnablePassThrough(bool IsEnable);

private:
	TSharedPtr< class FExtraPPExtension, ESPMode::ThreadSafe > PostProcessSceneViewExtension;
};
