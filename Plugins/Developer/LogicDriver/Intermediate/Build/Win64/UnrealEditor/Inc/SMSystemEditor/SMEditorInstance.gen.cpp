// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Construction/SMEditorInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMEditorInstance() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMEditorContext_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMEditorContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMEditorInstance_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMEditorInstance();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstance();
// End Cross Module References
	void USMEditorContext::StaticRegisterNativesUSMEditorContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMEditorContext);
	UClass* Z_Construct_UClass_USMEditorContext_NoRegister()
	{
		return USMEditorContext::StaticClass();
	}
	struct Z_Construct_UClass_USMEditorContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMEditorContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Construction/SMEditorInstance.h" },
		{ "ModuleRelativePath", "Private/Construction/SMEditorInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMEditorContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMEditorContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMEditorContext_Statics::ClassParams = {
		&USMEditorContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMEditorContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMEditorContext()
	{
		if (!Z_Registration_Info_UClass_USMEditorContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMEditorContext.OuterSingleton, Z_Construct_UClass_USMEditorContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMEditorContext.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMEditorContext>()
	{
		return USMEditorContext::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMEditorContext);
	void USMEditorInstance::StaticRegisterNativesUSMEditorInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMEditorInstance);
	UClass* Z_Construct_UClass_USMEditorInstance_NoRegister()
	{
		return USMEditorInstance::StaticClass();
	}
	struct Z_Construct_UClass_USMEditorInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMEditorInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEditorInstance_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "State Machine Instance|Tick State Machine Instance|Logging" },
		{ "HideCategories", "SMInstance" },
		{ "IncludePath", "Construction/SMEditorInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Construction/SMEditorInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMEditorInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMEditorInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMEditorInstance_Statics::ClassParams = {
		&USMEditorInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x049000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USMEditorInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMEditorInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMEditorInstance()
	{
		if (!Z_Registration_Info_UClass_USMEditorInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMEditorInstance.OuterSingleton, Z_Construct_UClass_USMEditorInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMEditorInstance.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMEditorInstance>()
	{
		return USMEditorInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMEditorInstance);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Construction_SMEditorInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Construction_SMEditorInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMEditorContext, USMEditorContext::StaticClass, TEXT("USMEditorContext"), &Z_Registration_Info_UClass_USMEditorContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMEditorContext), 978479708U) },
		{ Z_Construct_UClass_USMEditorInstance, USMEditorInstance::StaticClass, TEXT("USMEditorInstance"), &Z_Registration_Info_UClass_USMEditorInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMEditorInstance), 147745260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Construction_SMEditorInstance_h_2436445454(TEXT("/Script/SMSystemEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Construction_SMEditorInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Construction_SMEditorInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
