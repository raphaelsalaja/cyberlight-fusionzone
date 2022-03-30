// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProInstanceToolsPlugin/Private/ProInstanceToolsScatter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProInstanceToolsScatter() {}
// Cross Module References
	PROINSTANCETOOLSPLUGIN_API UEnum* Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceScatterBoxPivotPoint();
	UPackage* Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
	PROINSTANCETOOLSPLUGIN_API UEnum* Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceScatterPlacementType();
	PROINSTANCETOOLSPLUGIN_API UClass* Z_Construct_UClass_AProInstanceToolsScatter_NoRegister();
	PROINSTANCETOOLSPLUGIN_API UClass* Z_Construct_UClass_AProInstanceToolsScatter();
	PROINSTANCETOOLSPLUGIN_API UClass* Z_Construct_UClass_AProInstanceToolsParent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EProInstanceScatterBoxPivotPoint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceScatterBoxPivotPoint, Z_Construct_UPackage__Script_ProInstanceToolsPlugin(), TEXT("EProInstanceScatterBoxPivotPoint"));
		}
		return Singleton;
	}
	template<> PROINSTANCETOOLSPLUGIN_API UEnum* StaticEnum<EProInstanceScatterBoxPivotPoint>()
	{
		return EProInstanceScatterBoxPivotPoint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProInstanceScatterBoxPivotPoint(EProInstanceScatterBoxPivotPoint_StaticEnum, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("EProInstanceScatterBoxPivotPoint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceScatterBoxPivotPoint_Hash() { return 3472676865U; }
	UEnum* Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceScatterBoxPivotPoint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProInstanceScatterBoxPivotPoint"), 0, Get_Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceScatterBoxPivotPoint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ScatterBoxPivotPoint_AtCenter", (int64)ScatterBoxPivotPoint_AtCenter },
				{ "ScatterBoxPivotPoint_AtCorner", (int64)ScatterBoxPivotPoint_AtCorner },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/ProInstanceToolsScatter.h" },
				{ "ScatterBoxPivotPoint_AtCenter.DisplayName", "At Center" },
				{ "ScatterBoxPivotPoint_AtCenter.Name", "ScatterBoxPivotPoint_AtCenter" },
				{ "ScatterBoxPivotPoint_AtCorner.DisplayName", "At Corner" },
				{ "ScatterBoxPivotPoint_AtCorner.Name", "ScatterBoxPivotPoint_AtCorner" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
				nullptr,
				"EProInstanceScatterBoxPivotPoint",
				"EProInstanceScatterBoxPivotPoint",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EProInstanceScatterPlacementType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceScatterPlacementType, Z_Construct_UPackage__Script_ProInstanceToolsPlugin(), TEXT("EProInstanceScatterPlacementType"));
		}
		return Singleton;
	}
	template<> PROINSTANCETOOLSPLUGIN_API UEnum* StaticEnum<EProInstanceScatterPlacementType>()
	{
		return EProInstanceScatterPlacementType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProInstanceScatterPlacementType(EProInstanceScatterPlacementType_StaticEnum, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("EProInstanceScatterPlacementType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceScatterPlacementType_Hash() { return 2788861077U; }
	UEnum* Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceScatterPlacementType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProInstanceScatterPlacementType"), 0, Get_Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceScatterPlacementType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ScatterPlacementType_Box", (int64)ScatterPlacementType_Box },
				{ "ScatterPlacementType_Sphere", (int64)ScatterPlacementType_Sphere },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/ProInstanceToolsScatter.h" },
				{ "ScatterPlacementType_Box.DisplayName", "Box" },
				{ "ScatterPlacementType_Box.Name", "ScatterPlacementType_Box" },
				{ "ScatterPlacementType_Sphere.DisplayName", "Sphere" },
				{ "ScatterPlacementType_Sphere.Name", "ScatterPlacementType_Sphere" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
				nullptr,
				"EProInstanceScatterPlacementType",
				"EProInstanceScatterPlacementType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AProInstanceToolsScatter::StaticRegisterNativesAProInstanceToolsScatter()
	{
	}
	UClass* Z_Construct_UClass_AProInstanceToolsScatter_NoRegister()
	{
		return AProInstanceToolsScatter::StaticClass();
	}
	struct Z_Construct_UClass_AProInstanceToolsScatter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacementType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlacementType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxPivotPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoxPivotPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProInstanceToolsScatter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProInstanceToolsParent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsScatter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProInstanceToolsScatter.h" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsScatter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_NumInstances_MetaData[] = {
		{ "Category", "Pro Instance Scatter" },
		{ "Comment", "/** Number of instances to spawn. */" },
		{ "DisplayName", "Num Instances" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsScatter.h" },
		{ "ToolTip", "Number of instances to spawn." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_NumInstances = { "NumInstances", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsScatter, NumInstances), METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_NumInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_NumInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_PlacementType_MetaData[] = {
		{ "Category", "Pro Instance Scatter" },
		{ "Comment", "/** Whether to use Box or Sphere as a spawn container. */" },
		{ "DisplayName", "Placement Type" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsScatter.h" },
		{ "ToolTip", "Whether to use Box or Sphere as a spawn container." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_PlacementType = { "PlacementType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsScatter, PlacementType), Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceScatterPlacementType, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_PlacementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_PlacementType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_BoxSize_MetaData[] = {
		{ "Category", "Pro Instance Scatter" },
		{ "Comment", "/** Box Size. */" },
		{ "DisplayName", "Box Size" },
		{ "EditCondition", "PlacementType == EProInstanceScatterPlacementType::ScatterPlacementType_Box" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsScatter.h" },
		{ "ToolTip", "Box Size." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_BoxSize = { "BoxSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsScatter, BoxSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_BoxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_BoxSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_BoxExtent_MetaData[] = {
		{ "Category", "Pro Instance Scatter" },
		{ "Comment", "/** Box Extent. */" },
		{ "DisplayName", "Box Extent" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsScatter.h" },
		{ "ToolTip", "Box Extent." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsScatter, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_BoxExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_BoxExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_BoxPivotPoint_MetaData[] = {
		{ "Category", "Pro Instance Scatter" },
		{ "Comment", "/** Box Pivot Point. */" },
		{ "DisplayName", "Box Pivot Point" },
		{ "EditCondition", "PlacementType == EProInstanceScatterPlacementType::ScatterPlacementType_Box" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsScatter.h" },
		{ "ToolTip", "Box Pivot Point." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_BoxPivotPoint = { "BoxPivotPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsScatter, BoxPivotPoint), Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceScatterBoxPivotPoint, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_BoxPivotPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_BoxPivotPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Pro Instance Scatter" },
		{ "Comment", "/** Sphere Radius. */" },
		{ "DisplayName", "Sphere Radius" },
		{ "EditCondition", "PlacementType == EProInstanceScatterPlacementType::ScatterPlacementType_Sphere" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsScatter.h" },
		{ "ToolTip", "Sphere Radius." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsScatter, SphereRadius), METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_SphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_SphereRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProInstanceToolsScatter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_NumInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_PlacementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_BoxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_BoxExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_BoxPivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsScatter_Statics::NewProp_SphereRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProInstanceToolsScatter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProInstanceToolsScatter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProInstanceToolsScatter_Statics::ClassParams = {
		&AProInstanceToolsScatter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProInstanceToolsScatter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsScatter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsScatter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsScatter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProInstanceToolsScatter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProInstanceToolsScatter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProInstanceToolsScatter, 3425033803);
	template<> PROINSTANCETOOLSPLUGIN_API UClass* StaticClass<AProInstanceToolsScatter>()
	{
		return AProInstanceToolsScatter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProInstanceToolsScatter(Z_Construct_UClass_AProInstanceToolsScatter, &AProInstanceToolsScatter::StaticClass, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("AProInstanceToolsScatter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProInstanceToolsScatter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
