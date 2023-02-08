// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExtraPostProcessLibrary.h"

#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"

#define LOCTEXT_NAMESPACE "FExtraPostProcessLibraryModule"

void FExtraPostProcessLibraryModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FString PluginShaderDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("ExtraPostProcessLibrary"))->GetBaseDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping(TEXT("/ExtraPostProcessLibrary/Shaders"), PluginShaderDir);
	FString UtilsDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("ExtraPostProcessLibrary"))->GetBaseDir(), TEXT("Utils"));
	AddShaderSourceDirectoryMapping(TEXT("/ExtraPostProcessLibrary/Utils"), UtilsDir);
}

void FExtraPostProcessLibraryModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FExtraPostProcessLibraryModule, ExtraPostProcessLibrary)