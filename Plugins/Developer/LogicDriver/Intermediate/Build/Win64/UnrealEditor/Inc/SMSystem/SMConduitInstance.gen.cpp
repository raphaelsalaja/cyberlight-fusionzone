// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Nodes/States/SMConduitInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMConduitInstance() {}
// Cross Module References
	SMSYSTEM_API UClass* Z_Construct_UClass_USMConduitInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMConduitInstance();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_Base();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
// End Cross Module References
	DEFINE_FUNCTION(USMConduitInstance::execSetEvalWithTransitions)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEvalWithTransitions(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMConduitInstance::execGetEvalWithTransitions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEvalWithTransitions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMConduitInstance::execGetCanEvaluate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanEvaluate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMConduitInstance::execSetCanEvaluate)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanEvaluate(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMConduitInstance::execOnConduitShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConduitShutdown_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMConduitInstance::execOnConduitInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConduitInitialized_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMConduitInstance::execOnConduitEntered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConduitEntered_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMConduitInstance::execCanEnterTransition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanEnterTransition_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USMConduitInstance_CanEnterTransition = FName(TEXT("CanEnterTransition"));
	bool USMConduitInstance::CanEnterTransition() const
	{
		SMConduitInstance_eventCanEnterTransition_Parms Parms;
		const_cast<USMConduitInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_USMConduitInstance_CanEnterTransition),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USMConduitInstance_OnConduitEntered = FName(TEXT("OnConduitEntered"));
	void USMConduitInstance::OnConduitEntered()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMConduitInstance_OnConduitEntered),NULL);
	}
	static FName NAME_USMConduitInstance_OnConduitInitialized = FName(TEXT("OnConduitInitialized"));
	void USMConduitInstance::OnConduitInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMConduitInstance_OnConduitInitialized),NULL);
	}
	static FName NAME_USMConduitInstance_OnConduitShutdown = FName(TEXT("OnConduitShutdown"));
	void USMConduitInstance::OnConduitShutdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMConduitInstance_OnConduitShutdown),NULL);
	}
	void USMConduitInstance::StaticRegisterNativesUSMConduitInstance()
	{
		UClass* Class = USMConduitInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanEnterTransition", &USMConduitInstance::execCanEnterTransition },
			{ "GetCanEvaluate", &USMConduitInstance::execGetCanEvaluate },
			{ "GetEvalWithTransitions", &USMConduitInstance::execGetEvalWithTransitions },
			{ "OnConduitEntered", &USMConduitInstance::execOnConduitEntered },
			{ "OnConduitInitialized", &USMConduitInstance::execOnConduitInitialized },
			{ "OnConduitShutdown", &USMConduitInstance::execOnConduitShutdown },
			{ "SetCanEvaluate", &USMConduitInstance::execSetCanEvaluate },
			{ "SetEvalWithTransitions", &USMConduitInstance::execSetEvalWithTransitions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMConduitInstance_eventCanEnterTransition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMConduitInstance_eventCanEnterTransition_Parms), &Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Is this conduit allowed to switch states. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "Is this conduit allowed to switch states." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMConduitInstance, nullptr, "CanEnterTransition", nullptr, nullptr, sizeof(SMConduitInstance_eventCanEnterTransition_Parms), Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMConduitInstance_CanEnterTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics
	{
		struct SMConduitInstance_eventGetCanEvaluate_Parms
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
	void Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMConduitInstance_eventGetCanEvaluate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMConduitInstance_eventGetCanEvaluate_Parms), &Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Check whether this node is allowed to evaluate. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "Check whether this node is allowed to evaluate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMConduitInstance, nullptr, "GetCanEvaluate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::SMConduitInstance_eventGetCanEvaluate_Parms), Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMConduitInstance_GetEvalWithTransitions_Statics
	{
		struct SMConduitInstance_eventGetEvalWithTransitions_Parms
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
	void Z_Construct_UFunction_USMConduitInstance_GetEvalWithTransitions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMConduitInstance_eventGetEvalWithTransitions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMConduitInstance_GetEvalWithTransitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMConduitInstance_eventGetEvalWithTransitions_Parms), &Z_Construct_UFunction_USMConduitInstance_GetEvalWithTransitions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMConduitInstance_GetEvalWithTransitions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMConduitInstance_GetEvalWithTransitions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMConduitInstance_GetEvalWithTransitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public getter for #bEvalWithTransitions. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "Public getter for #bEvalWithTransitions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMConduitInstance_GetEvalWithTransitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMConduitInstance, nullptr, "GetEvalWithTransitions", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMConduitInstance_GetEvalWithTransitions_Statics::SMConduitInstance_eventGetEvalWithTransitions_Parms), Z_Construct_UFunction_USMConduitInstance_GetEvalWithTransitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_GetEvalWithTransitions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMConduitInstance_GetEvalWithTransitions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_GetEvalWithTransitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMConduitInstance_GetEvalWithTransitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMConduitInstance_GetEvalWithTransitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMConduitInstance_OnConduitEntered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMConduitInstance_OnConduitEntered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Instance" },
		{ "Comment", "/** Called once this conduit has evaluated to true and has been taken. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "Called once this conduit has evaluated to true and has been taken." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMConduitInstance_OnConduitEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMConduitInstance, nullptr, "OnConduitEntered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMConduitInstance_OnConduitEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_OnConduitEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMConduitInstance_OnConduitEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMConduitInstance_OnConduitEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMConduitInstance_OnConduitInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMConduitInstance_OnConduitInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Instance" },
		{ "Comment", "/** Called after the state leading to this node is initialized but before OnStateBegin. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "Called after the state leading to this node is initialized but before OnStateBegin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMConduitInstance_OnConduitInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMConduitInstance, nullptr, "OnConduitInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMConduitInstance_OnConduitInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_OnConduitInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMConduitInstance_OnConduitInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMConduitInstance_OnConduitInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMConduitInstance_OnConduitShutdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMConduitInstance_OnConduitShutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Instance" },
		{ "Comment", "/** Called after the state leading to this node has run OnStateEnd but before it has called its shutdown sequence. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "Called after the state leading to this node has run OnStateEnd but before it has called its shutdown sequence." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMConduitInstance_OnConduitShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMConduitInstance, nullptr, "OnConduitShutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMConduitInstance_OnConduitShutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_OnConduitShutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMConduitInstance_OnConduitShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMConduitInstance_OnConduitShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics
	{
		struct SMConduitInstance_eventSetCanEvaluate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMConduitInstance_eventSetCanEvaluate_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMConduitInstance_eventSetCanEvaluate_Parms), &Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Sets whether this node is allowed to evaluate or not. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "Sets whether this node is allowed to evaluate or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMConduitInstance, nullptr, "SetCanEvaluate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::SMConduitInstance_eventSetCanEvaluate_Parms), Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions_Statics
	{
		struct SMConduitInstance_eventSetEvalWithTransitions_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMConduitInstance_eventSetEvalWithTransitions_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMConduitInstance_eventSetEvalWithTransitions_Parms), &Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance|Defaults" },
		{ "Comment", "/** Public setter for #bEvalWithTransitions. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "Public setter for #bEvalWithTransitions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMConduitInstance, nullptr, "SetEvalWithTransitions", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions_Statics::SMConduitInstance_eventSetEvalWithTransitions_Parms), Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMConduitInstance);
	UClass* Z_Construct_UClass_USMConduitInstance_NoRegister()
	{
		return USMConduitInstance::StaticClass();
	}
	struct Z_Construct_UClass_USMConduitInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvalGraphsOnInitialize_MetaData[];
#endif
		static void NewProp_bEvalGraphsOnInitialize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvalGraphsOnInitialize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvalGraphsOnTransitionEval_MetaData[];
#endif
		static void NewProp_bEvalGraphsOnTransitionEval_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvalGraphsOnTransitionEval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvalWithTransitions_MetaData[];
#endif
		static void NewProp_bEvalWithTransitions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvalWithTransitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEvaluate_MetaData[];
#endif
		static void NewProp_bCanEvaluate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEvaluate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMConduitInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMStateInstance_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMConduitInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMConduitInstance_CanEnterTransition, "CanEnterTransition" }, // 4187214933
		{ &Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate, "GetCanEvaluate" }, // 2193196517
		{ &Z_Construct_UFunction_USMConduitInstance_GetEvalWithTransitions, "GetEvalWithTransitions" }, // 379487475
		{ &Z_Construct_UFunction_USMConduitInstance_OnConduitEntered, "OnConduitEntered" }, // 4240530635
		{ &Z_Construct_UFunction_USMConduitInstance_OnConduitInitialized, "OnConduitInitialized" }, // 1643864197
		{ &Z_Construct_UFunction_USMConduitInstance_OnConduitShutdown, "OnConduitShutdown" }, // 1463497412
		{ &Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate, "SetCanEvaluate" }, // 161511930
		{ &Z_Construct_UFunction_USMConduitInstance_SetEvalWithTransitions, "SetEvalWithTransitions" }, // 287332864
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMConduitInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LogicDriver" },
		{ "Comment", "/**\n * Conduits connect transitions. The connected transition chain including the conduit must pass to switch states.\n */" },
		{ "DisplayName", "Conduit Class" },
		{ "HideCategories", "SMConduitInstance SMStateInstance_Base SMNodeInstance" },
		{ "IncludePath", "Nodes/States/SMConduitInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "Conduits connect transitions. The connected transition chain including the conduit must pass to switch states." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalGraphsOnInitialize_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/**\n\x09* Should graph properties evaluate during the conduit's initialize sequence.\n\x09*/" },
		{ "DisplayName", "Auto Eval on Initialize" },
		{ "EditCondition", "bAutoEvalExposedProperties" },
		{ "HideOnNode", "" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "Should graph properties evaluate during the conduit's initialize sequence." },
	};
#endif
	void Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalGraphsOnInitialize_SetBit(void* Obj)
	{
		((USMConduitInstance*)Obj)->bEvalGraphsOnInitialize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalGraphsOnInitialize = { "bEvalGraphsOnInitialize", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMConduitInstance), &Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalGraphsOnInitialize_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalGraphsOnInitialize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalGraphsOnInitialize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalGraphsOnTransitionEval_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/**\n\x09* Should graph properties evaluate when the conduit is being evaluated as a transition.\n\x09*/" },
		{ "DisplayName", "Auto Eval on Transition Eval" },
		{ "EditCondition", "bAutoEvalExposedProperties" },
		{ "HideOnNode", "" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "Should graph properties evaluate when the conduit is being evaluated as a transition." },
	};
#endif
	void Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalGraphsOnTransitionEval_SetBit(void* Obj)
	{
		((USMConduitInstance*)Obj)->bEvalGraphsOnTransitionEval = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalGraphsOnTransitionEval = { "bEvalGraphsOnTransitionEval", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMConduitInstance), &Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalGraphsOnTransitionEval_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalGraphsOnTransitionEval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalGraphsOnTransitionEval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalWithTransitions_MetaData[] = {
		{ "Category", "Conduit" },
		{ "Comment", "/**\n\x09 * This conduit will be evaluated with inbound and outbound transitions.\n\x09 * If any transition fails the entire transition fails. In that case the\n\x09 * state leading to this conduit will not take this transition.\n\x09 *\n\x09 * This makes the behavior similar to AnimGraph conduits.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "This conduit will be evaluated with inbound and outbound transitions.\nIf any transition fails the entire transition fails. In that case the\nstate leading to this conduit will not take this transition.\n\nThis makes the behavior similar to AnimGraph conduits." },
	};
#endif
	void Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalWithTransitions_SetBit(void* Obj)
	{
		((USMConduitInstance*)Obj)->bEvalWithTransitions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalWithTransitions = { "bEvalWithTransitions", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMConduitInstance), &Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalWithTransitions_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalWithTransitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalWithTransitions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bCanEvaluate_MetaData[] = {
		{ "Category", "Conduit" },
		{ "Comment", "/**\n\x09 * If this conduit is allowed to evaluate.\n\x09 */" },
		{ "DisplayName", "Can Evaluate" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "If this conduit is allowed to evaluate." },
	};
#endif
	void Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bCanEvaluate_SetBit(void* Obj)
	{
		((USMConduitInstance*)Obj)->bCanEvaluate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bCanEvaluate = { "bCanEvaluate", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMConduitInstance), &Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bCanEvaluate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bCanEvaluate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bCanEvaluate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMConduitInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalGraphsOnInitialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalGraphsOnTransitionEval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalWithTransitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bCanEvaluate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMConduitInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMConduitInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMConduitInstance_Statics::ClassParams = {
		&USMConduitInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USMConduitInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USMConduitInstance_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMConduitInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMConduitInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMConduitInstance()
	{
		if (!Z_Registration_Info_UClass_USMConduitInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMConduitInstance.OuterSingleton, Z_Construct_UClass_USMConduitInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMConduitInstance.OuterSingleton;
	}
	template<> SMSYSTEM_API UClass* StaticClass<USMConduitInstance>()
	{
		return USMConduitInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMConduitInstance);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMConduitInstance, USMConduitInstance::StaticClass, TEXT("USMConduitInstance"), &Z_Registration_Info_UClass_USMConduitInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMConduitInstance), 1125782698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_2772280886(TEXT("/Script/SMSystem"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMConduitInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
