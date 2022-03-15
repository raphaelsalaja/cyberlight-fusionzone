// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Schema/SMIntermediateGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMIntermediateGraphSchema() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMIntermediateGraphSchema_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMIntermediateGraphSchema();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Schema();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
// End Cross Module References
	void USMIntermediateGraphSchema::StaticRegisterNativesUSMIntermediateGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_USMIntermediateGraphSchema_NoRegister()
	{
		return USMIntermediateGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_USMIntermediateGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMIntermediateGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2Schema,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMIntermediateGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Schema/SMIntermediateGraphSchema.h" },
		{ "ModuleRelativePath", "Private/Graph/Schema/SMIntermediateGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMIntermediateGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMIntermediateGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMIntermediateGraphSchema_Statics::ClassParams = {
		&USMIntermediateGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USMIntermediateGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMIntermediateGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMIntermediateGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMIntermediateGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMIntermediateGraphSchema, 626332271);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMIntermediateGraphSchema>()
	{
		return USMIntermediateGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMIntermediateGraphSchema(Z_Construct_UClass_USMIntermediateGraphSchema, &USMIntermediateGraphSchema::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMIntermediateGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMIntermediateGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
