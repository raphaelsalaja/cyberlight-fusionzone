// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Nodes/Transitions/SMTransitionInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMTransitionInstance() {}
// Cross Module References
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMTransitionInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMTransitionInstance();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeInstance();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_Base_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMTransitionInfo();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMTransitionConnectionValidator();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics
	{
		struct _Script_SMSystem_eventOnTransitionEnteredSignature_Parms
		{
			USMTransitionInstance* TransitionInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TransitionInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::NewProp_TransitionInstance = { "TransitionInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnTransitionEnteredSignature_Parms, TransitionInstance), Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::NewProp_TransitionInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SMSystem, nullptr, "OnTransitionEnteredSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SMSystem_eventOnTransitionEnteredSignature_Parms), Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execSetCanEvalWithStartState)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanEvalWithStartState(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetCanEvalWithStartState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanEvalWithStartState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execSetCanEvaluateFromEvent)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanEvaluateFromEvent(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetCanEvaluateFromEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanEvaluateFromEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execSetEvalIfNextStateActive)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEvalIfNextStateActive(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetEvalIfNextStateActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEvalIfNextStateActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execSetRunParallel)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRunParallel(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetRunParallel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRunParallel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execSetPriorityOrder)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPriorityOrder(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetPriorityOrder)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPriorityOrder();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetCanEvaluate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanEvaluate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execSetCanEvaluate)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanEvaluate(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execEvaluateFromManuallyBoundEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EvaluateFromManuallyBoundEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execDoesTransitionPass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesTransitionPass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetServerTimestamp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetServerTimestamp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetTransitionInfo)
	{
		P_GET_STRUCT_REF(FSMTransitionInfo,Z_Param_Out_Transition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTransitionInfo(Z_Param_Out_Transition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetDestinationStateForActiveTransition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetDestinationStateForActiveTransition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetSourceStateForActiveTransition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetSourceStateForActiveTransition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetNextStateInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetNextStateInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetPreviousStateInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetPreviousStateInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execOnTransitionShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTransitionShutdown_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execOnTransitionInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTransitionInitialized_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execOnTransitionEntered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTransitionEntered_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execCanEnterTransition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanEnterTransition_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USMTransitionInstance_CanEnterTransition = FName(TEXT("CanEnterTransition"));
	bool USMTransitionInstance::CanEnterTransition() const
	{
		SMTransitionInstance_eventCanEnterTransition_Parms Parms;
		const_cast<USMTransitionInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_USMTransitionInstance_CanEnterTransition),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USMTransitionInstance_OnTransitionEntered = FName(TEXT("OnTransitionEntered"));
	void USMTransitionInstance::OnTransitionEntered()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMTransitionInstance_OnTransitionEntered),NULL);
	}
	static FName NAME_USMTransitionInstance_OnTransitionInitialized = FName(TEXT("OnTransitionInitialized"));
	void USMTransitionInstance::OnTransitionInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMTransitionInstance_OnTransitionInitialized),NULL);
	}
	static FName NAME_USMTransitionInstance_OnTransitionShutdown = FName(TEXT("OnTransitionShutdown"));
	void USMTransitionInstance::OnTransitionShutdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMTransitionInstance_OnTransitionShutdown),NULL);
	}
	void USMTransitionInstance::StaticRegisterNativesUSMTransitionInstance()
	{
		UClass* Class = USMTransitionInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanEnterTransition", &USMTransitionInstance::execCanEnterTransition },
			{ "DoesTransitionPass", &USMTransitionInstance::execDoesTransitionPass },
			{ "EvaluateFromManuallyBoundEvent", &USMTransitionInstance::execEvaluateFromManuallyBoundEvent },
			{ "GetCanEvaluate", &USMTransitionInstance::execGetCanEvaluate },
			{ "GetCanEvaluateFromEvent", &USMTransitionInstance::execGetCanEvaluateFromEvent },
			{ "GetCanEvalWithStartState", &USMTransitionInstance::execGetCanEvalWithStartState },
			{ "GetDestinationStateForActiveTransition", &USMTransitionInstance::execGetDestinationStateForActiveTransition },
			{ "GetEvalIfNextStateActive", &USMTransitionInstance::execGetEvalIfNextStateActive },
			{ "GetNextStateInstance", &USMTransitionInstance::execGetNextStateInstance },
			{ "GetPreviousStateInstance", &USMTransitionInstance::execGetPreviousStateInstance },
			{ "GetPriorityOrder", &USMTransitionInstance::execGetPriorityOrder },
			{ "GetRunParallel", &USMTransitionInstance::execGetRunParallel },
			{ "GetServerTimestamp", &USMTransitionInstance::execGetServerTimestamp },
			{ "GetSourceStateForActiveTransition", &USMTransitionInstance::execGetSourceStateForActiveTransition },
			{ "GetTransitionInfo", &USMTransitionInstance::execGetTransitionInfo },
			{ "OnTransitionEntered", &USMTransitionInstance::execOnTransitionEntered },
			{ "OnTransitionInitialized", &USMTransitionInstance::execOnTransitionInitialized },
			{ "OnTransitionShutdown", &USMTransitionInstance::execOnTransitionShutdown },
			{ "SetCanEvaluate", &USMTransitionInstance::execSetCanEvaluate },
			{ "SetCanEvaluateFromEvent", &USMTransitionInstance::execSetCanEvaluateFromEvent },
			{ "SetCanEvalWithStartState", &USMTransitionInstance::execSetCanEvalWithStartState },
			{ "SetEvalIfNextStateActive", &USMTransitionInstance::execSetEvalIfNextStateActive },
			{ "SetPriorityOrder", &USMTransitionInstance::execSetPriorityOrder },
			{ "SetRunParallel", &USMTransitionInstance::execSetRunParallel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMTransitionInstance_eventCanEnterTransition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMTransitionInstance_eventCanEnterTransition_Parms), &Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Conditional check to determine if the transition can be taken. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Conditional check to determine if the transition can be taken." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "CanEnterTransition", nullptr, nullptr, sizeof(SMTransitionInstance_eventCanEnterTransition_Parms), Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics
	{
		struct SMTransitionInstance_eventDoesTransitionPass_Parms
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
	void Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMTransitionInstance_eventDoesTransitionPass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMTransitionInstance_eventDoesTransitionPass_Parms), &Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Evaluates the transition's local graph which usually calls #CanEnterTransition of this instance.\n\x09 * This is equivalent to the state machine determining if a transition succeeds.\n\x09 *\n\x09 * This is best used from an external caller when checking a transition result.\n\x09 *\n\x09 * Do NOT call this from within CanEnterTransition of the instance or the local graph\n\x09 * or you may trigger an infinite loop.\n\x09 *\n\x09 * @return The transition result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Evaluates the transition's local graph which usually calls #CanEnterTransition of this instance.\nThis is equivalent to the state machine determining if a transition succeeds.\n\nThis is best used from an external caller when checking a transition result.\n\nDo NOT call this from within CanEnterTransition of the instance or the local graph\nor you may trigger an infinite loop.\n\n@return The transition result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "DoesTransitionPass", nullptr, nullptr, sizeof(SMTransitionInstance_eventDoesTransitionPass_Parms), Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_EvaluateFromManuallyBoundEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_EvaluateFromManuallyBoundEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * 1. Enables evaluation for this transition.\n\x09 * 2. Calls EvaluateTransitions from the owning state machine.\n\x09 * 3. Disables evaluation for this transition.\n\x09 * \n\x09 * Use at the end of execution from manually bound events.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "1. Enables evaluation for this transition.\n2. Calls EvaluateTransitions from the owning state machine.\n3. Disables evaluation for this transition.\n\nUse at the end of execution from manually bound events." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_EvaluateFromManuallyBoundEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "EvaluateFromManuallyBoundEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_EvaluateFromManuallyBoundEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_EvaluateFromManuallyBoundEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_EvaluateFromManuallyBoundEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_EvaluateFromManuallyBoundEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics
	{
		struct SMTransitionInstance_eventGetCanEvaluate_Parms
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
	void Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMTransitionInstance_eventGetCanEvaluate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMTransitionInstance_eventGetCanEvaluate_Parms), &Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Check whether this transition is allowed to evaluate. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Check whether this transition is allowed to evaluate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetCanEvaluate", nullptr, nullptr, sizeof(SMTransitionInstance_eventGetCanEvaluate_Parms), Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics
	{
		struct SMTransitionInstance_eventGetCanEvaluateFromEvent_Parms
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
	void Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMTransitionInstance_eventGetCanEvaluateFromEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMTransitionInstance_eventGetCanEvaluateFromEvent_Parms), &Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public getter for #bCanEvaluateFromEvent. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Public getter for #bCanEvaluateFromEvent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetCanEvaluateFromEvent", nullptr, nullptr, sizeof(SMTransitionInstance_eventGetCanEvaluateFromEvent_Parms), Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics
	{
		struct SMTransitionInstance_eventGetCanEvalWithStartState_Parms
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
	void Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMTransitionInstance_eventGetCanEvalWithStartState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMTransitionInstance_eventGetCanEvalWithStartState_Parms), &Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public getter for #bCanEvalWithStartState. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Public getter for #bCanEvalWithStartState." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetCanEvalWithStartState", nullptr, nullptr, sizeof(SMTransitionInstance_eventGetCanEvalWithStartState_Parms), Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition_Statics
	{
		struct SMTransitionInstance_eventGetDestinationStateForActiveTransition_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetDestinationStateForActiveTransition_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09* Return the destination state we are transitioning to or last transitioned to.\n\x09* This may be a state after a transition conduit.\n\x09* This will be valid during OnTransitionEntered().\n\x09*\n\x09* @return The final state after the transition chain or null.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Return the destination state we are transitioning to or last transitioned to.\nThis may be a state after a transition conduit.\nThis will be valid during OnTransitionEntered().\n\n@return The final state after the transition chain or null." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetDestinationStateForActiveTransition", nullptr, nullptr, sizeof(SMTransitionInstance_eventGetDestinationStateForActiveTransition_Parms), Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics
	{
		struct SMTransitionInstance_eventGetEvalIfNextStateActive_Parms
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
	void Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMTransitionInstance_eventGetEvalIfNextStateActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMTransitionInstance_eventGetEvalIfNextStateActive_Parms), &Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public getter for #bEvalIfNextStateActive. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Public getter for #bEvalIfNextStateActive." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetEvalIfNextStateActive", nullptr, nullptr, sizeof(SMTransitionInstance_eventGetEvalIfNextStateActive_Parms), Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics
	{
		struct SMTransitionInstance_eventGetNextStateInstance_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetNextStateInstance_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** The state this transition leads to. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "The state this transition leads to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetNextStateInstance", nullptr, nullptr, sizeof(SMTransitionInstance_eventGetNextStateInstance_Parms), Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics
	{
		struct SMTransitionInstance_eventGetPreviousStateInstance_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetPreviousStateInstance_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** The state this transition leaves from. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "The state this transition leaves from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetPreviousStateInstance", nullptr, nullptr, sizeof(SMTransitionInstance_eventGetPreviousStateInstance_Parms), Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder_Statics
	{
		struct SMTransitionInstance_eventGetPriorityOrder_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetPriorityOrder_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public getter for #PriorityOrder. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Public getter for #PriorityOrder." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetPriorityOrder", nullptr, nullptr, sizeof(SMTransitionInstance_eventGetPriorityOrder_Parms), Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics
	{
		struct SMTransitionInstance_eventGetRunParallel_Parms
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
	void Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMTransitionInstance_eventGetRunParallel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMTransitionInstance_eventGetRunParallel_Parms), &Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public getter for #bRunParallel. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Public getter for #bRunParallel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetRunParallel", nullptr, nullptr, sizeof(SMTransitionInstance_eventGetRunParallel_Parms), Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetRunParallel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics
	{
		struct SMTransitionInstance_eventGetServerTimestamp_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetServerTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Return the last server timestamp of this transition. If not networked this won't be set. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Return the last server timestamp of this transition. If not networked this won't be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetServerTimestamp", nullptr, nullptr, sizeof(SMTransitionInstance_eventGetServerTimestamp_Parms), Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition_Statics
	{
		struct SMTransitionInstance_eventGetSourceStateForActiveTransition_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetSourceStateForActiveTransition_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09* Return the state that last triggered this transition.\n\x09* This may be a state prior to a transition conduit.\n\x09* This will be valid during OnTransitionEntered().\n\x09*\n\x09* @return The first state to trigger this transition chain or null.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Return the state that last triggered this transition.\nThis may be a state prior to a transition conduit.\nThis will be valid during OnTransitionEntered().\n\n@return The first state to trigger this transition chain or null." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetSourceStateForActiveTransition", nullptr, nullptr, sizeof(SMTransitionInstance_eventGetSourceStateForActiveTransition_Parms), Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics
	{
		struct SMTransitionInstance_eventGetTransitionInfo_Parms
		{
			FSMTransitionInfo Transition;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetTransitionInfo_Parms, Transition), Z_Construct_UScriptStruct_FSMTransitionInfo, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::NewProp_Transition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Return read only information about the owning transition. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Return read only information about the owning transition." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetTransitionInfo", nullptr, nullptr, sizeof(SMTransitionInstance_eventGetTransitionInfo_Parms), Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_OnTransitionEntered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_OnTransitionEntered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Instance" },
		{ "Comment", "/** Called when this transition has been evaluated and taken. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Called when this transition has been evaluated and taken." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_OnTransitionEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "OnTransitionEntered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_OnTransitionEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_OnTransitionEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_OnTransitionEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_OnTransitionEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_OnTransitionInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_OnTransitionInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Instance" },
		{ "Comment", "/** Called after the state leading to this node is initialized but before OnStateBegin. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Called after the state leading to this node is initialized but before OnStateBegin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_OnTransitionInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "OnTransitionInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_OnTransitionInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_OnTransitionInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_OnTransitionInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_OnTransitionInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_OnTransitionShutdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_OnTransitionShutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Instance" },
		{ "Comment", "/** Called after the state leading to this node has run OnStateEnd but before it has called its shutdown sequence. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Called after the state leading to this node has run OnStateEnd but before it has called its shutdown sequence." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_OnTransitionShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "OnTransitionShutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_OnTransitionShutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_OnTransitionShutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_OnTransitionShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_OnTransitionShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics
	{
		struct SMTransitionInstance_eventSetCanEvaluate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMTransitionInstance_eventSetCanEvaluate_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMTransitionInstance_eventSetCanEvaluate_Parms), &Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Sets whether this node is allowed to evaluate or not. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Sets whether this node is allowed to evaluate or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "SetCanEvaluate", nullptr, nullptr, sizeof(SMTransitionInstance_eventSetCanEvaluate_Parms), Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics
	{
		struct SMTransitionInstance_eventSetCanEvaluateFromEvent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMTransitionInstance_eventSetCanEvaluateFromEvent_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMTransitionInstance_eventSetCanEvaluateFromEvent_Parms), &Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public setter for #bCanEvaluateFromEvent. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Public setter for #bCanEvaluateFromEvent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "SetCanEvaluateFromEvent", nullptr, nullptr, sizeof(SMTransitionInstance_eventSetCanEvaluateFromEvent_Parms), Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics
	{
		struct SMTransitionInstance_eventSetCanEvalWithStartState_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMTransitionInstance_eventSetCanEvalWithStartState_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMTransitionInstance_eventSetCanEvalWithStartState_Parms), &Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public setter for #bCanEvalWithStartState. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Public setter for #bCanEvalWithStartState." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "SetCanEvalWithStartState", nullptr, nullptr, sizeof(SMTransitionInstance_eventSetCanEvalWithStartState_Parms), Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics
	{
		struct SMTransitionInstance_eventSetEvalIfNextStateActive_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMTransitionInstance_eventSetEvalIfNextStateActive_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMTransitionInstance_eventSetEvalIfNextStateActive_Parms), &Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public setter for #bEvalIfNextStateActive. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Public setter for #bEvalIfNextStateActive." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "SetEvalIfNextStateActive", nullptr, nullptr, sizeof(SMTransitionInstance_eventSetEvalIfNextStateActive_Parms), Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics
	{
		struct SMTransitionInstance_eventSetPriorityOrder_Parms
		{
			int32 Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventSetPriorityOrder_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/**\n\x09 * Public setter for #PriorityOrder.\n\x09 * Only valid from the editor construction script.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Public setter for #PriorityOrder.\nOnly valid from the editor construction script." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "SetPriorityOrder", nullptr, nullptr, sizeof(SMTransitionInstance_eventSetPriorityOrder_Parms), Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics
	{
		struct SMTransitionInstance_eventSetRunParallel_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMTransitionInstance_eventSetRunParallel_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMTransitionInstance_eventSetRunParallel_Parms), &Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public setter for #bRunParallel. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Public setter for #bRunParallel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "SetRunParallel", nullptr, nullptr, sizeof(SMTransitionInstance_eventSetRunParallel_Parms), Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_SetRunParallel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMTransitionInstance_NoRegister()
	{
		return USMTransitionInstance::StaticClass();
	}
	struct Z_Construct_UClass_USMTransitionInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionRules_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionRules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideIcon_MetaData[];
#endif
		static void NewProp_bHideIcon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconLocationPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IconLocationPercentage;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PriorityOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRunParallel_MetaData[];
#endif
		static void NewProp_bRunParallel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunParallel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvalIfNextStateActive_MetaData[];
#endif
		static void NewProp_bEvalIfNextStateActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvalIfNextStateActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEvaluate_MetaData[];
#endif
		static void NewProp_bCanEvaluate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEvaluate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEvaluateFromEvent_MetaData[];
#endif
		static void NewProp_bCanEvaluateFromEvent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEvaluateFromEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEvalWithStartState_MetaData[];
#endif
		static void NewProp_bCanEvalWithStartState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEvalWithStartState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTransitionEnteredEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTransitionEnteredEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMTransitionInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMNodeInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMTransitionInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition, "CanEnterTransition" }, // 2967354632
		{ &Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass, "DoesTransitionPass" }, // 2528593557
		{ &Z_Construct_UFunction_USMTransitionInstance_EvaluateFromManuallyBoundEvent, "EvaluateFromManuallyBoundEvent" }, // 2390266431
		{ &Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate, "GetCanEvaluate" }, // 2626955765
		{ &Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent, "GetCanEvaluateFromEvent" }, // 1900156872
		{ &Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState, "GetCanEvalWithStartState" }, // 601811813
		{ &Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition, "GetDestinationStateForActiveTransition" }, // 1186434248
		{ &Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive, "GetEvalIfNextStateActive" }, // 45167587
		{ &Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance, "GetNextStateInstance" }, // 3238842765
		{ &Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance, "GetPreviousStateInstance" }, // 1498970994
		{ &Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder, "GetPriorityOrder" }, // 1577468661
		{ &Z_Construct_UFunction_USMTransitionInstance_GetRunParallel, "GetRunParallel" }, // 2534209120
		{ &Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp, "GetServerTimestamp" }, // 3555058563
		{ &Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition, "GetSourceStateForActiveTransition" }, // 1423123107
		{ &Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo, "GetTransitionInfo" }, // 784878986
		{ &Z_Construct_UFunction_USMTransitionInstance_OnTransitionEntered, "OnTransitionEntered" }, // 1558872704
		{ &Z_Construct_UFunction_USMTransitionInstance_OnTransitionInitialized, "OnTransitionInitialized" }, // 4173185811
		{ &Z_Construct_UFunction_USMTransitionInstance_OnTransitionShutdown, "OnTransitionShutdown" }, // 1625346772
		{ &Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate, "SetCanEvaluate" }, // 1069547178
		{ &Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent, "SetCanEvaluateFromEvent" }, // 1477183137
		{ &Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState, "SetCanEvalWithStartState" }, // 3804017797
		{ &Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive, "SetEvalIfNextStateActive" }, // 3526173820
		{ &Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder, "SetPriorityOrder" }, // 720660782
		{ &Z_Construct_UFunction_USMTransitionInstance_SetRunParallel, "SetRunParallel" }, // 1410839734
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LogicDriver" },
		{ "Comment", "/**\n * Connect states and define conditions to signal when the active state should end and the next state begin.\n */" },
		{ "DisplayName", "Transition Class" },
		{ "HideCategories", "SMTransitionInstance SMNodeInstance" },
		{ "IncludePath", "Nodes/Transitions/SMTransitionInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Connect states and define conditions to signal when the active state should end and the next state begin." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_ConnectionRules_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Define what types of connections are allowed. Default is all. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Define what types of connections are allowed. Default is all." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_ConnectionRules = { "ConnectionRules", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTransitionInstance, ConnectionRules), Z_Construct_UScriptStruct_FSMTransitionConnectionValidator, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_ConnectionRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_ConnectionRules_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bHideIcon_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Completely hide the transition icon. If the connection is hovered or selected it will become visible. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Completely hide the transition icon. If the connection is hovered or selected it will become visible." },
	};
#endif
	void Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bHideIcon_SetBit(void* Obj)
	{
		((USMTransitionInstance*)Obj)->bHideIcon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bHideIcon = { "bHideIcon", nullptr, (EPropertyFlags)0x00200c0800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMTransitionInstance), &Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bHideIcon_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bHideIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bHideIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_IconLocationPercentage_MetaData[] = {
		{ "Category", "Display" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Set the position of the icon along the connection. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Set the position of the icon along the connection." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_IconLocationPercentage = { "IconLocationPercentage", nullptr, (EPropertyFlags)0x00200c0800010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTransitionInstance, IconLocationPercentage), METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_IconLocationPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_IconLocationPercentage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_PriorityOrder_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/**\n\x09 * Lower number transitions will be evaluated first.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Lower number transitions will be evaluated first." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_PriorityOrder = { "PriorityOrder", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTransitionInstance, PriorityOrder), METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_PriorityOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_PriorityOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel_MetaData[] = {
		{ "Category", "Parallel States" },
		{ "Comment", "/**\n\x09 * If this transition evaluates to true it will not prevent the next transition in the priority sequence from being evaluated.\n\x09 * This allows the possibility for multiple active states. Transitions from Conduit nodes are not supported.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "If this transition evaluates to true it will not prevent the next transition in the priority sequence from being evaluated.\nThis allows the possibility for multiple active states. Transitions from Conduit nodes are not supported." },
	};
#endif
	void Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel_SetBit(void* Obj)
	{
		((USMTransitionInstance*)Obj)->bRunParallel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel = { "bRunParallel", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMTransitionInstance), &Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive_MetaData[] = {
		{ "Category", "Parallel States" },
		{ "Comment", "/**\n\x09 * Should the transition should still evaluate if already connecting to an active state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Should the transition should still evaluate if already connecting to an active state." },
	};
#endif
	void Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive_SetBit(void* Obj)
	{
		((USMTransitionInstance*)Obj)->bEvalIfNextStateActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive = { "bEvalIfNextStateActive", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMTransitionInstance), &Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/**\n\x09 * If this transition is allowed to evaluate conditionally.\n\x09 */" },
		{ "DisplayName", "Can Evaluate Conditionally" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "If this transition is allowed to evaluate conditionally." },
	};
#endif
	void Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate_SetBit(void* Obj)
	{
		((USMTransitionInstance*)Obj)->bCanEvaluate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate = { "bCanEvaluate", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMTransitionInstance), &Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** If this transition can evaluate from auto-bound events. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "If this transition can evaluate from auto-bound events." },
	};
#endif
	void Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent_SetBit(void* Obj)
	{
		((USMTransitionInstance*)Obj)->bCanEvaluateFromEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent = { "bCanEvaluateFromEvent", nullptr, (EPropertyFlags)0x0040040000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMTransitionInstance), &Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/**\n\x09 * Setting to false forces this transition to never evaluate on the same tick as Start State.\n\x09 * Only checked if this transition's from state has bEvalTransitionsOnStart set to true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Setting to false forces this transition to never evaluate on the same tick as Start State.\nOnly checked if this transition's from state has bEvalTransitionsOnStart set to true." },
	};
#endif
	void Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState_SetBit(void* Obj)
	{
		((USMTransitionInstance*)Obj)->bCanEvalWithStartState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState = { "bCanEvalWithStartState", nullptr, (EPropertyFlags)0x0040040000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMTransitionInstance), &Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_OnTransitionEnteredEvent_MetaData[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called when this transition has been entered from the previous state. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Called when this transition has been entered from the previous state." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_OnTransitionEnteredEvent = { "OnTransitionEnteredEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTransitionInstance, OnTransitionEnteredEvent), Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_OnTransitionEnteredEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_OnTransitionEnteredEvent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMTransitionInstance_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_ConnectionRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bHideIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_IconLocationPercentage,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_PriorityOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_OnTransitionEnteredEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMTransitionInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMTransitionInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMTransitionInstance_Statics::ClassParams = {
		&USMTransitionInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USMTransitionInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMTransitionInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMTransitionInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMTransitionInstance, 10871059);
	template<> SMSYSTEM_API UClass* StaticClass<USMTransitionInstance>()
	{
		return USMTransitionInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMTransitionInstance(Z_Construct_UClass_USMTransitionInstance, &USMTransitionInstance::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMTransitionInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMTransitionInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
