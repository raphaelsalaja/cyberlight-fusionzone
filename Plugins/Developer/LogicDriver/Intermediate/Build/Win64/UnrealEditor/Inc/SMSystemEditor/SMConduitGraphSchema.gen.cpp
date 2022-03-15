// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Schema/SMConduitGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMConduitGraphSchema() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMConduitGraphSchema_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMConduitGraphSchema();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMTransitionGraphSchema();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
// End Cross Module References
	void USMConduitGraphSchema::StaticRegisterNativesUSMConduitGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_USMConduitGraphSchema_NoRegister()
	{
		return USMConduitGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_USMConduitGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMConduitGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMTransitionGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMConduitGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Schema/SMConduitGraphSchema.h" },
		{ "ModuleRelativePath", "Private/Graph/Schema/SMConduitGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMConduitGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMConduitGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMConduitGraphSchema_Statics::ClassParams = {
		&USMConduitGraphSchema::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_USMConduitGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMConduitGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMConduitGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMConduitGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMConduitGraphSchema, 848587117);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMConduitGraphSchema>()
	{
		return USMConduitGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMConduitGraphSchema(Z_Construct_UClass_USMConduitGraphSchema, &USMConduitGraphSchema::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMConduitGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMConduitGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
