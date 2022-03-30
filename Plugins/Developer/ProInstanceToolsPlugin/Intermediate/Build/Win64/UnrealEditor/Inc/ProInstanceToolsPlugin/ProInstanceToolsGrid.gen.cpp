// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProInstanceToolsPlugin/Private/ProInstanceToolsGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProInstanceToolsGrid() {}
// Cross Module References
	PROINSTANCETOOLSPLUGIN_API UClass* Z_Construct_UClass_AProInstanceToolsGrid_NoRegister();
	PROINSTANCETOOLSPLUGIN_API UClass* Z_Construct_UClass_AProInstanceToolsGrid();
	PROINSTANCETOOLSPLUGIN_API UClass* Z_Construct_UClass_AProInstanceToolsParent();
	UPackage* Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AProInstanceToolsGrid::StaticRegisterNativesAProInstanceToolsGrid()
	{
	}
	UClass* Z_Construct_UClass_AProInstanceToolsGrid_NoRegister()
	{
		return AProInstanceToolsGrid::StaticClass();
	}
	struct Z_Construct_UClass_AProInstanceToolsGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInstances_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NumInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spacing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProInstanceToolsGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProInstanceToolsParent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProInstanceToolsGrid.h" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsGrid.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsGrid_Statics::NewProp_NumInstances_MetaData[] = {
		{ "Category", "Pro Instance Grid" },
		{ "Comment", "/** Number of instances to spawn in a 3D grid pattern. */" },
		{ "DisplayName", "Num Instances" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsGrid.h" },
		{ "ToolTip", "Number of instances to spawn in a 3D grid pattern." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProInstanceToolsGrid_Statics::NewProp_NumInstances = { "NumInstances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsGrid, NumInstances), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsGrid_Statics::NewProp_NumInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsGrid_Statics::NewProp_NumInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsGrid_Statics::NewProp_Spacing_MetaData[] = {
		{ "Category", "Pro Instance Grid" },
		{ "Comment", "/** Distance between instances in a 3D grid pattern. */" },
		{ "DisplayName", "Spacing" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsGrid.h" },
		{ "ToolTip", "Distance between instances in a 3D grid pattern." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProInstanceToolsGrid_Statics::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsGrid, Spacing), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsGrid_Statics::NewProp_Spacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsGrid_Statics::NewProp_Spacing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProInstanceToolsGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsGrid_Statics::NewProp_NumInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsGrid_Statics::NewProp_Spacing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProInstanceToolsGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProInstanceToolsGrid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProInstanceToolsGrid_Statics::ClassParams = {
		&AProInstanceToolsGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProInstanceToolsGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsGrid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProInstanceToolsGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProInstanceToolsGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProInstanceToolsGrid, 194698094);
	template<> PROINSTANCETOOLSPLUGIN_API UClass* StaticClass<AProInstanceToolsGrid>()
	{
		return AProInstanceToolsGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProInstanceToolsGrid(Z_Construct_UClass_AProInstanceToolsGrid, &AProInstanceToolsGrid::StaticClass, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("AProInstanceToolsGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProInstanceToolsGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
