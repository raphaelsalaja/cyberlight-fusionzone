// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/SMInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMInstance() {}
// Cross Module References
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstance_NoRegister();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMStateInfo();
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateMachineTransitionTakenSignature__DelegateSignature();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMTransitionInfo();
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStoppedSignature__DelegateSignature();
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateMachineUpdatedSignature__DelegateSignature();
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStartedSignature__DelegateSignature();
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateMachineInitializedSignature__DelegateSignature();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMDebugStateMachine();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_Base_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMTransitionInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineNetworkedInterface_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineInstance_NoRegister();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMStateHistory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMNetworkedTransaction();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMStateMachine();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMActiveStateTransaction();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	SMSYSTEM_API UEnum* Z_Construct_UEnum_SMSystem_ESMStateMachineInput();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineInterface_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstanceInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature_Statics
	{
		struct _Script_SMSystem_eventOnStateMachineStateChangedSignature_Parms
		{
			USMInstance* Instance;
			FSMStateInfo NewState;
			FSMStateInfo PreviousState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnStateMachineStateChangedSignature_Parms, Instance), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnStateMachineStateChangedSignature_Parms, NewState), Z_Construct_UScriptStruct_FSMStateInfo, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature_Statics::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnStateMachineStateChangedSignature_Parms, PreviousState), Z_Construct_UScriptStruct_FSMStateInfo, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature_Statics::NewProp_NewState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature_Statics::NewProp_PreviousState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SMSystem, nullptr, "OnStateMachineStateChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SMSystem_eventOnStateMachineStateChangedSignature_Parms), Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SMSystem_OnStateMachineTransitionTakenSignature__DelegateSignature_Statics
	{
		struct _Script_SMSystem_eventOnStateMachineTransitionTakenSignature_Parms
		{
			USMInstance* Instance;
			FSMTransitionInfo Transition;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnStateMachineTransitionTakenSignature__DelegateSignature_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnStateMachineTransitionTakenSignature_Parms, Instance), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnStateMachineTransitionTakenSignature__DelegateSignature_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnStateMachineTransitionTakenSignature_Parms, Transition), Z_Construct_UScriptStruct_FSMTransitionInfo, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SMSystem_OnStateMachineTransitionTakenSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnStateMachineTransitionTakenSignature__DelegateSignature_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnStateMachineTransitionTakenSignature__DelegateSignature_Statics::NewProp_Transition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SMSystem_OnStateMachineTransitionTakenSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SMSystem_OnStateMachineTransitionTakenSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SMSystem, nullptr, "OnStateMachineTransitionTakenSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SMSystem_eventOnStateMachineTransitionTakenSignature_Parms), Z_Construct_UDelegateFunction_SMSystem_OnStateMachineTransitionTakenSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateMachineTransitionTakenSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SMSystem_OnStateMachineTransitionTakenSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateMachineTransitionTakenSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateMachineTransitionTakenSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SMSystem_OnStateMachineTransitionTakenSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStoppedSignature__DelegateSignature_Statics
	{
		struct _Script_SMSystem_eventOnStateMachineStoppedSignature_Parms
		{
			USMInstance* Instance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStoppedSignature__DelegateSignature_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnStateMachineStoppedSignature_Parms, Instance), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStoppedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStoppedSignature__DelegateSignature_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStoppedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStoppedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SMSystem, nullptr, "OnStateMachineStoppedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SMSystem_eventOnStateMachineStoppedSignature_Parms), Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStoppedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStoppedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStoppedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStoppedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStoppedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStoppedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SMSystem_OnStateMachineUpdatedSignature__DelegateSignature_Statics
	{
		struct _Script_SMSystem_eventOnStateMachineUpdatedSignature_Parms
		{
			USMInstance* Instance;
			float DeltaSeconds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnStateMachineUpdatedSignature__DelegateSignature_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnStateMachineUpdatedSignature_Parms, Instance), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnStateMachineUpdatedSignature__DelegateSignature_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnStateMachineUpdatedSignature_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SMSystem_OnStateMachineUpdatedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnStateMachineUpdatedSignature__DelegateSignature_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnStateMachineUpdatedSignature__DelegateSignature_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SMSystem_OnStateMachineUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SMSystem_OnStateMachineUpdatedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SMSystem, nullptr, "OnStateMachineUpdatedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SMSystem_eventOnStateMachineUpdatedSignature_Parms), Z_Construct_UDelegateFunction_SMSystem_OnStateMachineUpdatedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateMachineUpdatedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SMSystem_OnStateMachineUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateMachineUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateMachineUpdatedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SMSystem_OnStateMachineUpdatedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStartedSignature__DelegateSignature_Statics
	{
		struct _Script_SMSystem_eventOnStateMachineStartedSignature_Parms
		{
			USMInstance* Instance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStartedSignature__DelegateSignature_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnStateMachineStartedSignature_Parms, Instance), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStartedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStartedSignature__DelegateSignature_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStartedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStartedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SMSystem, nullptr, "OnStateMachineStartedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SMSystem_eventOnStateMachineStartedSignature_Parms), Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStartedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStartedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStartedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStartedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStartedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStartedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SMSystem_OnStateMachineInitializedSignature__DelegateSignature_Statics
	{
		struct _Script_SMSystem_eventOnStateMachineInitializedSignature_Parms
		{
			USMInstance* Instance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnStateMachineInitializedSignature__DelegateSignature_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnStateMachineInitializedSignature_Parms, Instance), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SMSystem_OnStateMachineInitializedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnStateMachineInitializedSignature__DelegateSignature_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SMSystem_OnStateMachineInitializedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SMSystem_OnStateMachineInitializedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SMSystem, nullptr, "OnStateMachineInitializedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SMSystem_eventOnStateMachineInitializedSignature_Parms), Z_Construct_UDelegateFunction_SMSystem_OnStateMachineInitializedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateMachineInitializedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SMSystem_OnStateMachineInitializedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateMachineInitializedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateMachineInitializedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SMSystem_OnStateMachineInitializedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FSMDebugStateMachine::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMDebugStateMachine_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMDebugStateMachine, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMDebugStateMachine"), sizeof(FSMDebugStateMachine), Get_Z_Construct_UScriptStruct_FSMDebugStateMachine_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMDebugStateMachine>()
{
	return FSMDebugStateMachine::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMDebugStateMachine(FSMDebugStateMachine::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMDebugStateMachine"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMDebugStateMachine
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMDebugStateMachine()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMDebugStateMachine")),new UScriptStruct::TCppStructOps<FSMDebugStateMachine>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMDebugStateMachine;
	struct Z_Construct_UScriptStruct_FSMDebugStateMachine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMDebugStateMachine_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMDebugStateMachine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMDebugStateMachine>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMDebugStateMachine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		&NewStructOps,
		"SMDebugStateMachine",
		sizeof(FSMDebugStateMachine),
		alignof(FSMDebugStateMachine),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMDebugStateMachine_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMDebugStateMachine_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMDebugStateMachine()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMDebugStateMachine_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMDebugStateMachine"), sizeof(FSMDebugStateMachine), Get_Z_Construct_UScriptStruct_FSMDebugStateMachine_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMDebugStateMachine_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMDebugStateMachine_Hash() { return 3594892629U; }
	DEFINE_FUNCTION(USMInstance::execOnContextPawnControllerChanged)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_OBJECT(AController,Z_Param_NewController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnContextPawnControllerChanged(Z_Param_Pawn,Z_Param_NewController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execREP_StartChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->REP_StartChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execInternal_EventCleanup)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGuid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_EventCleanup(Z_Param_Out_NodeGuid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execInternal_Update)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_Update(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execOnStateMachineStateChanged)
	{
		P_GET_STRUCT_REF(FSMStateInfo,Z_Param_Out_ToState);
		P_GET_STRUCT_REF(FSMStateInfo,Z_Param_Out_FromState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateMachineStateChanged_Implementation(Z_Param_Out_ToState,Z_Param_Out_FromState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execOnStateMachineTransitionTaken)
	{
		P_GET_STRUCT_REF(FSMTransitionInfo,Z_Param_Out_Transition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateMachineTransitionTaken_Implementation(Z_Param_Out_Transition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execOnStateMachineStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateMachineStop_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execOnStateMachineUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateMachineUpdate_Implementation(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execOnStateMachineStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateMachineStart_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execOnStateMachineInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateMachineInitialized_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execSetStateMachineClass)
	{
		P_GET_OBJECT(UClass,Z_Param_NewStateMachineClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStateMachineClass(Z_Param_NewStateMachineClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetStateMachineClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<USMStateMachineInstance> *)Z_Param__Result=P_THIS->GetStateMachineClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetMasterReferenceOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMInstance**)Z_Param__Result=P_THIS->GetMasterReferenceOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetReferenceOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMInstance**)Z_Param__Result=P_THIS->GetReferenceOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execIsInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execHasStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetNetworkInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<ISMStateMachineNetworkedInterface>*)Z_Param__Result=P_THIS->GetNetworkInterface();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetAllTransitionInstances)
	{
		P_GET_TARRAY_REF(USMTransitionInstance*,Z_Param_Out_TransitionInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllTransitionInstances(Z_Param_Out_TransitionInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetAllStateInstances)
	{
		P_GET_TARRAY_REF(USMStateInstance_Base*,Z_Param_Out_StateInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllStateInstances(Z_Param_Out_StateInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execSetStateHistoryMaxCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStateHistoryMaxCount(Z_Param_NewSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetStateHistory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSMStateHistory>*)Z_Param__Result=P_THIS->GetStateHistory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execSetContext)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContext(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execIsInEndState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInEndState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execSetStopOnEndState)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStopOnEndState(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetTickInterval)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTickInterval();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execCanAutoManageTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAutoManageTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execSetAutoManageTime)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoManageTime(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execSetTickInterval)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickInterval(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execSetTickBeforeBeginPlay)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickBeforeBeginPlay(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execSetCanTickWhenPaused)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanTickWhenPaused(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execCanTickOnManualUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanTickOnManualUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execSetTickOnManualUpdate)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickOnManualUpdate(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execSetCanEverTick)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanEverTick(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execCanEverTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanEverTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetRootStateMachineInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateMachineInstance**)Z_Param__Result=P_THIS->GetRootStateMachineInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetTransitionInstanceByGuid)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_Guid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMTransitionInstance**)Z_Param__Result=P_THIS->GetTransitionInstanceByGuid(Z_Param_Out_Guid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetStateInstanceByGuid)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_Guid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetStateInstanceByGuid(Z_Param_Out_Guid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetReferencedInstanceByGuid)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_Guid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMInstance**)Z_Param__Result=P_THIS->GetReferencedInstanceByGuid(Z_Param_Out_Guid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execTryGetTransitionInfo)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_Guid);
		P_GET_STRUCT_REF(FSMTransitionInfo,Z_Param_Out_TransitionInfo);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryGetTransitionInfo(Z_Param_Out_Guid,Z_Param_Out_TransitionInfo,Z_Param_Out_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execTryGetStateInfo)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_Guid);
		P_GET_STRUCT_REF(FSMStateInfo,Z_Param_Out_StateInfo);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryGetStateInfo(Z_Param_Out_Guid,Z_Param_Out_StateInfo,Z_Param_Out_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetAllReferencedInstances)
	{
		P_GET_UBOOL(Z_Param_bIncludeChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USMInstance*>*)Z_Param__Result=P_THIS->GetAllReferencedInstances(Z_Param_bIncludeChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetAllActiveStateInstances)
	{
		P_GET_TARRAY_REF(USMStateInstance_Base*,Z_Param_Out_ActiveStateInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllActiveStateInstances(Z_Param_Out_ActiveStateInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetSingleActiveStateInstance)
	{
		P_GET_UBOOL(Z_Param_bCheckNested);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetSingleActiveStateInstance(Z_Param_bCheckNested);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetActiveStateInstance)
	{
		P_GET_UBOOL(Z_Param_bCheckNested);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetActiveStateInstance(Z_Param_bCheckNested);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetAllActiveStateGuids)
	{
		P_GET_TARRAY_REF(FGuid,Z_Param_Out_ActiveGuids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllActiveStateGuids(Z_Param_Out_ActiveGuids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetSingleActiveStateGuid)
	{
		P_GET_UBOOL(Z_Param_bCheckNested);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetSingleActiveStateGuid(Z_Param_bCheckNested);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetAllCurrentStateGuids)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FGuid>*)Z_Param__Result=P_THIS->GetAllCurrentStateGuids();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execTryGetNestedActiveState)
	{
		P_GET_STRUCT_REF(FSMStateInfo,Z_Param_Out_FoundState);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryGetNestedActiveState(Z_Param_Out_FoundState,Z_Param_Out_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetNestedActiveStateGuid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetNestedActiveStateGuid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetActiveStateGuid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetActiveStateGuid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetNestedActiveStateName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNestedActiveStateName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetActiveStateName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetActiveStateName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execOnStateMachineInitialStateLoaded)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_StateGuid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateMachineInitialStateLoaded_Implementation(Z_Param_Out_StateGuid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execAreInitialStatesSetFromLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AreInitialStatesSetFromLoad();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execLoadFromMultipleStates)
	{
		P_GET_TARRAY_REF(FGuid,Z_Param_Out_FromGuids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadFromMultipleStates(Z_Param_Out_FromGuids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execLoadFromState)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_FromGuid);
		P_GET_UBOOL(Z_Param_bAllParents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadFromState(Z_Param_Out_FromGuid,Z_Param_bAllParents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execEvaluateTransitions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EvaluateTransitions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execStartWithNewContext)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartWithNewContext(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shutdown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execRestart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Restart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execInitialize)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetComponentOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateMachineComponent**)Z_Param__Result=P_THIS->GetComponentOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execGetContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execIsTickableWhenPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTickableWhenPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execIsTickable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTickable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMInstance::execTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Tick_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	static FName NAME_USMInstance_OnStateMachineInitialized = FName(TEXT("OnStateMachineInitialized"));
	void USMInstance::OnStateMachineInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMInstance_OnStateMachineInitialized),NULL);
	}
	static FName NAME_USMInstance_OnStateMachineInitialStateLoaded = FName(TEXT("OnStateMachineInitialStateLoaded"));
	void USMInstance::OnStateMachineInitialStateLoaded(FGuid const& StateGuid)
	{
		SMInstance_eventOnStateMachineInitialStateLoaded_Parms Parms;
		Parms.StateGuid=StateGuid;
		ProcessEvent(FindFunctionChecked(NAME_USMInstance_OnStateMachineInitialStateLoaded),&Parms);
	}
	static FName NAME_USMInstance_OnStateMachineStart = FName(TEXT("OnStateMachineStart"));
	void USMInstance::OnStateMachineStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMInstance_OnStateMachineStart),NULL);
	}
	static FName NAME_USMInstance_OnStateMachineStateChanged = FName(TEXT("OnStateMachineStateChanged"));
	void USMInstance::OnStateMachineStateChanged(FSMStateInfo const& ToState, FSMStateInfo const& FromState)
	{
		SMInstance_eventOnStateMachineStateChanged_Parms Parms;
		Parms.ToState=ToState;
		Parms.FromState=FromState;
		ProcessEvent(FindFunctionChecked(NAME_USMInstance_OnStateMachineStateChanged),&Parms);
	}
	static FName NAME_USMInstance_OnStateMachineStop = FName(TEXT("OnStateMachineStop"));
	void USMInstance::OnStateMachineStop()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMInstance_OnStateMachineStop),NULL);
	}
	static FName NAME_USMInstance_OnStateMachineTransitionTaken = FName(TEXT("OnStateMachineTransitionTaken"));
	void USMInstance::OnStateMachineTransitionTaken(FSMTransitionInfo const& Transition)
	{
		SMInstance_eventOnStateMachineTransitionTaken_Parms Parms;
		Parms.Transition=Transition;
		ProcessEvent(FindFunctionChecked(NAME_USMInstance_OnStateMachineTransitionTaken),&Parms);
	}
	static FName NAME_USMInstance_OnStateMachineUpdate = FName(TEXT("OnStateMachineUpdate"));
	void USMInstance::OnStateMachineUpdate(float DeltaSeconds)
	{
		SMInstance_eventOnStateMachineUpdate_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_USMInstance_OnStateMachineUpdate),&Parms);
	}
	static FName NAME_USMInstance_Tick = FName(TEXT("Tick"));
	void USMInstance::Tick(float DeltaTime)
	{
		SMInstance_eventTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_USMInstance_Tick),&Parms);
	}
	void USMInstance::StaticRegisterNativesUSMInstance()
	{
		UClass* Class = USMInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreInitialStatesSetFromLoad", &USMInstance::execAreInitialStatesSetFromLoad },
			{ "CanAutoManageTime", &USMInstance::execCanAutoManageTime },
			{ "CanEverTick", &USMInstance::execCanEverTick },
			{ "CanTickOnManualUpdate", &USMInstance::execCanTickOnManualUpdate },
			{ "EvaluateTransitions", &USMInstance::execEvaluateTransitions },
			{ "GetActiveStateGuid", &USMInstance::execGetActiveStateGuid },
			{ "GetActiveStateInstance", &USMInstance::execGetActiveStateInstance },
			{ "GetActiveStateName", &USMInstance::execGetActiveStateName },
			{ "GetAllActiveStateGuids", &USMInstance::execGetAllActiveStateGuids },
			{ "GetAllActiveStateInstances", &USMInstance::execGetAllActiveStateInstances },
			{ "GetAllCurrentStateGuids", &USMInstance::execGetAllCurrentStateGuids },
			{ "GetAllReferencedInstances", &USMInstance::execGetAllReferencedInstances },
			{ "GetAllStateInstances", &USMInstance::execGetAllStateInstances },
			{ "GetAllTransitionInstances", &USMInstance::execGetAllTransitionInstances },
			{ "GetComponentOwner", &USMInstance::execGetComponentOwner },
			{ "GetContext", &USMInstance::execGetContext },
			{ "GetMasterReferenceOwner", &USMInstance::execGetMasterReferenceOwner },
			{ "GetNestedActiveStateGuid", &USMInstance::execGetNestedActiveStateGuid },
			{ "GetNestedActiveStateName", &USMInstance::execGetNestedActiveStateName },
			{ "GetNetworkInterface", &USMInstance::execGetNetworkInterface },
			{ "GetReferencedInstanceByGuid", &USMInstance::execGetReferencedInstanceByGuid },
			{ "GetReferenceOwner", &USMInstance::execGetReferenceOwner },
			{ "GetRootStateMachineInstance", &USMInstance::execGetRootStateMachineInstance },
			{ "GetSingleActiveStateGuid", &USMInstance::execGetSingleActiveStateGuid },
			{ "GetSingleActiveStateInstance", &USMInstance::execGetSingleActiveStateInstance },
			{ "GetStateHistory", &USMInstance::execGetStateHistory },
			{ "GetStateInstanceByGuid", &USMInstance::execGetStateInstanceByGuid },
			{ "GetStateMachineClass", &USMInstance::execGetStateMachineClass },
			{ "GetTickInterval", &USMInstance::execGetTickInterval },
			{ "GetTransitionInstanceByGuid", &USMInstance::execGetTransitionInstanceByGuid },
			{ "HasStarted", &USMInstance::execHasStarted },
			{ "Initialize", &USMInstance::execInitialize },
			{ "Internal_EventCleanup", &USMInstance::execInternal_EventCleanup },
			{ "Internal_Update", &USMInstance::execInternal_Update },
			{ "IsActive", &USMInstance::execIsActive },
			{ "IsInEndState", &USMInstance::execIsInEndState },
			{ "IsInitialized", &USMInstance::execIsInitialized },
			{ "IsTickable", &USMInstance::execIsTickable },
			{ "IsTickableWhenPaused", &USMInstance::execIsTickableWhenPaused },
			{ "LoadFromMultipleStates", &USMInstance::execLoadFromMultipleStates },
			{ "LoadFromState", &USMInstance::execLoadFromState },
			{ "OnContextPawnControllerChanged", &USMInstance::execOnContextPawnControllerChanged },
			{ "OnStateMachineInitialized", &USMInstance::execOnStateMachineInitialized },
			{ "OnStateMachineInitialStateLoaded", &USMInstance::execOnStateMachineInitialStateLoaded },
			{ "OnStateMachineStart", &USMInstance::execOnStateMachineStart },
			{ "OnStateMachineStateChanged", &USMInstance::execOnStateMachineStateChanged },
			{ "OnStateMachineStop", &USMInstance::execOnStateMachineStop },
			{ "OnStateMachineTransitionTaken", &USMInstance::execOnStateMachineTransitionTaken },
			{ "OnStateMachineUpdate", &USMInstance::execOnStateMachineUpdate },
			{ "REP_StartChanged", &USMInstance::execREP_StartChanged },
			{ "Restart", &USMInstance::execRestart },
			{ "SetAutoManageTime", &USMInstance::execSetAutoManageTime },
			{ "SetCanEverTick", &USMInstance::execSetCanEverTick },
			{ "SetCanTickWhenPaused", &USMInstance::execSetCanTickWhenPaused },
			{ "SetContext", &USMInstance::execSetContext },
			{ "SetStateHistoryMaxCount", &USMInstance::execSetStateHistoryMaxCount },
			{ "SetStateMachineClass", &USMInstance::execSetStateMachineClass },
			{ "SetStopOnEndState", &USMInstance::execSetStopOnEndState },
			{ "SetTickBeforeBeginPlay", &USMInstance::execSetTickBeforeBeginPlay },
			{ "SetTickInterval", &USMInstance::execSetTickInterval },
			{ "SetTickOnManualUpdate", &USMInstance::execSetTickOnManualUpdate },
			{ "Shutdown", &USMInstance::execShutdown },
			{ "Start", &USMInstance::execStart },
			{ "StartWithNewContext", &USMInstance::execStartWithNewContext },
			{ "Stop", &USMInstance::execStop },
			{ "Tick", &USMInstance::execTick },
			{ "TryGetNestedActiveState", &USMInstance::execTryGetNestedActiveState },
			{ "TryGetStateInfo", &USMInstance::execTryGetStateInfo },
			{ "TryGetTransitionInfo", &USMInstance::execTryGetTransitionInfo },
			{ "Update", &USMInstance::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMInstance_AreInitialStatesSetFromLoad_Statics
	{
		struct SMInstance_eventAreInitialStatesSetFromLoad_Parms
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
	void Z_Construct_UFunction_USMInstance_AreInitialStatesSetFromLoad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMInstance_eventAreInitialStatesSetFromLoad_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_AreInitialStatesSetFromLoad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventAreInitialStatesSetFromLoad_Parms), &Z_Construct_UFunction_USMInstance_AreInitialStatesSetFromLoad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_AreInitialStatesSetFromLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_AreInitialStatesSetFromLoad_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_AreInitialStatesSetFromLoad_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/**\n\x09 * Checks if initial entry states have been set through LoadFromState() or LoadFromMultipleStates().\n\x09 * This will be true if at least one state was loaded this way and will become false once Stop() is called.\n\x09 *\n\x09 * The variable used to check this is replicated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Checks if initial entry states have been set through LoadFromState() or LoadFromMultipleStates().\nThis will be true if at least one state was loaded this way and will become false once Stop() is called.\n\nThe variable used to check this is replicated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_AreInitialStatesSetFromLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "AreInitialStatesSetFromLoad", nullptr, nullptr, sizeof(SMInstance_eventAreInitialStatesSetFromLoad_Parms), Z_Construct_UFunction_USMInstance_AreInitialStatesSetFromLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_AreInitialStatesSetFromLoad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_AreInitialStatesSetFromLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_AreInitialStatesSetFromLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_AreInitialStatesSetFromLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_AreInitialStatesSetFromLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_CanAutoManageTime_Statics
	{
		struct SMInstance_eventCanAutoManageTime_Parms
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
	void Z_Construct_UFunction_USMInstance_CanAutoManageTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMInstance_eventCanAutoManageTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_CanAutoManageTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventCanAutoManageTime_Parms), &Z_Construct_UFunction_USMInstance_CanAutoManageTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_CanAutoManageTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_CanAutoManageTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_CanAutoManageTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_CanAutoManageTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "CanAutoManageTime", nullptr, nullptr, sizeof(SMInstance_eventCanAutoManageTime_Parms), Z_Construct_UFunction_USMInstance_CanAutoManageTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_CanAutoManageTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_CanAutoManageTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_CanAutoManageTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_CanAutoManageTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_CanAutoManageTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_CanEverTick_Statics
	{
		struct SMInstance_eventCanEverTick_Parms
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
	void Z_Construct_UFunction_USMInstance_CanEverTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMInstance_eventCanEverTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_CanEverTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventCanEverTick_Parms), &Z_Construct_UFunction_USMInstance_CanEverTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_CanEverTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_CanEverTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_CanEverTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_CanEverTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "CanEverTick", nullptr, nullptr, sizeof(SMInstance_eventCanEverTick_Parms), Z_Construct_UFunction_USMInstance_CanEverTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_CanEverTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_CanEverTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_CanEverTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_CanEverTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_CanEverTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_CanTickOnManualUpdate_Statics
	{
		struct SMInstance_eventCanTickOnManualUpdate_Parms
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
	void Z_Construct_UFunction_USMInstance_CanTickOnManualUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMInstance_eventCanTickOnManualUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_CanTickOnManualUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventCanTickOnManualUpdate_Parms), &Z_Construct_UFunction_USMInstance_CanTickOnManualUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_CanTickOnManualUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_CanTickOnManualUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_CanTickOnManualUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_CanTickOnManualUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "CanTickOnManualUpdate", nullptr, nullptr, sizeof(SMInstance_eventCanTickOnManualUpdate_Parms), Z_Construct_UFunction_USMInstance_CanTickOnManualUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_CanTickOnManualUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_CanTickOnManualUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_CanTickOnManualUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_CanTickOnManualUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_CanTickOnManualUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_EvaluateTransitions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_EvaluateTransitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/**\n\x09 * Signals to the owning state machine to process transition evaluation.\n\x09 * This is similar to calling Update on the owner root state machine, however state update logic (Tick) won't execute.\n\x09 * All transitions are evaluated as normal starting from the root state machine down.\n\x09 * Depending on super state transitions it's possible the state machine this state is part of may exit.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Signals to the owning state machine to process transition evaluation.\nThis is similar to calling Update on the owner root state machine, however state update logic (Tick) won't execute.\nAll transitions are evaluated as normal starting from the root state machine down.\nDepending on super state transitions it's possible the state machine this state is part of may exit." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_EvaluateTransitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "EvaluateTransitions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_EvaluateTransitions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_EvaluateTransitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_EvaluateTransitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_EvaluateTransitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetActiveStateGuid_Statics
	{
		struct SMInstance_eventGetActiveStateGuid_Parms
		{
			FGuid ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_GetActiveStateGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetActiveStateGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetActiveStateGuid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetActiveStateGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetActiveStateGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use `GetSingleActiveStateGuid` with bCheckNested = false." },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetActiveStateGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetActiveStateGuid", nullptr, nullptr, sizeof(SMInstance_eventGetActiveStateGuid_Parms), Z_Construct_UFunction_USMInstance_GetActiveStateGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetActiveStateGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetActiveStateGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetActiveStateGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetActiveStateGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetActiveStateGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetActiveStateInstance_Statics
	{
		struct SMInstance_eventGetActiveStateInstance_Parms
		{
			bool bCheckNested;
			USMStateInstance_Base* ReturnValue;
		};
		static void NewProp_bCheckNested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckNested;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMInstance_GetActiveStateInstance_Statics::NewProp_bCheckNested_SetBit(void* Obj)
	{
		((SMInstance_eventGetActiveStateInstance_Parms*)Obj)->bCheckNested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_GetActiveStateInstance_Statics::NewProp_bCheckNested = { "bCheckNested", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventGetActiveStateInstance_Parms), &Z_Construct_UFunction_USMInstance_GetActiveStateInstance_Statics::NewProp_bCheckNested_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_GetActiveStateInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetActiveStateInstance_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetActiveStateInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetActiveStateInstance_Statics::NewProp_bCheckNested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetActiveStateInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetActiveStateInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "CPP_Default_bCheckNested", "true" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use `GetSingleActiveStateInstance` instead." },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetActiveStateInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetActiveStateInstance", nullptr, nullptr, sizeof(SMInstance_eventGetActiveStateInstance_Parms), Z_Construct_UFunction_USMInstance_GetActiveStateInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetActiveStateInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetActiveStateInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetActiveStateInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetActiveStateInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetActiveStateInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetActiveStateName_Statics
	{
		struct SMInstance_eventGetActiveStateName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMInstance_GetActiveStateName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetActiveStateName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetActiveStateName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetActiveStateName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetActiveStateName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use `GetSingleActiveStateInstance` with bCheckNested = false instead and read `GetNodeName` from there." },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetActiveStateName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetActiveStateName", nullptr, nullptr, sizeof(SMInstance_eventGetActiveStateName_Parms), Z_Construct_UFunction_USMInstance_GetActiveStateName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetActiveStateName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetActiveStateName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetActiveStateName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetActiveStateName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetActiveStateName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetAllActiveStateGuids_Statics
	{
		struct SMInstance_eventGetAllActiveStateGuids_Parms
		{
			TArray<FGuid> ActiveGuids;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveGuids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveGuids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_GetAllActiveStateGuids_Statics::NewProp_ActiveGuids_Inner = { "ActiveGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMInstance_GetAllActiveStateGuids_Statics::NewProp_ActiveGuids = { "ActiveGuids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetAllActiveStateGuids_Parms, ActiveGuids), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetAllActiveStateGuids_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetAllActiveStateGuids_Statics::NewProp_ActiveGuids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetAllActiveStateGuids_Statics::NewProp_ActiveGuids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetAllActiveStateGuids_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/**\n\x09 * Recursively retrieve the guids of all active states. Useful if saving the current state of a state machine.\n\x09 * @param ActiveGuids [Out] All current ActiveGuids. May be empty. Resets on method start.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Recursively retrieve the guids of all active states. Useful if saving the current state of a state machine.\n@param ActiveGuids [Out] All current ActiveGuids. May be empty. Resets on method start." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetAllActiveStateGuids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetAllActiveStateGuids", nullptr, nullptr, sizeof(SMInstance_eventGetAllActiveStateGuids_Parms), Z_Construct_UFunction_USMInstance_GetAllActiveStateGuids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetAllActiveStateGuids_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetAllActiveStateGuids_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetAllActiveStateGuids_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetAllActiveStateGuids()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetAllActiveStateGuids_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetAllActiveStateInstances_Statics
	{
		struct SMInstance_eventGetAllActiveStateInstances_Parms
		{
			TArray<USMStateInstance_Base*> ActiveStateInstances;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveStateInstances_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveStateInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_GetAllActiveStateInstances_Statics::NewProp_ActiveStateInstances_Inner = { "ActiveStateInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMInstance_GetAllActiveStateInstances_Statics::NewProp_ActiveStateInstances = { "ActiveStateInstances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetAllActiveStateInstances_Parms, ActiveStateInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetAllActiveStateInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetAllActiveStateInstances_Statics::NewProp_ActiveStateInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetAllActiveStateInstances_Statics::NewProp_ActiveStateInstances,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetAllActiveStateInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/**\n\x09 * Recursively retrieve all active state instances.\n\x09 * @param ActiveStateInstances [Out] All active state instances. May be empty. Resets on method start.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Recursively retrieve all active state instances.\n@param ActiveStateInstances [Out] All active state instances. May be empty. Resets on method start." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetAllActiveStateInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetAllActiveStateInstances", nullptr, nullptr, sizeof(SMInstance_eventGetAllActiveStateInstances_Parms), Z_Construct_UFunction_USMInstance_GetAllActiveStateInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetAllActiveStateInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetAllActiveStateInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetAllActiveStateInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetAllActiveStateInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetAllActiveStateInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetAllCurrentStateGuids_Statics
	{
		struct SMInstance_eventGetAllCurrentStateGuids_Parms
		{
			TArray<FGuid> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_GetAllCurrentStateGuids_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMInstance_GetAllCurrentStateGuids_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetAllCurrentStateGuids_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetAllCurrentStateGuids_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetAllCurrentStateGuids_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetAllCurrentStateGuids_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetAllCurrentStateGuids_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use `GetAllActiveStateGuids` instead." },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetAllCurrentStateGuids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetAllCurrentStateGuids", nullptr, nullptr, sizeof(SMInstance_eventGetAllCurrentStateGuids_Parms), Z_Construct_UFunction_USMInstance_GetAllCurrentStateGuids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetAllCurrentStateGuids_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetAllCurrentStateGuids_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetAllCurrentStateGuids_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetAllCurrentStateGuids()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetAllCurrentStateGuids_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetAllReferencedInstances_Statics
	{
		struct SMInstance_eventGetAllReferencedInstances_Parms
		{
			bool bIncludeChildren;
			TArray<USMInstance*> ReturnValue;
		};
		static void NewProp_bIncludeChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildren;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMInstance_GetAllReferencedInstances_Statics::NewProp_bIncludeChildren_SetBit(void* Obj)
	{
		((SMInstance_eventGetAllReferencedInstances_Parms*)Obj)->bIncludeChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_GetAllReferencedInstances_Statics::NewProp_bIncludeChildren = { "bIncludeChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventGetAllReferencedInstances_Parms), &Z_Construct_UFunction_USMInstance_GetAllReferencedInstances_Statics::NewProp_bIncludeChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_GetAllReferencedInstances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMInstance_GetAllReferencedInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetAllReferencedInstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetAllReferencedInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetAllReferencedInstances_Statics::NewProp_bIncludeChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetAllReferencedInstances_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetAllReferencedInstances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetAllReferencedInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Find all referenced instances. IncludeChildren will return all nested state machine references.*/" },
		{ "CPP_Default_bIncludeChildren", "false" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Find all referenced instances. IncludeChildren will return all nested state machine references." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetAllReferencedInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetAllReferencedInstances", nullptr, nullptr, sizeof(SMInstance_eventGetAllReferencedInstances_Parms), Z_Construct_UFunction_USMInstance_GetAllReferencedInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetAllReferencedInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetAllReferencedInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetAllReferencedInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetAllReferencedInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetAllReferencedInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetAllStateInstances_Statics
	{
		struct SMInstance_eventGetAllStateInstances_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_GetAllStateInstances_Statics::NewProp_StateInstances_Inner = { "StateInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMInstance_GetAllStateInstances_Statics::NewProp_StateInstances = { "StateInstances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetAllStateInstances_Parms, StateInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetAllStateInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetAllStateInstances_Statics::NewProp_StateInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetAllStateInstances_Statics::NewProp_StateInstances,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetAllStateInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Retrieve all state instances. These can be States, State Machines, and Conduits. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Retrieve all state instances. These can be States, State Machines, and Conduits." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetAllStateInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetAllStateInstances", nullptr, nullptr, sizeof(SMInstance_eventGetAllStateInstances_Parms), Z_Construct_UFunction_USMInstance_GetAllStateInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetAllStateInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetAllStateInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetAllStateInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetAllStateInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetAllStateInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetAllTransitionInstances_Statics
	{
		struct SMInstance_eventGetAllTransitionInstances_Parms
		{
			TArray<USMTransitionInstance*> TransitionInstances;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TransitionInstances_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransitionInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_GetAllTransitionInstances_Statics::NewProp_TransitionInstances_Inner = { "TransitionInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMInstance_GetAllTransitionInstances_Statics::NewProp_TransitionInstances = { "TransitionInstances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetAllTransitionInstances_Parms, TransitionInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetAllTransitionInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetAllTransitionInstances_Statics::NewProp_TransitionInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetAllTransitionInstances_Statics::NewProp_TransitionInstances,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetAllTransitionInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Retrieve all transition instances. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Retrieve all transition instances." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetAllTransitionInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetAllTransitionInstances", nullptr, nullptr, sizeof(SMInstance_eventGetAllTransitionInstances_Parms), Z_Construct_UFunction_USMInstance_GetAllTransitionInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetAllTransitionInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetAllTransitionInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetAllTransitionInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetAllTransitionInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetAllTransitionInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetComponentOwner_Statics
	{
		struct SMInstance_eventGetComponentOwner_Parms
		{
			USMStateMachineComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetComponentOwner_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_GetComponentOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetComponentOwner_Parms, ReturnValue), Z_Construct_UClass_USMStateMachineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetComponentOwner_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetComponentOwner_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetComponentOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetComponentOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetComponentOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** The component owning this instance. Will be null during initialization or if this state machine was created without a component. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "The component owning this instance. Will be null during initialization or if this state machine was created without a component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetComponentOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetComponentOwner", nullptr, nullptr, sizeof(SMInstance_eventGetComponentOwner_Parms), Z_Construct_UFunction_USMInstance_GetComponentOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetComponentOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetComponentOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetComponentOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetComponentOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetComponentOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetContext_Statics
	{
		struct SMInstance_eventGetContext_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_GetContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetContext_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** The object which this state machine is running for. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "The object which this state machine is running for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetContext", nullptr, nullptr, sizeof(SMInstance_eventGetContext_Parms), Z_Construct_UFunction_USMInstance_GetContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetMasterReferenceOwner_Statics
	{
		struct SMInstance_eventGetMasterReferenceOwner_Parms
		{
			USMInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_GetMasterReferenceOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetMasterReferenceOwner_Parms, ReturnValue), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetMasterReferenceOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetMasterReferenceOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetMasterReferenceOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Look up the owners to find the root. Could be this instance. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Look up the owners to find the root. Could be this instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetMasterReferenceOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetMasterReferenceOwner", nullptr, nullptr, sizeof(SMInstance_eventGetMasterReferenceOwner_Parms), Z_Construct_UFunction_USMInstance_GetMasterReferenceOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetMasterReferenceOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetMasterReferenceOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetMasterReferenceOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetMasterReferenceOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetMasterReferenceOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetNestedActiveStateGuid_Statics
	{
		struct SMInstance_eventGetNestedActiveStateGuid_Parms
		{
			FGuid ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_GetNestedActiveStateGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetNestedActiveStateGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetNestedActiveStateGuid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetNestedActiveStateGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetNestedActiveStateGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use `GetSingleActiveStateGuid` instead." },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetNestedActiveStateGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetNestedActiveStateGuid", nullptr, nullptr, sizeof(SMInstance_eventGetNestedActiveStateGuid_Parms), Z_Construct_UFunction_USMInstance_GetNestedActiveStateGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetNestedActiveStateGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetNestedActiveStateGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetNestedActiveStateGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetNestedActiveStateGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetNestedActiveStateGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetNestedActiveStateName_Statics
	{
		struct SMInstance_eventGetNestedActiveStateName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMInstance_GetNestedActiveStateName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetNestedActiveStateName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetNestedActiveStateName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetNestedActiveStateName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetNestedActiveStateName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use `GetSingleActiveStateInstance` instead and read `GetNodeName` from there." },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetNestedActiveStateName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetNestedActiveStateName", nullptr, nullptr, sizeof(SMInstance_eventGetNestedActiveStateName_Parms), Z_Construct_UFunction_USMInstance_GetNestedActiveStateName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetNestedActiveStateName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetNestedActiveStateName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetNestedActiveStateName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetNestedActiveStateName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetNestedActiveStateName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetNetworkInterface_Statics
	{
		struct SMInstance_eventGetNetworkInterface_Parms
		{
			TScriptInterface<ISMStateMachineNetworkedInterface> ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_USMInstance_GetNetworkInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetNetworkInterface_Parms, ReturnValue), Z_Construct_UClass_USMStateMachineNetworkedInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetNetworkInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetNetworkInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetNetworkInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Return the server interface if there is one. This may be null. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Return the server interface if there is one. This may be null." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetNetworkInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetNetworkInterface", nullptr, nullptr, sizeof(SMInstance_eventGetNetworkInterface_Parms), Z_Construct_UFunction_USMInstance_GetNetworkInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetNetworkInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetNetworkInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetNetworkInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetNetworkInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetNetworkInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetReferencedInstanceByGuid_Statics
	{
		struct SMInstance_eventGetReferencedInstanceByGuid_Parms
		{
			FGuid Guid;
			USMInstance* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetReferencedInstanceByGuid_Statics::NewProp_Guid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_GetReferencedInstanceByGuid_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetReferencedInstanceByGuid_Parms, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetReferencedInstanceByGuid_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetReferencedInstanceByGuid_Statics::NewProp_Guid_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_GetReferencedInstanceByGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetReferencedInstanceByGuid_Parms, ReturnValue), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetReferencedInstanceByGuid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetReferencedInstanceByGuid_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetReferencedInstanceByGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetReferencedInstanceByGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Quickly return a referenced instance given a state machine guid. This always executes from the master. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Quickly return a referenced instance given a state machine guid. This always executes from the master." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetReferencedInstanceByGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetReferencedInstanceByGuid", nullptr, nullptr, sizeof(SMInstance_eventGetReferencedInstanceByGuid_Parms), Z_Construct_UFunction_USMInstance_GetReferencedInstanceByGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetReferencedInstanceByGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetReferencedInstanceByGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetReferencedInstanceByGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetReferencedInstanceByGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetReferencedInstanceByGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetReferenceOwner_Statics
	{
		struct SMInstance_eventGetReferenceOwner_Parms
		{
			USMInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_GetReferenceOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetReferenceOwner_Parms, ReturnValue), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetReferenceOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetReferenceOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetReferenceOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Get the instance owning this reference. If null this is not a reference. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Get the instance owning this reference. If null this is not a reference." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetReferenceOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetReferenceOwner", nullptr, nullptr, sizeof(SMInstance_eventGetReferenceOwner_Parms), Z_Construct_UFunction_USMInstance_GetReferenceOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetReferenceOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetReferenceOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetReferenceOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetReferenceOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetReferenceOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetRootStateMachineInstance_Statics
	{
		struct SMInstance_eventGetRootStateMachineInstance_Parms
		{
			USMStateMachineInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_GetRootStateMachineInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetRootStateMachineInstance_Parms, ReturnValue), Z_Construct_UClass_USMStateMachineInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetRootStateMachineInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetRootStateMachineInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetRootStateMachineInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Return the root USMStateMachineInstance node. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Return the root USMStateMachineInstance node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetRootStateMachineInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetRootStateMachineInstance", nullptr, nullptr, sizeof(SMInstance_eventGetRootStateMachineInstance_Parms), Z_Construct_UFunction_USMInstance_GetRootStateMachineInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetRootStateMachineInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetRootStateMachineInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetRootStateMachineInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetRootStateMachineInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetRootStateMachineInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetSingleActiveStateGuid_Statics
	{
		struct SMInstance_eventGetSingleActiveStateGuid_Parms
		{
			bool bCheckNested;
			FGuid ReturnValue;
		};
		static void NewProp_bCheckNested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckNested;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMInstance_GetSingleActiveStateGuid_Statics::NewProp_bCheckNested_SetBit(void* Obj)
	{
		((SMInstance_eventGetSingleActiveStateGuid_Parms*)Obj)->bCheckNested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_GetSingleActiveStateGuid_Statics::NewProp_bCheckNested = { "bCheckNested", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventGetSingleActiveStateGuid_Parms), &Z_Construct_UFunction_USMInstance_GetSingleActiveStateGuid_Statics::NewProp_bCheckNested_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_GetSingleActiveStateGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetSingleActiveStateGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetSingleActiveStateGuid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetSingleActiveStateGuid_Statics::NewProp_bCheckNested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetSingleActiveStateGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetSingleActiveStateGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/**\n\x09 * Retrieve the first active state Guid. If a state is not active an invalid Guid will be returned.\n\x09 * For multiple states GetAllActiveStateGuids() should be called instead.\n\x09 * @param bCheckNested Check nested state machines.\n\x09 * @return the first active state guid.\n\x09 */" },
		{ "CPP_Default_bCheckNested", "true" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Retrieve the first active state Guid. If a state is not active an invalid Guid will be returned.\nFor multiple states GetAllActiveStateGuids() should be called instead.\n@param bCheckNested Check nested state machines.\n@return the first active state guid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetSingleActiveStateGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetSingleActiveStateGuid", nullptr, nullptr, sizeof(SMInstance_eventGetSingleActiveStateGuid_Parms), Z_Construct_UFunction_USMInstance_GetSingleActiveStateGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetSingleActiveStateGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetSingleActiveStateGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetSingleActiveStateGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetSingleActiveStateGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetSingleActiveStateGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetSingleActiveStateInstance_Statics
	{
		struct SMInstance_eventGetSingleActiveStateInstance_Parms
		{
			bool bCheckNested;
			USMStateInstance_Base* ReturnValue;
		};
		static void NewProp_bCheckNested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckNested;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMInstance_GetSingleActiveStateInstance_Statics::NewProp_bCheckNested_SetBit(void* Obj)
	{
		((SMInstance_eventGetSingleActiveStateInstance_Parms*)Obj)->bCheckNested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_GetSingleActiveStateInstance_Statics::NewProp_bCheckNested = { "bCheckNested", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventGetSingleActiveStateInstance_Parms), &Z_Construct_UFunction_USMInstance_GetSingleActiveStateInstance_Statics::NewProp_bCheckNested_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_GetSingleActiveStateInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetSingleActiveStateInstance_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetSingleActiveStateInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetSingleActiveStateInstance_Statics::NewProp_bCheckNested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetSingleActiveStateInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetSingleActiveStateInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/**\n\x09 * Locate the first active state instance. For multiple states GetAllActiveStateInstances() should be called instead.\n\x09 * \n\x09 * @param bCheckNested Check nested state machines.\n\x09 * @return A single active state's node instance.\n\x09 */" },
		{ "CPP_Default_bCheckNested", "true" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Locate the first active state instance. For multiple states GetAllActiveStateInstances() should be called instead.\n\n@param bCheckNested Check nested state machines.\n@return A single active state's node instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetSingleActiveStateInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetSingleActiveStateInstance", nullptr, nullptr, sizeof(SMInstance_eventGetSingleActiveStateInstance_Parms), Z_Construct_UFunction_USMInstance_GetSingleActiveStateInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetSingleActiveStateInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetSingleActiveStateInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetSingleActiveStateInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetSingleActiveStateInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetSingleActiveStateInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetStateHistory_Statics
	{
		struct SMInstance_eventGetStateHistory_Parms
		{
			TArray<FSMStateHistory> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_GetStateHistory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMStateHistory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetStateHistory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMInstance_GetStateHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetStateHistory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetStateHistory_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetStateHistory_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetStateHistory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetStateHistory_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetStateHistory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetStateHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Retrieve an ordered history of states, oldest to newest, not including active state(s). This always executes from the master. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Retrieve an ordered history of states, oldest to newest, not including active state(s). This always executes from the master." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetStateHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetStateHistory", nullptr, nullptr, sizeof(SMInstance_eventGetStateHistory_Parms), Z_Construct_UFunction_USMInstance_GetStateHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetStateHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetStateHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetStateHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetStateHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetStateHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetStateInstanceByGuid_Statics
	{
		struct SMInstance_eventGetStateInstanceByGuid_Parms
		{
			FGuid Guid;
			USMStateInstance_Base* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetStateInstanceByGuid_Statics::NewProp_Guid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_GetStateInstanceByGuid_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetStateInstanceByGuid_Parms, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetStateInstanceByGuid_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetStateInstanceByGuid_Statics::NewProp_Guid_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_GetStateInstanceByGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetStateInstanceByGuid_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetStateInstanceByGuid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetStateInstanceByGuid_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetStateInstanceByGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetStateInstanceByGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Quickly return a state instance given the state guid. This always executes from the master. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Quickly return a state instance given the state guid. This always executes from the master." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetStateInstanceByGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetStateInstanceByGuid", nullptr, nullptr, sizeof(SMInstance_eventGetStateInstanceByGuid_Parms), Z_Construct_UFunction_USMInstance_GetStateInstanceByGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetStateInstanceByGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetStateInstanceByGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetStateInstanceByGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetStateInstanceByGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetStateInstanceByGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetStateMachineClass_Statics
	{
		struct SMInstance_eventGetStateMachineClass_Parms
		{
			TSubclassOf<USMStateMachineInstance>  ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USMInstance_GetStateMachineClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetStateMachineClass_Parms, ReturnValue), Z_Construct_UClass_USMStateMachineInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetStateMachineClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetStateMachineClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetStateMachineClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetStateMachineClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetStateMachineClass", nullptr, nullptr, sizeof(SMInstance_eventGetStateMachineClass_Parms), Z_Construct_UFunction_USMInstance_GetStateMachineClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetStateMachineClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetStateMachineClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetStateMachineClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetStateMachineClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetStateMachineClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetTickInterval_Statics
	{
		struct SMInstance_eventGetTickInterval_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USMInstance_GetTickInterval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetTickInterval_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetTickInterval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetTickInterval_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetTickInterval_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetTickInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetTickInterval", nullptr, nullptr, sizeof(SMInstance_eventGetTickInterval_Parms), Z_Construct_UFunction_USMInstance_GetTickInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetTickInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetTickInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetTickInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetTickInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetTickInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_GetTransitionInstanceByGuid_Statics
	{
		struct SMInstance_eventGetTransitionInstanceByGuid_Parms
		{
			FGuid Guid;
			USMTransitionInstance* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetTransitionInstanceByGuid_Statics::NewProp_Guid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_GetTransitionInstanceByGuid_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetTransitionInstanceByGuid_Parms, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetTransitionInstanceByGuid_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetTransitionInstanceByGuid_Statics::NewProp_Guid_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_GetTransitionInstanceByGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventGetTransitionInstanceByGuid_Parms, ReturnValue), Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_GetTransitionInstanceByGuid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetTransitionInstanceByGuid_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_GetTransitionInstanceByGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_GetTransitionInstanceByGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Quickly return a transition instance given a transition guid. This always executes from the master. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Quickly return a transition instance given a transition guid. This always executes from the master." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_GetTransitionInstanceByGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "GetTransitionInstanceByGuid", nullptr, nullptr, sizeof(SMInstance_eventGetTransitionInstanceByGuid_Parms), Z_Construct_UFunction_USMInstance_GetTransitionInstanceByGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetTransitionInstanceByGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_GetTransitionInstanceByGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_GetTransitionInstanceByGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_GetTransitionInstanceByGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_GetTransitionInstanceByGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_HasStarted_Statics
	{
		struct SMInstance_eventHasStarted_Parms
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
	void Z_Construct_UFunction_USMInstance_HasStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMInstance_eventHasStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_HasStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventHasStarted_Parms), &Z_Construct_UFunction_USMInstance_HasStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_HasStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_HasStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_HasStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** True if the instance has started. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "True if the instance has started." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_HasStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "HasStarted", nullptr, nullptr, sizeof(SMInstance_eventHasStarted_Parms), Z_Construct_UFunction_USMInstance_HasStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_HasStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_HasStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_HasStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_HasStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_HasStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_Initialize_Statics
	{
		struct SMInstance_eventInitialize_Parms
		{
			UObject* Context;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_Initialize_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventInitialize_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_Initialize_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Initialize bound functions and load in the context. */" },
		{ "CPP_Default_Context", "None" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Initialize bound functions and load in the context." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "Initialize", nullptr, nullptr, sizeof(SMInstance_eventInitialize_Parms), Z_Construct_UFunction_USMInstance_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_Internal_EventCleanup_Statics
	{
		struct SMInstance_eventInternal_EventCleanup_Parms
		{
			FGuid NodeGuid;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_Internal_EventCleanup_Statics::NewProp_NodeGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_Internal_EventCleanup_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventInternal_EventCleanup_Parms, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_Internal_EventCleanup_Statics::NewProp_NodeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_Internal_EventCleanup_Statics::NewProp_NodeGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_Internal_EventCleanup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_Internal_EventCleanup_Statics::NewProp_NodeGuid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_Internal_EventCleanup_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Internal cleanup logic after an auto-bound event fires. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Internal cleanup logic after an auto-bound event fires." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_Internal_EventCleanup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "Internal_EventCleanup", nullptr, nullptr, sizeof(SMInstance_eventInternal_EventCleanup_Parms), Z_Construct_UFunction_USMInstance_Internal_EventCleanup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_Internal_EventCleanup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_Internal_EventCleanup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_Internal_EventCleanup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_Internal_EventCleanup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_Internal_EventCleanup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_Internal_Update_Statics
	{
		struct SMInstance_eventInternal_Update_Parms
		{
			float DeltaSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USMInstance_Internal_Update_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventInternal_Update_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_Internal_Update_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_Internal_Update_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_Internal_Update_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Internal update logic. Can be called during an update and used by event triggers. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Internal update logic. Can be called during an update and used by event triggers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_Internal_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "Internal_Update", nullptr, nullptr, sizeof(SMInstance_eventInternal_Update_Parms), Z_Construct_UFunction_USMInstance_Internal_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_Internal_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_Internal_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_Internal_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_Internal_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_Internal_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_IsActive_Statics
	{
		struct SMInstance_eventIsActive_Parms
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
	void Z_Construct_UFunction_USMInstance_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMInstance_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventIsActive_Parms), &Z_Construct_UFunction_USMInstance_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_IsActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "IsActive", nullptr, nullptr, sizeof(SMInstance_eventIsActive_Parms), Z_Construct_UFunction_USMInstance_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_IsInEndState_Statics
	{
		struct SMInstance_eventIsInEndState_Parms
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
	void Z_Construct_UFunction_USMInstance_IsInEndState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMInstance_eventIsInEndState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_IsInEndState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventIsInEndState_Parms), &Z_Construct_UFunction_USMInstance_IsInEndState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_IsInEndState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_IsInEndState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_IsInEndState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** True if the root state machine is in an end state. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "True if the root state machine is in an end state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_IsInEndState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "IsInEndState", nullptr, nullptr, sizeof(SMInstance_eventIsInEndState_Parms), Z_Construct_UFunction_USMInstance_IsInEndState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_IsInEndState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_IsInEndState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_IsInEndState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_IsInEndState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_IsInEndState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_IsInitialized_Statics
	{
		struct SMInstance_eventIsInitialized_Parms
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
	void Z_Construct_UFunction_USMInstance_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMInstance_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventIsInitialized_Parms), &Z_Construct_UFunction_USMInstance_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_IsInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_IsInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_IsInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "IsInitialized", nullptr, nullptr, sizeof(SMInstance_eventIsInitialized_Parms), Z_Construct_UFunction_USMInstance_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_IsInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_IsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_IsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_IsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_IsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_IsTickable_Statics
	{
		struct SMInstance_eventIsTickable_Parms
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
	void Z_Construct_UFunction_USMInstance_IsTickable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMInstance_eventIsTickable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_IsTickable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventIsTickable_Parms), &Z_Construct_UFunction_USMInstance_IsTickable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_IsTickable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_IsTickable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_IsTickable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_IsTickable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "IsTickable", nullptr, nullptr, sizeof(SMInstance_eventIsTickable_Parms), Z_Construct_UFunction_USMInstance_IsTickable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_IsTickable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_IsTickable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_IsTickable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_IsTickable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_IsTickable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_IsTickableWhenPaused_Statics
	{
		struct SMInstance_eventIsTickableWhenPaused_Parms
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
	void Z_Construct_UFunction_USMInstance_IsTickableWhenPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMInstance_eventIsTickableWhenPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_IsTickableWhenPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventIsTickableWhenPaused_Parms), &Z_Construct_UFunction_USMInstance_IsTickableWhenPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_IsTickableWhenPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_IsTickableWhenPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_IsTickableWhenPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_IsTickableWhenPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "IsTickableWhenPaused", nullptr, nullptr, sizeof(SMInstance_eventIsTickableWhenPaused_Parms), Z_Construct_UFunction_USMInstance_IsTickableWhenPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_IsTickableWhenPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_IsTickableWhenPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_IsTickableWhenPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_IsTickableWhenPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_IsTickableWhenPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_LoadFromMultipleStates_Statics
	{
		struct SMInstance_eventLoadFromMultipleStates_Parms
		{
			TArray<FGuid> FromGuids;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FromGuids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromGuids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FromGuids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_LoadFromMultipleStates_Statics::NewProp_FromGuids_Inner = { "FromGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_LoadFromMultipleStates_Statics::NewProp_FromGuids_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMInstance_LoadFromMultipleStates_Statics::NewProp_FromGuids = { "FromGuids", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventLoadFromMultipleStates_Parms, FromGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_LoadFromMultipleStates_Statics::NewProp_FromGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_LoadFromMultipleStates_Statics::NewProp_FromGuids_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_LoadFromMultipleStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_LoadFromMultipleStates_Statics::NewProp_FromGuids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_LoadFromMultipleStates_Statics::NewProp_FromGuids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_LoadFromMultipleStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/**\n\x09 * Set all owning parents' temporary initial state to the given guids. Useful for restoring multiple states within a state machine.\n\x09 * Best used when restoring from GetAllActiveStateGuids().\n\x09 * @param FromGuids Array of state guids to load.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Set all owning parents' temporary initial state to the given guids. Useful for restoring multiple states within a state machine.\nBest used when restoring from GetAllActiveStateGuids().\n@param FromGuids Array of state guids to load." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_LoadFromMultipleStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "LoadFromMultipleStates", nullptr, nullptr, sizeof(SMInstance_eventLoadFromMultipleStates_Parms), Z_Construct_UFunction_USMInstance_LoadFromMultipleStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_LoadFromMultipleStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_LoadFromMultipleStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_LoadFromMultipleStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_LoadFromMultipleStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_LoadFromMultipleStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_LoadFromState_Statics
	{
		struct SMInstance_eventLoadFromState_Parms
		{
			FGuid FromGuid;
			bool bAllParents;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FromGuid;
		static void NewProp_bAllParents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllParents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_LoadFromState_Statics::NewProp_FromGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_LoadFromState_Statics::NewProp_FromGuid = { "FromGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventLoadFromState_Parms, FromGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_LoadFromState_Statics::NewProp_FromGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_LoadFromState_Statics::NewProp_FromGuid_MetaData)) };
	void Z_Construct_UFunction_USMInstance_LoadFromState_Statics::NewProp_bAllParents_SetBit(void* Obj)
	{
		((SMInstance_eventLoadFromState_Parms*)Obj)->bAllParents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_LoadFromState_Statics::NewProp_bAllParents = { "bAllParents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventLoadFromState_Parms), &Z_Construct_UFunction_USMInstance_LoadFromState_Statics::NewProp_bAllParents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_LoadFromState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_LoadFromState_Statics::NewProp_FromGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_LoadFromState_Statics::NewProp_bAllParents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_LoadFromState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/**\n\x09 * Sets a temporary initial state of the guid's owning state machine.\n\x09 * With AllParents to true this is useful for restoring a single active state of a state machine from GetSingleActiveStateGuid().\n\x09 * If there are multiple active states, or the state of non active sub state machines is important use LoadFromMultipleStates() instead.\n\x09 * @param FromGuid The state guid to load.\n\x09 * @param bAllParents Recursively set the initial state of all parent state machines.\n\x09 */" },
		{ "CPP_Default_bAllParents", "true" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Sets a temporary initial state of the guid's owning state machine.\nWith AllParents to true this is useful for restoring a single active state of a state machine from GetSingleActiveStateGuid().\nIf there are multiple active states, or the state of non active sub state machines is important use LoadFromMultipleStates() instead.\n@param FromGuid The state guid to load.\n@param bAllParents Recursively set the initial state of all parent state machines." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_LoadFromState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "LoadFromState", nullptr, nullptr, sizeof(SMInstance_eventLoadFromState_Parms), Z_Construct_UFunction_USMInstance_LoadFromState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_LoadFromState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_LoadFromState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_LoadFromState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_LoadFromState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_LoadFromState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_OnContextPawnControllerChanged_Statics
	{
		struct SMInstance_eventOnContextPawnControllerChanged_Parms
		{
			APawn* Pawn;
			AController* NewController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_OnContextPawnControllerChanged_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventOnContextPawnControllerChanged_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_OnContextPawnControllerChanged_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventOnContextPawnControllerChanged_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_OnContextPawnControllerChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_OnContextPawnControllerChanged_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_OnContextPawnControllerChanged_Statics::NewProp_NewController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_OnContextPawnControllerChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_OnContextPawnControllerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "OnContextPawnControllerChanged", nullptr, nullptr, sizeof(SMInstance_eventOnContextPawnControllerChanged_Parms), Z_Construct_UFunction_USMInstance_OnContextPawnControllerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_OnContextPawnControllerChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_OnContextPawnControllerChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_OnContextPawnControllerChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_OnContextPawnControllerChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_OnContextPawnControllerChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_OnStateMachineInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_OnStateMachineInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Machine Instances" },
		{ "Comment", "/** Called when the instance is first initialized.  */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Called when the instance is first initialized." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_OnStateMachineInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "OnStateMachineInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_OnStateMachineInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_OnStateMachineInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_OnStateMachineInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_OnStateMachineInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_OnStateMachineInitialStateLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_OnStateMachineInitialStateLoaded_Statics::NewProp_StateGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_OnStateMachineInitialStateLoaded_Statics::NewProp_StateGuid = { "StateGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventOnStateMachineInitialStateLoaded_Parms, StateGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_OnStateMachineInitialStateLoaded_Statics::NewProp_StateGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_OnStateMachineInitialStateLoaded_Statics::NewProp_StateGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_OnStateMachineInitialStateLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_OnStateMachineInitialStateLoaded_Statics::NewProp_StateGuid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_OnStateMachineInitialStateLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Machine Instances" },
		{ "Comment", "/**\n\x09 * Called after an initial state has been set with LoadFromState() or LoadFromMultipleStates().\n\x09 * This may be called multiple times depending whether there is more than one state being loaded\n\x09 * or if parent state machines are also being loaded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Called after an initial state has been set with LoadFromState() or LoadFromMultipleStates().\nThis may be called multiple times depending whether there is more than one state being loaded\nor if parent state machines are also being loaded." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_OnStateMachineInitialStateLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "OnStateMachineInitialStateLoaded", nullptr, nullptr, sizeof(SMInstance_eventOnStateMachineInitialStateLoaded_Parms), Z_Construct_UFunction_USMInstance_OnStateMachineInitialStateLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_OnStateMachineInitialStateLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_OnStateMachineInitialStateLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_OnStateMachineInitialStateLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_OnStateMachineInitialStateLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_OnStateMachineInitialStateLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_OnStateMachineStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_OnStateMachineStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Machine Instances" },
		{ "Comment", "/** Called right before the root state machine starts its initial state.  */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Called right before the root state machine starts its initial state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_OnStateMachineStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "OnStateMachineStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_OnStateMachineStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_OnStateMachineStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_OnStateMachineStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_OnStateMachineStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FromState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics::NewProp_ToState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics::NewProp_ToState = { "ToState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventOnStateMachineStateChanged_Parms, ToState), Z_Construct_UScriptStruct_FSMStateInfo, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics::NewProp_ToState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics::NewProp_ToState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics::NewProp_FromState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics::NewProp_FromState = { "FromState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventOnStateMachineStateChanged_Parms, FromState), Z_Construct_UScriptStruct_FSMStateInfo, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics::NewProp_FromState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics::NewProp_FromState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics::NewProp_ToState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics::NewProp_FromState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Machine Instances" },
		{ "Comment", "/** Called when a state machine has switched states. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Called when a state machine has switched states." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "OnStateMachineStateChanged", nullptr, nullptr, sizeof(SMInstance_eventOnStateMachineStateChanged_Parms), Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_OnStateMachineStop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_OnStateMachineStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Machine Instances" },
		{ "Comment", "/** Called right after the instance has been stopped. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Called right after the instance has been stopped." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_OnStateMachineStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "OnStateMachineStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_OnStateMachineStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_OnStateMachineStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_OnStateMachineStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_OnStateMachineStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_OnStateMachineTransitionTaken_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_OnStateMachineTransitionTaken_Statics::NewProp_Transition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_OnStateMachineTransitionTaken_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventOnStateMachineTransitionTaken_Parms, Transition), Z_Construct_UScriptStruct_FSMTransitionInfo, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_OnStateMachineTransitionTaken_Statics::NewProp_Transition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_OnStateMachineTransitionTaken_Statics::NewProp_Transition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_OnStateMachineTransitionTaken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_OnStateMachineTransitionTaken_Statics::NewProp_Transition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_OnStateMachineTransitionTaken_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Machine Instances" },
		{ "Comment", "/** Called when a transition has evaluated to true and is being taken. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Called when a transition has evaluated to true and is being taken." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_OnStateMachineTransitionTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "OnStateMachineTransitionTaken", nullptr, nullptr, sizeof(SMInstance_eventOnStateMachineTransitionTaken_Parms), Z_Construct_UFunction_USMInstance_OnStateMachineTransitionTaken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_OnStateMachineTransitionTaken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_OnStateMachineTransitionTaken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_OnStateMachineTransitionTaken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_OnStateMachineTransitionTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_OnStateMachineTransitionTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_OnStateMachineUpdate_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USMInstance_OnStateMachineUpdate_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventOnStateMachineUpdate_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_OnStateMachineUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_OnStateMachineUpdate_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_OnStateMachineUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Machine Instances" },
		{ "Comment", "/** Called right before the root state machine updates.  */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Called right before the root state machine updates." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_OnStateMachineUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "OnStateMachineUpdate", nullptr, nullptr, sizeof(SMInstance_eventOnStateMachineUpdate_Parms), Z_Construct_UFunction_USMInstance_OnStateMachineUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_OnStateMachineUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_OnStateMachineUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_OnStateMachineUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_OnStateMachineUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_OnStateMachineUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_REP_StartChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_REP_StartChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_REP_StartChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "REP_StartChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_REP_StartChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_REP_StartChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_REP_StartChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_REP_StartChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_Restart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_Restart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Forcibly restart the state machine and place it back into an entry state. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Forcibly restart the state machine and place it back into an entry state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_Restart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "Restart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_Restart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_Restart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_Restart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_Restart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_SetAutoManageTime_Statics
	{
		struct SMInstance_eventSetAutoManageTime_Parms
		{
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMInstance_SetAutoManageTime_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((SMInstance_eventSetAutoManageTime_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_SetAutoManageTime_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventSetAutoManageTime_Parms), &Z_Construct_UFunction_USMInstance_SetAutoManageTime_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_SetAutoManageTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_SetAutoManageTime_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_SetAutoManageTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_SetAutoManageTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "SetAutoManageTime", nullptr, nullptr, sizeof(SMInstance_eventSetAutoManageTime_Parms), Z_Construct_UFunction_USMInstance_SetAutoManageTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetAutoManageTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_SetAutoManageTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetAutoManageTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_SetAutoManageTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_SetAutoManageTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_SetCanEverTick_Statics
	{
		struct SMInstance_eventSetCanEverTick_Parms
		{
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMInstance_SetCanEverTick_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((SMInstance_eventSetCanEverTick_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_SetCanEverTick_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventSetCanEverTick_Parms), &Z_Construct_UFunction_USMInstance_SetCanEverTick_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_SetCanEverTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_SetCanEverTick_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_SetCanEverTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** If false IsTickable will return false. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "If false IsTickable will return false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_SetCanEverTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "SetCanEverTick", nullptr, nullptr, sizeof(SMInstance_eventSetCanEverTick_Parms), Z_Construct_UFunction_USMInstance_SetCanEverTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetCanEverTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_SetCanEverTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetCanEverTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_SetCanEverTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_SetCanEverTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_SetCanTickWhenPaused_Statics
	{
		struct SMInstance_eventSetCanTickWhenPaused_Parms
		{
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMInstance_SetCanTickWhenPaused_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((SMInstance_eventSetCanTickWhenPaused_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_SetCanTickWhenPaused_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventSetCanTickWhenPaused_Parms), &Z_Construct_UFunction_USMInstance_SetCanTickWhenPaused_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_SetCanTickWhenPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_SetCanTickWhenPaused_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_SetCanTickWhenPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_SetCanTickWhenPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "SetCanTickWhenPaused", nullptr, nullptr, sizeof(SMInstance_eventSetCanTickWhenPaused_Parms), Z_Construct_UFunction_USMInstance_SetCanTickWhenPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetCanTickWhenPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_SetCanTickWhenPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetCanTickWhenPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_SetCanTickWhenPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_SetCanTickWhenPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_SetContext_Statics
	{
		struct SMInstance_eventSetContext_Parms
		{
			UObject* Context;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_SetContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventSetContext_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_SetContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_SetContext_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_SetContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Sets a new context. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Sets a new context." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_SetContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "SetContext", nullptr, nullptr, sizeof(SMInstance_eventSetContext_Parms), Z_Construct_UFunction_USMInstance_SetContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_SetContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_SetContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_SetContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_SetStateHistoryMaxCount_Statics
	{
		struct SMInstance_eventSetStateHistoryMaxCount_Parms
		{
			int32 NewSize;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USMInstance_SetStateHistoryMaxCount_Statics::NewProp_NewSize = { "NewSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventSetStateHistoryMaxCount_Parms, NewSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_SetStateHistoryMaxCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_SetStateHistoryMaxCount_Statics::NewProp_NewSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_SetStateHistoryMaxCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/**\n\x09 * Sets the maximum number of states to record into history.\n\x09 * Resizes the array removing older entries if needed.\n\x09 * @param NewSize The number of states to record. Set to -1 for no limit.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Sets the maximum number of states to record into history.\nResizes the array removing older entries if needed.\n@param NewSize The number of states to record. Set to -1 for no limit." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_SetStateHistoryMaxCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "SetStateHistoryMaxCount", nullptr, nullptr, sizeof(SMInstance_eventSetStateHistoryMaxCount_Parms), Z_Construct_UFunction_USMInstance_SetStateHistoryMaxCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetStateHistoryMaxCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_SetStateHistoryMaxCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetStateHistoryMaxCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_SetStateHistoryMaxCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_SetStateHistoryMaxCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_SetStateMachineClass_Statics
	{
		struct SMInstance_eventSetStateMachineClass_Parms
		{
			TSubclassOf<USMStateMachineInstance>  NewStateMachineClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewStateMachineClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USMInstance_SetStateMachineClass_Statics::NewProp_NewStateMachineClass = { "NewStateMachineClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventSetStateMachineClass_Parms, NewStateMachineClass), Z_Construct_UClass_USMStateMachineInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_SetStateMachineClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_SetStateMachineClass_Statics::NewProp_NewStateMachineClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_SetStateMachineClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/**\n\x09 * Sets the state machine node instance class.\n\x09 *\n\x09 * @param NewStateMachineClass The state machine class to set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Sets the state machine node instance class.\n\n@param NewStateMachineClass The state machine class to set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_SetStateMachineClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "SetStateMachineClass", nullptr, nullptr, sizeof(SMInstance_eventSetStateMachineClass_Parms), Z_Construct_UFunction_USMInstance_SetStateMachineClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetStateMachineClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_SetStateMachineClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetStateMachineClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_SetStateMachineClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_SetStateMachineClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_SetStopOnEndState_Statics
	{
		struct SMInstance_eventSetStopOnEndState_Parms
		{
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMInstance_SetStopOnEndState_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((SMInstance_eventSetStopOnEndState_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_SetStopOnEndState_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventSetStopOnEndState_Parms), &Z_Construct_UFunction_USMInstance_SetStopOnEndState_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_SetStopOnEndState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_SetStopOnEndState_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_SetStopOnEndState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_SetStopOnEndState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "SetStopOnEndState", nullptr, nullptr, sizeof(SMInstance_eventSetStopOnEndState_Parms), Z_Construct_UFunction_USMInstance_SetStopOnEndState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetStopOnEndState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_SetStopOnEndState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetStopOnEndState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_SetStopOnEndState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_SetStopOnEndState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_SetTickBeforeBeginPlay_Statics
	{
		struct SMInstance_eventSetTickBeforeBeginPlay_Parms
		{
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMInstance_SetTickBeforeBeginPlay_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((SMInstance_eventSetTickBeforeBeginPlay_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_SetTickBeforeBeginPlay_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventSetTickBeforeBeginPlay_Parms), &Z_Construct_UFunction_USMInstance_SetTickBeforeBeginPlay_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_SetTickBeforeBeginPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_SetTickBeforeBeginPlay_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_SetTickBeforeBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_SetTickBeforeBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "SetTickBeforeBeginPlay", nullptr, nullptr, sizeof(SMInstance_eventSetTickBeforeBeginPlay_Parms), Z_Construct_UFunction_USMInstance_SetTickBeforeBeginPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetTickBeforeBeginPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_SetTickBeforeBeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetTickBeforeBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_SetTickBeforeBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_SetTickBeforeBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_SetTickInterval_Statics
	{
		struct SMInstance_eventSetTickInterval_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USMInstance_SetTickInterval_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventSetTickInterval_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_SetTickInterval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_SetTickInterval_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_SetTickInterval_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Time in seconds between native ticks. This mostly affects the \"Update\" rate of the state machine. Overloaded Ticks won't be affected. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Time in seconds between native ticks. This mostly affects the \"Update\" rate of the state machine. Overloaded Ticks won't be affected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_SetTickInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "SetTickInterval", nullptr, nullptr, sizeof(SMInstance_eventSetTickInterval_Parms), Z_Construct_UFunction_USMInstance_SetTickInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetTickInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_SetTickInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetTickInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_SetTickInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_SetTickInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_SetTickOnManualUpdate_Statics
	{
		struct SMInstance_eventSetTickOnManualUpdate_Parms
		{
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMInstance_SetTickOnManualUpdate_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((SMInstance_eventSetTickOnManualUpdate_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_SetTickOnManualUpdate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventSetTickOnManualUpdate_Parms), &Z_Construct_UFunction_USMInstance_SetTickOnManualUpdate_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_SetTickOnManualUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_SetTickOnManualUpdate_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_SetTickOnManualUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_SetTickOnManualUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "SetTickOnManualUpdate", nullptr, nullptr, sizeof(SMInstance_eventSetTickOnManualUpdate_Parms), Z_Construct_UFunction_USMInstance_SetTickOnManualUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetTickOnManualUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_SetTickOnManualUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_SetTickOnManualUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_SetTickOnManualUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_SetTickOnManualUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_Shutdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/**\n\x09 * Shutdown this instance. Calls Stop. Must call initialize again before use.\n\x09 * If the goal is to restart the state machine later call Stop instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Shutdown this instance. Calls Stop. Must call initialize again before use.\nIf the goal is to restart the state machine later call Stop instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "Shutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_Shutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_Shutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_Start_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Start the root state machine. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Start the root state machine." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_StartWithNewContext_Statics
	{
		struct SMInstance_eventStartWithNewContext_Parms
		{
			UObject* Context;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMInstance_StartWithNewContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventStartWithNewContext_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_StartWithNewContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_StartWithNewContext_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_StartWithNewContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_StartWithNewContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "StartWithNewContext", nullptr, nullptr, sizeof(SMInstance_eventStartWithNewContext_Parms), Z_Construct_UFunction_USMInstance_StartWithNewContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_StartWithNewContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_StartWithNewContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_StartWithNewContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_StartWithNewContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_StartWithNewContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** This will complete the state machine's current state and force the machine to end regardless of if the state is an end state. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "This will complete the state machine's current state and force the machine to end regardless of if the state is an end state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_Tick_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USMInstance_Tick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_Tick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_Tick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_Tick_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Machine Instances" },
		{ "Comment", "/** The native tick is required to update the state machine. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "The native tick is required to update the state machine." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "Tick", nullptr, nullptr, sizeof(SMInstance_eventTick_Parms), Z_Construct_UFunction_USMInstance_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_TryGetNestedActiveState_Statics
	{
		struct SMInstance_eventTryGetNestedActiveState_Parms
		{
			FSMStateInfo FoundState;
			bool bSuccess;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoundState;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_TryGetNestedActiveState_Statics::NewProp_FoundState = { "FoundState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventTryGetNestedActiveState_Parms, FoundState), Z_Construct_UScriptStruct_FSMStateInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMInstance_TryGetNestedActiveState_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((SMInstance_eventTryGetNestedActiveState_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_TryGetNestedActiveState_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventTryGetNestedActiveState_Parms), &Z_Construct_UFunction_USMInstance_TryGetNestedActiveState_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_TryGetNestedActiveState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_TryGetNestedActiveState_Statics::NewProp_FoundState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_TryGetNestedActiveState_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_TryGetNestedActiveState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Retrieve the lowest level single active state including all nested state machines. Returns read only information. */" },
		{ "DisplayName", "Try Get Single Nested Active State" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Retrieve the lowest level single active state including all nested state machines. Returns read only information." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_TryGetNestedActiveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "TryGetNestedActiveState", nullptr, nullptr, sizeof(SMInstance_eventTryGetNestedActiveState_Parms), Z_Construct_UFunction_USMInstance_TryGetNestedActiveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_TryGetNestedActiveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_TryGetNestedActiveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_TryGetNestedActiveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_TryGetNestedActiveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_TryGetNestedActiveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics
	{
		struct SMInstance_eventTryGetStateInfo_Parms
		{
			FGuid Guid;
			FSMStateInfo StateInfo;
			bool bSuccess;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateInfo;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::NewProp_Guid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventTryGetStateInfo_Parms, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::NewProp_Guid_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::NewProp_StateInfo = { "StateInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventTryGetStateInfo_Parms, StateInfo), Z_Construct_UScriptStruct_FSMStateInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((SMInstance_eventTryGetStateInfo_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventTryGetStateInfo_Parms), &Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::NewProp_StateInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Quickly returns read only information of the state belonging to the given guid. This always executes from the master. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Quickly returns read only information of the state belonging to the given guid. This always executes from the master." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "TryGetStateInfo", nullptr, nullptr, sizeof(SMInstance_eventTryGetStateInfo_Parms), Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_TryGetStateInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_TryGetStateInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics
	{
		struct SMInstance_eventTryGetTransitionInfo_Parms
		{
			FGuid Guid;
			FSMTransitionInfo TransitionInfo;
			bool bSuccess;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionInfo;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::NewProp_Guid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventTryGetTransitionInfo_Parms, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::NewProp_Guid_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::NewProp_TransitionInfo = { "TransitionInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventTryGetTransitionInfo_Parms, TransitionInfo), Z_Construct_UScriptStruct_FSMTransitionInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((SMInstance_eventTryGetTransitionInfo_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMInstance_eventTryGetTransitionInfo_Parms), &Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::NewProp_TransitionInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Quickly returns read only information of the transition belonging to the given guid. This always executes from the master. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Quickly returns read only information of the transition belonging to the given guid. This always executes from the master." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "TryGetTransitionInfo", nullptr, nullptr, sizeof(SMInstance_eventTryGetTransitionInfo_Parms), Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_TryGetTransitionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_TryGetTransitionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMInstance_Update_Statics
	{
		struct SMInstance_eventUpdate_Parms
		{
			float DeltaSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USMInstance_Update_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMInstance_eventUpdate_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMInstance_Update_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMInstance_Update_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMInstance_Update_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Manual way of updating the root state machine if tick is disabled. */" },
		{ "CPP_Default_DeltaSeconds", "0.000000" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Manual way of updating the root state machine if tick is disabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMInstance_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMInstance, nullptr, "Update", nullptr, nullptr, sizeof(SMInstance_eventUpdate_Parms), Z_Construct_UFunction_USMInstance_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMInstance_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMInstance_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMInstance_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMInstance_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMInstance_NoRegister()
	{
		return USMInstance::StaticClass();
	}
	struct Z_Construct_UClass_USMInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootStateMachineGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootStateMachineGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateMachineInitializedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateMachineInitializedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateMachineStartedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateMachineStartedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateMachineUpdatedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateMachineUpdatedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateMachineStoppedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateMachineStoppedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateMachineTransitionTakenEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateMachineTransitionTakenEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateMachineStateChangedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateMachineStateChangedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkInterface_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_NetworkInterface;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveTransactions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTransactions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveTransactions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateHistory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateHistory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StateHistory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootStateMachine_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootStateMachine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_StateMachineContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_R_StateMachineContext;
		static const UECodeGen_Private::FStructPropertyParams NewProp_R_ActiveStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_ActiveStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_R_ActiveStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferenceOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StateMachineClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoManageTime_MetaData[];
#endif
		static void NewProp_bAutoManageTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoManageTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopOnEndState_MetaData[];
#endif
		static void NewProp_bStopOnEndState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopOnEndState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEverTick_MetaData[];
#endif
		static void NewProp_bCanEverTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEverTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanTickWhenPaused_MetaData[];
#endif
		static void NewProp_bCanTickWhenPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTickWhenPaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTickRegistered_MetaData[];
#endif
		static void NewProp_bTickRegistered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickRegistered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTickBeforeInitialize_MetaData[];
#endif
		static void NewProp_bTickBeforeInitialize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickBeforeInitialize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTickBeforeBeginPlay_MetaData[];
#endif
		static void NewProp_bTickBeforeBeginPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickBeforeBeginPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateHistoryMaxCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateHistoryMaxCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLogging_MetaData[];
#endif
		static void NewProp_bEnableLogging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLogging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLogStateChange_MetaData[];
#endif
		static void NewProp_bLogStateChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogStateChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLogTransitionTaken_MetaData[];
#endif
		static void NewProp_bLogTransitionTaken_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogTransitionTaken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoReceiveInput_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoReceiveInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlockInput_MetaData[];
#endif
		static void NewProp_bBlockInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTimeToWaitForUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTimeToWaitForUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSinceAllowedTick_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceAllowedTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTimeDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldTimeDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCallTickOnManualUpdate_MetaData[];
#endif
		static void NewProp_bCallTickOnManualUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallTickOnManualUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTicking_MetaData[];
#endif
		static void NewProp_bIsTicking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTicking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUpdating_MetaData[];
#endif
		static void NewProp_bIsUpdating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUpdating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEvaluateTransitionsLocally_MetaData[];
#endif
		static void NewProp_bCanEvaluateTransitionsLocally_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEvaluateTransitionsLocally;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanTakeTransitionsLocally_MetaData[];
#endif
		static void NewProp_bCanTakeTransitionsLocally_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTakeTransitionsLocally;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanExecuteStateLogic_MetaData[];
#endif
		static void NewProp_bCanExecuteStateLogic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanExecuteStateLogic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_bHasStarted_MetaData[];
#endif
		static void NewProp_R_bHasStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_R_bHasStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_bLoadFromStatesCalled_MetaData[];
#endif
		static void NewProp_R_bLoadFromStatesCalled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_R_bLoadFromStatesCalled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceTemplates_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferenceTemplates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceTemplates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferenceTemplates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMInstance_AreInitialStatesSetFromLoad, "AreInitialStatesSetFromLoad" }, // 1183132874
		{ &Z_Construct_UFunction_USMInstance_CanAutoManageTime, "CanAutoManageTime" }, // 484371009
		{ &Z_Construct_UFunction_USMInstance_CanEverTick, "CanEverTick" }, // 1876807524
		{ &Z_Construct_UFunction_USMInstance_CanTickOnManualUpdate, "CanTickOnManualUpdate" }, // 854533899
		{ &Z_Construct_UFunction_USMInstance_EvaluateTransitions, "EvaluateTransitions" }, // 170317040
		{ &Z_Construct_UFunction_USMInstance_GetActiveStateGuid, "GetActiveStateGuid" }, // 1811988386
		{ &Z_Construct_UFunction_USMInstance_GetActiveStateInstance, "GetActiveStateInstance" }, // 3512892425
		{ &Z_Construct_UFunction_USMInstance_GetActiveStateName, "GetActiveStateName" }, // 64906149
		{ &Z_Construct_UFunction_USMInstance_GetAllActiveStateGuids, "GetAllActiveStateGuids" }, // 2539681844
		{ &Z_Construct_UFunction_USMInstance_GetAllActiveStateInstances, "GetAllActiveStateInstances" }, // 4031918673
		{ &Z_Construct_UFunction_USMInstance_GetAllCurrentStateGuids, "GetAllCurrentStateGuids" }, // 3474544455
		{ &Z_Construct_UFunction_USMInstance_GetAllReferencedInstances, "GetAllReferencedInstances" }, // 1850837683
		{ &Z_Construct_UFunction_USMInstance_GetAllStateInstances, "GetAllStateInstances" }, // 3223803983
		{ &Z_Construct_UFunction_USMInstance_GetAllTransitionInstances, "GetAllTransitionInstances" }, // 2891477410
		{ &Z_Construct_UFunction_USMInstance_GetComponentOwner, "GetComponentOwner" }, // 1974432561
		{ &Z_Construct_UFunction_USMInstance_GetContext, "GetContext" }, // 1257717758
		{ &Z_Construct_UFunction_USMInstance_GetMasterReferenceOwner, "GetMasterReferenceOwner" }, // 3967259499
		{ &Z_Construct_UFunction_USMInstance_GetNestedActiveStateGuid, "GetNestedActiveStateGuid" }, // 1691258310
		{ &Z_Construct_UFunction_USMInstance_GetNestedActiveStateName, "GetNestedActiveStateName" }, // 3579394916
		{ &Z_Construct_UFunction_USMInstance_GetNetworkInterface, "GetNetworkInterface" }, // 693632021
		{ &Z_Construct_UFunction_USMInstance_GetReferencedInstanceByGuid, "GetReferencedInstanceByGuid" }, // 3669868908
		{ &Z_Construct_UFunction_USMInstance_GetReferenceOwner, "GetReferenceOwner" }, // 2705594259
		{ &Z_Construct_UFunction_USMInstance_GetRootStateMachineInstance, "GetRootStateMachineInstance" }, // 3686379687
		{ &Z_Construct_UFunction_USMInstance_GetSingleActiveStateGuid, "GetSingleActiveStateGuid" }, // 1309034709
		{ &Z_Construct_UFunction_USMInstance_GetSingleActiveStateInstance, "GetSingleActiveStateInstance" }, // 516085622
		{ &Z_Construct_UFunction_USMInstance_GetStateHistory, "GetStateHistory" }, // 2587904007
		{ &Z_Construct_UFunction_USMInstance_GetStateInstanceByGuid, "GetStateInstanceByGuid" }, // 3208828192
		{ &Z_Construct_UFunction_USMInstance_GetStateMachineClass, "GetStateMachineClass" }, // 1878155708
		{ &Z_Construct_UFunction_USMInstance_GetTickInterval, "GetTickInterval" }, // 989624516
		{ &Z_Construct_UFunction_USMInstance_GetTransitionInstanceByGuid, "GetTransitionInstanceByGuid" }, // 2957781082
		{ &Z_Construct_UFunction_USMInstance_HasStarted, "HasStarted" }, // 2828592972
		{ &Z_Construct_UFunction_USMInstance_Initialize, "Initialize" }, // 2109218563
		{ &Z_Construct_UFunction_USMInstance_Internal_EventCleanup, "Internal_EventCleanup" }, // 3991524132
		{ &Z_Construct_UFunction_USMInstance_Internal_Update, "Internal_Update" }, // 3354092805
		{ &Z_Construct_UFunction_USMInstance_IsActive, "IsActive" }, // 2383314842
		{ &Z_Construct_UFunction_USMInstance_IsInEndState, "IsInEndState" }, // 2882510654
		{ &Z_Construct_UFunction_USMInstance_IsInitialized, "IsInitialized" }, // 2827247613
		{ &Z_Construct_UFunction_USMInstance_IsTickable, "IsTickable" }, // 1599283772
		{ &Z_Construct_UFunction_USMInstance_IsTickableWhenPaused, "IsTickableWhenPaused" }, // 1635489403
		{ &Z_Construct_UFunction_USMInstance_LoadFromMultipleStates, "LoadFromMultipleStates" }, // 302236797
		{ &Z_Construct_UFunction_USMInstance_LoadFromState, "LoadFromState" }, // 2775036309
		{ &Z_Construct_UFunction_USMInstance_OnContextPawnControllerChanged, "OnContextPawnControllerChanged" }, // 1002941635
		{ &Z_Construct_UFunction_USMInstance_OnStateMachineInitialized, "OnStateMachineInitialized" }, // 3329087921
		{ &Z_Construct_UFunction_USMInstance_OnStateMachineInitialStateLoaded, "OnStateMachineInitialStateLoaded" }, // 2424882868
		{ &Z_Construct_UFunction_USMInstance_OnStateMachineStart, "OnStateMachineStart" }, // 2392264492
		{ &Z_Construct_UFunction_USMInstance_OnStateMachineStateChanged, "OnStateMachineStateChanged" }, // 3709840200
		{ &Z_Construct_UFunction_USMInstance_OnStateMachineStop, "OnStateMachineStop" }, // 1897379250
		{ &Z_Construct_UFunction_USMInstance_OnStateMachineTransitionTaken, "OnStateMachineTransitionTaken" }, // 3938720097
		{ &Z_Construct_UFunction_USMInstance_OnStateMachineUpdate, "OnStateMachineUpdate" }, // 3275816920
		{ &Z_Construct_UFunction_USMInstance_REP_StartChanged, "REP_StartChanged" }, // 3558993394
		{ &Z_Construct_UFunction_USMInstance_Restart, "Restart" }, // 1519268643
		{ &Z_Construct_UFunction_USMInstance_SetAutoManageTime, "SetAutoManageTime" }, // 875050094
		{ &Z_Construct_UFunction_USMInstance_SetCanEverTick, "SetCanEverTick" }, // 3609090318
		{ &Z_Construct_UFunction_USMInstance_SetCanTickWhenPaused, "SetCanTickWhenPaused" }, // 4128376858
		{ &Z_Construct_UFunction_USMInstance_SetContext, "SetContext" }, // 774527973
		{ &Z_Construct_UFunction_USMInstance_SetStateHistoryMaxCount, "SetStateHistoryMaxCount" }, // 4097718170
		{ &Z_Construct_UFunction_USMInstance_SetStateMachineClass, "SetStateMachineClass" }, // 3089510874
		{ &Z_Construct_UFunction_USMInstance_SetStopOnEndState, "SetStopOnEndState" }, // 2595676626
		{ &Z_Construct_UFunction_USMInstance_SetTickBeforeBeginPlay, "SetTickBeforeBeginPlay" }, // 1034478132
		{ &Z_Construct_UFunction_USMInstance_SetTickInterval, "SetTickInterval" }, // 992813506
		{ &Z_Construct_UFunction_USMInstance_SetTickOnManualUpdate, "SetTickOnManualUpdate" }, // 871129386
		{ &Z_Construct_UFunction_USMInstance_Shutdown, "Shutdown" }, // 2710557869
		{ &Z_Construct_UFunction_USMInstance_Start, "Start" }, // 354942406
		{ &Z_Construct_UFunction_USMInstance_StartWithNewContext, "StartWithNewContext" }, // 2437963116
		{ &Z_Construct_UFunction_USMInstance_Stop, "Stop" }, // 4201324376
		{ &Z_Construct_UFunction_USMInstance_Tick, "Tick" }, // 1844354946
		{ &Z_Construct_UFunction_USMInstance_TryGetNestedActiveState, "TryGetNestedActiveState" }, // 2995570918
		{ &Z_Construct_UFunction_USMInstance_TryGetStateInfo, "TryGetStateInfo" }, // 1456956442
		{ &Z_Construct_UFunction_USMInstance_TryGetTransitionInfo, "TryGetTransitionInfo" }, // 3182511113
		{ &Z_Construct_UFunction_USMInstance_Update, "Update" }, // 4258810879
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "State Machine Instance|Tick State Machine Instance|Logging" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LogicDriver" },
		{ "Comment", "/**\n * The base class all blueprint state machines inherit from. The compiled state machine is accessible through GetRootStateMachine().\n */" },
		{ "DisplayName", "State Machine Instance" },
		{ "HideCategories", "SMInstance" },
		{ "IncludePath", "SMInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "The base class all blueprint state machines inherit from. The compiled state machine is accessible through GetRootStateMachine()." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_RootStateMachineGuid_MetaData[] = {
		{ "Comment", "/** Used to identify the root state machine during initialization. This is not a calculated value and represents the NodeGuid. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Used to identify the root state machine during initialization. This is not a calculated value and represents the NodeGuid." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_RootStateMachineGuid = { "RootStateMachineGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, RootStateMachineGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_RootStateMachineGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_RootStateMachineGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineInitializedEvent_MetaData[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Called when the state machine is first initialized. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Called when the state machine is first initialized." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineInitializedEvent = { "OnStateMachineInitializedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, OnStateMachineInitializedEvent), Z_Construct_UDelegateFunction_SMSystem_OnStateMachineInitializedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineInitializedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineInitializedEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineStartedEvent_MetaData[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Called right before the state machine is started. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Called right before the state machine is started." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineStartedEvent = { "OnStateMachineStartedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, OnStateMachineStartedEvent), Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStartedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineStartedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineStartedEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineUpdatedEvent_MetaData[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Called right before the state machine is updated. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Called right before the state machine is updated." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineUpdatedEvent = { "OnStateMachineUpdatedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, OnStateMachineUpdatedEvent), Z_Construct_UDelegateFunction_SMSystem_OnStateMachineUpdatedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineUpdatedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineUpdatedEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineStoppedEvent_MetaData[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Called right after the state machine has ended. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Called right after the state machine has ended." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineStoppedEvent = { "OnStateMachineStoppedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, OnStateMachineStoppedEvent), Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStoppedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineStoppedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineStoppedEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineTransitionTakenEvent_MetaData[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Called when a transition has evaluated to true and is being taken. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Called when a transition has evaluated to true and is being taken." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineTransitionTakenEvent = { "OnStateMachineTransitionTakenEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, OnStateMachineTransitionTakenEvent), Z_Construct_UDelegateFunction_SMSystem_OnStateMachineTransitionTakenSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineTransitionTakenEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineTransitionTakenEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineStateChangedEvent_MetaData[] = {
		{ "Category", "Logic Driver|State Machine Instances" },
		{ "Comment", "/** Called when a state machine has switched states. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Called when a state machine has switched states." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineStateChangedEvent = { "OnStateMachineStateChangedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, OnStateMachineStateChangedEvent), Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineStateChangedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineStateChangedEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_ComponentOwner_MetaData[] = {
		{ "Comment", "/** The component owning this instance. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "The component owning this instance." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_ComponentOwner = { "ComponentOwner", nullptr, (EPropertyFlags)0x0020080000080028, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, ComponentOwner), Z_Construct_UClass_USMStateMachineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_ComponentOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_ComponentOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_NetworkInterface_MetaData[] = {
		{ "Comment", "/** Pointer to server object to notify of active transitions. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Pointer to server object to notify of active transitions." },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_NetworkInterface = { "NetworkInterface", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, NetworkInterface), Z_Construct_UClass_USMStateMachineNetworkedInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_NetworkInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_NetworkInterface_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_ActiveTransactions_Inner = { "ActiveTransactions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMNetworkedTransaction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_ActiveTransactions_MetaData[] = {
		{ "Comment", "/** Networked transactions that are currently being executed. Only valid for one update cycle and only used if there is a server object. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Networked transactions that are currently being executed. Only valid for one update cycle and only used if there is a server object." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_ActiveTransactions = { "ActiveTransactions", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, ActiveTransactions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_ActiveTransactions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_ActiveTransactions_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_StateHistory_Inner = { "StateHistory", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMStateHistory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_StateHistory_MetaData[] = {
		{ "Category", "State Machine Instance|History" },
		{ "Comment", "/** Ordered history of states, oldest to newest, not including active state(s). */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Ordered history of states, oldest to newest, not including active state(s)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_StateHistory = { "StateHistory", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, StateHistory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_StateHistory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_StateHistory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_RootStateMachine_MetaData[] = {
		{ "Comment", "/** Top level state machine */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Top level state machine" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_RootStateMachine = { "RootStateMachine", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, RootStateMachine), Z_Construct_UScriptStruct_FSMStateMachine, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_RootStateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_RootStateMachine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_R_StateMachineContext_MetaData[] = {
		{ "Comment", "/** The context to run the state machine in. */" },
		{ "DisplayName", "Context" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "The context to run the state machine in." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_R_StateMachineContext = { "R_StateMachineContext", nullptr, (EPropertyFlags)0x0020080000002020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, R_StateMachineContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_R_StateMachineContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_R_StateMachineContext_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_R_ActiveStates_Inner = { "R_ActiveStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMActiveStateTransaction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_R_ActiveStates_MetaData[] = {
		{ "Comment", "/** Replicated active state guids. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Replicated active state guids." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_R_ActiveStates = { "R_ActiveStates", nullptr, (EPropertyFlags)0x0020080000002020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, R_ActiveStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_R_ActiveStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_R_ActiveStates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_ReferenceOwner_MetaData[] = {
		{ "Comment", "/** If this instance is owned by another instance making this a reference. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "If this instance is owned by another instance making this a reference." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_ReferenceOwner = { "ReferenceOwner", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, ReferenceOwner), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_ReferenceOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_ReferenceOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_StateMachineClass_MetaData[] = {
		{ "BlueprintBaseOnly", "" },
		{ "Category", "State Machine Instance" },
		{ "Comment", "/** The custom node instance class to use for this state machine. This is not the same as USMInstance. */" },
		{ "DisplayName", "Node Class" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "The custom node instance class to use for this state machine. This is not the same as USMInstance." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_StateMachineClass = { "StateMachineClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, StateMachineClass), Z_Construct_UClass_USMStateMachineInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_StateMachineClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_StateMachineClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_bAutoManageTime_MetaData[] = {
		{ "Category", "State Machine Instance" },
		{ "Comment", "/** Automatically calculate delta seconds if none are provided. Requires context with a valid World. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Automatically calculate delta seconds if none are provided. Requires context with a valid World." },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_bAutoManageTime_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->bAutoManageTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_bAutoManageTime = { "bAutoManageTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_bAutoManageTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_bAutoManageTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_bAutoManageTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_bStopOnEndState_MetaData[] = {
		{ "Category", "State Machine Instance" },
		{ "Comment", "/** Should this instance stop itself once an end state has been reached. An Update call is required for this to occur. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Should this instance stop itself once an end state has been reached. An Update call is required for this to occur." },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_bStopOnEndState_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->bStopOnEndState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_bStopOnEndState = { "bStopOnEndState", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_bStopOnEndState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_bStopOnEndState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_bStopOnEndState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_bCanEverTick_MetaData[] = {
		{ "Category", "State Machine Instance|Tick" },
		{ "Comment", "/** Should this instance tick. By default it will update the state machine. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Should this instance tick. By default it will update the state machine." },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_bCanEverTick_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->bCanEverTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_bCanEverTick = { "bCanEverTick", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_bCanEverTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_bCanEverTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_bCanEverTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_bCanTickWhenPaused_MetaData[] = {
		{ "Category", "State Machine Instance|Tick" },
		{ "Comment", "/** Should this instance tick when the game is paused. */" },
		{ "EditCondition", "bCanEverTick" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Should this instance tick when the game is paused." },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_bCanTickWhenPaused_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->bCanTickWhenPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_bCanTickWhenPaused = { "bCanTickWhenPaused", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_bCanTickWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_bCanTickWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_bCanTickWhenPaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_TickInterval_MetaData[] = {
		{ "Category", "State Machine Instance|Tick" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Time in seconds between native ticks. This mostly affects the \"Update\" rate of the state machine. Overloaded Ticks won't be affected. */" },
		{ "DisplayName", "Tick Interval" },
		{ "EditCondition", "bCanEverTick" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Time in seconds between native ticks. This mostly affects the \"Update\" rate of the state machine. Overloaded Ticks won't be affected." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, TickInterval), METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_TickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_TickInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_bTickRegistered_MetaData[] = {
		{ "Category", "State Machine Instance|Tick" },
		{ "Comment", "/**\n\x09 * Setting to false physically prevents the tick function from being registered and the instance from ever ticking.\n\x09 * This is different from bCanEverTick in that it cannot be changed and it also offers slightly better performance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Setting to false physically prevents the tick function from being registered and the instance from ever ticking.\nThis is different from bCanEverTick in that it cannot be changed and it also offers slightly better performance." },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_bTickRegistered_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->bTickRegistered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_bTickRegistered = { "bTickRegistered", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_bTickRegistered_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_bTickRegistered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_bTickRegistered_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_bTickBeforeInitialize_MetaData[] = {
		{ "Category", "State Machine Instance|Tick" },
		{ "Comment", "/**\n\x09 * Allow the state machine to tick before it is initialized.\n\x09 * This likely isn't necessary as CreateStateMachineInstance will initialize the state machine.\n\x09 */" },
		{ "EditCondition", "bTickRegistered" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Allow the state machine to tick before it is initialized.\nThis likely isn't necessary as CreateStateMachineInstance will initialize the state machine." },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_bTickBeforeInitialize_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->bTickBeforeInitialize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_bTickBeforeInitialize = { "bTickBeforeInitialize", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_bTickBeforeInitialize_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_bTickBeforeInitialize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_bTickBeforeInitialize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_bTickBeforeBeginPlay_MetaData[] = {
		{ "Category", "State Machine Instance|Tick" },
		{ "Comment", "/** When false IsTickable checks if the world has started play. */" },
		{ "EditCondition", "bTickRegistered" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "When false IsTickable checks if the world has started play." },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_bTickBeforeBeginPlay_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->bTickBeforeBeginPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_bTickBeforeBeginPlay = { "bTickBeforeBeginPlay", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_bTickBeforeBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_bTickBeforeBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_bTickBeforeBeginPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_StateHistoryMaxCount_MetaData[] = {
		{ "Category", "State Machine Instance|History" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** The total number of states to keep in history. Set to -1 for no limit. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "The total number of states to keep in history. Set to -1 for no limit." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_StateHistoryMaxCount = { "StateHistoryMaxCount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, StateHistoryMaxCount), METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_StateHistoryMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_StateHistoryMaxCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_bEnableLogging_MetaData[] = {
		{ "Category", "State Machine Instance|Logging" },
		{ "Comment", "/** Enable info logging for the state machine. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Enable info logging for the state machine." },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_bEnableLogging_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->bEnableLogging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_bEnableLogging = { "bEnableLogging", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_bEnableLogging_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_bEnableLogging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_bEnableLogging_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_bLogStateChange_MetaData[] = {
		{ "Category", "State Machine Instance|Logging" },
		{ "Comment", "/** Log when a state change occurs. This includes when a state machine starts or exits where transitions won't apply. */" },
		{ "EditCondition", "bEnableLogging" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Log when a state change occurs. This includes when a state machine starts or exits where transitions won't apply." },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_bLogStateChange_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->bLogStateChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_bLogStateChange = { "bLogStateChange", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_bLogStateChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_bLogStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_bLogStateChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_bLogTransitionTaken_MetaData[] = {
		{ "Category", "State Machine Instance|Logging" },
		{ "Comment", "/** Log whenever a transition occurs. */" },
		{ "EditCondition", "bEnableLogging" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Log whenever a transition occurs." },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_bLogTransitionTaken_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->bLogTransitionTaken = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_bLogTransitionTaken = { "bLogTransitionTaken", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_bLogTransitionTaken_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_bLogTransitionTaken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_bLogTransitionTaken_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_InputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_InputComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_AutoReceiveInput_MetaData[] = {
		{ "Category", "State Machine Instance|Input" },
		{ "Comment", "/**\n\x09 * Automatically registers this state machine to receive input from a player.\n\x09 * Input events placed in the event graph will always fire and execute.\n\x09 *\n\x09 * Input placed in node graphs will ALWAYS fire (consume input if checked)\n\x09 * but only execute their logic while the node is initialized.\n\x09 *\n\x09 * Example: State A is entered. Any input events in state A and all outbound\n\x09 * transitions including conduits will fire and execute when the key is pressed.\n\x09 * Once State A exits all of the input events will still fire when pressed, but\n\x09 * any blueprint logic will not execute.\n\x09 *\n\x09 * If consuming input is a problem, either uncheck the ConsumeInput option on\n\x09 * the input event, or create a custom node class and use input actions there.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Automatically registers this state machine to receive input from a player.\nInput events placed in the event graph will always fire and execute.\n\nInput placed in node graphs will ALWAYS fire (consume input if checked)\nbut only execute their logic while the node is initialized.\n\nExample: State A is entered. Any input events in state A and all outbound\ntransitions including conduits will fire and execute when the key is pressed.\nOnce State A exits all of the input events will still fire when pressed, but\nany blueprint logic will not execute.\n\nIf consuming input is a problem, either uncheck the ConsumeInput option on\nthe input event, or create a custom node class and use input actions there." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_AutoReceiveInput = { "AutoReceiveInput", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, AutoReceiveInput), Z_Construct_UEnum_SMSystem_ESMStateMachineInput, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_AutoReceiveInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_AutoReceiveInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_InputPriority_MetaData[] = {
		{ "Category", "State Machine Instance|Input" },
		{ "Comment", "/** The priority of this input component when pushed in to the stack. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "The priority of this input component when pushed in to the stack." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_InputPriority = { "InputPriority", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, InputPriority), METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_InputPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_InputPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_bBlockInput_MetaData[] = {
		{ "Category", "State Machine Instance|Input" },
		{ "Comment", "/** Whether any components lower on the input stack should be allowed to receive input. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Whether any components lower on the input stack should be allowed to receive input." },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_bBlockInput_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->bBlockInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_bBlockInput = { "bBlockInput", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_bBlockInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_bBlockInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_bBlockInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_MaxTimeToWaitForUpdate_MetaData[] = {
		{ "Comment", "///////////////////////\n/// End Input\n///////////////////////\n" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "End Input" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_MaxTimeToWaitForUpdate = { "MaxTimeToWaitForUpdate", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, MaxTimeToWaitForUpdate), METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_MaxTimeToWaitForUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_MaxTimeToWaitForUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_TimeSinceAllowedTick_MetaData[] = {
		{ "Comment", "/** Time since the last valid tick occurred. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Time since the last valid tick occurred." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_TimeSinceAllowedTick = { "TimeSinceAllowedTick", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, TimeSinceAllowedTick), METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_TimeSinceAllowedTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_TimeSinceAllowedTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_WorldSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_WorldSeconds = { "WorldSeconds", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, WorldSeconds), METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_WorldSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_WorldSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_WorldTimeDelta_MetaData[] = {
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_WorldTimeDelta = { "WorldTimeDelta", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, WorldTimeDelta), METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_WorldTimeDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_WorldTimeDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_bCallTickOnManualUpdate_MetaData[] = {
		{ "Comment", "/** The Update method will call Tick only if Update was not called by native Tick. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "The Update method will call Tick only if Update was not called by native Tick." },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_bCallTickOnManualUpdate_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->bCallTickOnManualUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_bCallTickOnManualUpdate = { "bCallTickOnManualUpdate", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_bCallTickOnManualUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_bCallTickOnManualUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_bCallTickOnManualUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_bIsTicking_MetaData[] = {
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_bIsTicking_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->bIsTicking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_bIsTicking = { "bIsTicking", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_bIsTicking_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_bIsTicking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_bIsTicking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_bIsUpdating_MetaData[] = {
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_bIsUpdating_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->bIsUpdating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_bIsUpdating = { "bIsUpdating", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_bIsUpdating_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_bIsUpdating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_bIsUpdating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_bCanEvaluateTransitionsLocally_MetaData[] = {
		{ "Comment", "/** Should this instance be allowed to process transitions. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Should this instance be allowed to process transitions." },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_bCanEvaluateTransitionsLocally_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->bCanEvaluateTransitionsLocally = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_bCanEvaluateTransitionsLocally = { "bCanEvaluateTransitionsLocally", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_bCanEvaluateTransitionsLocally_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_bCanEvaluateTransitionsLocally_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_bCanEvaluateTransitionsLocally_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_bCanTakeTransitionsLocally_MetaData[] = {
		{ "Comment", "/** Should this instance take transitions or only notify the server. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Should this instance take transitions or only notify the server." },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_bCanTakeTransitionsLocally_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->bCanTakeTransitionsLocally = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_bCanTakeTransitionsLocally = { "bCanTakeTransitionsLocally", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_bCanTakeTransitionsLocally_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_bCanTakeTransitionsLocally_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_bCanTakeTransitionsLocally_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_bCanExecuteStateLogic_MetaData[] = {
		{ "Comment", "/** Should this instance be allowed to execute state logic. */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "Should this instance be allowed to execute state logic." },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_bCanExecuteStateLogic_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->bCanExecuteStateLogic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_bCanExecuteStateLogic = { "bCanExecuteStateLogic", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_bCanExecuteStateLogic_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_bCanExecuteStateLogic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_bCanExecuteStateLogic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_R_bHasStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/SMInstance.h" },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_R_bHasStarted_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->R_bHasStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_R_bHasStarted = { "R_bHasStarted", "REP_StartChanged", (EPropertyFlags)0x0020080100002020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_R_bHasStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_R_bHasStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_R_bHasStarted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_R_bLoadFromStatesCalled_MetaData[] = {
		{ "Comment", "/** This will be true if at least one initial state was set from user load and will always be set to false on Stop(). */" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "This will be true if at least one initial state was set from user load and will always be set to false on Stop()." },
	};
#endif
	void Z_Construct_UClass_USMInstance_Statics::NewProp_R_bLoadFromStatesCalled_SetBit(void* Obj)
	{
		((USMInstance*)Obj)->R_bLoadFromStatesCalled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_R_bLoadFromStatesCalled = { "R_bLoadFromStatesCalled", nullptr, (EPropertyFlags)0x0020080000002020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMInstance), &Z_Construct_UClass_USMInstance_Statics::NewProp_R_bLoadFromStatesCalled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_R_bLoadFromStatesCalled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_R_bLoadFromStatesCalled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_ReferenceTemplates_Inner_MetaData[] = {
		{ "Comment", "/*\n\x09 * Archetype objects used for instantiating references. Only valid from the CDO.\n\x09 * DuplicateTransient is used to prevent loading defaults in non nativized packages.\n\x09 * Cannot set Transient or CDO won't be created properly in BP Nativization. Instead\n\x09 * this value is manually cleaned on compile. \n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "* Archetype objects used for instantiating references. Only valid from the CDO.\n* DuplicateTransient is used to prevent loading defaults in non nativized packages.\n* Cannot set Transient or CDO won't be created properly in BP Nativization. Instead\n* this value is manually cleaned on compile." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_ReferenceTemplates_Inner = { "ReferenceTemplates", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_ReferenceTemplates_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_ReferenceTemplates_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstance_Statics::NewProp_ReferenceTemplates_MetaData[] = {
		{ "Comment", "/*\n\x09 * Archetype objects used for instantiating references. Only valid from the CDO.\n\x09 * DuplicateTransient is used to prevent loading defaults in non nativized packages.\n\x09 * Cannot set Transient or CDO won't be created properly in BP Nativization. Instead\n\x09 * this value is manually cleaned on compile. \n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SMInstance.h" },
		{ "ToolTip", "* Archetype objects used for instantiating references. Only valid from the CDO.\n* DuplicateTransient is used to prevent loading defaults in non nativized packages.\n* Cannot set Transient or CDO won't be created properly in BP Nativization. Instead\n* this value is manually cleaned on compile." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USMInstance_Statics::NewProp_ReferenceTemplates = { "ReferenceTemplates", nullptr, (EPropertyFlags)0x0010008000200008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMInstance, ReferenceTemplates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::NewProp_ReferenceTemplates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::NewProp_ReferenceTemplates_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_RootStateMachineGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineInitializedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineStartedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineUpdatedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineStoppedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineTransitionTakenEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_OnStateMachineStateChangedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_ComponentOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_NetworkInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_ActiveTransactions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_ActiveTransactions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_StateHistory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_StateHistory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_RootStateMachine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_R_StateMachineContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_R_ActiveStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_R_ActiveStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_ReferenceOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_StateMachineClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_bAutoManageTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_bStopOnEndState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_bCanEverTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_bCanTickWhenPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_TickInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_bTickRegistered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_bTickBeforeInitialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_bTickBeforeBeginPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_StateHistoryMaxCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_bEnableLogging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_bLogStateChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_bLogTransitionTaken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_InputComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_AutoReceiveInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_InputPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_bBlockInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_MaxTimeToWaitForUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_TimeSinceAllowedTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_WorldSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_WorldTimeDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_bCallTickOnManualUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_bIsTicking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_bIsUpdating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_bCanEvaluateTransitionsLocally,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_bCanTakeTransitionsLocally,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_bCanExecuteStateLogic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_R_bHasStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_R_bLoadFromStatesCalled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_ReferenceTemplates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMInstance_Statics::NewProp_ReferenceTemplates,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USMInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USMStateMachineInterface_NoRegister, (int32)VTABLE_OFFSET(USMInstance, ISMStateMachineInterface), false },
			{ Z_Construct_UClass_USMInstanceInterface_NoRegister, (int32)VTABLE_OFFSET(USMInstance, ISMInstanceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMInstance_Statics::ClassParams = {
		&USMInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USMInstance_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMInstance, 792954712);
	template<> SMSYSTEM_API UClass* StaticClass<USMInstance>()
	{
		return USMInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMInstance(Z_Construct_UClass_USMInstance, &USMInstance::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMInstance"), false, nullptr, nullptr, nullptr);

	void USMInstance::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ComponentOwner(TEXT("ComponentOwner"));
		static const FName Name_R_StateMachineContext(TEXT("R_StateMachineContext"));
		static const FName Name_R_ActiveStates(TEXT("R_ActiveStates"));
		static const FName Name_R_bHasStarted(TEXT("R_bHasStarted"));
		static const FName Name_R_bLoadFromStatesCalled(TEXT("R_bLoadFromStatesCalled"));

		const bool bIsValid = true
			&& Name_ComponentOwner == ClassReps[(int32)ENetFields_Private::ComponentOwner].Property->GetFName()
			&& Name_R_StateMachineContext == ClassReps[(int32)ENetFields_Private::R_StateMachineContext].Property->GetFName()
			&& Name_R_ActiveStates == ClassReps[(int32)ENetFields_Private::R_ActiveStates].Property->GetFName()
			&& Name_R_bHasStarted == ClassReps[(int32)ENetFields_Private::R_bHasStarted].Property->GetFName()
			&& Name_R_bLoadFromStatesCalled == ClassReps[(int32)ENetFields_Private::R_bLoadFromStatesCalled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USMInstance"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
