// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExtraPostProcessLibrary/Public/ExtraPPSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExtraPPSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	EXTRAPOSTPROCESSLIBRARY_API UClass* Z_Construct_UClass_UExtraPPSubsystem();
	EXTRAPOSTPROCESSLIBRARY_API UClass* Z_Construct_UClass_UExtraPPSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ExtraPostProcessLibrary();
// End Cross Module References
	DEFINE_FUNCTION(UExtraPPSubsystem::execEnablePassThrough)
	{
		P_GET_UBOOL(Z_Param_IsEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnablePassThrough(Z_Param_IsEnable);
		P_NATIVE_END;
	}
	void UExtraPPSubsystem::StaticRegisterNativesUExtraPPSubsystem()
	{
		UClass* Class = UExtraPPSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnablePassThrough", &UExtraPPSubsystem::execEnablePassThrough },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExtraPPSubsystem_EnablePassThrough_Statics
	{
		struct ExtraPPSubsystem_eventEnablePassThrough_Parms
		{
			bool IsEnable;
		};
		static void NewProp_IsEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UExtraPPSubsystem_EnablePassThrough_Statics::NewProp_IsEnable_SetBit(void* Obj)
	{
		((ExtraPPSubsystem_eventEnablePassThrough_Parms*)Obj)->IsEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExtraPPSubsystem_EnablePassThrough_Statics::NewProp_IsEnable = { "IsEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ExtraPPSubsystem_eventEnablePassThrough_Parms), &Z_Construct_UFunction_UExtraPPSubsystem_EnablePassThrough_Statics::NewProp_IsEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExtraPPSubsystem_EnablePassThrough_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExtraPPSubsystem_EnablePassThrough_Statics::NewProp_IsEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExtraPPSubsystem_EnablePassThrough_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExtraPPSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExtraPPSubsystem_EnablePassThrough_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExtraPPSubsystem, nullptr, "EnablePassThrough", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExtraPPSubsystem_EnablePassThrough_Statics::ExtraPPSubsystem_eventEnablePassThrough_Parms), Z_Construct_UFunction_UExtraPPSubsystem_EnablePassThrough_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExtraPPSubsystem_EnablePassThrough_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExtraPPSubsystem_EnablePassThrough_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExtraPPSubsystem_EnablePassThrough_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExtraPPSubsystem_EnablePassThrough()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExtraPPSubsystem_EnablePassThrough_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExtraPPSubsystem);
	UClass* Z_Construct_UClass_UExtraPPSubsystem_NoRegister()
	{
		return UExtraPPSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UExtraPPSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExtraPPSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ExtraPostProcessLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExtraPPSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExtraPPSubsystem_EnablePassThrough, "EnablePassThrough" }, // 4057102730
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtraPPSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ExtraPPSubsystem.h" },
		{ "ModuleRelativePath", "Public/ExtraPPSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExtraPPSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExtraPPSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExtraPPSubsystem_Statics::ClassParams = {
		&UExtraPPSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExtraPPSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExtraPPSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExtraPPSubsystem()
	{
		if (!Z_Registration_Info_UClass_UExtraPPSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExtraPPSubsystem.OuterSingleton, Z_Construct_UClass_UExtraPPSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExtraPPSubsystem.OuterSingleton;
	}
	template<> EXTRAPOSTPROCESSLIBRARY_API UClass* StaticClass<UExtraPPSubsystem>()
	{
		return UExtraPPSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExtraPPSubsystem);
	UExtraPPSubsystem::~UExtraPPSubsystem() {}
	struct Z_CompiledInDeferFile_FID_PP_Project_Plugins_ExtraPostProcessLibrary_Source_ExtraPostProcessLibrary_Public_ExtraPPSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Project_Plugins_ExtraPostProcessLibrary_Source_ExtraPostProcessLibrary_Public_ExtraPPSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExtraPPSubsystem, UExtraPPSubsystem::StaticClass, TEXT("UExtraPPSubsystem"), &Z_Registration_Info_UClass_UExtraPPSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExtraPPSubsystem), 1675927341U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Project_Plugins_ExtraPostProcessLibrary_Source_ExtraPostProcessLibrary_Public_ExtraPPSubsystem_h_823124812(TEXT("/Script/ExtraPostProcessLibrary"),
		Z_CompiledInDeferFile_FID_PP_Project_Plugins_ExtraPostProcessLibrary_Source_ExtraPostProcessLibrary_Public_ExtraPPSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Project_Plugins_ExtraPostProcessLibrary_Source_ExtraPostProcessLibrary_Public_ExtraPPSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
