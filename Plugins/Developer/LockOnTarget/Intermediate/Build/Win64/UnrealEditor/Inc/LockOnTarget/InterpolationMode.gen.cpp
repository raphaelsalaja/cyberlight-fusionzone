// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LockOnTarget/Public/LockOnSubobjects/RotationModes/InterpolationMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpolationMode() {}
// Cross Module References
	LOCKONTARGET_API UClass* Z_Construct_UClass_UInterpolationMode_NoRegister();
	LOCKONTARGET_API UClass* Z_Construct_UClass_UInterpolationMode();
	LOCKONTARGET_API UClass* Z_Construct_UClass_URotationModeBase();
	UPackage* Z_Construct_UPackage__Script_LockOnTarget();
// End Cross Module References
	void UInterpolationMode::StaticRegisterNativesUInterpolationMode()
	{
	}
	UClass* Z_Construct_UClass_UInterpolationMode_NoRegister()
	{
		return UInterpolationMode::StaticClass();
	}
	struct Z_Construct_UClass_UInterpolationMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpolationMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URotationModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LockOnTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpolationMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LockOnTarget" },
		{ "Comment", "/**\n * Interpolation Rotation Mode.\n * Will return interpolated rotation.\n */" },
		{ "IncludePath", "LockOnSubobjects/RotationModes/InterpolationMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/InterpolationMode.h" },
		{ "ToolTip", "Interpolation Rotation Mode.\nWill return interpolated rotation." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpolationMode_Statics::NewProp_InterpolationSpeed_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/InterpolationMode.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpolationMode_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpolationMode, InterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UInterpolationMode_Statics::NewProp_InterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpolationMode_Statics::NewProp_InterpolationSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpolationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpolationMode_Statics::NewProp_InterpolationSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpolationMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpolationMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpolationMode_Statics::ClassParams = {
		&UInterpolationMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpolationMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpolationMode_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpolationMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpolationMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpolationMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpolationMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpolationMode, 3752713252);
	template<> LOCKONTARGET_API UClass* StaticClass<UInterpolationMode>()
	{
		return UInterpolationMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpolationMode(Z_Construct_UClass_UInterpolationMode, &UInterpolationMode::StaticClass, TEXT("/Script/LockOnTarget"), TEXT("UInterpolationMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpolationMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
