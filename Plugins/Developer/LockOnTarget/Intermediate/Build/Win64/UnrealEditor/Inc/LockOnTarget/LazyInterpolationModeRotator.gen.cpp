// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LockOnTarget/Public/LockOnSubobjects/RotationModes/LazyInterpolationModeRotator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLazyInterpolationModeRotator() {}
// Cross Module References
	LOCKONTARGET_API UClass* Z_Construct_UClass_ULazyInterpolationModeRotator_NoRegister();
	LOCKONTARGET_API UClass* Z_Construct_UClass_ULazyInterpolationModeRotator();
	LOCKONTARGET_API UClass* Z_Construct_UClass_UInterpolationMode();
	UPackage* Z_Construct_UPackage__Script_LockOnTarget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void ULazyInterpolationModeRotator::StaticRegisterNativesULazyInterpolationModeRotator()
	{
	}
	UClass* Z_Construct_UClass_ULazyInterpolationModeRotator_NoRegister()
	{
		return ULazyInterpolationModeRotator::StaticClass();
	}
	struct Z_Construct_UClass_ULazyInterpolationModeRotator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StopRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingAngleRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingAngleRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothRangeRatioClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothRangeRatioClamp;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpolationMode,
		(UObject* (*)())Z_Construct_UPackage__Script_LockOnTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "LockOnTarget" },
		{ "Comment", "/**\n * Experimental Lazy Interpolation Mode.\n */" },
		{ "IncludePath", "LockOnSubobjects/RotationModes/LazyInterpolationModeRotator.h" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/LazyInterpolationModeRotator.h" },
		{ "ToolTip", "Experimental Lazy Interpolation Mode." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_StartRotator_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/**\n\x09 * Angle beyond which interpolation starts.\n\x09 * Should be > StopAngle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/LazyInterpolationModeRotator.h" },
		{ "ToolTip", "Angle beyond which interpolation starts.\nShould be > StopAngle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_StartRotator = { "StartRotator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULazyInterpolationModeRotator, StartRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_StartRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_StartRotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_StopRotator_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/**\n\x09 * Angle reaching which interpolation stops.\n\x09 * Should be < StartAngle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/LazyInterpolationModeRotator.h" },
		{ "ToolTip", "Angle reaching which interpolation stops.\nShould be < StartAngle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_StopRotator = { "StopRotator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULazyInterpolationModeRotator, StopRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_StopRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_StopRotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_SmoothingAngleRange_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/**\n\x09 * Range starts after StopAngle. e.g. if StopAngle = 3.f and SmoothingAngleRange = 4.f then range will be [3.f, 7.f].\n\x09 * If Angle between Forward vector(camera/owner) and Vector to Target = 5.f then Ratio will be (5.f - 3.f) / 4.f = 0.5f.\n\x09 * This ratio will be clamped by SmoothingRangeInterpSpeedSlamping and then multiplied by InterpSpeed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/LazyInterpolationModeRotator.h" },
		{ "ToolTip", "Range starts after StopAngle. e.g. if StopAngle = 3.f and SmoothingAngleRange = 4.f then range will be [3.f, 7.f].\nIf Angle between Forward vector(camera/owner) and Vector to Target = 5.f then Ratio will be (5.f - 3.f) / 4.f = 0.5f.\nThis ratio will be clamped by SmoothingRangeInterpSpeedSlamping and then multiplied by InterpSpeed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_SmoothingAngleRange = { "SmoothingAngleRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULazyInterpolationModeRotator, SmoothingAngleRange), METADATA_PARAMS(Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_SmoothingAngleRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_SmoothingAngleRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_SmoothRangeRatioClamp_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Clamps ratio(read above field) which will be multiplied to InterpSpeed. */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/LazyInterpolationModeRotator.h" },
		{ "ToolTip", "Clamps ratio(read above field) which will be multiplied to InterpSpeed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_SmoothRangeRatioClamp = { "SmoothRangeRatioClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULazyInterpolationModeRotator, SmoothRangeRatioClamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_SmoothRangeRatioClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_SmoothRangeRatioClamp_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/LazyInterpolationModeRotator.h" },
	};
#endif
	void Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((ULazyInterpolationModeRotator*)Obj)->bDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULazyInterpolationModeRotator), &Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_bDebug_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_StartRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_StopRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_SmoothingAngleRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_SmoothRangeRatioClamp,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::NewProp_bDebug,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULazyInterpolationModeRotator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::ClassParams = {
		&ULazyInterpolationModeRotator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::PropPointers),
		0,
		0x043010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULazyInterpolationModeRotator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULazyInterpolationModeRotator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULazyInterpolationModeRotator, 960577305);
	template<> LOCKONTARGET_API UClass* StaticClass<ULazyInterpolationModeRotator>()
	{
		return ULazyInterpolationModeRotator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULazyInterpolationModeRotator(Z_Construct_UClass_ULazyInterpolationModeRotator, &ULazyInterpolationModeRotator::StaticClass, TEXT("/Script/LockOnTarget"), TEXT("ULazyInterpolationModeRotator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULazyInterpolationModeRotator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
