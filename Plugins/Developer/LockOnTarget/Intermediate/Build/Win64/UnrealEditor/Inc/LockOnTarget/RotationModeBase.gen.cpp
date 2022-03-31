// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LockOnTarget/Public/LockOnSubobjects/RotationModes/RotationModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotationModeBase() {}
// Cross Module References
	LOCKONTARGET_API UClass* Z_Construct_UClass_URotationModeBase_NoRegister();
	LOCKONTARGET_API UClass* Z_Construct_UClass_URotationModeBase();
	LOCKONTARGET_API UClass* Z_Construct_UClass_ULockOnSubobjectBase();
	UPackage* Z_Construct_UPackage__Script_LockOnTarget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(URotationModeBase::execAddOffsetToRotation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOffsetToRotation(Z_Param_Out_Rotator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URotationModeBase::execGetClampedRotationToTarget)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocationFrom);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocationTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetClampedRotationToTarget(Z_Param_Out_LocationFrom,Z_Param_Out_LocationTo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URotationModeBase::execGetRotationToTarget)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocationFrom);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocationTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetRotationToTarget(Z_Param_Out_LocationFrom,Z_Param_Out_LocationTo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URotationModeBase::execSetIsEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URotationModeBase::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URotationModeBase::execGetRotation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_CurrentRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InstigatorLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetRotation_Implementation(Z_Param_Out_CurrentRotation,Z_Param_Out_InstigatorLocation,Z_Param_Out_TargetLocation,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	static FName NAME_URotationModeBase_GetRotation = FName(TEXT("GetRotation"));
	FRotator URotationModeBase::GetRotation(FRotator const& CurrentRotation, FVector const& InstigatorLocation, FVector const& TargetLocation, float DeltaTime)
	{
		RotationModeBase_eventGetRotation_Parms Parms;
		Parms.CurrentRotation=CurrentRotation;
		Parms.InstigatorLocation=InstigatorLocation;
		Parms.TargetLocation=TargetLocation;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_URotationModeBase_GetRotation),&Parms);
		return Parms.ReturnValue;
	}
	void URotationModeBase::StaticRegisterNativesURotationModeBase()
	{
		UClass* Class = URotationModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOffsetToRotation", &URotationModeBase::execAddOffsetToRotation },
			{ "GetClampedRotationToTarget", &URotationModeBase::execGetClampedRotationToTarget },
			{ "GetRotation", &URotationModeBase::execGetRotation },
			{ "GetRotationToTarget", &URotationModeBase::execGetRotationToTarget },
			{ "IsEnabled", &URotationModeBase::execIsEnabled },
			{ "SetIsEnabled", &URotationModeBase::execSetIsEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URotationModeBase_AddOffsetToRotation_Statics
	{
		struct RotationModeBase_eventAddOffsetToRotation_Parms
		{
			FRotator Rotator;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotationModeBase_AddOffsetToRotation_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RotationModeBase_eventAddOffsetToRotation_Parms, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotationModeBase_AddOffsetToRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationModeBase_AddOffsetToRotation_Statics::NewProp_Rotator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationModeBase_AddOffsetToRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnTarget|Rotation Mode" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/RotationModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotationModeBase_AddOffsetToRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URotationModeBase, nullptr, "AddOffsetToRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_URotationModeBase_AddOffsetToRotation_Statics::RotationModeBase_eventAddOffsetToRotation_Parms), Z_Construct_UFunction_URotationModeBase_AddOffsetToRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_AddOffsetToRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URotationModeBase_AddOffsetToRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_AddOffsetToRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URotationModeBase_AddOffsetToRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotationModeBase_AddOffsetToRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics
	{
		struct RotationModeBase_eventGetClampedRotationToTarget_Parms
		{
			FVector LocationFrom;
			FVector LocationTo;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationFrom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationFrom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationTo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationTo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::NewProp_LocationFrom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::NewProp_LocationFrom = { "LocationFrom", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RotationModeBase_eventGetClampedRotationToTarget_Parms, LocationFrom), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::NewProp_LocationFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::NewProp_LocationFrom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::NewProp_LocationTo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::NewProp_LocationTo = { "LocationTo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RotationModeBase_eventGetClampedRotationToTarget_Parms, LocationTo), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::NewProp_LocationTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::NewProp_LocationTo_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RotationModeBase_eventGetClampedRotationToTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::NewProp_LocationFrom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::NewProp_LocationTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnTarget|Rotation Mode" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/RotationModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URotationModeBase, nullptr, "GetClampedRotationToTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::RotationModeBase_eventGetClampedRotationToTarget_Parms), Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URotationModeBase_GetRotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstigatorLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_CurrentRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_CurrentRotation = { "CurrentRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RotationModeBase_eventGetRotation_Parms, CurrentRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_CurrentRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_CurrentRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_InstigatorLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_InstigatorLocation = { "InstigatorLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RotationModeBase_eventGetRotation_Parms, InstigatorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_InstigatorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_InstigatorLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RotationModeBase_eventGetRotation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_TargetLocation_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RotationModeBase_eventGetRotation_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RotationModeBase_eventGetRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_CurrentRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_InstigatorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_TargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Get rotation for LockOnComponent's Control/Owner rotation.\n\x09 * \n\x09 * @param CurrentRotation - Current control/owner's rotation.\n\x09 * @param InstigatorLocation - LockOnComponent's camera/owner location.\n\x09 * @param TargetLocation - Captured location of Target's socket with world offset.\n\x09 * @param DeltaTime - WorldDeltaTime.\n\x09 * @return - Rotation to be applied to Control/Owner rotation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/RotationModeBase.h" },
		{ "ToolTip", "Get rotation for LockOnComponent's Control/Owner rotation.\n\n@param CurrentRotation - Current control/owner's rotation.\n@param InstigatorLocation - LockOnComponent's camera/owner location.\n@param TargetLocation - Captured location of Target's socket with world offset.\n@param DeltaTime - WorldDeltaTime.\n@return - Rotation to be applied to Control/Owner rotation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URotationModeBase, nullptr, "GetRotation", nullptr, nullptr, sizeof(RotationModeBase_eventGetRotation_Parms), Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URotationModeBase_GetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotationModeBase_GetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics
	{
		struct RotationModeBase_eventGetRotationToTarget_Parms
		{
			FVector LocationFrom;
			FVector LocationTo;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationFrom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationFrom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationTo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationTo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::NewProp_LocationFrom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::NewProp_LocationFrom = { "LocationFrom", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RotationModeBase_eventGetRotationToTarget_Parms, LocationFrom), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::NewProp_LocationFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::NewProp_LocationFrom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::NewProp_LocationTo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::NewProp_LocationTo = { "LocationTo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RotationModeBase_eventGetRotationToTarget_Parms, LocationTo), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::NewProp_LocationTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::NewProp_LocationTo_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RotationModeBase_eventGetRotationToTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::NewProp_LocationFrom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::NewProp_LocationTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnTarget|Rotation Mode" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/RotationModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URotationModeBase, nullptr, "GetRotationToTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::RotationModeBase_eventGetRotationToTarget_Parms), Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URotationModeBase_GetRotationToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotationModeBase_GetRotationToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URotationModeBase_IsEnabled_Statics
	{
		struct RotationModeBase_eventIsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URotationModeBase_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RotationModeBase_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URotationModeBase_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RotationModeBase_eventIsEnabled_Parms), &Z_Construct_UFunction_URotationModeBase_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotationModeBase_IsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationModeBase_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationModeBase_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnTarget|Rotation Mode" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/RotationModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotationModeBase_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URotationModeBase, nullptr, "IsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_URotationModeBase_IsEnabled_Statics::RotationModeBase_eventIsEnabled_Parms), Z_Construct_UFunction_URotationModeBase_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URotationModeBase_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URotationModeBase_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotationModeBase_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URotationModeBase_SetIsEnabled_Statics
	{
		struct RotationModeBase_eventSetIsEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URotationModeBase_SetIsEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((RotationModeBase_eventSetIsEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URotationModeBase_SetIsEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RotationModeBase_eventSetIsEnabled_Parms), &Z_Construct_UFunction_URotationModeBase_SetIsEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotationModeBase_SetIsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotationModeBase_SetIsEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URotationModeBase_SetIsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnTarget|Rotation Mode" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/RotationModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotationModeBase_SetIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URotationModeBase, nullptr, "SetIsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_URotationModeBase_SetIsEnabled_Statics::RotationModeBase_eventSetIsEnabled_Parms), Z_Construct_UFunction_URotationModeBase_SetIsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_SetIsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URotationModeBase_SetIsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URotationModeBase_SetIsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URotationModeBase_SetIsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotationModeBase_SetIsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URotationModeBase);
	UClass* Z_Construct_UClass_URotationModeBase_NoRegister()
	{
		return URotationModeBase::StaticClass();
	}
	struct Z_Construct_UClass_URotationModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAxes_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationAxes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URotationModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULockOnSubobjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LockOnTarget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URotationModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URotationModeBase_AddOffsetToRotation, "AddOffsetToRotation" }, // 2020913486
		{ &Z_Construct_UFunction_URotationModeBase_GetClampedRotationToTarget, "GetClampedRotationToTarget" }, // 3879244185
		{ &Z_Construct_UFunction_URotationModeBase_GetRotation, "GetRotation" }, // 3590178252
		{ &Z_Construct_UFunction_URotationModeBase_GetRotationToTarget, "GetRotationToTarget" }, // 1385502104
		{ &Z_Construct_UFunction_URotationModeBase_IsEnabled, "IsEnabled" }, // 2909462818
		{ &Z_Construct_UFunction_URotationModeBase_SetIsEnabled, "SetIsEnabled" }, // 1812295073
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotationModeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LockOnTarget" },
		{ "Comment", "/**\n * Base rotation mode which return rotation to Target's socket location.\n * Override GetRotation().\n */" },
		{ "IncludePath", "LockOnSubobjects/RotationModes/RotationModeBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/RotationModeBase.h" },
		{ "ToolTip", "Base rotation mode which return rotation to Target's socket location.\nOverride GetRotation()." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotationModeBase_Statics::NewProp_RotationAxes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ERot" },
		{ "Category", "Base Config" },
		{ "Comment", "/** Axes of NewRotation to change. */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/RotationModeBase.h" },
		{ "ToolTip", "Axes of NewRotation to change." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URotationModeBase_Statics::NewProp_RotationAxes = { "RotationAxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URotationModeBase, RotationAxes), nullptr, METADATA_PARAMS(Z_Construct_UClass_URotationModeBase_Statics::NewProp_RotationAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URotationModeBase_Statics::NewProp_RotationAxes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotationModeBase_Statics::NewProp_PitchClamp_MetaData[] = {
		{ "Category", "Base Config" },
		{ "Comment", "/** Clamps NewRotation Pitch value. Where x - min value, y - max value. */" },
		{ "EditCondition", "RotationAxes & ERot::E_Pitch" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/RotationModeBase.h" },
		{ "ToolTip", "Clamps NewRotation Pitch value. Where x - min value, y - max value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URotationModeBase_Statics::NewProp_PitchClamp = { "PitchClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URotationModeBase, PitchClamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_URotationModeBase_Statics::NewProp_PitchClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URotationModeBase_Statics::NewProp_PitchClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotationModeBase_Statics::NewProp_OffsetRotation_MetaData[] = {
		{ "Category", "Base Config" },
		{ "Comment", "/** Offset applied to final Rotation. Regardless of Target offset. */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/RotationModeBase.h" },
		{ "ToolTip", "Offset applied to final Rotation. Regardless of Target offset." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URotationModeBase_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URotationModeBase, OffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_URotationModeBase_Statics::NewProp_OffsetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URotationModeBase_Statics::NewProp_OffsetRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotationModeBase_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "Base Config" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/RotationModes/RotationModeBase.h" },
	};
#endif
	void Z_Construct_UClass_URotationModeBase_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((URotationModeBase*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URotationModeBase_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URotationModeBase), &Z_Construct_UClass_URotationModeBase_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_URotationModeBase_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URotationModeBase_Statics::NewProp_bIsEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URotationModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotationModeBase_Statics::NewProp_RotationAxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotationModeBase_Statics::NewProp_PitchClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotationModeBase_Statics::NewProp_OffsetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotationModeBase_Statics::NewProp_bIsEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URotationModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URotationModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URotationModeBase_Statics::ClassParams = {
		&URotationModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URotationModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URotationModeBase_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URotationModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URotationModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URotationModeBase()
	{
		if (!Z_Registration_Info_UClass_URotationModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URotationModeBase.OuterSingleton, Z_Construct_UClass_URotationModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URotationModeBase.OuterSingleton;
	}
	template<> LOCKONTARGET_API UClass* StaticClass<URotationModeBase>()
	{
		return URotationModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URotationModeBase);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URotationModeBase, URotationModeBase::StaticClass, TEXT("URotationModeBase"), &Z_Registration_Info_UClass_URotationModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URotationModeBase), 1096150168U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_1781059032(TEXT("/Script/LockOnTarget"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
