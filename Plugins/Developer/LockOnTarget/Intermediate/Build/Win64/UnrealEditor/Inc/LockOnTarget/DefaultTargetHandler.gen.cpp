// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LockOnTarget/Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultTargetHandler() {}
// Cross Module References
	LOCKONTARGET_API UClass* Z_Construct_UClass_UDefaultTargetHandler_NoRegister();
	LOCKONTARGET_API UClass* Z_Construct_UClass_UDefaultTargetHandler();
	LOCKONTARGET_API UClass* Z_Construct_UClass_UTargetHandlerBase();
	UPackage* Z_Construct_UPackage__Script_LockOnTarget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LOCKONTARGET_API UClass* Z_Construct_UClass_UTargetingHelperComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	DEFINE_FUNCTION(UDefaultTargetHandler::execCalculateTargetModifier)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_OBJECT(UTargetingHelperComponent,Z_Param_TargetHelperComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayerInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateTargetModifier_Implementation(Z_Param_Out_Location,Z_Param_TargetHelperComponent,Z_Param_PlayerInput);
		P_NATIVE_END;
	}
	static FName NAME_UDefaultTargetHandler_CalculateTargetModifier = FName(TEXT("CalculateTargetModifier"));
	float UDefaultTargetHandler::CalculateTargetModifier(FVector const& Location, UTargetingHelperComponent* TargetHelperComponent, float PlayerInput) const
	{
		DefaultTargetHandler_eventCalculateTargetModifier_Parms Parms;
		Parms.Location=Location;
		Parms.TargetHelperComponent=TargetHelperComponent;
		Parms.PlayerInput=PlayerInput;
		const_cast<UDefaultTargetHandler*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDefaultTargetHandler_CalculateTargetModifier),&Parms);
		return Parms.ReturnValue;
	}
	void UDefaultTargetHandler::StaticRegisterNativesUDefaultTargetHandler()
	{
		UClass* Class = UDefaultTargetHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateTargetModifier", &UDefaultTargetHandler::execCalculateTargetModifier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetHelperComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetHelperComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerInput;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTargetHandler_eventCalculateTargetModifier_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::NewProp_TargetHelperComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::NewProp_TargetHelperComponent = { "TargetHelperComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTargetHandler_eventCalculateTargetModifier_Parms, TargetHelperComponent), Z_Construct_UClass_UTargetingHelperComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::NewProp_TargetHelperComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::NewProp_TargetHelperComponent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTargetHandler_eventCalculateTargetModifier_Parms, PlayerInput), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTargetHandler_eventCalculateTargetModifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::NewProp_TargetHelperComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::NewProp_PlayerInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "LockOnTarget" },
		{ "Comment", "/**\n\x09 * Use for find Best Target from sorted Targets.\n\x09 * Can be overridden via BP.\n\x09 * \n\x09 * Best Target = Modifier -> 0. (Clossest to zero)\n\x09 * If player input doesn't exist then it value < 0.f(when not switching).\n\x09 * \n\x09 * @param Location - Target's socket location.\n\x09 * @param TargetHelperComponent - HelperComponent for useful info.\n\x09 * @param PlayerInput - Player trigonometric input(0, 360). If >= 0 then player perform Switch Target/socket.\n\x09 * @return - Target modifier which should be > 0.f.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "Use for find Best Target from sorted Targets.\nCan be overridden via BP.\n\nBest Target = Modifier -> 0. (Clossest to zero)\nIf player input doesn't exist then it value < 0.f(when not switching).\n\n@param Location - Target's socket location.\n@param TargetHelperComponent - HelperComponent for useful info.\n@param PlayerInput - Player trigonometric input(0, 360). If >= 0 then player perform Switch Target/socket.\n@return - Target modifier which should be > 0.f." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDefaultTargetHandler, nullptr, "CalculateTargetModifier", nullptr, nullptr, sizeof(DefaultTargetHandler_eventCalculateTargetModifier_Parms), Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDefaultTargetHandler);
	UClass* Z_Construct_UClass_UDefaultTargetHandler_NoRegister()
	{
		return UDefaultTargetHandler::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultTargetHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoFindTargetFlags_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoFindTargetFlags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScreenCapture_MetaData[];
#endif
		static void NewProp_bScreenCapture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScreenCapture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FindingScreenOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FindingScreenOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchingScreenOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchingScreenOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CaptureAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCalculateDistance_MetaData[];
#endif
		static void NewProp_bCalculateDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCalculateDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleWeightWhileFinding_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleWeightWhileFinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleWeightWhileSwitching_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleWeightWhileSwitching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrigonometricInputWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrigonometricInputWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenCenterOffsetWhileFinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenCenterOffsetWhileFinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrigonometricAngleRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrigonometricAngleRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLineOfSightCheck_MetaData[];
#endif
		static void NewProp_bLineOfSightCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLineOfSightCheck;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceObjectChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceObjectChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceObjectChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LostTargetDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LostTargetDelay;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayModifier_MetaData[];
#endif
		static void NewProp_bDisplayModifier_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ModifierDuration;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultTargetHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTargetHandlerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LockOnTarget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDefaultTargetHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDefaultTargetHandler_CalculateTargetModifier, "CalculateTargetModifier" }, // 1357293091
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTargetHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LockOnTarget" },
		{ "Comment", "/**\n * Native default implementation of TargetHandler based on calculation and comparison of the Targets modifiers.\n * Best Target will have least modifier.\n * \n * You can override CalculateTargetModifier() for custom sorting set of Targets.\n * @see UTargetHandlerBase.\n */" },
		{ "IncludePath", "LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "Native default implementation of TargetHandler based on calculation and comparison of the Targets modifiers.\nBest Target will have least modifier.\n\nYou can override CalculateTargetModifier() for custom sorting set of Targets.\n@see UTargetHandlerBase." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_AutoFindTargetFlags_MetaData[] = {
		{ "BitMask", "" },
		{ "BitmaskEnum", "EUnlockReasonBitmask" },
		{ "Category", "Default Settings" },
		{ "Comment", "/** \n\x09 * Auto find Target on failing checked flags.\n\x09 * If proper flag set then trying find new Target.\n\x09 * i.e. if only checked TargetInvalidation then after Target Destroying will trying find new Target. \n\x09 * If Target goes out of LostDistance then auto Finding new Target will not be triggered.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "Auto find Target on failing checked flags.\nIf proper flag set then trying find new Target.\ni.e. if only checked TargetInvalidation then after Target Destroying will trying find new Target.\nIf Target goes out of LostDistance then auto Finding new Target will not be triggered." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_AutoFindTargetFlags = { "AutoFindTargetFlags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultTargetHandler, AutoFindTargetFlags), nullptr, METADATA_PARAMS(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_AutoFindTargetFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_AutoFindTargetFlags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bScreenCapture_MetaData[] = {
		{ "Category", "Default Settings" },
		{ "Comment", "/** Capture Target that only on screen. */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "Capture Target that only on screen." },
	};
#endif
	void Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bScreenCapture_SetBit(void* Obj)
	{
		((UDefaultTargetHandler*)Obj)->bScreenCapture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bScreenCapture = { "bScreenCapture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDefaultTargetHandler), &Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bScreenCapture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bScreenCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bScreenCapture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_FindingScreenOffset_MetaData[] = {
		{ "Category", "Default Settings" },
		{ "Comment", "/**\n\x09 * Narrows the screen borders(x and y) from both sides as a percentage when finding new Target. \n\x09 * Useful for not capturing Target near screen border. \n\x09 */" },
		{ "EditCondition", "bScreenCapture" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "Narrows the screen borders(x and y) from both sides as a percentage when finding new Target.\nUseful for not capturing Target near screen border." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_FindingScreenOffset = { "FindingScreenOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultTargetHandler, FindingScreenOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_FindingScreenOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_FindingScreenOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_SwitchingScreenOffset_MetaData[] = {
		{ "Category", "Default Settings" },
		{ "Comment", "/**\n\x09 * Narrows the screen borders(x and y) from both sides as a percentage when switching Target. \n\x09 * Useful for not capturing Target near screen border. \n\x09 */" },
		{ "EditCondition", "bScreenCapture" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "Narrows the screen borders(x and y) from both sides as a percentage when switching Target.\nUseful for not capturing Target near screen border." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_SwitchingScreenOffset = { "SwitchingScreenOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultTargetHandler, SwitchingScreenOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_SwitchingScreenOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_SwitchingScreenOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_CaptureAngle_MetaData[] = {
		{ "Category", "Default Settings" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Angle to Target relative to the forward vector of the camera(if not exists owner Actor). */" },
		{ "EditCondition", "!bScreenCapture" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "Angle to Target relative to the forward vector of the camera(if not exists owner Actor)." },
		{ "UIMax", "180.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_CaptureAngle = { "CaptureAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultTargetHandler, CaptureAngle), METADATA_PARAMS(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_CaptureAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_CaptureAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bCalculateDistance_MetaData[] = {
		{ "Category", "Default Solver" },
		{ "Comment", "/** Should modifier use Distance to Target or Default modifier = 1000.f. */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "Should modifier use Distance to Target or Default modifier = 1000.f." },
	};
#endif
	void Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bCalculateDistance_SetBit(void* Obj)
	{
		((UDefaultTargetHandler*)Obj)->bCalculateDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bCalculateDistance = { "bCalculateDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDefaultTargetHandler), &Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bCalculateDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bCalculateDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bCalculateDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_AngleWeightWhileFinding_MetaData[] = {
		{ "Category", "Default Solver" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09 * Default Solver that calculate Target modifier. (Target with less modifier will be captured as the result).\n\x09 * With CalculateTargetModifier override without calling parent Method will have no Affect.\n\x09 * \n\x09 * Angle weight determines the effect of angle between captured Target's socket and screen center(basically, without camera rotation clamping) modifier while finding best Target.\n\x09 * i.e. smaller value will reduce Angle affect on the resulted modifier and increase Distance weight to Target.\n\x09 * \n\x09 * For finding closest Target this value should be 0.f. \n\x09 */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "Default Solver that calculate Target modifier. (Target with less modifier will be captured as the result).\nWith CalculateTargetModifier override without calling parent Method will have no Affect.\n\nAngle weight determines the effect of angle between captured Target's socket and screen center(basically, without camera rotation clamping) modifier while finding best Target.\ni.e. smaller value will reduce Angle affect on the resulted modifier and increase Distance weight to Target.\n\nFor finding closest Target this value should be 0.f." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_AngleWeightWhileFinding = { "AngleWeightWhileFinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultTargetHandler, AngleWeightWhileFinding), METADATA_PARAMS(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_AngleWeightWhileFinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_AngleWeightWhileFinding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_AngleWeightWhileSwitching_MetaData[] = {
		{ "Category", "Default Solver" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09 * Default Solver that calculate Target modifier. (Target with less modifier will be captured as the result).\n\x09 * With CalculateTargetModifier override without calling parent Method will have no Affect.\n\x09 * \n\x09 * While switching this Angle will be between CapturedTarget and Candidate to be new Target.\n\x09 * i.e. smaller value will reduce Angle affect on the resulted modifier and increase Distance weight to Target.\n\x09 * \n\x09 * For finding closest Target this value should be 0.f. \n\x09 */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "Default Solver that calculate Target modifier. (Target with less modifier will be captured as the result).\nWith CalculateTargetModifier override without calling parent Method will have no Affect.\n\nWhile switching this Angle will be between CapturedTarget and Candidate to be new Target.\ni.e. smaller value will reduce Angle affect on the resulted modifier and increase Distance weight to Target.\n\nFor finding closest Target this value should be 0.f." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_AngleWeightWhileSwitching = { "AngleWeightWhileSwitching", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultTargetHandler, AngleWeightWhileSwitching), METADATA_PARAMS(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_AngleWeightWhileSwitching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_AngleWeightWhileSwitching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_TrigonometricInputWeight_MetaData[] = {
		{ "Category", "Default Solver" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** \n\x09 * Default Solver that calculate Target modifier. (Target with less modifier will be captured as the result).\n\x09 * With CalculateTargetModifier override without calling parent Method will have no Affect.\n\x09 * \n\x09 * Only have affect while switching. \n\x09 * This parameter increase influence of player input switch direction.\n\x09 * Better Targets will be closest to this trigonometric angle(of player input).\n\x09 * i.e. moving up(x = 0, y = 1) analog input will be converted to trigonometric angle 90deg.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "Default Solver that calculate Target modifier. (Target with less modifier will be captured as the result).\nWith CalculateTargetModifier override without calling parent Method will have no Affect.\n\nOnly have affect while switching.\nThis parameter increase influence of player input switch direction.\nBetter Targets will be closest to this trigonometric angle(of player input).\ni.e. moving up(x = 0, y = 1) analog input will be converted to trigonometric angle 90deg." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_TrigonometricInputWeight = { "TrigonometricInputWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultTargetHandler, TrigonometricInputWeight), METADATA_PARAMS(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_TrigonometricInputWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_TrigonometricInputWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_ScreenCenterOffsetWhileFinding_MetaData[] = {
		{ "Category", "Default Solver|Advanced" },
		{ "Comment", "/** Maybe useful for Capturing Target not closest to screen center. Measured in degrees. */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "Maybe useful for Capturing Target not closest to screen center. Measured in degrees." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_ScreenCenterOffsetWhileFinding = { "ScreenCenterOffsetWhileFinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultTargetHandler, ScreenCenterOffsetWhileFinding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_ScreenCenterOffsetWhileFinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_ScreenCenterOffsetWhileFinding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_TrigonometricAngleRange_MetaData[] = {
		{ "Category", "Target Switching" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** \n\x09 * The Targets in this range will be processed.\n\x09 * Trigonometric Angle added to both side of player analog input direction.\n\x09 * Player input converts to 2D space vector with direction value of player Analog input.\n\x09 * Trigonometric Angle calculates from screen right X axis (x = 1, y = 0) and player Analog input.\n\x09 * \n\x09 * i.e. player Analog input = 90deg = (x = 0, y = 1) and this value = 30deg.\n\x09 * Then Capturing target range(from, to) will be [60 , 120] => 60deg.\n\x09 * Any Target off this trigonometric range [60, 120] i.e. down side off screen (270deg)\n\x09 * can't be captured and Target modifier will not be calculated for it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "The Targets in this range will be processed.\nTrigonometric Angle added to both side of player analog input direction.\nPlayer input converts to 2D space vector with direction value of player Analog input.\nTrigonometric Angle calculates from screen right X axis (x = 1, y = 0) and player Analog input.\n\ni.e. player Analog input = 90deg = (x = 0, y = 1) and this value = 30deg.\nThen Capturing target range(from, to) will be [60 , 120] => 60deg.\nAny Target off this trigonometric range [60, 120] i.e. down side off screen (270deg)\ncan't be captured and Target modifier will not be calculated for it." },
		{ "UIMax", "180.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_TrigonometricAngleRange = { "TrigonometricAngleRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultTargetHandler, TrigonometricAngleRange), METADATA_PARAMS(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_TrigonometricAngleRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_TrigonometricAngleRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bLineOfSightCheck_MetaData[] = {
		{ "Category", "Line Of Sight" },
		{ "Comment", "/**\n\x09 * Does Target should be Traced before capturing it.\n\x09 * While Target locked checks successful trace to it.\n\x09 * If Target while Targeting out of Line Of Sight the timer begins work.\n\x09 * Target may return to Line Of Sight and stop timer.\n\x09 * After timer finished Target will be unlocked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "Does Target should be Traced before capturing it.\nWhile Target locked checks successful trace to it.\nIf Target while Targeting out of Line Of Sight the timer begins work.\nTarget may return to Line Of Sight and stop timer.\nAfter timer finished Target will be unlocked." },
	};
#endif
	void Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bLineOfSightCheck_SetBit(void* Obj)
	{
		((UDefaultTargetHandler*)Obj)->bLineOfSightCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bLineOfSightCheck = { "bLineOfSightCheck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDefaultTargetHandler), &Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bLineOfSightCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bLineOfSightCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bLineOfSightCheck_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_TraceObjectChannels_Inner = { "TraceObjectChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_TraceObjectChannels_MetaData[] = {
		{ "Category", "Line Of Sight" },
		{ "Comment", "/** Object channel for tracing. If trace hit something then Line of Sight fails. Target and Owner will be ignored. */" },
		{ "EditCondition", "bLineOfSightCheck" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "Object channel for tracing. If trace hit something then Line of Sight fails. Target and Owner will be ignored." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_TraceObjectChannels = { "TraceObjectChannels", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultTargetHandler, TraceObjectChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_TraceObjectChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_TraceObjectChannels_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_LostTargetDelay_MetaData[] = {
		{ "Category", "Line Of Sight" },
		{ "Comment", "/** \n\x09 * The timer Delay after which the Target will be unlocked. \n\x09 * Timer stops if Target returns to Line Of Sight.\n\x09 * If < 0.f will never unlock Target. This means Line of Sight used only for finding Target.\n\x09 */" },
		{ "EditCondition", "bLineOfSightCheck" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "The timer Delay after which the Target will be unlocked.\nTimer stops if Target returns to Line Of Sight.\nIf < 0.f will never unlock Target. This means Line of Sight used only for finding Target." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_LostTargetDelay = { "LostTargetDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultTargetHandler, LostTargetDelay), METADATA_PARAMS(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_LostTargetDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_LostTargetDelay_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bDisplayModifier_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EDebugFlags" },
		{ "Category", "Debug" },
		{ "Comment", "/** Display Target temporary modifier for debugging while calculation. */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "Display Target temporary modifier for debugging while calculation." },
	};
#endif
	void Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bDisplayModifier_SetBit(void* Obj)
	{
		((UDefaultTargetHandler*)Obj)->bDisplayModifier = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bDisplayModifier = { "bDisplayModifier", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDefaultTargetHandler), &Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bDisplayModifier_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bDisplayModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bDisplayModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_ModifierColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Modifier Color. */" },
		{ "EditCondition", "bDisplayModifier" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "Modifier Color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_ModifierColor = { "ModifierColor", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultTargetHandler, ModifierColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_ModifierColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_ModifierColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_ModifierDuration_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Modifier display duration. */" },
		{ "EditCondition", "bDisplayModifier" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/DefaultTargetHandler.h" },
		{ "ToolTip", "Modifier display duration." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_ModifierDuration = { "ModifierDuration", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultTargetHandler, ModifierDuration), METADATA_PARAMS(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_ModifierDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_ModifierDuration_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDefaultTargetHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_AutoFindTargetFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bScreenCapture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_FindingScreenOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_SwitchingScreenOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_CaptureAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bCalculateDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_AngleWeightWhileFinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_AngleWeightWhileSwitching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_TrigonometricInputWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_ScreenCenterOffsetWhileFinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_TrigonometricAngleRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bLineOfSightCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_TraceObjectChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_TraceObjectChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_LostTargetDelay,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_bDisplayModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_ModifierColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultTargetHandler_Statics::NewProp_ModifierDuration,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultTargetHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultTargetHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDefaultTargetHandler_Statics::ClassParams = {
		&UDefaultTargetHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDefaultTargetHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDefaultTargetHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTargetHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefaultTargetHandler()
	{
		if (!Z_Registration_Info_UClass_UDefaultTargetHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDefaultTargetHandler.OuterSingleton, Z_Construct_UClass_UDefaultTargetHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDefaultTargetHandler.OuterSingleton;
	}
	template<> LOCKONTARGET_API UClass* StaticClass<UDefaultTargetHandler>()
	{
		return UDefaultTargetHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultTargetHandler);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDefaultTargetHandler, UDefaultTargetHandler::StaticClass, TEXT("UDefaultTargetHandler"), &Z_Registration_Info_UClass_UDefaultTargetHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDefaultTargetHandler), 185333488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_3143492069(TEXT("/Script/LockOnTarget"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
