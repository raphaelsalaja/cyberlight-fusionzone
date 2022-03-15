// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMExtendedEditor/Private/Configuration/SMExtendedEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMExtendedEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMExtendedEditorSettings, 2003839842);
	template<> SMEXTENDEDEDITOR_API UClass* StaticClass<USMExtendedEditorSettings>()
	{
		return USMExtendedEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMExtendedEditorSettings(Z_Construct_UClass_USMExtendedEditorSettings, &USMExtendedEditorSettings::StaticClass, TEXT("/Script/SMExtendedEditor"), TEXT("USMExtendedEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMExtendedEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
