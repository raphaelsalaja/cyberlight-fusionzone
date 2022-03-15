// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Nodes/States/SMStateMachineInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMStateMachineInstance() {}
// Cross Module References
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineInstance();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_Base();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_Base_NoRegister();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator();
// End Cross Module References
	DEFINE_FUNCTION(USMStateMachineInstance::execSetReuseIfNotEndState)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReuseIfNotEndState(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineInstance::execGetReuseIfNotEndState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetReuseIfNotEndState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineInstance::execSetReuseCurrentState)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReuseCurrentState(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineInstance::execGetReuseCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetReuseCurrentState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineInstance::execSetWaitForEndState)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWaitForEndState(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineInstance::execGetWaitForEndState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWaitForEndState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineInstance::execGetActiveStates)
	{
		P_GET_TARRAY_REF(USMStateInstance_Base*,Z_Param_Out_ActiveStates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActiveStates(Z_Param_Out_ActiveStates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineInstance::execGetEntryStates)
	{
		P_GET_TARRAY_REF(USMStateInstance_Base*,Z_Param_Out_EntryStates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEntryStates(Z_Param_Out_EntryStates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineInstance::execGetContainedStateByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetContainedStateByName(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineInstance::execGetAllStateInstances)
	{
		P_GET_TARRAY_REF(USMStateInstance_Base*,Z_Param_Out_StateInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllStateInstances(Z_Param_Out_StateInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineInstance::execOnStateShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateShutdown_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineInstance::execOnStateInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateInitialized_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineInstance::execOnEndStateReached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndStateReached_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineInstance::execOnStateMachineCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateMachineCompleted_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USMStateMachineInstance_OnEndStateReached = FName(TEXT("OnEndStateReached"));
	void USMStateMachineInstance::OnEndStateReached()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateMachineInstance_OnEndStateReached),NULL);
	}
	static FName NAME_USMStateMachineInstance_OnStateInitialized = FName(TEXT("OnStateInitialized"));
	void USMStateMachineInstance::OnStateInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateMachineInstance_OnStateInitialized),NULL);
	}
	static FName NAME_USMStateMachineInstance_OnStateMachineCompleted = FName(TEXT("OnStateMachineCompleted"));
	void USMStateMachineInstance::OnStateMachineCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateMachineInstance_OnStateMachineCompleted),NULL);
	}
	static FName NAME_USMStateMachineInstance_OnStateShutdown = FName(TEXT("OnStateShutdown"));
	void USMStateMachineInstance::OnStateShutdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateMachineInstance_OnStateShutdown),NULL);
	}
	void USMStateMachineInstance::StaticRegisterNativesUSMStateMachineInstance()
	{
		UClass* Class = USMStateMachineInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveStates", &USMStateMachineInstance::execGetActiveStates },
			{ "GetAllStateInstances", &USMStateMachineInstance::execGetAllStateInstances },
			{ "GetContainedStateByName", &USMStateMachineInstance::execGetContainedStateByName },
			{ "GetEntryStates", &USMStateMachineInstance::execGetEntryStates },
			{ "GetReuseCurrentState", &USMStateMachineInstance::execGetReuseCurrentState },
			{ "GetReuseIfNotEndState", &USMStateMachineInstance::execGetReuseIfNotEndState },
			{ "GetWaitForEndState", &USMStateMachineInstance::execGetWaitForEndState },
			{ "OnEndStateReached", &USMStateMachineInstance::execOnEndStateReached },
			{ "OnStateInitialized", &USMStateMachineInstance::execOnStateInitialized },
			{ "OnStateMachineCompleted", &USMStateMachineInstance::execOnStateMachineCompleted },
			{ "OnStateShutdown", &USMStateMachineInstance::execOnStateShutdown },
			{ "SetReuseCurrentState", &USMStateMachineInstance::execSetReuseCurrentState },
			{ "SetReuseIfNotEndState", &USMStateMachineInstance::execSetReuseIfNotEndState },
			{ "SetWaitForEndState", &USMStateMachineInstance::execSetWaitForEndState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_GetActiveStates_Statics
	{
		struct SMStateMachineInstance_eventGetActiveStates_Parms
		{
			TArray<USMStateInstance_Base*> ActiveStates;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveStates_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateMachineInstance_GetActiveStates_Statics::NewProp_ActiveStates_Inner = { "ActiveStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMStateMachineInstance_GetActiveStates_Statics::NewProp_ActiveStates = { "ActiveStates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineInstance_eventGetActiveStates_Parms, ActiveStates), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineInstance_GetActiveStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineInstance_GetActiveStates_Statics::NewProp_ActiveStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineInstance_GetActiveStates_Statics::NewProp_ActiveStates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_GetActiveStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Return any states active within this state machine node. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Return any states active within this state machine node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_GetActiveStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "GetActiveStates", nullptr, nullptr, sizeof(SMStateMachineInstance_eventGetActiveStates_Parms), Z_Construct_UFunction_USMStateMachineInstance_GetActiveStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetActiveStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_GetActiveStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetActiveStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_GetActiveStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_GetActiveStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics
	{
		struct SMStateMachineInstance_eventGetAllStateInstances_Parms
		{
			TArray<USMStateInstance_Base*> StateInstances;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateInstances_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StateInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::NewProp_StateInstances_Inner = { "StateInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::NewProp_StateInstances = { "StateInstances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineInstance_eventGetAllStateInstances_Parms, StateInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::NewProp_StateInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::NewProp_StateInstances,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Retrieve all contained state instances defined within the state machine graph this instance represents. These can be States, State Machines, and Conduits. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Retrieve all contained state instances defined within the state machine graph this instance represents. These can be States, State Machines, and Conduits." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "GetAllStateInstances", nullptr, nullptr, sizeof(SMStateMachineInstance_eventGetAllStateInstances_Parms), Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_GetContainedStateByName_Statics
	{
		struct SMStateMachineInstance_eventGetContainedStateByName_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_GetContainedStateByName_Statics::NewProp_StateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMStateMachineInstance_GetContainedStateByName_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineInstance_eventGetContainedStateByName_Parms, StateName), METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_GetContainedStateByName_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetContainedStateByName_Statics::NewProp_StateName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateMachineInstance_GetContainedStateByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineInstance_eventGetContainedStateByName_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineInstance_GetContainedStateByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineInstance_GetContainedStateByName_Statics::NewProp_StateName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineInstance_GetContainedStateByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_GetContainedStateByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve an immediate state owned by this state machine node in O(1) time.\n\x09 * This will not retrieve nested states.\n\x09 *\n\x09 * @param StateName The name of the state node to search for.\n\x09 *\n\x09 * @return The state instance or nullptr.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Retrieve an immediate state owned by this state machine node in O(1) time.\nThis will not retrieve nested states.\n\n@param StateName The name of the state node to search for.\n\n@return The state instance or nullptr." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_GetContainedStateByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "GetContainedStateByName", nullptr, nullptr, sizeof(SMStateMachineInstance_eventGetContainedStateByName_Parms), Z_Construct_UFunction_USMStateMachineInstance_GetContainedStateByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetContainedStateByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_GetContainedStateByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetContainedStateByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_GetContainedStateByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_GetContainedStateByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics
	{
		struct SMStateMachineInstance_eventGetEntryStates_Parms
		{
			TArray<USMStateInstance_Base*> EntryStates;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EntryStates_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EntryStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::NewProp_EntryStates_Inner = { "EntryStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::NewProp_EntryStates = { "EntryStates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineInstance_eventGetEntryStates_Parms, EntryStates), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::NewProp_EntryStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::NewProp_EntryStates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Return the entry states of the state machine. Generally one unless parallel states are used. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Return the entry states of the state machine. Generally one unless parallel states are used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "GetEntryStates", nullptr, nullptr, sizeof(SMStateMachineInstance_eventGetEntryStates_Parms), Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_GetReuseCurrentState_Statics
	{
		struct SMStateMachineInstance_eventGetReuseCurrentState_Parms
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
	void Z_Construct_UFunction_USMStateMachineInstance_GetReuseCurrentState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateMachineInstance_eventGetReuseCurrentState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateMachineInstance_GetReuseCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateMachineInstance_eventGetReuseCurrentState_Parms), &Z_Construct_UFunction_USMStateMachineInstance_GetReuseCurrentState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineInstance_GetReuseCurrentState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineInstance_GetReuseCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_GetReuseCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public getter for #bReuseCurrentState. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Public getter for #bReuseCurrentState." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_GetReuseCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "GetReuseCurrentState", nullptr, nullptr, sizeof(SMStateMachineInstance_eventGetReuseCurrentState_Parms), Z_Construct_UFunction_USMStateMachineInstance_GetReuseCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetReuseCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_GetReuseCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetReuseCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_GetReuseCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_GetReuseCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_GetReuseIfNotEndState_Statics
	{
		struct SMStateMachineInstance_eventGetReuseIfNotEndState_Parms
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
	void Z_Construct_UFunction_USMStateMachineInstance_GetReuseIfNotEndState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateMachineInstance_eventGetReuseIfNotEndState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateMachineInstance_GetReuseIfNotEndState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateMachineInstance_eventGetReuseIfNotEndState_Parms), &Z_Construct_UFunction_USMStateMachineInstance_GetReuseIfNotEndState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineInstance_GetReuseIfNotEndState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineInstance_GetReuseIfNotEndState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_GetReuseIfNotEndState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public getter for #bReuseIfNotEndState. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Public getter for #bReuseIfNotEndState." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_GetReuseIfNotEndState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "GetReuseIfNotEndState", nullptr, nullptr, sizeof(SMStateMachineInstance_eventGetReuseIfNotEndState_Parms), Z_Construct_UFunction_USMStateMachineInstance_GetReuseIfNotEndState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetReuseIfNotEndState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_GetReuseIfNotEndState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetReuseIfNotEndState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_GetReuseIfNotEndState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_GetReuseIfNotEndState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_GetWaitForEndState_Statics
	{
		struct SMStateMachineInstance_eventGetWaitForEndState_Parms
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
	void Z_Construct_UFunction_USMStateMachineInstance_GetWaitForEndState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateMachineInstance_eventGetWaitForEndState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateMachineInstance_GetWaitForEndState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateMachineInstance_eventGetWaitForEndState_Parms), &Z_Construct_UFunction_USMStateMachineInstance_GetWaitForEndState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineInstance_GetWaitForEndState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineInstance_GetWaitForEndState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_GetWaitForEndState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public getter for #bWaitForEndState. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Public getter for #bWaitForEndState." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_GetWaitForEndState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "GetWaitForEndState", nullptr, nullptr, sizeof(SMStateMachineInstance_eventGetWaitForEndState_Parms), Z_Construct_UFunction_USMStateMachineInstance_GetWaitForEndState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetWaitForEndState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_GetWaitForEndState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetWaitForEndState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_GetWaitForEndState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_GetWaitForEndState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_OnEndStateReached_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_OnEndStateReached_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Instance" },
		{ "Comment", "/** Called when an end state has been reached. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Called when an end state has been reached." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_OnEndStateReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "OnEndStateReached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_OnEndStateReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_OnEndStateReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_OnEndStateReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_OnEndStateReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_OnStateInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_OnStateInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Instance" },
		{ "Comment", "/** Called before OnStateBegin and before transitions are initialized. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Called before OnStateBegin and before transitions are initialized." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_OnStateInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "OnStateInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_OnStateInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_OnStateInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_OnStateInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_OnStateInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_OnStateMachineCompleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_OnStateMachineCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Instance" },
		{ "Comment", "/** Called after the state machine has completed its internal states. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Called after the state machine has completed its internal states." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_OnStateMachineCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "OnStateMachineCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_OnStateMachineCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_OnStateMachineCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_OnStateMachineCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_OnStateMachineCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_OnStateShutdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_OnStateShutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Instance" },
		{ "Comment", "/** Called after OnStateEnd and after transitions are shutdown. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Called after OnStateEnd and after transitions are shutdown." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_OnStateShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "OnStateShutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_OnStateShutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_OnStateShutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_OnStateShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_OnStateShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_SetReuseCurrentState_Statics
	{
		struct SMStateMachineInstance_eventSetReuseCurrentState_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_SetReuseCurrentState_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USMStateMachineInstance_SetReuseCurrentState_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMStateMachineInstance_eventSetReuseCurrentState_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateMachineInstance_SetReuseCurrentState_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateMachineInstance_eventSetReuseCurrentState_Parms), &Z_Construct_UFunction_USMStateMachineInstance_SetReuseCurrentState_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_SetReuseCurrentState_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_SetReuseCurrentState_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineInstance_SetReuseCurrentState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineInstance_SetReuseCurrentState_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_SetReuseCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public setter for #bReuseCurrentState. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Public setter for #bReuseCurrentState." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_SetReuseCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "SetReuseCurrentState", nullptr, nullptr, sizeof(SMStateMachineInstance_eventSetReuseCurrentState_Parms), Z_Construct_UFunction_USMStateMachineInstance_SetReuseCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_SetReuseCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_SetReuseCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_SetReuseCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_SetReuseCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_SetReuseCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_SetReuseIfNotEndState_Statics
	{
		struct SMStateMachineInstance_eventSetReuseIfNotEndState_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_SetReuseIfNotEndState_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USMStateMachineInstance_SetReuseIfNotEndState_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMStateMachineInstance_eventSetReuseIfNotEndState_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateMachineInstance_SetReuseIfNotEndState_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateMachineInstance_eventSetReuseIfNotEndState_Parms), &Z_Construct_UFunction_USMStateMachineInstance_SetReuseIfNotEndState_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_SetReuseIfNotEndState_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_SetReuseIfNotEndState_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineInstance_SetReuseIfNotEndState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineInstance_SetReuseIfNotEndState_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_SetReuseIfNotEndState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public setter for #bReuseIfNotEndState. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Public setter for #bReuseIfNotEndState." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_SetReuseIfNotEndState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "SetReuseIfNotEndState", nullptr, nullptr, sizeof(SMStateMachineInstance_eventSetReuseIfNotEndState_Parms), Z_Construct_UFunction_USMStateMachineInstance_SetReuseIfNotEndState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_SetReuseIfNotEndState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_SetReuseIfNotEndState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_SetReuseIfNotEndState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_SetReuseIfNotEndState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_SetReuseIfNotEndState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_SetWaitForEndState_Statics
	{
		struct SMStateMachineInstance_eventSetWaitForEndState_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_SetWaitForEndState_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USMStateMachineInstance_SetWaitForEndState_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMStateMachineInstance_eventSetWaitForEndState_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateMachineInstance_SetWaitForEndState_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateMachineInstance_eventSetWaitForEndState_Parms), &Z_Construct_UFunction_USMStateMachineInstance_SetWaitForEndState_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_SetWaitForEndState_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_SetWaitForEndState_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineInstance_SetWaitForEndState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineInstance_SetWaitForEndState_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_SetWaitForEndState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public setter for #bWaitForEndState. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Public setter for #bWaitForEndState." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_SetWaitForEndState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "SetWaitForEndState", nullptr, nullptr, sizeof(SMStateMachineInstance_eventSetWaitForEndState_Parms), Z_Construct_UFunction_USMStateMachineInstance_SetWaitForEndState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_SetWaitForEndState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_SetWaitForEndState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_SetWaitForEndState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_SetWaitForEndState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_SetWaitForEndState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMStateMachineInstance_NoRegister()
	{
		return USMStateMachineInstance::StaticClass();
	}
	struct Z_Construct_UClass_USMStateMachineInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatePlacementRules_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatePlacementRules;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForEndState_MetaData[];
#endif
		static void NewProp_bWaitForEndState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForEndState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReuseCurrentState_MetaData[];
#endif
		static void NewProp_bReuseCurrentState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReuseCurrentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReuseIfNotEndState_MetaData[];
#endif
		static void NewProp_bReuseIfNotEndState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReuseIfNotEndState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMStateMachineInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMStateInstance_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMStateMachineInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMStateMachineInstance_GetActiveStates, "GetActiveStates" }, // 3956267583
		{ &Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances, "GetAllStateInstances" }, // 960382179
		{ &Z_Construct_UFunction_USMStateMachineInstance_GetContainedStateByName, "GetContainedStateByName" }, // 4127187635
		{ &Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates, "GetEntryStates" }, // 3847503552
		{ &Z_Construct_UFunction_USMStateMachineInstance_GetReuseCurrentState, "GetReuseCurrentState" }, // 451903193
		{ &Z_Construct_UFunction_USMStateMachineInstance_GetReuseIfNotEndState, "GetReuseIfNotEndState" }, // 1831398016
		{ &Z_Construct_UFunction_USMStateMachineInstance_GetWaitForEndState, "GetWaitForEndState" }, // 141725397
		{ &Z_Construct_UFunction_USMStateMachineInstance_OnEndStateReached, "OnEndStateReached" }, // 2968739615
		{ &Z_Construct_UFunction_USMStateMachineInstance_OnStateInitialized, "OnStateInitialized" }, // 349060863
		{ &Z_Construct_UFunction_USMStateMachineInstance_OnStateMachineCompleted, "OnStateMachineCompleted" }, // 249314963
		{ &Z_Construct_UFunction_USMStateMachineInstance_OnStateShutdown, "OnStateShutdown" }, // 3866853054
		{ &Z_Construct_UFunction_USMStateMachineInstance_SetReuseCurrentState, "SetReuseCurrentState" }, // 3517336132
		{ &Z_Construct_UFunction_USMStateMachineInstance_SetReuseIfNotEndState, "SetReuseIfNotEndState" }, // 3479366878
		{ &Z_Construct_UFunction_USMStateMachineInstance_SetWaitForEndState, "SetWaitForEndState" }, // 479323929
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LogicDriver" },
		{ "Comment", "/**\n * The base class for state machine nodes. These are different from regular state machines (SMInstance) in that they can be assigned to a state machine directly\n * either in the class defaults or in the details panel of a nested state machine node. Think of this as giving a state machine a 'type' which allows you to\n * identify it in rule behavior. This is still considered a state as well which allows access to hooking into Start, Update, and End events even when placed as\n * a nested state machine.\n */" },
		{ "DisplayName", "State Machine Class" },
		{ "HideCategories", "SMStateMachineInstance SMStateInstance_Base SMNodeInstance" },
		{ "IncludePath", "Nodes/States/SMStateMachineInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ShortTooltip", "State machine classes can be assigned to state machine blueprints or nested FSMs." },
		{ "ToolTip", "The base class for state machine nodes. These are different from regular state machines (SMInstance) in that they can be assigned to a state machine directly\neither in the class defaults or in the details panel of a nested state machine node. Think of this as giving a state machine a 'type' which allows you to\nidentify it in rule behavior. This is still considered a state as well which allows access to hooking into Start, Update, and End events even when placed as\na nested state machine." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_StatePlacementRules_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Define what types of states are allowed or disallowed. Default is all. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Define what types of states are allowed or disallowed. Default is all." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_StatePlacementRules = { "StatePlacementRules", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineInstance, StatePlacementRules), Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_StatePlacementRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_StatePlacementRules_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bWaitForEndState_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/**\n\x09 * Wait for an end state to be hit before evaluating transitions or being considered an end state itself.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Wait for an end state to be hit before evaluating transitions or being considered an end state itself." },
	};
#endif
	void Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bWaitForEndState_SetBit(void* Obj)
	{
		((USMStateMachineInstance*)Obj)->bWaitForEndState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bWaitForEndState = { "bWaitForEndState", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateMachineInstance), &Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bWaitForEndState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bWaitForEndState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bWaitForEndState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseCurrentState_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/**\n\x09 * When true the current state is reused on end/start.\n\x09 * When false the current state is cleared on end and the initial state used on start.\n\x09 * References will inherit this behavior.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "When true the current state is reused on end/start.\nWhen false the current state is cleared on end and the initial state used on start.\nReferences will inherit this behavior." },
	};
#endif
	void Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseCurrentState_SetBit(void* Obj)
	{
		((USMStateMachineInstance*)Obj)->bReuseCurrentState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseCurrentState = { "bReuseCurrentState", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateMachineInstance), &Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseCurrentState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseCurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseCurrentState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseIfNotEndState_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/**\n\x09 * Do not reuse if in an end state.\n\x09 * References will inherit this behavior.\n\x09 */" },
		{ "EditCondition", "bReuseCurrentState" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Do not reuse if in an end state.\nReferences will inherit this behavior." },
	};
#endif
	void Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseIfNotEndState_SetBit(void* Obj)
	{
		((USMStateMachineInstance*)Obj)->bReuseIfNotEndState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseIfNotEndState = { "bReuseIfNotEndState", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateMachineInstance), &Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseIfNotEndState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseIfNotEndState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseIfNotEndState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMStateMachineInstance_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_StatePlacementRules,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bWaitForEndState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseCurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseIfNotEndState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMStateMachineInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMStateMachineInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMStateMachineInstance_Statics::ClassParams = {
		&USMStateMachineInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USMStateMachineInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineInstance_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMStateMachineInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMStateMachineInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMStateMachineInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMStateMachineInstance, 975633357);
	template<> SMSYSTEM_API UClass* StaticClass<USMStateMachineInstance>()
	{
		return USMStateMachineInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMStateMachineInstance(Z_Construct_UClass_USMStateMachineInstance, &USMStateMachineInstance::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMStateMachineInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMStateMachineInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
