// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/SMBlueprintFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMBlueprintFunctions() {}
// Cross Module References
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMExposedFunctionHandler();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FSMExposedFunctionHandler::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMExposedFunctionHandler, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMExposedFunctionHandler"), sizeof(FSMExposedFunctionHandler), Get_Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMExposedFunctionHandler>()
{
	return FSMExposedFunctionHandler::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMExposedFunctionHandler(FSMExposedFunctionHandler::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMExposedFunctionHandler"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMExposedFunctionHandler
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMExposedFunctionHandler()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMExposedFunctionHandler")),new UScriptStruct::TCppStructOps<FSMExposedFunctionHandler>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMExposedFunctionHandler;
	struct Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundFunction_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoundFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Handles execution of functions exposed in blueprint graphs.\n * This is often wrapped in a TArray to reduce struct memory offsets\n * for garbage collection.\n */" },
		{ "ModuleRelativePath", "Public/SMBlueprintFunctions.h" },
		{ "ToolTip", "Handles execution of functions exposed in blueprint graphs.\nThis is often wrapped in a TArray to reduce struct memory offsets\nfor garbage collection." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMExposedFunctionHandler>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_BoundFunction_MetaData[] = {
		{ "Comment", "/** Name of the graph function we will be evaluating. */" },
		{ "ModuleRelativePath", "Public/SMBlueprintFunctions.h" },
		{ "ToolTip", "Name of the graph function we will be evaluating." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_BoundFunction = { "BoundFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMExposedFunctionHandler, BoundFunction), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_BoundFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_BoundFunction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_Function_MetaData[] = {
		{ "ModuleRelativePath", "Public/SMBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMExposedFunctionHandler, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_OwnerObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/SMBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_OwnerObject = { "OwnerObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMExposedFunctionHandler, OwnerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_OwnerObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_OwnerObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_BoundFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_Function,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::NewProp_OwnerObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		&NewStructOps,
		"SMExposedFunctionHandler",
		sizeof(FSMExposedFunctionHandler),
		alignof(FSMExposedFunctionHandler),
		Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMExposedFunctionHandler()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMExposedFunctionHandler"), sizeof(FSMExposedFunctionHandler), Get_Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMExposedFunctionHandler_Hash() { return 2349821390U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
