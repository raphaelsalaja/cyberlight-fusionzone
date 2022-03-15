// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMExtendedEditor/Private/Graph/Schema/SMTextPropertyGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMTextPropertyGraphSchema() {}
// Cross Module References
	SMEXTENDEDEDITOR_API UClass* Z_Construct_UClass_USMTextPropertyGraphSchema_NoRegister();
	SMEXTENDEDEDITOR_API UClass* Z_Construct_UClass_USMTextPropertyGraphSchema();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMPropertyGraphSchema();
	UPackage* Z_Construct_UPackage__Script_SMExtendedEditor();
// End Cross Module References
	void USMTextPropertyGraphSchema::StaticRegisterNativesUSMTextPropertyGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_USMTextPropertyGraphSchema_NoRegister()
	{
		return USMTextPropertyGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_USMTextPropertyGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMTextPropertyGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMPropertyGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_SMExtendedEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTextPropertyGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Schema/SMTextPropertyGraphSchema.h" },
		{ "ModuleRelativePath", "Private/Graph/Schema/SMTextPropertyGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMTextPropertyGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMTextPropertyGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMTextPropertyGraphSchema_Statics::ClassParams = {
		&USMTextPropertyGraphSchema::StaticClass,
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
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USMTextPropertyGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMTextPropertyGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMTextPropertyGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMTextPropertyGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMTextPropertyGraphSchema, 1517302928);
	template<> SMEXTENDEDEDITOR_API UClass* StaticClass<USMTextPropertyGraphSchema>()
	{
		return USMTextPropertyGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMTextPropertyGraphSchema(Z_Construct_UClass_USMTextPropertyGraphSchema, &USMTextPropertyGraphSchema::StaticClass, TEXT("/Script/SMExtendedEditor"), TEXT("USMTextPropertyGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMTextPropertyGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
