// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProInstanceToolsPlugin/Private/ProInstanceToolsPath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProInstanceToolsPath() {}
// Cross Module References
	PROINSTANCETOOLSPLUGIN_API UEnum* Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceToolsPathPlacementType();
	UPackage* Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
	PROINSTANCETOOLSPLUGIN_API UClass* Z_Construct_UClass_AProInstanceToolsPath_NoRegister();
	PROINSTANCETOOLSPLUGIN_API UClass* Z_Construct_UClass_AProInstanceToolsPath();
	PROINSTANCETOOLSPLUGIN_API UClass* Z_Construct_UClass_AProInstanceToolsParent();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	static UEnum* EProInstanceToolsPathPlacementType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceToolsPathPlacementType, Z_Construct_UPackage__Script_ProInstanceToolsPlugin(), TEXT("EProInstanceToolsPathPlacementType"));
		}
		return Singleton;
	}
	template<> PROINSTANCETOOLSPLUGIN_API UEnum* StaticEnum<EProInstanceToolsPathPlacementType>()
	{
		return EProInstanceToolsPathPlacementType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProInstanceToolsPathPlacementType(EProInstanceToolsPathPlacementType_StaticEnum, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("EProInstanceToolsPathPlacementType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceToolsPathPlacementType_Hash() { return 3138110580U; }
	UEnum* Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceToolsPathPlacementType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProInstanceToolsPathPlacementType"), 0, Get_Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceToolsPathPlacementType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PathPlacementType_Distance", (int64)PathPlacementType_Distance },
				{ "PathPlacementType_SplinePoint", (int64)PathPlacementType_SplinePoint },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/ProInstanceToolsPath.h" },
				{ "PathPlacementType_Distance.DisplayName", "Spacing" },
				{ "PathPlacementType_Distance.Name", "PathPlacementType_Distance" },
				{ "PathPlacementType_SplinePoint.DisplayName", "Spline Point" },
				{ "PathPlacementType_SplinePoint.Name", "PathPlacementType_SplinePoint" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
				nullptr,
				"EProInstanceToolsPathPlacementType",
				"EProInstanceToolsPathPlacementType",
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
	void AProInstanceToolsPath::StaticRegisterNativesAProInstanceToolsPath()
	{
	}
	UClass* Z_Construct_UClass_AProInstanceToolsPath_NoRegister()
	{
		return AProInstanceToolsPath::StaticClass();
	}
	struct Z_Construct_UClass_AProInstanceToolsPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacementType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlacementType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInstanceLength_MetaData[];
#endif
		static void NewProp_bUseInstanceLength_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInstanceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFollowSplineRotation_MetaData[];
#endif
		static void NewProp_bFollowSplineRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollowSplineRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClosedSpline_MetaData[];
#endif
		static void NewProp_bClosedSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClosedSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInstanceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentInstanceLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProInstanceToolsPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProInstanceToolsParent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsPath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProInstanceToolsPath.h" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsPath.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "Category", "Pro Instance Path" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsPath.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsPath, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_SplineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_PlacementType_MetaData[] = {
		{ "Category", "Pro Instance Path" },
		{ "Comment", "/** Whether to set instance location by arbitrary Spacing or by a Spline Point. */" },
		{ "DisplayName", "Placement Type" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsPath.h" },
		{ "ToolTip", "Whether to set instance location by arbitrary Spacing or by a Spline Point." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_PlacementType = { "PlacementType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsPath, PlacementType), Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceToolsPathPlacementType, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_PlacementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_PlacementType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_Spacing_MetaData[] = {
		{ "Category", "Pro Instance Path" },
		{ "Comment", "/** Distance between instances by a spline. */" },
		{ "DisplayName", "Spacing" },
		{ "EditCondition", "PlacementType == EProInstanceToolsPathPlacementType::PathPlacementType_Distance" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsPath.h" },
		{ "ToolTip", "Distance between instances by a spline." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsPath, Spacing), METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_Spacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_Spacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_MaxInstances_MetaData[] = {
		{ "Category", "Pro Instance Path" },
		{ "Comment", "/** Maximum number of instances to spawn. */" },
		{ "DisplayName", "Max Instances" },
		{ "EditCondition", "PlacementType == EProInstanceToolsPathPlacementType::PathPlacementType_Distance" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsPath.h" },
		{ "ToolTip", "Maximum number of instances to spawn." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_MaxInstances = { "MaxInstances", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsPath, MaxInstances), METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_MaxInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_MaxInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bUseInstanceLength_MetaData[] = {
		{ "Category", "Pro Instance Path" },
		{ "Comment", "/** Whether to use length of an instance summed up with Spacing. */" },
		{ "DisplayName", "Use Instance Length" },
		{ "EditCondition", "PlacementType == EProInstanceToolsPathPlacementType::PathPlacementType_Distance" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsPath.h" },
		{ "ToolTip", "Whether to use length of an instance summed up with Spacing." },
	};
#endif
	void Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bUseInstanceLength_SetBit(void* Obj)
	{
		((AProInstanceToolsPath*)Obj)->bUseInstanceLength = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bUseInstanceLength = { "bUseInstanceLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProInstanceToolsPath), &Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bUseInstanceLength_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bUseInstanceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bUseInstanceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bFollowSplineRotation_MetaData[] = {
		{ "Category", "Pro Instance Path" },
		{ "Comment", "/** Whether to have initial instance rotation by a spline rotation. */" },
		{ "DisplayName", "Follow Spline Rotation" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsPath.h" },
		{ "ToolTip", "Whether to have initial instance rotation by a spline rotation." },
	};
#endif
	void Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bFollowSplineRotation_SetBit(void* Obj)
	{
		((AProInstanceToolsPath*)Obj)->bFollowSplineRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bFollowSplineRotation = { "bFollowSplineRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProInstanceToolsPath), &Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bFollowSplineRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bFollowSplineRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bFollowSplineRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bClosedSpline_MetaData[] = {
		{ "Category", "Pro Instance Path" },
		{ "Comment", "/** Closed Spline. */" },
		{ "DisplayName", "Closed Spline" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsPath.h" },
		{ "ToolTip", "Closed Spline." },
	};
#endif
	void Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bClosedSpline_SetBit(void* Obj)
	{
		((AProInstanceToolsPath*)Obj)->bClosedSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bClosedSpline = { "bClosedSpline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProInstanceToolsPath), &Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bClosedSpline_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bClosedSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bClosedSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_CurrentDistance_MetaData[] = {
		{ "Category", "Pro Instance Path" },
		{ "DisplayName", "Current Distance" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_CurrentDistance = { "CurrentDistance", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsPath, CurrentDistance), METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_CurrentDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_CurrentDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_CurrentInstanceLength_MetaData[] = {
		{ "Category", "Pro Instance Path" },
		{ "DisplayName", "Current Instance Length" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_CurrentInstanceLength = { "CurrentInstanceLength", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsPath, CurrentInstanceLength), METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_CurrentInstanceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_CurrentInstanceLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProInstanceToolsPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_SplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_PlacementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_Spacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_MaxInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bUseInstanceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bFollowSplineRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_bClosedSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_CurrentDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsPath_Statics::NewProp_CurrentInstanceLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProInstanceToolsPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProInstanceToolsPath>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProInstanceToolsPath_Statics::ClassParams = {
		&AProInstanceToolsPath::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProInstanceToolsPath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPath_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsPath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProInstanceToolsPath()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProInstanceToolsPath_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProInstanceToolsPath, 2373881259);
	template<> PROINSTANCETOOLSPLUGIN_API UClass* StaticClass<AProInstanceToolsPath>()
	{
		return AProInstanceToolsPath::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProInstanceToolsPath(Z_Construct_UClass_AProInstanceToolsPath, &AProInstanceToolsPath::StaticClass, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("AProInstanceToolsPath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProInstanceToolsPath);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
