// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMExtendedEditor/Private/Configuration/SMExtendedEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMExtendedEditorSettings() {}
// Cross Module References
	SMEXTENDEDEDITOR_API UClass* Z_Construct_UClass_USMExtendedEditorSettings_NoRegister();
	SMEXTENDEDEDITOR_API UClass* Z_Construct_UClass_USMExtendedEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SMExtendedEditor();
// End Cross Module References
	void USMExtendedEditorSettings::StaticRegisterNativesUSMExtendedEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMExtendedEditorSettings);
	UClass* Z_Construct_UClass_USMExtendedEditorSettings_NoRegister()
	{
		return USMExtendedEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_USMExtendedEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMExtendedEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SMExtendedEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMExtendedEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Configuration/SMExtendedEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Configuration/SMExtendedEditorSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMExtendedEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMExtendedEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMExtendedEditorSettings_Statics::ClassParams = {
		&USMExtendedEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMExtendedEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMExtendedEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMExtendedEditorSettings()
	{
		if (!Z_Registration_Info_UClass_USMExtendedEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMExtendedEditorSettings.OuterSingleton, Z_Construct_UClass_USMExtendedEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMExtendedEditorSettings.OuterSingleton;
	}
	template<> SMEXTENDEDEDITOR_API UClass* StaticClass<USMExtendedEditorSettings>()
	{
		return USMExtendedEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMExtendedEditorSettings);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Configuration_SMExtendedEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Configuration_SMExtendedEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMExtendedEditorSettings, USMExtendedEditorSettings::StaticClass, TEXT("USMExtendedEditorSettings"), &Z_Registration_Info_UClass_USMExtendedEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMExtendedEditorSettings), 2270505876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Configuration_SMExtendedEditorSettings_h_4214644033(TEXT("/Script/SMExtendedEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Configuration_SMExtendedEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMExtendedEditor_Private_Configuration_SMExtendedEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
