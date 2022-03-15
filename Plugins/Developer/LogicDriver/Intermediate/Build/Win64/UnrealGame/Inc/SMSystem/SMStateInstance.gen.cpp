// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Nodes/States/SMStateInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMStateInstance() {}
// Cross Module References
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_Base_NoRegister();
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature();
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_Base();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeInstance();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMTransitionInstance_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMStateInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMStateConnectionValidator();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMEntryStateInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMEntryStateInstance();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics
	{
		struct _Script_SMSystem_eventOnStateEndSignature_Parms
		{
			USMStateInstance_Base* StateInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::NewProp_StateInstance = { "StateInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnStateEndSignature_Parms, StateInstance), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::NewProp_StateInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SMSystem, nullptr, "OnStateEndSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SMSystem_eventOnStateEndSignature_Parms), Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics
	{
		struct _Script_SMSystem_eventOnStateUpdateSignature_Parms
		{
			USMStateInstance_Base* StateInstance;
			float DeltaSeconds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateInstance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::NewProp_StateInstance = { "StateInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnStateUpdateSignature_Parms, StateInstance), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnStateUpdateSignature_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::NewProp_StateInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SMSystem, nullptr, "OnStateUpdateSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SMSystem_eventOnStateUpdateSignature_Parms), Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics
	{
		struct _Script_SMSystem_eventOnStateBeginSignature_Parms
		{
			USMStateInstance_Base* StateInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::NewProp_StateInstance = { "StateInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnStateBeginSignature_Parms, StateInstance), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::NewProp_StateInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SMSystem, nullptr, "OnStateBeginSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SMSystem_eventOnStateBeginSignature_Parms), Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execSetExcludeFromAnyState)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExcludeFromAnyState(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetExcludeFromAnyState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetExcludeFromAnyState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execSetEvalTransitionsOnStart)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEvalTransitionsOnStart(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetEvalTransitionsOnStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEvalTransitionsOnStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execSetStayActiveOnStateChange)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStayActiveOnStateChange(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetStayActiveOnStateChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStayActiveOnStateChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execSetAllowParallelReentry)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowParallelReentry(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetAllowParallelReentry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllowParallelReentry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execSetDefaultToParallel)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultToParallel(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetDefaultToParallel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDefaultToParallel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execSetDisableTickTransitionEvaluation)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableTickTransitionEvaluation(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetDisableTickTransitionEvaluation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDisableTickTransitionEvaluation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execSetAlwaysUpdate)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlwaysUpdate(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetAlwaysUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAlwaysUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetServerTimeInState)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bOutUsedLocalTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetServerTimeInState(Z_Param_Out_bOutUsedLocalTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetStartTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetStartTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetPreviousActiveTransition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMTransitionInstance**)Z_Param__Result=P_THIS->GetPreviousActiveTransition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetPreviousActiveState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetPreviousActiveState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetPreviousStateByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetPreviousStateByName(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetNextStateByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetNextStateByName(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetNextStateByTransitionIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetNextStateByTransitionIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetTransitionByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMTransitionInstance**)Z_Param__Result=P_THIS->GetTransitionByIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execSwitchToLinkedStateByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NextStateName);
		P_GET_UBOOL(Z_Param_bRequireTransitionToPass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwitchToLinkedStateByName(Z_Param_NextStateName,Z_Param_bRequireTransitionToPass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execSwitchToLinkedState)
	{
		P_GET_OBJECT(USMStateInstance_Base,Z_Param_NextStateInstance);
		P_GET_UBOOL(Z_Param_bRequireTransitionToPass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwitchToLinkedState(Z_Param_NextStateInstance,Z_Param_bRequireTransitionToPass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetTransitionToTake)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMTransitionInstance**)Z_Param__Result=P_THIS->GetTransitionToTake();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetIncomingTransitions)
	{
		P_GET_TARRAY_REF(USMTransitionInstance*,Z_Param_Out_Transitions);
		P_GET_UBOOL(Z_Param_bExcludeAlwaysFalse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIncomingTransitions(Z_Param_Out_Transitions,Z_Param_bExcludeAlwaysFalse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetOutgoingTransitions)
	{
		P_GET_TARRAY_REF(USMTransitionInstance*,Z_Param_Out_Transitions);
		P_GET_UBOOL(Z_Param_bExcludeAlwaysFalse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetOutgoingTransitions(Z_Param_Out_Transitions,Z_Param_bExcludeAlwaysFalse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execEvaluateTransitions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EvaluateTransitions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execSetActive)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execIsStateMachine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStateMachine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetStateInfo)
	{
		P_GET_STRUCT_REF(FSMStateInfo,Z_Param_Out_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetStateInfo(Z_Param_Out_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execOnRootStateMachineStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRootStateMachineStop_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execOnRootStateMachineStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRootStateMachineStart_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execOnStateEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execOnStateUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateUpdate_Implementation(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execOnStateBegin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateBegin_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USMStateInstance_Base_OnRootStateMachineStart = FName(TEXT("OnRootStateMachineStart"));
	void USMStateInstance_Base::OnRootStateMachineStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateInstance_Base_OnRootStateMachineStart),NULL);
	}
	static FName NAME_USMStateInstance_Base_OnRootStateMachineStop = FName(TEXT("OnRootStateMachineStop"));
	void USMStateInstance_Base::OnRootStateMachineStop()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateInstance_Base_OnRootStateMachineStop),NULL);
	}
	static FName NAME_USMStateInstance_Base_OnStateBegin = FName(TEXT("OnStateBegin"));
	void USMStateInstance_Base::OnStateBegin()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateInstance_Base_OnStateBegin),NULL);
	}
	static FName NAME_USMStateInstance_Base_OnStateEnd = FName(TEXT("OnStateEnd"));
	void USMStateInstance_Base::OnStateEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateInstance_Base_OnStateEnd),NULL);
	}
	static FName NAME_USMStateInstance_Base_OnStateUpdate = FName(TEXT("OnStateUpdate"));
	void USMStateInstance_Base::OnStateUpdate(float DeltaSeconds)
	{
		SMStateInstance_Base_eventOnStateUpdate_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_USMStateInstance_Base_OnStateUpdate),&Parms);
	}
	void USMStateInstance_Base::StaticRegisterNativesUSMStateInstance_Base()
	{
		UClass* Class = USMStateInstance_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EvaluateTransitions", &USMStateInstance_Base::execEvaluateTransitions },
			{ "GetAllowParallelReentry", &USMStateInstance_Base::execGetAllowParallelReentry },
			{ "GetAlwaysUpdate", &USMStateInstance_Base::execGetAlwaysUpdate },
			{ "GetDefaultToParallel", &USMStateInstance_Base::execGetDefaultToParallel },
			{ "GetDisableTickTransitionEvaluation", &USMStateInstance_Base::execGetDisableTickTransitionEvaluation },
			{ "GetEvalTransitionsOnStart", &USMStateInstance_Base::execGetEvalTransitionsOnStart },
			{ "GetExcludeFromAnyState", &USMStateInstance_Base::execGetExcludeFromAnyState },
			{ "GetIncomingTransitions", &USMStateInstance_Base::execGetIncomingTransitions },
			{ "GetNextStateByName", &USMStateInstance_Base::execGetNextStateByName },
			{ "GetNextStateByTransitionIndex", &USMStateInstance_Base::execGetNextStateByTransitionIndex },
			{ "GetOutgoingTransitions", &USMStateInstance_Base::execGetOutgoingTransitions },
			{ "GetPreviousActiveState", &USMStateInstance_Base::execGetPreviousActiveState },
			{ "GetPreviousActiveTransition", &USMStateInstance_Base::execGetPreviousActiveTransition },
			{ "GetPreviousStateByName", &USMStateInstance_Base::execGetPreviousStateByName },
			{ "GetServerTimeInState", &USMStateInstance_Base::execGetServerTimeInState },
			{ "GetStartTime", &USMStateInstance_Base::execGetStartTime },
			{ "GetStateInfo", &USMStateInstance_Base::execGetStateInfo },
			{ "GetStayActiveOnStateChange", &USMStateInstance_Base::execGetStayActiveOnStateChange },
			{ "GetTransitionByIndex", &USMStateInstance_Base::execGetTransitionByIndex },
			{ "GetTransitionToTake", &USMStateInstance_Base::execGetTransitionToTake },
			{ "IsStateMachine", &USMStateInstance_Base::execIsStateMachine },
			{ "OnRootStateMachineStart", &USMStateInstance_Base::execOnRootStateMachineStart },
			{ "OnRootStateMachineStop", &USMStateInstance_Base::execOnRootStateMachineStop },
			{ "OnStateBegin", &USMStateInstance_Base::execOnStateBegin },
			{ "OnStateEnd", &USMStateInstance_Base::execOnStateEnd },
			{ "OnStateUpdate", &USMStateInstance_Base::execOnStateUpdate },
			{ "SetActive", &USMStateInstance_Base::execSetActive },
			{ "SetAllowParallelReentry", &USMStateInstance_Base::execSetAllowParallelReentry },
			{ "SetAlwaysUpdate", &USMStateInstance_Base::execSetAlwaysUpdate },
			{ "SetDefaultToParallel", &USMStateInstance_Base::execSetDefaultToParallel },
			{ "SetDisableTickTransitionEvaluation", &USMStateInstance_Base::execSetDisableTickTransitionEvaluation },
			{ "SetEvalTransitionsOnStart", &USMStateInstance_Base::execSetEvalTransitionsOnStart },
			{ "SetExcludeFromAnyState", &USMStateInstance_Base::execSetExcludeFromAnyState },
			{ "SetStayActiveOnStateChange", &USMStateInstance_Base::execSetStayActiveOnStateChange },
			{ "SwitchToLinkedState", &USMStateInstance_Base::execSwitchToLinkedState },
			{ "SwitchToLinkedStateByName", &USMStateInstance_Base::execSwitchToLinkedStateByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_EvaluateTransitions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_EvaluateTransitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Signals to the owning state machine to process transition evaluation.\n\x09 * This is similar to calling Update on the owner root state machine, however state update logic (Tick) won't execute.\n\x09 * All transitions are evaluated as normal starting from the root state machine down.\n\x09 * Depending on super state transitions it's possible the state machine this state is part of may exit.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Signals to the owning state machine to process transition evaluation.\nThis is similar to calling Update on the owner root state machine, however state update logic (Tick) won't execute.\nAll transitions are evaluated as normal starting from the root state machine down.\nDepending on super state transitions it's possible the state machine this state is part of may exit." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_EvaluateTransitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "EvaluateTransitions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_EvaluateTransitions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_EvaluateTransitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_EvaluateTransitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_EvaluateTransitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetAllowParallelReentry_Statics
	{
		struct SMStateInstance_Base_eventGetAllowParallelReentry_Parms
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
	void Z_Construct_UFunction_USMStateInstance_Base_GetAllowParallelReentry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventGetAllowParallelReentry_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetAllowParallelReentry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventGetAllowParallelReentry_Parms), &Z_Construct_UFunction_USMStateInstance_Base_GetAllowParallelReentry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetAllowParallelReentry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetAllowParallelReentry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetAllowParallelReentry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public setter for #bAllowParallelReentry. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Public setter for #bAllowParallelReentry." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetAllowParallelReentry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetAllowParallelReentry", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetAllowParallelReentry_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetAllowParallelReentry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetAllowParallelReentry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetAllowParallelReentry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetAllowParallelReentry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetAllowParallelReentry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetAllowParallelReentry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetAlwaysUpdate_Statics
	{
		struct SMStateInstance_Base_eventGetAlwaysUpdate_Parms
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
	void Z_Construct_UFunction_USMStateInstance_Base_GetAlwaysUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventGetAlwaysUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetAlwaysUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventGetAlwaysUpdate_Parms), &Z_Construct_UFunction_USMStateInstance_Base_GetAlwaysUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetAlwaysUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetAlwaysUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetAlwaysUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public getter for #bAlwaysUpdate. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Public getter for #bAlwaysUpdate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetAlwaysUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetAlwaysUpdate", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetAlwaysUpdate_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetAlwaysUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetAlwaysUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetAlwaysUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetAlwaysUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetAlwaysUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetAlwaysUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetDefaultToParallel_Statics
	{
		struct SMStateInstance_Base_eventGetDefaultToParallel_Parms
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
	void Z_Construct_UFunction_USMStateInstance_Base_GetDefaultToParallel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventGetDefaultToParallel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetDefaultToParallel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventGetDefaultToParallel_Parms), &Z_Construct_UFunction_USMStateInstance_Base_GetDefaultToParallel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetDefaultToParallel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetDefaultToParallel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetDefaultToParallel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public getter for #bDefaultToParallel. Only valid for the editor. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Public getter for #bDefaultToParallel. Only valid for the editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetDefaultToParallel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetDefaultToParallel", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetDefaultToParallel_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetDefaultToParallel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetDefaultToParallel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetDefaultToParallel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetDefaultToParallel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetDefaultToParallel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetDefaultToParallel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetDisableTickTransitionEvaluation_Statics
	{
		struct SMStateInstance_Base_eventGetDisableTickTransitionEvaluation_Parms
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
	void Z_Construct_UFunction_USMStateInstance_Base_GetDisableTickTransitionEvaluation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventGetDisableTickTransitionEvaluation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetDisableTickTransitionEvaluation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventGetDisableTickTransitionEvaluation_Parms), &Z_Construct_UFunction_USMStateInstance_Base_GetDisableTickTransitionEvaluation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetDisableTickTransitionEvaluation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetDisableTickTransitionEvaluation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetDisableTickTransitionEvaluation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public getter for #bDisableTickTransitionEvaluation. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Public getter for #bDisableTickTransitionEvaluation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetDisableTickTransitionEvaluation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetDisableTickTransitionEvaluation", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetDisableTickTransitionEvaluation_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetDisableTickTransitionEvaluation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetDisableTickTransitionEvaluation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetDisableTickTransitionEvaluation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetDisableTickTransitionEvaluation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetDisableTickTransitionEvaluation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetDisableTickTransitionEvaluation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetEvalTransitionsOnStart_Statics
	{
		struct SMStateInstance_Base_eventGetEvalTransitionsOnStart_Parms
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
	void Z_Construct_UFunction_USMStateInstance_Base_GetEvalTransitionsOnStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventGetEvalTransitionsOnStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetEvalTransitionsOnStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventGetEvalTransitionsOnStart_Parms), &Z_Construct_UFunction_USMStateInstance_Base_GetEvalTransitionsOnStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetEvalTransitionsOnStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetEvalTransitionsOnStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetEvalTransitionsOnStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public setter for #bEvalTransitionsOnStart. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Public setter for #bEvalTransitionsOnStart." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetEvalTransitionsOnStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetEvalTransitionsOnStart", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetEvalTransitionsOnStart_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetEvalTransitionsOnStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetEvalTransitionsOnStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetEvalTransitionsOnStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetEvalTransitionsOnStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetEvalTransitionsOnStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetEvalTransitionsOnStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetExcludeFromAnyState_Statics
	{
		struct SMStateInstance_Base_eventGetExcludeFromAnyState_Parms
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
	void Z_Construct_UFunction_USMStateInstance_Base_GetExcludeFromAnyState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventGetExcludeFromAnyState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetExcludeFromAnyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventGetExcludeFromAnyState_Parms), &Z_Construct_UFunction_USMStateInstance_Base_GetExcludeFromAnyState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetExcludeFromAnyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetExcludeFromAnyState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetExcludeFromAnyState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public getter for #bExcludeFromAnyState. Only valid for the editor. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Public getter for #bExcludeFromAnyState. Only valid for the editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetExcludeFromAnyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetExcludeFromAnyState", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetExcludeFromAnyState_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetExcludeFromAnyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetExcludeFromAnyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetExcludeFromAnyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetExcludeFromAnyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetExcludeFromAnyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetExcludeFromAnyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics
	{
		struct SMStateInstance_Base_eventGetIncomingTransitions_Parms
		{
			TArray<USMTransitionInstance*> Transitions;
			bool bExcludeAlwaysFalse;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Transitions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transitions;
		static void NewProp_bExcludeAlwaysFalse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeAlwaysFalse;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_Transitions_Inner = { "Transitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_Transitions = { "Transitions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetIncomingTransitions_Parms, Transitions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_bExcludeAlwaysFalse_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventGetIncomingTransitions_Parms*)Obj)->bExcludeAlwaysFalse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_bExcludeAlwaysFalse = { "bExcludeAlwaysFalse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventGetIncomingTransitions_Parms), &Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_bExcludeAlwaysFalse_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventGetIncomingTransitions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventGetIncomingTransitions_Parms), &Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_Transitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_Transitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_bExcludeAlwaysFalse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Return all incoming transition instances.\n\x09 * @param Transitions The incoming transitions.\n\x09 * @param bExcludeAlwaysFalse Skip over transitions that can't ever be true.\n\x09 * @return True if any transitions exist.\n\x09 */" },
		{ "CPP_Default_bExcludeAlwaysFalse", "true" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Return all incoming transition instances.\n@param Transitions The incoming transitions.\n@param bExcludeAlwaysFalse Skip over transitions that can't ever be true.\n@return True if any transitions exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetIncomingTransitions", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetIncomingTransitions_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByName_Statics
	{
		struct SMStateInstance_Base_eventGetNextStateByName_Parms
		{
			FString StateName;
			USMStateInstance_Base* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StateName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByName_Statics::NewProp_StateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByName_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetNextStateByName_Parms, StateName), METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByName_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByName_Statics::NewProp_StateName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetNextStateByName_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByName_Statics::NewProp_StateName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Return the next state connected by an outgoing transition.\n\x09 * O(n) by number of transitions.\n\x09 * @param StateName Name of the state to search for.\n\x09 *\n\x09 * @return The connected state or nullptr.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Return the next state connected by an outgoing transition.\nO(n) by number of transitions.\n@param StateName Name of the state to search for.\n\n@return The connected state or nullptr." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetNextStateByName", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetNextStateByName_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics
	{
		struct SMStateInstance_Base_eventGetNextStateByTransitionIndex_Parms
		{
			int32 Index;
			USMStateInstance_Base* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetNextStateByTransitionIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetNextStateByTransitionIndex_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Return the next connected state given a transition index.\n\x09 * @param Index The array index of the transition. If transitions have manual priorities they should correlate with the index value.\n\x09 *\n\x09 * @return The connected state or nullptr.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Return the next connected state given a transition index.\n@param Index The array index of the transition. If transitions have manual priorities they should correlate with the index value.\n\n@return The connected state or nullptr." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetNextStateByTransitionIndex", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetNextStateByTransitionIndex_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics
	{
		struct SMStateInstance_Base_eventGetOutgoingTransitions_Parms
		{
			TArray<USMTransitionInstance*> Transitions;
			bool bExcludeAlwaysFalse;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Transitions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transitions;
		static void NewProp_bExcludeAlwaysFalse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeAlwaysFalse;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_Transitions_Inner = { "Transitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_Transitions = { "Transitions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetOutgoingTransitions_Parms, Transitions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_bExcludeAlwaysFalse_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventGetOutgoingTransitions_Parms*)Obj)->bExcludeAlwaysFalse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_bExcludeAlwaysFalse = { "bExcludeAlwaysFalse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventGetOutgoingTransitions_Parms), &Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_bExcludeAlwaysFalse_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventGetOutgoingTransitions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventGetOutgoingTransitions_Parms), &Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_Transitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_Transitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_bExcludeAlwaysFalse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Return all outgoing transition instances.\n\x09 * @param Transitions The outgoing transitions.\n\x09 * @param bExcludeAlwaysFalse Skip over transitions that can't ever be true.\n\x09 * @return True if any transitions exist.\n\x09 */" },
		{ "CPP_Default_bExcludeAlwaysFalse", "true" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Return all outgoing transition instances.\n@param Transitions The outgoing transitions.\n@param bExcludeAlwaysFalse Skip over transitions that can't ever be true.\n@return True if any transitions exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetOutgoingTransitions", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetOutgoingTransitions_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveState_Statics
	{
		struct SMStateInstance_Base_eventGetPreviousActiveState_Parms
		{
			USMStateInstance_Base* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetPreviousActiveState_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve the last active state that transitioned to this state.\n\x09 * This will not count transition conduits.\n\x09 *\n\x09 * @return The state instance last active before this state became active. May be nullptr.\n\x09 * \n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Retrieve the last active state that transitioned to this state.\nThis will not count transition conduits.\n\n@return The state instance last active before this state became active. May be nullptr." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetPreviousActiveState", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetPreviousActiveState_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveTransition_Statics
	{
		struct SMStateInstance_Base_eventGetPreviousActiveTransition_Parms
		{
			USMTransitionInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveTransition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetPreviousActiveTransition_Parms, ReturnValue), Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveTransition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveTransition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve the last transition taken to this state.\n\x09 *\n\x09 * @return The transition instance last active before this state became active. May be nullptr.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Retrieve the last transition taken to this state.\n\n@return The transition instance last active before this state became active. May be nullptr." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetPreviousActiveTransition", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetPreviousActiveTransition_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveTransition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveTransition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveTransition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetPreviousStateByName_Statics
	{
		struct SMStateInstance_Base_eventGetPreviousStateByName_Parms
		{
			FString StateName;
			USMStateInstance_Base* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StateName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetPreviousStateByName_Statics::NewProp_StateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetPreviousStateByName_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetPreviousStateByName_Parms, StateName), METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetPreviousStateByName_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetPreviousStateByName_Statics::NewProp_StateName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetPreviousStateByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetPreviousStateByName_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetPreviousStateByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetPreviousStateByName_Statics::NewProp_StateName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetPreviousStateByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetPreviousStateByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Return a previous state connected through an incoming transition.\n\x09 * O(n) by number of transitions.\n\x09 * @param StateName Name of the state to search for.\n\x09 *\n\x09 * @return The connected state or nullptr.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Return a previous state connected through an incoming transition.\nO(n) by number of transitions.\n@param StateName Name of the state to search for.\n\n@return The connected state or nullptr." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetPreviousStateByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetPreviousStateByName", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetPreviousStateByName_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetPreviousStateByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetPreviousStateByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetPreviousStateByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetPreviousStateByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetPreviousStateByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetPreviousStateByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState_Statics
	{
		struct SMStateInstance_Base_eventGetServerTimeInState_Parms
		{
			bool bOutUsedLocalTime;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutUsedLocalTime_MetaData[];
#endif
		static void NewProp_bOutUsedLocalTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutUsedLocalTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState_Statics::NewProp_bOutUsedLocalTime_MetaData[] = {
		{ "DisplayName", "UsedLocalTime" },
	};
#endif
	void Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState_Statics::NewProp_bOutUsedLocalTime_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventGetServerTimeInState_Parms*)Obj)->bOutUsedLocalTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState_Statics::NewProp_bOutUsedLocalTime = { "bOutUsedLocalTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventGetServerTimeInState_Parms), &Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState_Statics::NewProp_bOutUsedLocalTime_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState_Statics::NewProp_bOutUsedLocalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState_Statics::NewProp_bOutUsedLocalTime_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetServerTimeInState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState_Statics::NewProp_bOutUsedLocalTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve the time the server spent in the state. This is retrieved from network transactions\n\x09 * and can match the TimeInState from the server.\n\x09 *\n\x09 * This will only match the server after OnStateEnd() is called and provided the client received the replicated\n\x09 * transition. When using client authored transitions, `bTakeTransitionsFromServerOnly` must be set to true\n\x09 * for the client to receive the updated server time.\n\x09 *\n\x09 * When the server time can't be calculated the local time will be returned instead, using GetTimeInState().\n\x09 *\n\x09 * The return value is impacted by bCalculateServerTimeForClients of the state machine component's network settings,\n\x09 * and whether the state machine is networked, a client or server, or is ticking.\n\x09 *\n\x09 * @param bOutUsedLocalTime [Out] Indicates that local time from GetTimeInState() was used.\n\x09 * @return The total time spent in the state, either matching the server or the current local time spent.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Retrieve the time the server spent in the state. This is retrieved from network transactions\nand can match the TimeInState from the server.\n\nThis will only match the server after OnStateEnd() is called and provided the client received the replicated\ntransition. When using client authored transitions, `bTakeTransitionsFromServerOnly` must be set to true\nfor the client to receive the updated server time.\n\nWhen the server time can't be calculated the local time will be returned instead, using GetTimeInState().\n\nThe return value is impacted by bCalculateServerTimeForClients of the state machine component's network settings,\nand whether the state machine is networked, a client or server, or is ticking.\n\n@param bOutUsedLocalTime [Out] Indicates that local time from GetTimeInState() was used.\n@return The total time spent in the state, either matching the server or the current local time spent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetServerTimeInState", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetServerTimeInState_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetStartTime_Statics
	{
		struct SMStateInstance_Base_eventGetStartTime_Parms
		{
			FDateTime ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetStartTime_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetStartTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetStartTime_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetStartTime_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetStartTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetStartTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetStartTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve the UTC time when the state last started. If this is called before the state has started once,\n\x09 * or before initialization (such as during an editor construction script) the datetime will be initialized to 0.\n\x09 *\n\x09 * @return DateTime in UTC. This is when the state started locally and won't be in sync with the server.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Retrieve the UTC time when the state last started. If this is called before the state has started once,\nor before initialization (such as during an editor construction script) the datetime will be initialized to 0.\n\n@return DateTime in UTC. This is when the state started locally and won't be in sync with the server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetStartTime", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetStartTime_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetStartTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetStartTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetStartTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics
	{
		struct SMStateInstance_Base_eventGetStateInfo_Parms
		{
			FSMStateInfo State;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetStateInfo_Parms, State), Z_Construct_UScriptStruct_FSMStateInfo, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Return read only information about the owning state. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Return read only information about the owning state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetStateInfo", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetStateInfo_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetStayActiveOnStateChange_Statics
	{
		struct SMStateInstance_Base_eventGetStayActiveOnStateChange_Parms
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
	void Z_Construct_UFunction_USMStateInstance_Base_GetStayActiveOnStateChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventGetStayActiveOnStateChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetStayActiveOnStateChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventGetStayActiveOnStateChange_Parms), &Z_Construct_UFunction_USMStateInstance_Base_GetStayActiveOnStateChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetStayActiveOnStateChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetStayActiveOnStateChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetStayActiveOnStateChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public setter for #bStayActiveOnStateChange. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Public setter for #bStayActiveOnStateChange." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetStayActiveOnStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetStayActiveOnStateChange", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetStayActiveOnStateChange_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetStayActiveOnStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetStayActiveOnStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetStayActiveOnStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetStayActiveOnStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetStayActiveOnStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetStayActiveOnStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics
	{
		struct SMStateInstance_Base_eventGetTransitionByIndex_Parms
		{
			int32 Index;
			USMTransitionInstance* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetTransitionByIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetTransitionByIndex_Parms, ReturnValue), Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Return a transition given the transition index.\n\x09 * @param Index The array index of the transition. If transitions have manual priorities they should correlate with the index value.\n\x09 *\n\x09 * @return The transition or nullptr.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Return a transition given the transition index.\n@param Index The array index of the transition. If transitions have manual priorities they should correlate with the index value.\n\n@return The transition or nullptr." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetTransitionByIndex", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetTransitionByIndex_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics
	{
		struct SMStateInstance_Base_eventGetTransitionToTake_Parms
		{
			USMTransitionInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetTransitionToTake_Parms, ReturnValue), Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** The transition this state will be taking. Generally only valid on EndState and if this state isn't an end state. May be null. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "The transition this state will be taking. Generally only valid on EndState and if this state isn't an end state. May be null." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetTransitionToTake", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetTransitionToTake_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics
	{
		struct SMStateInstance_Base_eventIsStateMachine_Parms
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
	void Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventIsStateMachine_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventIsStateMachine_Parms), &Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Checks if this state is a state machine. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Checks if this state is a state machine." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "IsStateMachine", nullptr, nullptr, sizeof(SMStateInstance_Base_eventIsStateMachine_Parms), Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Instance" },
		{ "Comment", "/** Called when the immediate owning state machine blueprint is starting. If this is part of a reference\n\x09 * then it will be called when the reference starts. If this is for a state machine node\n\x09 * then it will only be called when the top level state machine starts.*/" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called when the immediate owning state machine blueprint is starting. If this is part of a reference\nthen it will be called when the reference starts. If this is for a state machine node\nthen it will only be called when the top level state machine starts." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "OnRootStateMachineStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Instance" },
		{ "Comment", "/** Called when the immediate owning state machine blueprint is stopping. If this is part of a reference\n\x09 * then it will be called when the reference stops. If this is for a state machine node\n\x09 * then it will only be called when the top level state machine stops.*/" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called when the immediate owning state machine blueprint is stopping. If this is part of a reference\nthen it will be called when the reference stops. If this is for a state machine node\nthen it will only be called when the top level state machine stops." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "OnRootStateMachineStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_OnStateBegin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_OnStateBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Instance" },
		{ "Comment", "/** Called when the state is started. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called when the state is started." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_OnStateBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "OnStateBegin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_OnStateBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_OnStateBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_OnStateBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_OnStateBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_OnStateEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_OnStateEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Instance" },
		{ "Comment", "/** Called when the state is ending. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called when the state is ending." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_OnStateEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "OnStateEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_OnStateEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_OnStateEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_OnStateEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_OnStateEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventOnStateUpdate_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Instance" },
		{ "Comment", "/**\n\x09 * Called when the state is updated.\n\x09 *\n\x09 * @param DeltaSeconds Time delta in seconds from the last update.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called when the state is updated.\n\n@param DeltaSeconds Time delta in seconds from the last update." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "OnStateUpdate", nullptr, nullptr, sizeof(SMStateInstance_Base_eventOnStateUpdate_Parms), Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics
	{
		struct SMStateInstance_Base_eventSetActive_Parms
		{
			bool bValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventSetActive_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventSetActive_Parms), &Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Force set the active flag of this state. This call is replicated and can be called from the server or from a client that is not a simulated proxy.\n\x09 * @param bValue True activates the state, false deactivates the state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Force set the active flag of this state. This call is replicated and can be called from the server or from a client that is not a simulated proxy.\n@param bValue True activates the state, false deactivates the state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "SetActive", nullptr, nullptr, sizeof(SMStateInstance_Base_eventSetActive_Parms), Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_SetAllowParallelReentry_Statics
	{
		struct SMStateInstance_Base_eventSetAllowParallelReentry_Parms
		{
			bool bValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SetAllowParallelReentry_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USMStateInstance_Base_SetAllowParallelReentry_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventSetAllowParallelReentry_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_SetAllowParallelReentry_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventSetAllowParallelReentry_Parms), &Z_Construct_UFunction_USMStateInstance_Base_SetAllowParallelReentry_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SetAllowParallelReentry_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetAllowParallelReentry_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_SetAllowParallelReentry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_SetAllowParallelReentry_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SetAllowParallelReentry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public setter for #bAllowParallelReentry. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Public setter for #bAllowParallelReentry." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_SetAllowParallelReentry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "SetAllowParallelReentry", nullptr, nullptr, sizeof(SMStateInstance_Base_eventSetAllowParallelReentry_Parms), Z_Construct_UFunction_USMStateInstance_Base_SetAllowParallelReentry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetAllowParallelReentry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SetAllowParallelReentry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetAllowParallelReentry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_SetAllowParallelReentry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_SetAllowParallelReentry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_SetAlwaysUpdate_Statics
	{
		struct SMStateInstance_Base_eventSetAlwaysUpdate_Parms
		{
			bool bValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SetAlwaysUpdate_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USMStateInstance_Base_SetAlwaysUpdate_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventSetAlwaysUpdate_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_SetAlwaysUpdate_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventSetAlwaysUpdate_Parms), &Z_Construct_UFunction_USMStateInstance_Base_SetAlwaysUpdate_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SetAlwaysUpdate_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetAlwaysUpdate_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_SetAlwaysUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_SetAlwaysUpdate_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SetAlwaysUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public setter for #bAlwaysUpdate. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Public setter for #bAlwaysUpdate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_SetAlwaysUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "SetAlwaysUpdate", nullptr, nullptr, sizeof(SMStateInstance_Base_eventSetAlwaysUpdate_Parms), Z_Construct_UFunction_USMStateInstance_Base_SetAlwaysUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetAlwaysUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SetAlwaysUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetAlwaysUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_SetAlwaysUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_SetAlwaysUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_SetDefaultToParallel_Statics
	{
		struct SMStateInstance_Base_eventSetDefaultToParallel_Parms
		{
			bool bValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SetDefaultToParallel_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USMStateInstance_Base_SetDefaultToParallel_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventSetDefaultToParallel_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_SetDefaultToParallel_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventSetDefaultToParallel_Parms), &Z_Construct_UFunction_USMStateInstance_Base_SetDefaultToParallel_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SetDefaultToParallel_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetDefaultToParallel_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_SetDefaultToParallel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_SetDefaultToParallel_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SetDefaultToParallel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/**\n\x09 * Public setter for #bDefaultToParallel.\n\x09 * Only valid from the editor construction script.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Public setter for #bDefaultToParallel.\nOnly valid from the editor construction script." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_SetDefaultToParallel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "SetDefaultToParallel", nullptr, nullptr, sizeof(SMStateInstance_Base_eventSetDefaultToParallel_Parms), Z_Construct_UFunction_USMStateInstance_Base_SetDefaultToParallel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetDefaultToParallel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SetDefaultToParallel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetDefaultToParallel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_SetDefaultToParallel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_SetDefaultToParallel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_SetDisableTickTransitionEvaluation_Statics
	{
		struct SMStateInstance_Base_eventSetDisableTickTransitionEvaluation_Parms
		{
			bool bValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SetDisableTickTransitionEvaluation_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USMStateInstance_Base_SetDisableTickTransitionEvaluation_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventSetDisableTickTransitionEvaluation_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_SetDisableTickTransitionEvaluation_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventSetDisableTickTransitionEvaluation_Parms), &Z_Construct_UFunction_USMStateInstance_Base_SetDisableTickTransitionEvaluation_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SetDisableTickTransitionEvaluation_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetDisableTickTransitionEvaluation_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_SetDisableTickTransitionEvaluation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_SetDisableTickTransitionEvaluation_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SetDisableTickTransitionEvaluation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public setter for #bDisableTickTransitionEvaluation. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Public setter for #bDisableTickTransitionEvaluation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_SetDisableTickTransitionEvaluation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "SetDisableTickTransitionEvaluation", nullptr, nullptr, sizeof(SMStateInstance_Base_eventSetDisableTickTransitionEvaluation_Parms), Z_Construct_UFunction_USMStateInstance_Base_SetDisableTickTransitionEvaluation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetDisableTickTransitionEvaluation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SetDisableTickTransitionEvaluation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetDisableTickTransitionEvaluation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_SetDisableTickTransitionEvaluation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_SetDisableTickTransitionEvaluation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_SetEvalTransitionsOnStart_Statics
	{
		struct SMStateInstance_Base_eventSetEvalTransitionsOnStart_Parms
		{
			bool bValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SetEvalTransitionsOnStart_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USMStateInstance_Base_SetEvalTransitionsOnStart_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventSetEvalTransitionsOnStart_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_SetEvalTransitionsOnStart_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventSetEvalTransitionsOnStart_Parms), &Z_Construct_UFunction_USMStateInstance_Base_SetEvalTransitionsOnStart_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SetEvalTransitionsOnStart_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetEvalTransitionsOnStart_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_SetEvalTransitionsOnStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_SetEvalTransitionsOnStart_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SetEvalTransitionsOnStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public setter for #bEvalTransitionsOnStart. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Public setter for #bEvalTransitionsOnStart." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_SetEvalTransitionsOnStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "SetEvalTransitionsOnStart", nullptr, nullptr, sizeof(SMStateInstance_Base_eventSetEvalTransitionsOnStart_Parms), Z_Construct_UFunction_USMStateInstance_Base_SetEvalTransitionsOnStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetEvalTransitionsOnStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SetEvalTransitionsOnStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetEvalTransitionsOnStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_SetEvalTransitionsOnStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_SetEvalTransitionsOnStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_SetExcludeFromAnyState_Statics
	{
		struct SMStateInstance_Base_eventSetExcludeFromAnyState_Parms
		{
			bool bValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SetExcludeFromAnyState_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USMStateInstance_Base_SetExcludeFromAnyState_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventSetExcludeFromAnyState_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_SetExcludeFromAnyState_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventSetExcludeFromAnyState_Parms), &Z_Construct_UFunction_USMStateInstance_Base_SetExcludeFromAnyState_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SetExcludeFromAnyState_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetExcludeFromAnyState_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_SetExcludeFromAnyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_SetExcludeFromAnyState_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SetExcludeFromAnyState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/**\n\x09 * Public setter for #bExcludeFromAnyState.\n\x09 * Only valid from the editor construction script.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Public setter for #bExcludeFromAnyState.\nOnly valid from the editor construction script." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_SetExcludeFromAnyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "SetExcludeFromAnyState", nullptr, nullptr, sizeof(SMStateInstance_Base_eventSetExcludeFromAnyState_Parms), Z_Construct_UFunction_USMStateInstance_Base_SetExcludeFromAnyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetExcludeFromAnyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SetExcludeFromAnyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetExcludeFromAnyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_SetExcludeFromAnyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_SetExcludeFromAnyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_SetStayActiveOnStateChange_Statics
	{
		struct SMStateInstance_Base_eventSetStayActiveOnStateChange_Parms
		{
			bool bValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SetStayActiveOnStateChange_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USMStateInstance_Base_SetStayActiveOnStateChange_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventSetStayActiveOnStateChange_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_SetStayActiveOnStateChange_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventSetStayActiveOnStateChange_Parms), &Z_Construct_UFunction_USMStateInstance_Base_SetStayActiveOnStateChange_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SetStayActiveOnStateChange_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetStayActiveOnStateChange_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_SetStayActiveOnStateChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_SetStayActiveOnStateChange_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SetStayActiveOnStateChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public setter for #bStayActiveOnStateChange. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Public setter for #bStayActiveOnStateChange." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_SetStayActiveOnStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "SetStayActiveOnStateChange", nullptr, nullptr, sizeof(SMStateInstance_Base_eventSetStayActiveOnStateChange_Parms), Z_Construct_UFunction_USMStateInstance_Base_SetStayActiveOnStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetStayActiveOnStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SetStayActiveOnStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetStayActiveOnStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_SetStayActiveOnStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_SetStayActiveOnStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics
	{
		struct SMStateInstance_Base_eventSwitchToLinkedState_Parms
		{
			USMStateInstance_Base* NextStateInstance;
			bool bRequireTransitionToPass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NextStateInstance;
		static void NewProp_bRequireTransitionToPass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireTransitionToPass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_NextStateInstance = { "NextStateInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventSwitchToLinkedState_Parms, NextStateInstance), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_bRequireTransitionToPass_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventSwitchToLinkedState_Parms*)Obj)->bRequireTransitionToPass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_bRequireTransitionToPass = { "bRequireTransitionToPass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventSwitchToLinkedState_Parms), &Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_bRequireTransitionToPass_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventSwitchToLinkedState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventSwitchToLinkedState_Parms), &Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_NextStateInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_bRequireTransitionToPass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Forcibly move to the next state providing this state is active and a transition is directly connecting the states.\n\x09 * @param NextStateInstance The state node instance to switch to.\n\x09 * @param bRequireTransitionToPass Will evaluate the transition and only switch states if it passes.\n\x09 *\n\x09 * @return True if the active state was switched.\n\x09 */" },
		{ "CPP_Default_bRequireTransitionToPass", "true" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Forcibly move to the next state providing this state is active and a transition is directly connecting the states.\n@param NextStateInstance The state node instance to switch to.\n@param bRequireTransitionToPass Will evaluate the transition and only switch states if it passes.\n\n@return True if the active state was switched." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "SwitchToLinkedState", nullptr, nullptr, sizeof(SMStateInstance_Base_eventSwitchToLinkedState_Parms), Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics
	{
		struct SMStateInstance_Base_eventSwitchToLinkedStateByName_Parms
		{
			FString NextStateName;
			bool bRequireTransitionToPass;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextStateName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NextStateName;
		static void NewProp_bRequireTransitionToPass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireTransitionToPass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::NewProp_NextStateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::NewProp_NextStateName = { "NextStateName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventSwitchToLinkedStateByName_Parms, NextStateName), METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::NewProp_NextStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::NewProp_NextStateName_MetaData)) };
	void Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::NewProp_bRequireTransitionToPass_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventSwitchToLinkedStateByName_Parms*)Obj)->bRequireTransitionToPass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::NewProp_bRequireTransitionToPass = { "bRequireTransitionToPass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventSwitchToLinkedStateByName_Parms), &Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::NewProp_bRequireTransitionToPass_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventSwitchToLinkedStateByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventSwitchToLinkedStateByName_Parms), &Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::NewProp_NextStateName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::NewProp_bRequireTransitionToPass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Forcibly move to the next state providing this state is active and a transition is directly connecting the states.\n\x09 * @param NextStateName The name of the state to switch to.\n\x09 * @param bRequireTransitionToPass Will evaluate the transition and only switch states if it passes.\n\x09 *\n\x09 * @return True if the active state was switched.\n\x09 */" },
		{ "CPP_Default_bRequireTransitionToPass", "true" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Forcibly move to the next state providing this state is active and a transition is directly connecting the states.\n@param NextStateName The name of the state to switch to.\n@param bRequireTransitionToPass Will evaluate the transition and only switch states if it passes.\n\n@return True if the active state was switched." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "SwitchToLinkedStateByName", nullptr, nullptr, sizeof(SMStateInstance_Base_eventSwitchToLinkedStateByName_Parms), Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMStateInstance_Base_NoRegister()
	{
		return USMStateInstance_Base::StaticClass();
	}
	struct Z_Construct_UClass_USMStateInstance_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvalGraphsOnStart_MetaData[];
#endif
		static void NewProp_bEvalGraphsOnStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvalGraphsOnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvalGraphsOnUpdate_MetaData[];
#endif
		static void NewProp_bEvalGraphsOnUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvalGraphsOnUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvalGraphsOnEnd_MetaData[];
#endif
		static void NewProp_bEvalGraphsOnEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvalGraphsOnEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvalGraphsOnRootStateMachineStart_MetaData[];
#endif
		static void NewProp_bEvalGraphsOnRootStateMachineStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvalGraphsOnRootStateMachineStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvalGraphsOnRootStateMachineStop_MetaData[];
#endif
		static void NewProp_bEvalGraphsOnRootStateMachineStop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvalGraphsOnRootStateMachineStop;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeEndStateColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeEndStateColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionRules_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionRules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideFromContextMenuIfRulesFail_MetaData[];
#endif
		static void NewProp_bHideFromContextMenuIfRulesFail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideFromContextMenuIfRulesFail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRegisterWithContextMenu_MetaData[];
#endif
		static void NewProp_bRegisterWithContextMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegisterWithContextMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDisplayNameOnly_MetaData[];
#endif
		static void NewProp_bShowDisplayNameOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDisplayNameOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayNameWidget_MetaData[];
#endif
		static void NewProp_bDisplayNameWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayNameWidget;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysUpdate_MetaData[];
#endif
		static void NewProp_bAlwaysUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableTickTransitionEvaluation_MetaData[];
#endif
		static void NewProp_bDisableTickTransitionEvaluation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableTickTransitionEvaluation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultToParallel_MetaData[];
#endif
		static void NewProp_bDefaultToParallel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultToParallel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowParallelReentry_MetaData[];
#endif
		static void NewProp_bAllowParallelReentry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowParallelReentry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStayActiveOnStateChange_MetaData[];
#endif
		static void NewProp_bStayActiveOnStateChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStayActiveOnStateChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvalTransitionsOnStart_MetaData[];
#endif
		static void NewProp_bEvalTransitionsOnStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvalTransitionsOnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeFromAnyState_MetaData[];
#endif
		static void NewProp_bExcludeFromAnyState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeFromAnyState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateBeginEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateBeginEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateUpdateEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateUpdateEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateEndEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateEndEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMStateInstance_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMNodeInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMStateInstance_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMStateInstance_Base_EvaluateTransitions, "EvaluateTransitions" }, // 9552362
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetAllowParallelReentry, "GetAllowParallelReentry" }, // 253625954
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetAlwaysUpdate, "GetAlwaysUpdate" }, // 1984887957
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetDefaultToParallel, "GetDefaultToParallel" }, // 2599728987
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetDisableTickTransitionEvaluation, "GetDisableTickTransitionEvaluation" }, // 3428179808
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetEvalTransitionsOnStart, "GetEvalTransitionsOnStart" }, // 3306189384
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetExcludeFromAnyState, "GetExcludeFromAnyState" }, // 3629213308
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions, "GetIncomingTransitions" }, // 2848819294
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByName, "GetNextStateByName" }, // 1564471600
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex, "GetNextStateByTransitionIndex" }, // 3524396505
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions, "GetOutgoingTransitions" }, // 1257396791
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveState, "GetPreviousActiveState" }, // 2592564888
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetPreviousActiveTransition, "GetPreviousActiveTransition" }, // 1190593591
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetPreviousStateByName, "GetPreviousStateByName" }, // 3355490543
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetServerTimeInState, "GetServerTimeInState" }, // 462933837
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetStartTime, "GetStartTime" }, // 2646395189
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo, "GetStateInfo" }, // 201412171
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetStayActiveOnStateChange, "GetStayActiveOnStateChange" }, // 1038301107
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex, "GetTransitionByIndex" }, // 1491916437
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake, "GetTransitionToTake" }, // 4074902462
		{ &Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine, "IsStateMachine" }, // 3576631669
		{ &Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStart, "OnRootStateMachineStart" }, // 3332645890
		{ &Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStop, "OnRootStateMachineStop" }, // 1473525362
		{ &Z_Construct_UFunction_USMStateInstance_Base_OnStateBegin, "OnStateBegin" }, // 776444703
		{ &Z_Construct_UFunction_USMStateInstance_Base_OnStateEnd, "OnStateEnd" }, // 3277208521
		{ &Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate, "OnStateUpdate" }, // 1531221007
		{ &Z_Construct_UFunction_USMStateInstance_Base_SetActive, "SetActive" }, // 3262901416
		{ &Z_Construct_UFunction_USMStateInstance_Base_SetAllowParallelReentry, "SetAllowParallelReentry" }, // 3797524310
		{ &Z_Construct_UFunction_USMStateInstance_Base_SetAlwaysUpdate, "SetAlwaysUpdate" }, // 1703356239
		{ &Z_Construct_UFunction_USMStateInstance_Base_SetDefaultToParallel, "SetDefaultToParallel" }, // 2797800859
		{ &Z_Construct_UFunction_USMStateInstance_Base_SetDisableTickTransitionEvaluation, "SetDisableTickTransitionEvaluation" }, // 2088632386
		{ &Z_Construct_UFunction_USMStateInstance_Base_SetEvalTransitionsOnStart, "SetEvalTransitionsOnStart" }, // 2711955506
		{ &Z_Construct_UFunction_USMStateInstance_Base_SetExcludeFromAnyState, "SetExcludeFromAnyState" }, // 1374368522
		{ &Z_Construct_UFunction_USMStateInstance_Base_SetStayActiveOnStateChange, "SetStayActiveOnStateChange" }, // 4033275393
		{ &Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState, "SwitchToLinkedState" }, // 1976222740
		{ &Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedStateByName, "SwitchToLinkedStateByName" }, // 3402884759
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LogicDriver" },
		{ "Comment", "/**\n * [Logic Driver] The abstract base class for all state type nodes including state machine nodes and conduits.\n *\n * To expose native member properties on the node they must be marked BlueprintReadWrite and not contain the meta keyword HideOnNode.\n */" },
		{ "DisplayName", "State Class Base" },
		{ "HideCategories", "SMStateInstance_Base SMNodeInstance" },
		{ "IncludePath", "Nodes/States/SMStateInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "[Logic Driver] The abstract base class for all state type nodes including state machine nodes and conduits.\n\nTo expose native member properties on the node they must be marked BlueprintReadWrite and not contain the meta keyword HideOnNode." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnStart_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/**\n\x09 * Should graph properties evaluate when initializing or on state start.\n\x09 */" },
		{ "DisplayName", "Auto Eval on Start" },
		{ "EditCondition", "bAutoEvalExposedProperties" },
		{ "HideOnNode", "" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Should graph properties evaluate when initializing or on state start." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnStart_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bEvalGraphsOnStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnStart = { "bEvalGraphsOnStart", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnUpdate_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/**\n\x09 * Should graph properties evaluate on state update.\n\x09 */" },
		{ "DisplayName", "Auto Eval on Update" },
		{ "EditCondition", "bAutoEvalExposedProperties" },
		{ "HideOnNode", "" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Should graph properties evaluate on state update." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnUpdate_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bEvalGraphsOnUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnUpdate = { "bEvalGraphsOnUpdate", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnEnd_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/**\n\x09 * Should graph properties evaluate on state end.\n\x09 */" },
		{ "DisplayName", "Auto Eval on End" },
		{ "EditCondition", "bAutoEvalExposedProperties" },
		{ "HideOnNode", "" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Should graph properties evaluate on state end." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnEnd_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bEvalGraphsOnEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnEnd = { "bEvalGraphsOnEnd", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStart_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/**\n\x09 * Should graph properties evaluate when the root state machine starts.\n\x09 */" },
		{ "DisplayName", "Auto Eval on Root State Machine Start" },
		{ "EditCondition", "bAutoEvalExposedProperties" },
		{ "HideOnNode", "" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Should graph properties evaluate when the root state machine starts." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStart_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bEvalGraphsOnRootStateMachineStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStart = { "bEvalGraphsOnRootStateMachineStart", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStop_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/**\n\x09 * Should graph properties evaluate when the root state machine stops.\n\x09 */" },
		{ "DisplayName", "Auto Eval on Root State Machine Stop" },
		{ "EditCondition", "bAutoEvalExposedProperties" },
		{ "HideOnNode", "" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Should graph properties evaluate when the root state machine stops." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStop_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bEvalGraphsOnRootStateMachineStop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStop = { "bEvalGraphsOnRootStateMachineStop", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStop_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_NodeEndStateColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** The color this node should be when it is an end state. */" },
		{ "DisplayPriority", "2" },
		{ "EditCondition", "bUseCustomColors" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "The color this node should be when it is an end state." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_NodeEndStateColor = { "NodeEndStateColor", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateInstance_Base, NodeEndStateColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_NodeEndStateColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_NodeEndStateColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_ConnectionRules_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Define what types of connections are allowed. Default is all. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Define what types of connections are allowed. Default is all." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_ConnectionRules = { "ConnectionRules", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateInstance_Base, ConnectionRules), Z_Construct_UScriptStruct_FSMStateConnectionValidator, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_ConnectionRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_ConnectionRules_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bHideFromContextMenuIfRulesFail_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Restrict placement unless rules can be verified. Ex: If the rule says this can only be connected from a state node, then this won't show\n\x09 * in the context menu unless dragging from a state node. */" },
		{ "EditCondition", "bRegisterWithContextMenu" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Restrict placement unless rules can be verified. Ex: If the rule says this can only be connected from a state node, then this won't show\nin the context menu unless dragging from a state node." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bHideFromContextMenuIfRulesFail_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bHideFromContextMenuIfRulesFail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bHideFromContextMenuIfRulesFail = { "bHideFromContextMenuIfRulesFail", nullptr, (EPropertyFlags)0x00200c0800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bHideFromContextMenuIfRulesFail_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bHideFromContextMenuIfRulesFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bHideFromContextMenuIfRulesFail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bRegisterWithContextMenu_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Allows this node to be displayed in the graph context menu when placing nodes. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Allows this node to be displayed in the graph context menu when placing nodes." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bRegisterWithContextMenu_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bRegisterWithContextMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bRegisterWithContextMenu = { "bRegisterWithContextMenu", nullptr, (EPropertyFlags)0x00200c0800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bRegisterWithContextMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bRegisterWithContextMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bRegisterWithContextMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bShowDisplayNameOnly_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** When true only the Name set above will be displayed. The node cannot be renamed. This allows duplicate names to be displayed in the same graph. The node's internal name and local graph name will still be unique. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "When true only the Name set above will be displayed. The node cannot be renamed. This allows duplicate names to be displayed in the same graph. The node's internal name and local graph name will still be unique." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bShowDisplayNameOnly_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bShowDisplayNameOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bShowDisplayNameOnly = { "bShowDisplayNameOnly", nullptr, (EPropertyFlags)0x00200c0800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bShowDisplayNameOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bShowDisplayNameOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bShowDisplayNameOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisplayNameWidget_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Whether the name of this state should be visible on the node. It can still be changed in the details panel or by renaming the state graph. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Whether the name of this state should be visible on the node. It can still be changed in the details panel or by renaming the state graph." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisplayNameWidget_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bDisplayNameWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisplayNameWidget = { "bDisplayNameWidget", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisplayNameWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisplayNameWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisplayNameWidget_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAlwaysUpdate_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "/**\n\x09 * Always update the state at least once before ending.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "Always update the state at least once before ending." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAlwaysUpdate_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bAlwaysUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAlwaysUpdate = { "bAlwaysUpdate", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAlwaysUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAlwaysUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAlwaysUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisableTickTransitionEvaluation_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "/**\n\x09 * Prevents conditional transitions for this state from being evaluated on Tick.\n\x09 * This is good to use if the transitions leading out of the state are event based\n\x09 * or if you are manually calling EvaluateTransitions from a state instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "Prevents conditional transitions for this state from being evaluated on Tick.\nThis is good to use if the transitions leading out of the state are event based\nor if you are manually calling EvaluateTransitions from a state instance." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisableTickTransitionEvaluation_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bDisableTickTransitionEvaluation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisableTickTransitionEvaluation = { "bDisableTickTransitionEvaluation", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisableTickTransitionEvaluation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisableTickTransitionEvaluation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisableTickTransitionEvaluation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDefaultToParallel_MetaData[] = {
		{ "Category", "Parallel States" },
		{ "Comment", "/**\n\x09 * Sets all current and future transitions from this state to run in parallel. Conduit nodes are not supported.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "Sets all current and future transitions from this state to run in parallel. Conduit nodes are not supported." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDefaultToParallel_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bDefaultToParallel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDefaultToParallel = { "bDefaultToParallel", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDefaultToParallel_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDefaultToParallel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDefaultToParallel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAllowParallelReentry_MetaData[] = {
		{ "Category", "Parallel States" },
		{ "Comment", "/**\n\x09 * If this state can be reentered from a parallel state if this state is already active. This will not call On State End but will call On State Begin.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "If this state can be reentered from a parallel state if this state is already active. This will not call On State End but will call On State Begin." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAllowParallelReentry_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bAllowParallelReentry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAllowParallelReentry = { "bAllowParallelReentry", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAllowParallelReentry_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAllowParallelReentry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAllowParallelReentry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bStayActiveOnStateChange_MetaData[] = {
		{ "Category", "Parallel States" },
		{ "Comment", "/**\n\x09 * If the state should remain active even after a transition is taken from this state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "If the state should remain active even after a transition is taken from this state." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bStayActiveOnStateChange_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bStayActiveOnStateChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bStayActiveOnStateChange = { "bStayActiveOnStateChange", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bStayActiveOnStateChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bStayActiveOnStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bStayActiveOnStateChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalTransitionsOnStart_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "/**\n\x09 * Allows transitions to be evaluated in the same tick as Start State.\n\x09 * Normally transitions are evaluated on the second tick.\n\x09 * This can be chained with other nodes that have this checked making it\n\x09   possible to evaluate multiple nodes and transitions in a single tick.\n\x09 \n\x09 * When using this consider performance implications and any potential\n\x09   infinite loops such as if you are using a self transition on this state.\n\n\x09 * Individual transitions can modify this behavior with bCanEvalWithStartState.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "Allows transitions to be evaluated in the same tick as Start State.\nNormally transitions are evaluated on the second tick.\nThis can be chained with other nodes that have this checked making it\n          possible to evaluate multiple nodes and transitions in a single tick.\n\nWhen using this consider performance implications and any potential\n          infinite loops such as if you are using a self transition on this state.\n\nIndividual transitions can modify this behavior with bCanEvalWithStartState." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalTransitionsOnStart_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bEvalTransitionsOnStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalTransitionsOnStart = { "bEvalTransitionsOnStart", nullptr, (EPropertyFlags)0x0040040000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalTransitionsOnStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalTransitionsOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalTransitionsOnStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bExcludeFromAnyState_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "/**\n\x09 * Prevents the `Any State` node from adding transitions to this node.\n\x09 * This can be useful for maintaining end states.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "Prevents the `Any State` node from adding transitions to this node.\nThis can be useful for maintaining end states." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bExcludeFromAnyState_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bExcludeFromAnyState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bExcludeFromAnyState = { "bExcludeFromAnyState", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bExcludeFromAnyState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bExcludeFromAnyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bExcludeFromAnyState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateBeginEvent_MetaData[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called right before the state has started. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called right before the state has started." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateBeginEvent = { "OnStateBeginEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateInstance_Base, OnStateBeginEvent), Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateBeginEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateBeginEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateUpdateEvent_MetaData[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called before the state has updated. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called before the state has updated." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateUpdateEvent = { "OnStateUpdateEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateInstance_Base, OnStateUpdateEvent), Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateUpdateEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateUpdateEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateEndEvent_MetaData[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called before the state has ended. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called before the state has ended." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateEndEvent = { "OnStateEndEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateInstance_Base, OnStateEndEvent), Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateEndEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateEndEvent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMStateInstance_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStop,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_NodeEndStateColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_ConnectionRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bHideFromContextMenuIfRulesFail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bRegisterWithContextMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bShowDisplayNameOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisplayNameWidget,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAlwaysUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisableTickTransitionEvaluation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDefaultToParallel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAllowParallelReentry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bStayActiveOnStateChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalTransitionsOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bExcludeFromAnyState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateBeginEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateUpdateEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateEndEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMStateInstance_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMStateInstance_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMStateInstance_Base_Statics::ClassParams = {
		&USMStateInstance_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USMStateInstance_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMStateInstance_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMStateInstance_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMStateInstance_Base, 837602592);
	template<> SMSYSTEM_API UClass* StaticClass<USMStateInstance_Base>()
	{
		return USMStateInstance_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMStateInstance_Base(Z_Construct_UClass_USMStateInstance_Base, &USMStateInstance_Base::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMStateInstance_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMStateInstance_Base);
	DEFINE_FUNCTION(USMStateInstance::execGetStateStackCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStateStackCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance::execGetStateIndexInStack)
	{
		P_GET_OBJECT(USMStateInstance_Base,Z_Param_StateInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStateIndexInStack(Z_Param_StateInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance::execGetAllStatesInStackOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_StateClass);
		P_GET_TARRAY_REF(USMStateInstance_Base*,Z_Param_Out_StateStackInstances);
		P_GET_UBOOL(Z_Param_bIncludeChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllStatesInStackOfClass(Z_Param_StateClass,Z_Param_Out_StateStackInstances,Z_Param_bIncludeChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance::execGetStackOwnerInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetStackOwnerInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance::execGetStateInStackByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_StateClass);
		P_GET_UBOOL(Z_Param_bIncludeChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetStateInStackByClass(Z_Param_StateClass,Z_Param_bIncludeChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance::execGetStateInStack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetStateInStack(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance::execGetAllStateStackInstances)
	{
		P_GET_TARRAY_REF(USMStateInstance_Base*,Z_Param_Out_StateStackInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllStateStackInstances(Z_Param_Out_StateStackInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance::execOnStateShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateShutdown_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance::execOnStateInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateInitialized_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USMStateInstance_OnStateInitialized = FName(TEXT("OnStateInitialized"));
	void USMStateInstance::OnStateInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateInstance_OnStateInitialized),NULL);
	}
	static FName NAME_USMStateInstance_OnStateShutdown = FName(TEXT("OnStateShutdown"));
	void USMStateInstance::OnStateShutdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateInstance_OnStateShutdown),NULL);
	}
	void USMStateInstance::StaticRegisterNativesUSMStateInstance()
	{
		UClass* Class = USMStateInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllStatesInStackOfClass", &USMStateInstance::execGetAllStatesInStackOfClass },
			{ "GetAllStateStackInstances", &USMStateInstance::execGetAllStateStackInstances },
			{ "GetStackOwnerInstance", &USMStateInstance::execGetStackOwnerInstance },
			{ "GetStateIndexInStack", &USMStateInstance::execGetStateIndexInStack },
			{ "GetStateInStack", &USMStateInstance::execGetStateInStack },
			{ "GetStateInStackByClass", &USMStateInstance::execGetStateInStackByClass },
			{ "GetStateStackCount", &USMStateInstance::execGetStateStackCount },
			{ "OnStateInitialized", &USMStateInstance::execOnStateInitialized },
			{ "OnStateShutdown", &USMStateInstance::execOnStateShutdown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics
	{
		struct SMStateInstance_eventGetAllStatesInStackOfClass_Parms
		{
			TSubclassOf<USMStateInstance>  StateClass;
			TArray<USMStateInstance_Base*> StateStackInstances;
			bool bIncludeChildren;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_StateClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateStackInstances_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StateStackInstances;
		static void NewProp_bIncludeChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildren;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_StateClass = { "StateClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetAllStatesInStackOfClass_Parms, StateClass), Z_Construct_UClass_USMStateInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_StateStackInstances_Inner = { "StateStackInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_StateStackInstances = { "StateStackInstances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetAllStatesInStackOfClass_Parms, StateStackInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_bIncludeChildren_SetBit(void* Obj)
	{
		((SMStateInstance_eventGetAllStatesInStackOfClass_Parms*)Obj)->bIncludeChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_bIncludeChildren = { "bIncludeChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_eventGetAllStatesInStackOfClass_Parms), &Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_bIncludeChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_StateClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_StateStackInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_StateStackInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_bIncludeChildren,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve all states that match the given class.\n\x09 *\n\x09 * @param StateClass The state class to search for.\n\x09 * @param bIncludeChildren If children of the given class can be included.\n\x09 * @param StateStackInstances [Out] State stack instances matching the given class.\n\x09 */" },
		{ "CPP_Default_bIncludeChildren", "false" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Retrieve all states that match the given class.\n\n@param StateClass The state class to search for.\n@param bIncludeChildren If children of the given class can be included.\n@param StateStackInstances [Out] State stack instances matching the given class." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance, nullptr, "GetAllStatesInStackOfClass", nullptr, nullptr, sizeof(SMStateInstance_eventGetAllStatesInStackOfClass_Parms), Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics
	{
		struct SMStateInstance_eventGetAllStateStackInstances_Parms
		{
			TArray<USMStateInstance_Base*> StateStackInstances;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateStackInstances_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StateStackInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::NewProp_StateStackInstances_Inner = { "StateStackInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::NewProp_StateStackInstances = { "StateStackInstances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetAllStateStackInstances_Parms, StateStackInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::NewProp_StateStackInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::NewProp_StateStackInstances,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve all state instances in the state stack.\n\x09 *\n\x09 * @param StateStackInstances [Out] State stack instances in their correct order.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Retrieve all state instances in the state stack.\n\n@param StateStackInstances [Out] State stack instances in their correct order." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance, nullptr, "GetAllStateStackInstances", nullptr, nullptr, sizeof(SMStateInstance_eventGetAllStateStackInstances_Parms), Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics
	{
		struct SMStateInstance_eventGetStackOwnerInstance_Parms
		{
			USMStateInstance_Base* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetStackOwnerInstance_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve the owning node instance of a state stack. If this is called from the main node instance\n\x09 * it will return itself.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Retrieve the owning node instance of a state stack. If this is called from the main node instance\nit will return itself." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance, nullptr, "GetStackOwnerInstance", nullptr, nullptr, sizeof(SMStateInstance_eventGetStackOwnerInstance_Parms), Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_GetStateIndexInStack_Statics
	{
		struct SMStateInstance_eventGetStateIndexInStack_Parms
		{
			USMStateInstance_Base* StateInstance;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateInstance;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_GetStateIndexInStack_Statics::NewProp_StateInstance = { "StateInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetStateIndexInStack_Parms, StateInstance), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USMStateInstance_GetStateIndexInStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetStateIndexInStack_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_GetStateIndexInStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetStateIndexInStack_Statics::NewProp_StateInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetStateIndexInStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_GetStateIndexInStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09* Retrieve the index of a state stack instance.\n\x09* O(n).\n\x09*\n\x09* @param StateInstance The state instance to lookup in the stack.\n\x09* @return The index of the state in the stack. -1 if not found or is the base state instance.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Retrieve the index of a state stack instance.\nO(n).\n\n@param StateInstance The state instance to lookup in the stack.\n@return The index of the state in the stack. -1 if not found or is the base state instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_GetStateIndexInStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance, nullptr, "GetStateIndexInStack", nullptr, nullptr, sizeof(SMStateInstance_eventGetStateIndexInStack_Parms), Z_Construct_UFunction_USMStateInstance_GetStateIndexInStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetStateIndexInStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_GetStateIndexInStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetStateIndexInStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_GetStateIndexInStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_GetStateIndexInStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics
	{
		struct SMStateInstance_eventGetStateInStack_Parms
		{
			int32 Index;
			USMStateInstance_Base* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetStateInStack_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetStateInStack_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve a state instance from within the state stack.\n\x09 * \n\x09 * @param Index the index of the array.\n\x09 * @return the state if the index is valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Retrieve a state instance from within the state stack.\n\n@param Index the index of the array.\n@return the state if the index is valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance, nullptr, "GetStateInStack", nullptr, nullptr, sizeof(SMStateInstance_eventGetStateInStack_Parms), Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_GetStateInStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics
	{
		struct SMStateInstance_eventGetStateInStackByClass_Parms
		{
			TSubclassOf<USMStateInstance>  StateClass;
			bool bIncludeChildren;
			USMStateInstance_Base* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_StateClass;
		static void NewProp_bIncludeChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildren;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::NewProp_StateClass = { "StateClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetStateInStackByClass_Parms, StateClass), Z_Construct_UClass_USMStateInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::NewProp_bIncludeChildren_SetBit(void* Obj)
	{
		((SMStateInstance_eventGetStateInStackByClass_Parms*)Obj)->bIncludeChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::NewProp_bIncludeChildren = { "bIncludeChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_eventGetStateInStackByClass_Parms), &Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::NewProp_bIncludeChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetStateInStackByClass_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::NewProp_StateClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::NewProp_bIncludeChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve the first stack instance of a given class.\n\x09 *\n\x09 * @param StateClass The state class to search for.\n\x09 * @param bIncludeChildren If children of the given class can be included.\n\x09 * @return the first state that matches the class.\n\x09 */" },
		{ "CPP_Default_bIncludeChildren", "false" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Retrieve the first stack instance of a given class.\n\n@param StateClass The state class to search for.\n@param bIncludeChildren If children of the given class can be included.\n@return the first state that matches the class." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance, nullptr, "GetStateInStackByClass", nullptr, nullptr, sizeof(SMStateInstance_eventGetStateInStackByClass_Parms), Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics
	{
		struct SMStateInstance_eventGetStateStackCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetStateStackCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** The total number of states in the state stack. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "The total number of states in the state stack." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance, nullptr, "GetStateStackCount", nullptr, nullptr, sizeof(SMStateInstance_eventGetStateStackCount_Parms), Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_GetStateStackCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_OnStateInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_OnStateInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Instance" },
		{ "Comment", "/** Called before OnStateBegin and before transitions are initialized. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called before OnStateBegin and before transitions are initialized." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_OnStateInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance, nullptr, "OnStateInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_OnStateInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_OnStateInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_OnStateInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_OnStateInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_OnStateShutdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_OnStateShutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Instance" },
		{ "Comment", "/** Called after OnStateEnd and after transitions are shutdown. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called after OnStateEnd and after transitions are shutdown." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_OnStateShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance, nullptr, "OnStateShutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_OnStateShutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_OnStateShutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_OnStateShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_OnStateShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMStateInstance_NoRegister()
	{
		return USMStateInstance::StaticClass();
	}
	struct Z_Construct_UClass_USMStateInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMStateInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMStateInstance_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMStateInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass, "GetAllStatesInStackOfClass" }, // 4142555943
		{ &Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances, "GetAllStateStackInstances" }, // 3252431304
		{ &Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance, "GetStackOwnerInstance" }, // 2463693411
		{ &Z_Construct_UFunction_USMStateInstance_GetStateIndexInStack, "GetStateIndexInStack" }, // 1328174478
		{ &Z_Construct_UFunction_USMStateInstance_GetStateInStack, "GetStateInStack" }, // 1917669547
		{ &Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass, "GetStateInStackByClass" }, // 1065939871
		{ &Z_Construct_UFunction_USMStateInstance_GetStateStackCount, "GetStateStackCount" }, // 2291949007
		{ &Z_Construct_UFunction_USMStateInstance_OnStateInitialized, "OnStateInitialized" }, // 3417038368
		{ &Z_Construct_UFunction_USMStateInstance_OnStateShutdown, "OnStateShutdown" }, // 1083478955
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LogicDriver" },
		{ "Comment", "/**\n * The base class for state nodes. This is where most execution logic should be defined.\n */" },
		{ "DisplayName", "State Class" },
		{ "HideCategories", "SMStateInstance SMStateInstance_Base SMNodeInstance" },
		{ "IncludePath", "Nodes/States/SMStateInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "The base class for state nodes. This is where most execution logic should be defined." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMStateInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMStateInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMStateInstance_Statics::ClassParams = {
		&USMStateInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMStateInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMStateInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMStateInstance, 3309474445);
	template<> SMSYSTEM_API UClass* StaticClass<USMStateInstance>()
	{
		return USMStateInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMStateInstance(Z_Construct_UClass_USMStateInstance, &USMStateInstance::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMStateInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMStateInstance);
	void USMEntryStateInstance::StaticRegisterNativesUSMEntryStateInstance()
	{
	}
	UClass* Z_Construct_UClass_USMEntryStateInstance_NoRegister()
	{
		return USMEntryStateInstance::StaticClass();
	}
	struct Z_Construct_UClass_USMEntryStateInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMEntryStateInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMStateInstance_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMEntryStateInstance_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "LogicDriver" },
		{ "Comment", "/**\n * Represents an entry state on the state machine graph. Used for rule behavior.\n */" },
		{ "DisplayName", "Entry State" },
		{ "HideCategories", "SMEntryStateInstance SMStateInstance_Base SMNodeInstance" },
		{ "IncludePath", "Nodes/States/SMStateInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Represents an entry state on the state machine graph. Used for rule behavior." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMEntryStateInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMEntryStateInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMEntryStateInstance_Statics::ClassParams = {
		&USMEntryStateInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008800A8u,
		METADATA_PARAMS(Z_Construct_UClass_USMEntryStateInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMEntryStateInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMEntryStateInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMEntryStateInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMEntryStateInstance, 1485009542);
	template<> SMSYSTEM_API UClass* StaticClass<USMEntryStateInstance>()
	{
		return USMEntryStateInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMEntryStateInstance(Z_Construct_UClass_USMEntryStateInstance, &USMEntryStateInstance::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMEntryStateInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMEntryStateInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
