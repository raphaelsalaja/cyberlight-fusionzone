// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/SMUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMUtils() {}
// Cross Module References
	SMSYSTEM_API UClass* Z_Construct_UClass_USMBlueprintUtils_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMBlueprintUtils();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstance_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
// End Cross Module References
	DEFINE_FUNCTION(USMBlueprintUtils::execCreateStateMachineInstanceFromTemplate)
	{
		P_GET_OBJECT(UClass,Z_Param_StateMachineClass);
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_GET_OBJECT(USMInstance,Z_Param_Template);
		P_GET_UBOOL(Z_Param_bInitializeNow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMInstance**)Z_Param__Result=USMBlueprintUtils::CreateStateMachineInstanceFromTemplate(Z_Param_StateMachineClass,Z_Param_Context,Z_Param_Template,Z_Param_bInitializeNow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMBlueprintUtils::execK2_CreateStateMachineInstancePure)
	{
		P_GET_OBJECT(UClass,Z_Param_StateMachineClass);
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_GET_UBOOL(Z_Param_bInitializeNow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMInstance**)Z_Param__Result=USMBlueprintUtils::K2_CreateStateMachineInstancePure(Z_Param_StateMachineClass,Z_Param_Context,Z_Param_bInitializeNow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMBlueprintUtils::execK2_CreateStateMachineInstanceAsync)
	{
		P_GET_OBJECT(UClass,Z_Param_StateMachineClass);
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMInstance**)Z_Param__Result=USMBlueprintUtils::K2_CreateStateMachineInstanceAsync(Z_Param_StateMachineClass,Z_Param_Context,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMBlueprintUtils::execK2_CreateStateMachineInstance)
	{
		P_GET_OBJECT(UClass,Z_Param_StateMachineClass);
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_GET_UBOOL(Z_Param_bInitializeNow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMInstance**)Z_Param__Result=USMBlueprintUtils::K2_CreateStateMachineInstance(Z_Param_StateMachineClass,Z_Param_Context,Z_Param_bInitializeNow);
		P_NATIVE_END;
	}
	void USMBlueprintUtils::StaticRegisterNativesUSMBlueprintUtils()
	{
		UClass* Class = USMBlueprintUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateStateMachineInstanceFromTemplate", &USMBlueprintUtils::execCreateStateMachineInstanceFromTemplate },
			{ "K2_CreateStateMachineInstance", &USMBlueprintUtils::execK2_CreateStateMachineInstance },
			{ "K2_CreateStateMachineInstanceAsync", &USMBlueprintUtils::execK2_CreateStateMachineInstanceAsync },
			{ "K2_CreateStateMachineInstancePure", &USMBlueprintUtils::execK2_CreateStateMachineInstancePure },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics
	{
		struct SMBlueprintUtils_eventCreateStateMachineInstanceFromTemplate_Parms
		{
			TSubclassOf<USMInstance>  StateMachineClass;
			UObject* Context;
			USMInstance* Template;
			bool bInitializeNow;
			USMInstance* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_StateMachineClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Template;
		static void NewProp_bInitializeNow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializeNow;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_StateMachineClass = { "StateMachineClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventCreateStateMachineInstanceFromTemplate_Parms, StateMachineClass), Z_Construct_UClass_USMInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventCreateStateMachineInstanceFromTemplate_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventCreateStateMachineInstanceFromTemplate_Parms, Template), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_bInitializeNow_SetBit(void* Obj)
	{
		((SMBlueprintUtils_eventCreateStateMachineInstanceFromTemplate_Parms*)Obj)->bInitializeNow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_bInitializeNow = { "bInitializeNow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMBlueprintUtils_eventCreateStateMachineInstanceFromTemplate_Parms), &Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_bInitializeNow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventCreateStateMachineInstanceFromTemplate_Parms, ReturnValue), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_StateMachineClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_Template,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_bInitializeNow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Utilities|Deprecated" },
		{ "Comment", "/**\n\x09 * Create a new state machine instance from a template initialized with the given context.\n\x09 * The state machine is instantiated with the Context as the outer object.\n\x09 *\n\x09 * WARNING: Every pin you split from here will create and initialize a new instance!\n\x09 *\n\x09 * @param StateMachineClass The class of the state machine to be instantiated.\n\x09 * @param Context The context object this state machine will run for. Often an actor.\n\x09 * @param Template A template archetype for setting initial property values of the state machine instance.\n\x09 * @param bInitializeNow If the Initialize method should be called. Initialize must be called before the state machine can be started.\n\x09 *\n\x09 * @return The state machine instance created.\n\x09 */" },
		{ "CPP_Default_bInitializeNow", "true" },
		{ "ModuleRelativePath", "Public/SMUtils.h" },
		{ "ToolTip", "Create a new state machine instance from a template initialized with the given context.\nThe state machine is instantiated with the Context as the outer object.\n\nWARNING: Every pin you split from here will create and initialize a new instance!\n\n@param StateMachineClass The class of the state machine to be instantiated.\n@param Context The context object this state machine will run for. Often an actor.\n@param Template A template archetype for setting initial property values of the state machine instance.\n@param bInitializeNow If the Initialize method should be called. Initialize must be called before the state machine can be started.\n\n@return The state machine instance created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMBlueprintUtils, nullptr, "CreateStateMachineInstanceFromTemplate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::SMBlueprintUtils_eventCreateStateMachineInstanceFromTemplate_Parms), Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics
	{
		struct SMBlueprintUtils_eventK2_CreateStateMachineInstance_Parms
		{
			TSubclassOf<USMInstance>  StateMachineClass;
			UObject* Context;
			bool bInitializeNow;
			USMInstance* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_StateMachineClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static void NewProp_bInitializeNow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializeNow;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::NewProp_StateMachineClass = { "StateMachineClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventK2_CreateStateMachineInstance_Parms, StateMachineClass), Z_Construct_UClass_USMInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventK2_CreateStateMachineInstance_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::NewProp_bInitializeNow_SetBit(void* Obj)
	{
		((SMBlueprintUtils_eventK2_CreateStateMachineInstance_Parms*)Obj)->bInitializeNow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::NewProp_bInitializeNow = { "bInitializeNow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMBlueprintUtils_eventK2_CreateStateMachineInstance_Parms), &Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::NewProp_bInitializeNow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventK2_CreateStateMachineInstance_Parms, ReturnValue), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::NewProp_StateMachineClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::NewProp_bInitializeNow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Utilities" },
		{ "Comment", "/**\n\x09* Create a new state machine instance initialized with the given context.\n\x09* The state machine is instantiated with the Context as the outer object.\n\x09* \n\x09* @param StateMachineClass The class of the state machine to be instantiated.\n\x09* @param Context The context object this state machine will run for. Often an actor.\n\x09* @param bInitializeNow If the Initialize method should be called. Initialize must be called before the state machine can be started.\n\x09*\n\x09* @return The state machine instance created.\n\x09*/" },
		{ "CPP_Default_bInitializeNow", "true" },
		{ "DisplayName", "Create State Machine Instance" },
		{ "ModuleRelativePath", "Public/SMUtils.h" },
		{ "ToolTip", "Create a new state machine instance initialized with the given context.\nThe state machine is instantiated with the Context as the outer object.\n\n@param StateMachineClass The class of the state machine to be instantiated.\n@param Context The context object this state machine will run for. Often an actor.\n@param bInitializeNow If the Initialize method should be called. Initialize must be called before the state machine can be started.\n\n@return The state machine instance created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMBlueprintUtils, nullptr, "K2_CreateStateMachineInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::SMBlueprintUtils_eventK2_CreateStateMachineInstance_Parms), Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Statics
	{
		struct SMBlueprintUtils_eventK2_CreateStateMachineInstanceAsync_Parms
		{
			TSubclassOf<USMInstance>  StateMachineClass;
			UObject* Context;
			FLatentActionInfo LatentInfo;
			USMInstance* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_StateMachineClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Statics::NewProp_StateMachineClass = { "StateMachineClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventK2_CreateStateMachineInstanceAsync_Parms, StateMachineClass), Z_Construct_UClass_USMInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventK2_CreateStateMachineInstanceAsync_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventK2_CreateStateMachineInstanceAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventK2_CreateStateMachineInstanceAsync_Parms, ReturnValue), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Statics::NewProp_StateMachineClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Utilities" },
		{ "Comment", "/**\n\x09* Create and initialize a new state machine instance with the given context.\n\x09* The state machine is instantiated with the Context as the outer object.\n\x09* Initialize is automatically run on a separate thread.\n\x09* \n\x09* @param StateMachineClass The class of the state machine to be instantiated.\n\x09* @param Context The context object this state machine will run for. Often an actor.\n\x09*\n\x09* @return The state machine instance created.\n\x09*/" },
		{ "DisplayName", "Create State Machine Instance Async" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SMUtils.h" },
		{ "ToolTip", "Create and initialize a new state machine instance with the given context.\nThe state machine is instantiated with the Context as the outer object.\nInitialize is automatically run on a separate thread.\n\n@param StateMachineClass The class of the state machine to be instantiated.\n@param Context The context object this state machine will run for. Often an actor.\n\n@return The state machine instance created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMBlueprintUtils, nullptr, "K2_CreateStateMachineInstanceAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Statics::SMBlueprintUtils_eventK2_CreateStateMachineInstanceAsync_Parms), Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics
	{
		struct SMBlueprintUtils_eventK2_CreateStateMachineInstancePure_Parms
		{
			TSubclassOf<USMInstance>  StateMachineClass;
			UObject* Context;
			bool bInitializeNow;
			USMInstance* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_StateMachineClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static void NewProp_bInitializeNow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializeNow;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::NewProp_StateMachineClass = { "StateMachineClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventK2_CreateStateMachineInstancePure_Parms, StateMachineClass), Z_Construct_UClass_USMInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventK2_CreateStateMachineInstancePure_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::NewProp_bInitializeNow_SetBit(void* Obj)
	{
		((SMBlueprintUtils_eventK2_CreateStateMachineInstancePure_Parms*)Obj)->bInitializeNow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::NewProp_bInitializeNow = { "bInitializeNow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMBlueprintUtils_eventK2_CreateStateMachineInstancePure_Parms), &Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::NewProp_bInitializeNow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventK2_CreateStateMachineInstancePure_Parms, ReturnValue), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::NewProp_StateMachineClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::NewProp_bInitializeNow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Utilities|Deprecated" },
		{ "Comment", "/**\n\x09* Create a new state machine instance initialized with the given context.\n\x09* The state machine is instantiated with the Context as the outer object.\n\x09*\n\x09* This is a legacy pure node and the execution version `Create State Machine Instance` should be used instead.\n\x09* WARNING: Every pin you split from here will create and initialize a new instance!\n\x09* \n\x09* @param StateMachineClass The class of the state machine to be instantiated.\n\x09* @param Context The context object this state machine will run for. Often an actor.\n\x09* @param bInitializeNow If the Initialize method should be called. Initialize must be called before the state machine can be started.\n\x09*\n\x09* @return The state machine instance created.\n\x09*/" },
		{ "CPP_Default_bInitializeNow", "true" },
		{ "DisplayName", "Create State Machine Instance Pure" },
		{ "ModuleRelativePath", "Public/SMUtils.h" },
		{ "ToolTip", "Create a new state machine instance initialized with the given context.\nThe state machine is instantiated with the Context as the outer object.\n\nThis is a legacy pure node and the execution version `Create State Machine Instance` should be used instead.\nWARNING: Every pin you split from here will create and initialize a new instance!\n\n@param StateMachineClass The class of the state machine to be instantiated.\n@param Context The context object this state machine will run for. Often an actor.\n@param bInitializeNow If the Initialize method should be called. Initialize must be called before the state machine can be started.\n\n@return The state machine instance created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMBlueprintUtils, nullptr, "K2_CreateStateMachineInstancePure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::SMBlueprintUtils_eventK2_CreateStateMachineInstancePure_Parms), Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMBlueprintUtils);
	UClass* Z_Construct_UClass_USMBlueprintUtils_NoRegister()
	{
		return USMBlueprintUtils::StaticClass();
	}
	struct Z_Construct_UClass_USMBlueprintUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMBlueprintUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMBlueprintUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate, "CreateStateMachineInstanceFromTemplate" }, // 3048182027
		{ &Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstance, "K2_CreateStateMachineInstance" }, // 890830945
		{ &Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstanceAsync, "K2_CreateStateMachineInstanceAsync" }, // 2908643621
		{ &Z_Construct_UFunction_USMBlueprintUtils_K2_CreateStateMachineInstancePure, "K2_CreateStateMachineInstancePure" }, // 3956464427
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMBlueprintUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * General Blueprint helpers for creating state machines.\n */" },
		{ "IncludePath", "SMUtils.h" },
		{ "ModuleRelativePath", "Public/SMUtils.h" },
		{ "ToolTip", "General Blueprint helpers for creating state machines." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMBlueprintUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMBlueprintUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMBlueprintUtils_Statics::ClassParams = {
		&USMBlueprintUtils::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMBlueprintUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMBlueprintUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMBlueprintUtils()
	{
		if (!Z_Registration_Info_UClass_USMBlueprintUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMBlueprintUtils.OuterSingleton, Z_Construct_UClass_USMBlueprintUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMBlueprintUtils.OuterSingleton;
	}
	template<> SMSYSTEM_API UClass* StaticClass<USMBlueprintUtils>()
	{
		return USMBlueprintUtils::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMBlueprintUtils);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMBlueprintUtils, USMBlueprintUtils::StaticClass, TEXT("USMBlueprintUtils"), &Z_Registration_Info_UClass_USMBlueprintUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMBlueprintUtils), 3375357584U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_515545060(TEXT("/Script/SMSystem"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
