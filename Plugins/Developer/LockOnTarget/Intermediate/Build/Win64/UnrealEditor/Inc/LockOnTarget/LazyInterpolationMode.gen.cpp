// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LockOnTarget/Public/LockOnSubobjects/RotationModes/LazyInterpolationMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLazyInterpolationMode() {}
// Cross Module References
	LOCKONTARGET_API UClass* Z_Construct_UClass_ULazyInterpolationMode_NoRegister();
	LOCKONTARGET_API UClass* Z_Construct_UClass_ULazyInterpolationMode();
	LOCKONTARGET_API UClass* Z_Construct_UClass_UInterpolationMode();
	UPackage* Z_Construct_UPackage__Script_LockOnTarget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(ULazyInterpolationMode::execCanLazyInterpolate)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_CurrentRotation);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InterpSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanLazyInterpolate_Implementation(Z_Param_Out_NewRotation,Z_Param_Out_CurrentRotation,Z_Param_Out_InterpSpeed);
		P_NATIVE_END;
	}
	static FName NAME_ULazyInterpolationMode_CanLazyInterpolate = FName(TEXT("CanLazyInterpolate"));
	bool ULazyInterpolationMode::CanLazyInterpolate(FRotator const& NewRotation, FRotator const& CurrentRotation, float& InterpSpeed)
	{
		LazyInterpolationMode_eventCanLazyInterpolate_Parms Parms;
		Parms.NewRotation=NewRotation;
		Parms.CurrentRotation=CurrentRotation;
		Parms.InterpSpeed=InterpSpeed;
		ProcessEvent(FindFunctionChecked(NAME_ULazyInterpolationMode_CanLazyInterpolate),&Parms);
		InterpSpeed=Parms.InterpSpeed;
		return !!Parms.ReturnValue;
	}
	void ULazyInterpolationMode::StaticRegisterNativesULazyInterpolationMode()
	{
		UClass* Class = ULazyInterpolationMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanLazyInterpolate", &ULazyInterpolationMode::execCanLazyInterpolate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::NewProp_NewRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LazyInterpolationMode_eventCanLazyInterpolate_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::NewProp_NewRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::NewProp_NewRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::NewProp_CurrentRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::NewProp_CurrentRotation = { "CurrentRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LazyInterpolationMode_eventCanLazyInterpolate_Parms, CurrentRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::NewProp_CurrentRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::NewProp_CurrentRotation_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LazyInterpolationMode_eventCanLazyInterpolate_Parms, InterpSpeed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LazyInterpolationMode_eventCanLazyInterpolate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LazyInterpolationMode_eventCanLazyInterpolate_Parms), &Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::NewProp_NewRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::NewProp_CurrentRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::NewProp_InterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/LazyInterpolationMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULazyInterpolationMode, nullptr, "CanLazyInterpolate", nullptr, nullptr, sizeof(LazyInterpolationMode_eventCanLazyInterpolate_Parms), Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULazyInterpolationMode_NoRegister()
	{
		return ULazyInterpolationMode::StaticClass();
	}
	struct Z_Construct_UClass_ULazyInterpolationMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeginInterpAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeginInterpAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopInterpAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopInterpAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingAngleRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingAngleRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinInterpSpeedRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinInterpSpeedRatio;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisualizeOnControlRotation_MetaData[];
#endif
		static void NewProp_bVisualizeOnControlRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisualizeOnControlRotation;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULazyInterpolationMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpolationMode,
		(UObject* (*)())Z_Construct_UPackage__Script_LockOnTarget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULazyInterpolationMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULazyInterpolationMode_CanLazyInterpolate, "CanLazyInterpolate" }, // 690571263
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULazyInterpolationMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LockOnTarget" },
		{ "Comment", "/**\n * Lazy Interpolation Mode. Intended only for ControlRotation.\n * The main advantage is that the camera doesn't shake in free zone when the captured socket is moving along a sinusoid.\n * \n * Interpolates only if Angle between Target and current rotation is more then BeginInterpAngle.\n * Stop Interpolation when Angle reaches StopInterpAngle.\n * Interpolation Speed \"interpolates\" in SmoothingAngleRange between SmoothRangeRatioClamp values.\n */" },
		{ "IncludePath", "LockOnSubobjects/RotationModes/LazyInterpolationMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/LazyInterpolationMode.h" },
		{ "ToolTip", "Lazy Interpolation Mode. Intended only for ControlRotation.\nThe main advantage is that the camera doesn't shake in free zone when the captured socket is moving along a sinusoid.\n\nInterpolates only if Angle between Target and current rotation is more then BeginInterpAngle.\nStop Interpolation when Angle reaches StopInterpAngle.\nInterpolation Speed \"interpolates\" in SmoothingAngleRange between SmoothRangeRatioClamp values." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_BeginInterpAngle_MetaData[] = {
		{ "Category", "Lazy Interpolation" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09 * Angle beyond which interpolation starts.\n\x09 * Should be > StopInterpAngle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/LazyInterpolationMode.h" },
		{ "ToolTip", "Angle beyond which interpolation starts.\nShould be > StopInterpAngle." },
		{ "UIMax", "180.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_BeginInterpAngle = { "BeginInterpAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULazyInterpolationMode, BeginInterpAngle), METADATA_PARAMS(Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_BeginInterpAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_BeginInterpAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_StopInterpAngle_MetaData[] = {
		{ "Category", "Lazy Interpolation" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09 * Angle reaching which interpolation stops.\n\x09 * Should be < BeginInterpAngle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/LazyInterpolationMode.h" },
		{ "ToolTip", "Angle reaching which interpolation stops.\nShould be < BeginInterpAngle." },
		{ "UIMax", "180.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_StopInterpAngle = { "StopInterpAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULazyInterpolationMode, StopInterpAngle), METADATA_PARAMS(Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_StopInterpAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_StopInterpAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_SmoothingAngleRange_MetaData[] = {
		{ "Category", "Lazy Interpolation" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09 * Range starts after StopInterpAngle. e.g. if StopInterpAngle = 3.f and SmoothingAngleRange = 4.f then range will be [3.f, 7.f].\n\x09 * If Angle between Forward vector(camera/owner) and Vector to Target = 5.f then Ratio will be (5.f - 3.f) / 4.f = 0.5f.\n\x09 * This ratio will be clamped by [MinInterpSpeedRatio, 1.f] and then multiplied by InterpSpeed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/LazyInterpolationMode.h" },
		{ "ToolTip", "Range starts after StopInterpAngle. e.g. if StopInterpAngle = 3.f and SmoothingAngleRange = 4.f then range will be [3.f, 7.f].\nIf Angle between Forward vector(camera/owner) and Vector to Target = 5.f then Ratio will be (5.f - 3.f) / 4.f = 0.5f.\nThis ratio will be clamped by [MinInterpSpeedRatio, 1.f] and then multiplied by InterpSpeed." },
		{ "UIMax", "180.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_SmoothingAngleRange = { "SmoothingAngleRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULazyInterpolationMode, SmoothingAngleRange), METADATA_PARAMS(Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_SmoothingAngleRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_SmoothingAngleRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_MinInterpSpeedRatio_MetaData[] = {
		{ "Category", "Lazy Interpolation" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.050000" },
		{ "Comment", "/** \n\x09 * Minimum interpolation speed ratio. Ratio will be [MinInterpSpeedRatio, 1.f].\n\x09 * The closer the value is to 1.f, the sharper the interpolation will be in SmoothingAngleRange.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/LazyInterpolationMode.h" },
		{ "ToolTip", "Minimum interpolation speed ratio. Ratio will be [MinInterpSpeedRatio, 1.f].\nThe closer the value is to 1.f, the sharper the interpolation will be in SmoothingAngleRange." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.050000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_MinInterpSpeedRatio = { "MinInterpSpeedRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULazyInterpolationMode, MinInterpSpeedRatio), METADATA_PARAMS(Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_MinInterpSpeedRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_MinInterpSpeedRatio_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_bVisualizeOnControlRotation_MetaData[] = {
		{ "Category", "Lazy Interpolation" },
		{ "Comment", "/** Intended only for Control rotation. Not work correctly if Rotation actually clamped by PitchClamp. */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/LazyInterpolationMode.h" },
		{ "ToolTip", "Intended only for Control rotation. Not work correctly if Rotation actually clamped by PitchClamp." },
	};
#endif
	void Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_bVisualizeOnControlRotation_SetBit(void* Obj)
	{
		((ULazyInterpolationMode*)Obj)->bVisualizeOnControlRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_bVisualizeOnControlRotation = { "bVisualizeOnControlRotation", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULazyInterpolationMode), &Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_bVisualizeOnControlRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_bVisualizeOnControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_bVisualizeOnControlRotation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULazyInterpolationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_BeginInterpAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_StopInterpAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_SmoothingAngleRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_MinInterpSpeedRatio,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULazyInterpolationMode_Statics::NewProp_bVisualizeOnControlRotation,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULazyInterpolationMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULazyInterpolationMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULazyInterpolationMode_Statics::ClassParams = {
		&ULazyInterpolationMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULazyInterpolationMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULazyInterpolationMode_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULazyInterpolationMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULazyInterpolationMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULazyInterpolationMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULazyInterpolationMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULazyInterpolationMode, 1765856460);
	template<> LOCKONTARGET_API UClass* StaticClass<ULazyInterpolationMode>()
	{
		return ULazyInterpolationMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULazyInterpolationMode(Z_Construct_UClass_ULazyInterpolationMode, &ULazyInterpolationMode::StaticClass, TEXT("/Script/LockOnTarget"), TEXT("ULazyInterpolationMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULazyInterpolationMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
