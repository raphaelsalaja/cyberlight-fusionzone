// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Nodes/Transitions/SMTransitionInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMTransitionInstance() {}
// Cross Module References
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMTransitionInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMTransitionInstance();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SMSystem, nullptr, "OnTransitionEnteredSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::_Script_SMSystem_eventOnTransitionEnteredSignature_Parms), Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::FuncParams);
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
	DEFINE_FUNCTION(USMTransitionInstance::execGetTransitionStackCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTransitionStackCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetTransitionIndexInStack)
	{
		P_GET_OBJECT(USMTransitionInstance,Z_Param_TransitionInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTransitionIndexInStack(Z_Param_TransitionInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetAllTransitionsInStackOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_TransitionClass);
		P_GET_TARRAY_REF(USMTransitionInstance*,Z_Param_Out_TransitionStackInstances);
		P_GET_UBOOL(Z_Param_bIncludeChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllTransitionsInStackOfClass(Z_Param_TransitionClass,Z_Param_Out_TransitionStackInstances,Z_Param_bIncludeChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetStackOwnerInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMTransitionInstance**)Z_Param__Result=P_THIS->GetStackOwnerInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetTransitionInStackByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_TransitionClass);
		P_GET_UBOOL(Z_Param_bIncludeChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMTransitionInstance**)Z_Param__Result=P_THIS->GetTransitionInStackByClass(Z_Param_TransitionClass,Z_Param_bIncludeChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetTransitionInStack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMTransitionInstance**)Z_Param__Result=P_THIS->GetTransitionInStack(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetAllTransitionStackInstances)
	{
		P_GET_TARRAY_REF(USMTransitionInstance*,Z_Param_Out_TransitionStackInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllTransitionStackInstances(Z_Param_Out_TransitionStackInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execEvaluateFromManuallyBoundEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EvaluateFromManuallyBoundEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execIsTransitionFromAnyState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTransitionFromAnyState();
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
			{ "GetAllTransitionsInStackOfClass", &USMTransitionInstance::execGetAllTransitionsInStackOfClass },
			{ "GetAllTransitionStackInstances", &USMTransitionInstance::execGetAllTransitionStackInstances },
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
			{ "GetStackOwnerInstance", &USMTransitionInstance::execGetStackOwnerInstance },
			{ "GetTransitionIndexInStack", &USMTransitionInstance::execGetTransitionIndexInStack },
			{ "GetTransitionInfo", &USMTransitionInstance::execGetTransitionInfo },
			{ "GetTransitionInStack", &USMTransitionInstance::execGetTransitionInStack },
			{ "GetTransitionInStackByClass", &USMTransitionInstance::execGetTransitionInStackByClass },
			{ "GetTransitionStackCount", &USMTransitionInstance::execGetTransitionStackCount },
			{ "IsTransitionFromAnyState", &USMTransitionInstance::execIsTransitionFromAnyState },
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
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "DoesTransitionPass", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::SMTransitionInstance_eventDoesTransitionPass_Parms), Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass_Statics::FuncParams);
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
		{ "Comment", "/**\n\x09 * Efficiently evaluate and take the transition immediately.\n\x09 * If the transition's CanEnterTransition method returns true the entire transition\n\x09 * chain this transition is part of will be evaluated and taken. Super state and parallel transitions\n\x09 * will not evaluate when this method is called.\n\x09 *\n\x09 * Steps this method performs:\n\x09 * 1. Enables SetCanEvaluate for this transition.\n\x09 * 2. Calls EvaluateAndTakeTransitionChain from the owning state machine instance.\n\x09 * 3. Sets SetCanEvaluate back to the original value.\n\x09 * \n\x09 * Use at the end of execution from manually bound events.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Efficiently evaluate and take the transition immediately.\nIf the transition's CanEnterTransition method returns true the entire transition\nchain this transition is part of will be evaluated and taken. Super state and parallel transitions\nwill not evaluate when this method is called.\n\nSteps this method performs:\n1. Enables SetCanEvaluate for this transition.\n2. Calls EvaluateAndTakeTransitionChain from the owning state machine instance.\n3. Sets SetCanEvaluate back to the original value.\n\nUse at the end of execution from manually bound events." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_EvaluateFromManuallyBoundEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "EvaluateFromManuallyBoundEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_EvaluateFromManuallyBoundEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_EvaluateFromManuallyBoundEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_EvaluateFromManuallyBoundEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_EvaluateFromManuallyBoundEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics
	{
		struct SMTransitionInstance_eventGetAllTransitionsInStackOfClass_Parms
		{
			TSubclassOf<USMTransitionInstance>  TransitionClass;
			TArray<USMTransitionInstance*> TransitionStackInstances;
			bool bIncludeChildren;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_TransitionClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TransitionStackInstances_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransitionStackInstances;
		static void NewProp_bIncludeChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildren;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::NewProp_TransitionClass = { "TransitionClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetAllTransitionsInStackOfClass_Parms, TransitionClass), Z_Construct_UClass_USMTransitionInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::NewProp_TransitionStackInstances_Inner = { "TransitionStackInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::NewProp_TransitionStackInstances = { "TransitionStackInstances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetAllTransitionsInStackOfClass_Parms, TransitionStackInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::NewProp_bIncludeChildren_SetBit(void* Obj)
	{
		((SMTransitionInstance_eventGetAllTransitionsInStackOfClass_Parms*)Obj)->bIncludeChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::NewProp_bIncludeChildren = { "bIncludeChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMTransitionInstance_eventGetAllTransitionsInStackOfClass_Parms), &Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::NewProp_bIncludeChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::NewProp_TransitionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::NewProp_TransitionStackInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::NewProp_TransitionStackInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::NewProp_bIncludeChildren,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve all transitions that match the given class.\n\x09 *\n\x09 * @param TransitionClass The transition class to search for.\n\x09 * @param bIncludeChildren If children of the given class can be included.\n\x09 * @param TransitionStackInstances [Out] Transition stack instances matching the given class.\n\x09 */" },
		{ "CPP_Default_bIncludeChildren", "false" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Retrieve all transitions that match the given class.\n\n@param TransitionClass The transition class to search for.\n@param bIncludeChildren If children of the given class can be included.\n@param TransitionStackInstances [Out] Transition stack instances matching the given class." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetAllTransitionsInStackOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::SMTransitionInstance_eventGetAllTransitionsInStackOfClass_Parms), Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionStackInstances_Statics
	{
		struct SMTransitionInstance_eventGetAllTransitionStackInstances_Parms
		{
			TArray<USMTransitionInstance*> TransitionStackInstances;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TransitionStackInstances_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransitionStackInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionStackInstances_Statics::NewProp_TransitionStackInstances_Inner = { "TransitionStackInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionStackInstances_Statics::NewProp_TransitionStackInstances = { "TransitionStackInstances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetAllTransitionStackInstances_Parms, TransitionStackInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionStackInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionStackInstances_Statics::NewProp_TransitionStackInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionStackInstances_Statics::NewProp_TransitionStackInstances,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionStackInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve all transition instances in the transition stack.\n\x09 *\n\x09 * @param TransitionStackInstances [Out] Transition stack instances in their correct order.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Retrieve all transition instances in the transition stack.\n\n@param TransitionStackInstances [Out] Transition stack instances in their correct order." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionStackInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetAllTransitionStackInstances", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionStackInstances_Statics::SMTransitionInstance_eventGetAllTransitionStackInstances_Parms), Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionStackInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionStackInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionStackInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionStackInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionStackInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionStackInstances_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetCanEvaluate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::SMTransitionInstance_eventGetCanEvaluate_Parms), Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetCanEvaluateFromEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::SMTransitionInstance_eventGetCanEvaluateFromEvent_Parms), Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetCanEvalWithStartState", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::SMTransitionInstance_eventGetCanEvalWithStartState_Parms), Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetDestinationStateForActiveTransition", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition_Statics::SMTransitionInstance_eventGetDestinationStateForActiveTransition_Parms), Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetEvalIfNextStateActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::SMTransitionInstance_eventGetEvalIfNextStateActive_Parms), Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetNextStateInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::SMTransitionInstance_eventGetNextStateInstance_Parms), Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetPreviousStateInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::SMTransitionInstance_eventGetPreviousStateInstance_Parms), Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetPriorityOrder", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder_Statics::SMTransitionInstance_eventGetPriorityOrder_Parms), Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetRunParallel", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::SMTransitionInstance_eventGetRunParallel_Parms), Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetRunParallel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetRunParallel_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetServerTimestamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::SMTransitionInstance_eventGetServerTimestamp_Parms), Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetSourceStateForActiveTransition", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition_Statics::SMTransitionInstance_eventGetSourceStateForActiveTransition_Parms), Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetStackOwnerInstance_Statics
	{
		struct SMTransitionInstance_eventGetStackOwnerInstance_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetStackOwnerInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetStackOwnerInstance_Parms, ReturnValue), Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetStackOwnerInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetStackOwnerInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetStackOwnerInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve the owning node instance of a transition stack. If this is called from the main node instance\n\x09 * it will return itself.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Retrieve the owning node instance of a transition stack. If this is called from the main node instance\nit will return itself." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetStackOwnerInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetStackOwnerInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetStackOwnerInstance_Statics::SMTransitionInstance_eventGetStackOwnerInstance_Parms), Z_Construct_UFunction_USMTransitionInstance_GetStackOwnerInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetStackOwnerInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetStackOwnerInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetStackOwnerInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetStackOwnerInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetStackOwnerInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetTransitionIndexInStack_Statics
	{
		struct SMTransitionInstance_eventGetTransitionIndexInStack_Parms
		{
			USMTransitionInstance* TransitionInstance;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TransitionInstance;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetTransitionIndexInStack_Statics::NewProp_TransitionInstance = { "TransitionInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetTransitionIndexInStack_Parms, TransitionInstance), Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetTransitionIndexInStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetTransitionIndexInStack_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetTransitionIndexInStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetTransitionIndexInStack_Statics::NewProp_TransitionInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetTransitionIndexInStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetTransitionIndexInStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09* Retrieve the index of a transition stack instance.\n\x09* O(n).\n\x09*\n\x09* @param TransitionInstance The transition instance to lookup in the stack.\n\x09* @return The index of the transition in the stack. -1 if not found or is the base transition instance.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Retrieve the index of a transition stack instance.\nO(n).\n\n@param TransitionInstance The transition instance to lookup in the stack.\n@return The index of the transition in the stack. -1 if not found or is the base transition instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetTransitionIndexInStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetTransitionIndexInStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetTransitionIndexInStack_Statics::SMTransitionInstance_eventGetTransitionIndexInStack_Parms), Z_Construct_UFunction_USMTransitionInstance_GetTransitionIndexInStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetTransitionIndexInStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetTransitionIndexInStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetTransitionIndexInStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetTransitionIndexInStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetTransitionIndexInStack_Statics::FuncParams);
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetTransitionInfo_Parms, Transition), Z_Construct_UScriptStruct_FSMTransitionInfo, METADATA_PARAMS(nullptr, 0) }; // 1112549642
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetTransitionInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::SMTransitionInstance_eventGetTransitionInfo_Parms), Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStack_Statics
	{
		struct SMTransitionInstance_eventGetTransitionInStack_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStack_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetTransitionInStack_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetTransitionInStack_Parms, ReturnValue), Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStack_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve a transition instance from within the transition stack.\n\x09 * \n\x09 * @param Index the index of the array.\n\x09 * @return the transition if the index is valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Retrieve a transition instance from within the transition stack.\n\n@param Index the index of the array.\n@return the transition if the index is valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetTransitionInStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStack_Statics::SMTransitionInstance_eventGetTransitionInStack_Parms), Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass_Statics
	{
		struct SMTransitionInstance_eventGetTransitionInStackByClass_Parms
		{
			TSubclassOf<USMTransitionInstance>  TransitionClass;
			bool bIncludeChildren;
			USMTransitionInstance* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_TransitionClass;
		static void NewProp_bIncludeChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildren;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass_Statics::NewProp_TransitionClass = { "TransitionClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetTransitionInStackByClass_Parms, TransitionClass), Z_Construct_UClass_USMTransitionInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass_Statics::NewProp_bIncludeChildren_SetBit(void* Obj)
	{
		((SMTransitionInstance_eventGetTransitionInStackByClass_Parms*)Obj)->bIncludeChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass_Statics::NewProp_bIncludeChildren = { "bIncludeChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMTransitionInstance_eventGetTransitionInStackByClass_Parms), &Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass_Statics::NewProp_bIncludeChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetTransitionInStackByClass_Parms, ReturnValue), Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass_Statics::NewProp_TransitionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass_Statics::NewProp_bIncludeChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve the first stack instance of a given class.\n\x09 *\n\x09 * @param TransitionClass The transition class to search for.\n\x09 * @param bIncludeChildren If children of the given class can be included.\n\x09 * @return the first transition that matches the class.\n\x09 */" },
		{ "CPP_Default_bIncludeChildren", "false" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Retrieve the first stack instance of a given class.\n\n@param TransitionClass The transition class to search for.\n@param bIncludeChildren If children of the given class can be included.\n@return the first transition that matches the class." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetTransitionInStackByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass_Statics::SMTransitionInstance_eventGetTransitionInStackByClass_Parms), Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetTransitionStackCount_Statics
	{
		struct SMTransitionInstance_eventGetTransitionStackCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetTransitionStackCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetTransitionStackCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetTransitionStackCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetTransitionStackCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetTransitionStackCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** The total number of transitions in the transition stack. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "The total number of transitions in the transition stack." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetTransitionStackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetTransitionStackCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_GetTransitionStackCount_Statics::SMTransitionInstance_eventGetTransitionStackCount_Parms), Z_Construct_UFunction_USMTransitionInstance_GetTransitionStackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetTransitionStackCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetTransitionStackCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetTransitionStackCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetTransitionStackCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetTransitionStackCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_IsTransitionFromAnyState_Statics
	{
		struct SMTransitionInstance_eventIsTransitionFromAnyState_Parms
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
	void Z_Construct_UFunction_USMTransitionInstance_IsTransitionFromAnyState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMTransitionInstance_eventIsTransitionFromAnyState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMTransitionInstance_IsTransitionFromAnyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMTransitionInstance_eventIsTransitionFromAnyState_Parms), &Z_Construct_UFunction_USMTransitionInstance_IsTransitionFromAnyState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_IsTransitionFromAnyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_IsTransitionFromAnyState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_IsTransitionFromAnyState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * If the transition was created by an Any State.\n\x09 * @return True if the transition was copied from an Any State.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "If the transition was created by an Any State.\n@return True if the transition was copied from an Any State." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_IsTransitionFromAnyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "IsTransitionFromAnyState", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_IsTransitionFromAnyState_Statics::SMTransitionInstance_eventIsTransitionFromAnyState_Parms), Z_Construct_UFunction_USMTransitionInstance_IsTransitionFromAnyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_IsTransitionFromAnyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_IsTransitionFromAnyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_IsTransitionFromAnyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_IsTransitionFromAnyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_IsTransitionFromAnyState_Statics::FuncParams);
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
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_OnTransitionEntered_Statics::FuncParams);
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
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_OnTransitionInitialized_Statics::FuncParams);
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
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_OnTransitionShutdown_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "SetCanEvaluate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::SMTransitionInstance_eventSetCanEvaluate_Parms), Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "SetCanEvaluateFromEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::SMTransitionInstance_eventSetCanEvaluateFromEvent_Parms), Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "SetCanEvalWithStartState", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::SMTransitionInstance_eventSetCanEvalWithStartState_Parms), Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "SetEvalIfNextStateActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::SMTransitionInstance_eventSetEvalIfNextStateActive_Parms), Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "SetPriorityOrder", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::SMTransitionInstance_eventSetPriorityOrder_Parms), Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "SetRunParallel", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::SMTransitionInstance_eventSetRunParallel_Parms), Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_SetRunParallel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_SetRunParallel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMTransitionInstance);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowBackgroundOnCustomIcon_MetaData[];
#endif
		static void NewProp_bShowBackgroundOnCustomIcon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBackgroundOnCustomIcon;
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
		{ &Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition, "CanEnterTransition" }, // 3707003194
		{ &Z_Construct_UFunction_USMTransitionInstance_DoesTransitionPass, "DoesTransitionPass" }, // 3979471751
		{ &Z_Construct_UFunction_USMTransitionInstance_EvaluateFromManuallyBoundEvent, "EvaluateFromManuallyBoundEvent" }, // 575672513
		{ &Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionsInStackOfClass, "GetAllTransitionsInStackOfClass" }, // 2873165308
		{ &Z_Construct_UFunction_USMTransitionInstance_GetAllTransitionStackInstances, "GetAllTransitionStackInstances" }, // 4124937577
		{ &Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate, "GetCanEvaluate" }, // 3398994001
		{ &Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluateFromEvent, "GetCanEvaluateFromEvent" }, // 3616129495
		{ &Z_Construct_UFunction_USMTransitionInstance_GetCanEvalWithStartState, "GetCanEvalWithStartState" }, // 1777322137
		{ &Z_Construct_UFunction_USMTransitionInstance_GetDestinationStateForActiveTransition, "GetDestinationStateForActiveTransition" }, // 452790798
		{ &Z_Construct_UFunction_USMTransitionInstance_GetEvalIfNextStateActive, "GetEvalIfNextStateActive" }, // 1729944378
		{ &Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance, "GetNextStateInstance" }, // 3688992680
		{ &Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance, "GetPreviousStateInstance" }, // 3855012425
		{ &Z_Construct_UFunction_USMTransitionInstance_GetPriorityOrder, "GetPriorityOrder" }, // 676022796
		{ &Z_Construct_UFunction_USMTransitionInstance_GetRunParallel, "GetRunParallel" }, // 1425419112
		{ &Z_Construct_UFunction_USMTransitionInstance_GetServerTimestamp, "GetServerTimestamp" }, // 970935978
		{ &Z_Construct_UFunction_USMTransitionInstance_GetSourceStateForActiveTransition, "GetSourceStateForActiveTransition" }, // 1091646524
		{ &Z_Construct_UFunction_USMTransitionInstance_GetStackOwnerInstance, "GetStackOwnerInstance" }, // 4211645573
		{ &Z_Construct_UFunction_USMTransitionInstance_GetTransitionIndexInStack, "GetTransitionIndexInStack" }, // 2603859954
		{ &Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo, "GetTransitionInfo" }, // 3938098630
		{ &Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStack, "GetTransitionInStack" }, // 1032812607
		{ &Z_Construct_UFunction_USMTransitionInstance_GetTransitionInStackByClass, "GetTransitionInStackByClass" }, // 1103285747
		{ &Z_Construct_UFunction_USMTransitionInstance_GetTransitionStackCount, "GetTransitionStackCount" }, // 3055790547
		{ &Z_Construct_UFunction_USMTransitionInstance_IsTransitionFromAnyState, "IsTransitionFromAnyState" }, // 2917435820
		{ &Z_Construct_UFunction_USMTransitionInstance_OnTransitionEntered, "OnTransitionEntered" }, // 1214421282
		{ &Z_Construct_UFunction_USMTransitionInstance_OnTransitionInitialized, "OnTransitionInitialized" }, // 450321812
		{ &Z_Construct_UFunction_USMTransitionInstance_OnTransitionShutdown, "OnTransitionShutdown" }, // 235837264
		{ &Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate, "SetCanEvaluate" }, // 162331025
		{ &Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluateFromEvent, "SetCanEvaluateFromEvent" }, // 720057700
		{ &Z_Construct_UFunction_USMTransitionInstance_SetCanEvalWithStartState, "SetCanEvalWithStartState" }, // 1246158011
		{ &Z_Construct_UFunction_USMTransitionInstance_SetEvalIfNextStateActive, "SetEvalIfNextStateActive" }, // 3647143598
		{ &Z_Construct_UFunction_USMTransitionInstance_SetPriorityOrder, "SetPriorityOrder" }, // 3217600755
		{ &Z_Construct_UFunction_USMTransitionInstance_SetRunParallel, "SetRunParallel" }, // 4130971779
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_ConnectionRules = { "ConnectionRules", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTransitionInstance, ConnectionRules), Z_Construct_UScriptStruct_FSMTransitionConnectionValidator, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_ConnectionRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_ConnectionRules_MetaData)) }; // 3564851520
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bShowBackgroundOnCustomIcon_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Allow the icon background brush to be displayed for custom icons. */" },
		{ "DisplayPriority", "0" },
		{ "EditCondition", "bDisplayCustomIcon" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "Allow the icon background brush to be displayed for custom icons." },
	};
#endif
	void Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bShowBackgroundOnCustomIcon_SetBit(void* Obj)
	{
		((USMTransitionInstance*)Obj)->bShowBackgroundOnCustomIcon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bShowBackgroundOnCustomIcon = { "bShowBackgroundOnCustomIcon", nullptr, (EPropertyFlags)0x00200c0800010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMTransitionInstance), &Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bShowBackgroundOnCustomIcon_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bShowBackgroundOnCustomIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bShowBackgroundOnCustomIcon_MetaData)) };
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
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bHideIcon = { "bHideIcon", nullptr, (EPropertyFlags)0x00200c0800010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMTransitionInstance), &Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bHideIcon_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bHideIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bHideIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_IconLocationPercentage_MetaData[] = {
		{ "Category", "Display" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Set the position of the icon along the connection. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "NodeBaseOnly", "" },
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
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "Lower number transitions will be evaluated first." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_PriorityOrder = { "PriorityOrder", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTransitionInstance, PriorityOrder), METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_PriorityOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_PriorityOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel_MetaData[] = {
		{ "Category", "Parallel States" },
		{ "Comment", "/**\n\x09 * If this transition evaluates to true it will not prevent the next transition in the priority sequence from being evaluated.\n\x09 * This allows the possibility for multiple active states. Transitions from Conduit nodes are not supported.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "If this transition evaluates to true it will not prevent the next transition in the priority sequence from being evaluated.\nThis allows the possibility for multiple active states. Transitions from Conduit nodes are not supported." },
	};
#endif
	void Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel_SetBit(void* Obj)
	{
		((USMTransitionInstance*)Obj)->bRunParallel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel = { "bRunParallel", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMTransitionInstance), &Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive_MetaData[] = {
		{ "Category", "Parallel States" },
		{ "Comment", "/**\n\x09 * Should the transition should still evaluate if already connecting to an active state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "Should the transition should still evaluate if already connecting to an active state." },
	};
#endif
	void Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive_SetBit(void* Obj)
	{
		((USMTransitionInstance*)Obj)->bEvalIfNextStateActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive = { "bEvalIfNextStateActive", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMTransitionInstance), &Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/**\n\x09 * If this transition is allowed to evaluate conditionally.\n\x09 */" },
		{ "DisplayName", "Can Evaluate Conditionally" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "If this transition is allowed to evaluate conditionally." },
	};
#endif
	void Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate_SetBit(void* Obj)
	{
		((USMTransitionInstance*)Obj)->bCanEvaluate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate = { "bCanEvaluate", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMTransitionInstance), &Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** If this transition can evaluate from auto-bound events. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "If this transition can evaluate from auto-bound events." },
	};
#endif
	void Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent_SetBit(void* Obj)
	{
		((USMTransitionInstance*)Obj)->bCanEvaluateFromEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent = { "bCanEvaluateFromEvent", nullptr, (EPropertyFlags)0x0040040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMTransitionInstance), &Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/**\n\x09 * Setting to false forces this transition to never evaluate on the same tick as Start State.\n\x09 * Only checked if this transition's from state has bEvalTransitionsOnStart set to true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Setting to false forces this transition to never evaluate on the same tick as Start State.\nOnly checked if this transition's from state has bEvalTransitionsOnStart set to true." },
	};
#endif
	void Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState_SetBit(void* Obj)
	{
		((USMTransitionInstance*)Obj)->bCanEvalWithStartState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState = { "bCanEvalWithStartState", nullptr, (EPropertyFlags)0x0040040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMTransitionInstance), &Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_OnTransitionEnteredEvent_MetaData[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called when this transition has been entered from the previous state. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Called when this transition has been entered from the previous state." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_OnTransitionEnteredEvent = { "OnTransitionEnteredEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTransitionInstance, OnTransitionEnteredEvent), Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_OnTransitionEnteredEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_OnTransitionEnteredEvent_MetaData)) }; // 2595339824
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMTransitionInstance_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_ConnectionRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bShowBackgroundOnCustomIcon,
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
		if (!Z_Registration_Info_UClass_USMTransitionInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMTransitionInstance.OuterSingleton, Z_Construct_UClass_USMTransitionInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMTransitionInstance.OuterSingleton;
	}
	template<> SMSYSTEM_API UClass* StaticClass<USMTransitionInstance>()
	{
		return USMTransitionInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMTransitionInstance);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMTransitionInstance, USMTransitionInstance::StaticClass, TEXT("USMTransitionInstance"), &Z_Registration_Info_UClass_USMTransitionInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMTransitionInstance), 1484633699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_1719549959(TEXT("/Script/SMSystem"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
