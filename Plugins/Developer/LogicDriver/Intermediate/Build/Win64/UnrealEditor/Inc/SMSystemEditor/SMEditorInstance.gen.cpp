// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Construction/SMEditorInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMEditorContext_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMEditorContext, 1231123688);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMEditorContext>()
	{
		return USMEditorContext::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMEditorContext(Z_Construct_UClass_USMEditorContext, &USMEditorContext::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMEditorContext"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMEditorContext);
	void USMEditorInstance::StaticRegisterNativesUSMEditorInstance()
	{
	}
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMEditorInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMEditorInstance, 2914177887);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMEditorInstance>()
	{
		return USMEditorInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMEditorInstance(Z_Construct_UClass_USMEditorInstance, &USMEditorInstance::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMEditorInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMEditorInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
