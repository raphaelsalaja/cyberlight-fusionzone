// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Nodes/States/SMConduit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMConduit() {}
// Cross Module References
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMConduit();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMState_Base();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMExposedFunctionHandler();
// End Cross Module References

static_assert(std::is_polymorphic<FSMConduit>() == std::is_polymorphic<FSMState_Base>(), "USTRUCT FSMConduit cannot be polymorphic unless super FSMState_Base is polymorphic");

class UScriptStruct* FSMConduit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMConduit_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMConduit, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMConduit"), sizeof(FSMConduit), Get_Z_Construct_UScriptStruct_FSMConduit_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMConduit>()
{
	return FSMConduit::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMConduit(FSMConduit::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMConduit"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMConduit
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMConduit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMConduit")),new UScriptStruct::TCppStructOps<FSMConduit>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMConduit;
	struct Z_Construct_UScriptStruct_FSMConduit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEnterTransition_MetaData[];
#endif
		static void NewProp_bCanEnterTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEnterTransition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEvaluate_MetaData[];
#endif
		static void NewProp_bCanEvaluate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEvaluate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvalWithTransitions_MetaData[];
#endif
		static void NewProp_bEvalWithTransitions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvalWithTransitions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConduitEnteredGraphEvaluator_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConduitEnteredGraphEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConduitEnteredGraphEvaluator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMConduit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A conduit can either be configured to run as a state or as a transition.\n * Internally it consists of a single transition that must be true before outgoing transitions evaluate.\n */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduit.h" },
		{ "ToolTip", "A conduit can either be configured to run as a state or as a transition.\nInternally it consists of a single transition that must be true before outgoing transitions evaluate." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMConduit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMConduit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bCanEnterTransition_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Result" },
		{ "Comment", "/** Set from graph execution. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduit.h" },
		{ "ToolTip", "Set from graph execution." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bCanEnterTransition_SetBit(void* Obj)
	{
		((FSMConduit*)Obj)->bCanEnterTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bCanEnterTransition = { "bCanEnterTransition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMConduit), &Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bCanEnterTransition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bCanEnterTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bCanEnterTransition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bCanEvaluate_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Set from graph execution or configurable from details panel. Must be true for the conduit to be evaluated. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduit.h" },
		{ "ToolTip", "Set from graph execution or configurable from details panel. Must be true for the conduit to be evaluated." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bCanEvaluate_SetBit(void* Obj)
	{
		((FSMConduit*)Obj)->bCanEvaluate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bCanEvaluate = { "bCanEvaluate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMConduit), &Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bCanEvaluate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bCanEvaluate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bCanEvaluate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bEvalWithTransitions_MetaData[] = {
		{ "Comment", "/**\n\x09 * This conduit will be evaluated with inbound and outbound transitions.\n\x09 * If any transition fails the entire transition fails. In that case the\n\x09 * state leading to this conduit will not take this transition.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduit.h" },
		{ "ToolTip", "This conduit will be evaluated with inbound and outbound transitions.\nIf any transition fails the entire transition fails. In that case the\nstate leading to this conduit will not take this transition." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bEvalWithTransitions_SetBit(void* Obj)
	{
		((FSMConduit*)Obj)->bEvalWithTransitions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bEvalWithTransitions = { "bEvalWithTransitions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMConduit), &Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bEvalWithTransitions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bEvalWithTransitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bEvalWithTransitions_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_ConduitEnteredGraphEvaluator_Inner = { "ConduitEnteredGraphEvaluator", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMExposedFunctionHandler, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_ConduitEnteredGraphEvaluator_MetaData[] = {
		{ "Comment", "/** Entry point when the conduit is entered. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduit.h" },
		{ "ToolTip", "Entry point when the conduit is entered." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_ConduitEnteredGraphEvaluator = { "ConduitEnteredGraphEvaluator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMConduit, ConduitEnteredGraphEvaluator), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_ConduitEnteredGraphEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_ConduitEnteredGraphEvaluator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMConduit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bCanEnterTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bCanEvaluate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_bEvalWithTransitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_ConduitEnteredGraphEvaluator_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMConduit_Statics::NewProp_ConduitEnteredGraphEvaluator,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMConduit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMState_Base,
		&NewStructOps,
		"SMConduit",
		sizeof(FSMConduit),
		alignof(FSMConduit),
		Z_Construct_UScriptStruct_FSMConduit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMConduit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMConduit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMConduit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMConduit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMConduit_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMConduit"), sizeof(FSMConduit), Get_Z_Construct_UScriptStruct_FSMConduit_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMConduit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMConduit_Hash() { return 3505983911U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
