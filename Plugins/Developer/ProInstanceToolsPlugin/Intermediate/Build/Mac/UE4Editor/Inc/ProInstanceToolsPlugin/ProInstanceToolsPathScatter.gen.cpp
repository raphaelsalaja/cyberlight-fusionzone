// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProInstanceToolsPlugin/Private/ProInstanceToolsPathScatter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProInstanceToolsPathScatter() {}
// Cross Module References
	PROINSTANCETOOLSPLUGIN_API UClass* Z_Construct_UClass_AProInstanceToolsPathScatter_NoRegister();
	PROINSTANCETOOLSPLUGIN_API UClass* Z_Construct_UClass_AProInstanceToolsPathScatter();
	PROINSTANCETOOLSPLUGIN_API UClass* Z_Construct_UClass_AProInstanceToolsParent();
	UPackage* Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	void AProInstanceToolsPathScatter::StaticRegisterNativesAProInstanceToolsPathScatter()
	{
	}
	UClass* Z_Construct_UClass_AProInstanceToolsPathScatter_NoRegister()
	{
		return AProInstanceToolsPathScatter::StaticClass();
	}
	struct Z_Construct_UClass_AProInstanceToolsPathScatter_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSplineScale_MetaData[];
#endif
		static void NewProp_bUseSplineScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSplineScale;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProInstanceToolsParent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProInstanceToolsPathScatter.h" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsPathScatter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "Category", "Pro Instance Path Scatter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsPathScatter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsPathScatter, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_SplineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_NumInstances_MetaData[] = {
		{ "Category", "Pro Instance Path Scatter" },
		{ "Comment", "/** Number of instances to spawn. */" },
		{ "DisplayName", "Num Instances" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsPathScatter.h" },
		{ "ToolTip", "Number of instances to spawn." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_NumInstances = { "NumInstances", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsPathScatter, NumInstances), METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_NumInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_NumInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bUseSplineScale_MetaData[] = {
		{ "Category", "Pro Instance Path Scatter" },
		{ "Comment", "/** Whether to use spline scale for instance placement. */" },
		{ "DisplayName", "Use Spline Scale" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsPathScatter.h" },
		{ "ToolTip", "Whether to use spline scale for instance placement." },
	};
#endif
	void Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bUseSplineScale_SetBit(void* Obj)
	{
		((AProInstanceToolsPathScatter*)Obj)->bUseSplineScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bUseSplineScale = { "bUseSplineScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProInstanceToolsPathScatter), &Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bUseSplineScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bUseSplineScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bUseSplineScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bFollowSplineRotation_MetaData[] = {
		{ "Category", "Pro Instance Path Scatter" },
		{ "Comment", "/** Whether to have initial instance rotation by a spline rotation. */" },
		{ "DisplayName", "Follow Spline Rotation" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsPathScatter.h" },
		{ "ToolTip", "Whether to have initial instance rotation by a spline rotation." },
	};
#endif
	void Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bFollowSplineRotation_SetBit(void* Obj)
	{
		((AProInstanceToolsPathScatter*)Obj)->bFollowSplineRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bFollowSplineRotation = { "bFollowSplineRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProInstanceToolsPathScatter), &Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bFollowSplineRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bFollowSplineRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bFollowSplineRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bClosedSpline_MetaData[] = {
		{ "Category", "Pro Instance Path Scatter" },
		{ "Comment", "/** Closed Spline. */" },
		{ "DisplayName", "Closed Spline" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsPathScatter.h" },
		{ "ToolTip", "Closed Spline." },
	};
#endif
	void Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bClosedSpline_SetBit(void* Obj)
	{
		((AProInstanceToolsPathScatter*)Obj)->bClosedSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bClosedSpline = { "bClosedSpline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProInstanceToolsPathScatter), &Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bClosedSpline_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bClosedSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bClosedSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_CurrentDistance_MetaData[] = {
		{ "Category", "Pro Instance Path Scatter" },
		{ "DisplayName", "Current Distance" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsPathScatter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_CurrentDistance = { "CurrentDistance", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsPathScatter, CurrentDistance), METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_CurrentDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_CurrentDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_SplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_NumInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bUseSplineScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bFollowSplineRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_bClosedSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::NewProp_CurrentDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProInstanceToolsPathScatter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::ClassParams = {
		&AProInstanceToolsPathScatter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProInstanceToolsPathScatter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProInstanceToolsPathScatter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProInstanceToolsPathScatter, 1961909929);
	template<> PROINSTANCETOOLSPLUGIN_API UClass* StaticClass<AProInstanceToolsPathScatter>()
	{
		return AProInstanceToolsPathScatter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProInstanceToolsPathScatter(Z_Construct_UClass_AProInstanceToolsPathScatter, &AProInstanceToolsPathScatter::StaticClass, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("AProInstanceToolsPathScatter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProInstanceToolsPathScatter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
