// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Nodes/Transitions/SMTransition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMTransition() {}
// Cross Module References
	SMSYSTEM_API UEnum* Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMTransition();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMNode_Base();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMExposedFunctionHandler();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static UEnum* ESMConditionalEvaluationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType, Z_Construct_UPackage__Script_SMSystem(), TEXT("ESMConditionalEvaluationType"));
		}
		return Singleton;
	}
	template<> SMSYSTEM_API UEnum* StaticEnum<ESMConditionalEvaluationType>()
	{
		return ESMConditionalEvaluationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESMConditionalEvaluationType(ESMConditionalEvaluationType_StaticEnum, TEXT("/Script/SMSystem"), TEXT("ESMConditionalEvaluationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType_Hash() { return 2985107893U; }
	UEnum* Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESMConditionalEvaluationType"), 0, Get_Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESMConditionalEvaluationType::SM_Graph", (int64)ESMConditionalEvaluationType::SM_Graph },
				{ "ESMConditionalEvaluationType::SM_NodeInstance", (int64)ESMConditionalEvaluationType::SM_NodeInstance },
				{ "ESMConditionalEvaluationType::SM_AlwaysFalse", (int64)ESMConditionalEvaluationType::SM_AlwaysFalse },
				{ "ESMConditionalEvaluationType::SM_AlwaysTrue", (int64)ESMConditionalEvaluationType::SM_AlwaysTrue },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
				{ "SM_AlwaysFalse.Comment", "// Node instance only \n" },
				{ "SM_AlwaysFalse.Name", "ESMConditionalEvaluationType::SM_AlwaysFalse" },
				{ "SM_AlwaysFalse.ToolTip", "Node instance only" },
				{ "SM_AlwaysTrue.Comment", "// Never eval graph and never take conditionally\n" },
				{ "SM_AlwaysTrue.Name", "ESMConditionalEvaluationType::SM_AlwaysTrue" },
				{ "SM_AlwaysTrue.ToolTip", "Never eval graph and never take conditionally" },
				{ "SM_Graph.Name", "ESMConditionalEvaluationType::SM_Graph" },
				{ "SM_NodeInstance.Comment", "// BP Graph eval required\n" },
				{ "SM_NodeInstance.Name", "ESMConditionalEvaluationType::SM_NodeInstance" },
				{ "SM_NodeInstance.ToolTip", "BP Graph eval required" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SMSystem,
				nullptr,
				"ESMConditionalEvaluationType",
				"ESMConditionalEvaluationType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}

static_assert(std::is_polymorphic<FSMTransition>() == std::is_polymorphic<FSMNode_Base>(), "USTRUCT FSMTransition cannot be polymorphic unless super FSMNode_Base is polymorphic");

class UScriptStruct* FSMTransition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMTransition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMTransition, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMTransition"), sizeof(FSMTransition), Get_Z_Construct_UScriptStruct_FSMTransition_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMTransition>()
{
	return FSMTransition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMTransition(FSMTransition::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMTransition"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMTransition
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMTransition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMTransition")),new UScriptStruct::TCppStructOps<FSMTransition>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMTransition;
	struct Z_Construct_UScriptStruct_FSMTransition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionEnteredGraphEvaluator_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionEnteredGraphEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransitionEnteredGraphEvaluator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionPreEvaluateGraphEvaluator_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionPreEvaluateGraphEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransitionPreEvaluateGraphEvaluator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionPostEvaluateGraphEvaluator_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionPostEvaluateGraphEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransitionPostEvaluateGraphEvaluator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEnterTransition_MetaData[];
#endif
		static void NewProp_bCanEnterTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEnterTransition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEnterTransitionFromEvent_MetaData[];
#endif
		static void NewProp_bCanEnterTransitionFromEvent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEnterTransitionFromEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEvaluating_MetaData[];
#endif
		static void NewProp_bIsEvaluating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEvaluating;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEvalWithStartState_MetaData[];
#endif
		static void NewProp_bCanEvalWithStartState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEvalWithStartState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysFalse_MetaData[];
#endif
		static void NewProp_bAlwaysFalse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysFalse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FromGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToGuid;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConditionalEvaluationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionalEvaluationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConditionalEvaluationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Transitions determine when an FSM can exit one state and advance to the next.\n */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "Transitions determine when an FSM can exit one state and advance to the next." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMTransition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMTransition>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionEnteredGraphEvaluator_Inner = { "TransitionEnteredGraphEvaluator", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMExposedFunctionHandler, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionEnteredGraphEvaluator_MetaData[] = {
		{ "Comment", "/** Entry point to when a transition is taken. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "Entry point to when a transition is taken." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionEnteredGraphEvaluator = { "TransitionEnteredGraphEvaluator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransition, TransitionEnteredGraphEvaluator), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionEnteredGraphEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionEnteredGraphEvaluator_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPreEvaluateGraphEvaluator_Inner = { "TransitionPreEvaluateGraphEvaluator", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMExposedFunctionHandler, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPreEvaluateGraphEvaluator_MetaData[] = {
		{ "Comment", "/** Entry point to before a transition evaluates. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "Entry point to before a transition evaluates." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPreEvaluateGraphEvaluator = { "TransitionPreEvaluateGraphEvaluator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransition, TransitionPreEvaluateGraphEvaluator), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPreEvaluateGraphEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPreEvaluateGraphEvaluator_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPostEvaluateGraphEvaluator_Inner = { "TransitionPostEvaluateGraphEvaluator", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMExposedFunctionHandler, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPostEvaluateGraphEvaluator_MetaData[] = {
		{ "Comment", "/** Entry point to after a transition evaluates. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "Entry point to after a transition evaluates." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPostEvaluateGraphEvaluator = { "TransitionPostEvaluateGraphEvaluator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransition, TransitionPostEvaluateGraphEvaluator), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPostEvaluateGraphEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPostEvaluateGraphEvaluator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "State Machines" },
		{ "Comment", "/** Lower number means this transition is checked sooner. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "Lower number means this transition is checked sooner." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransition, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEnterTransition_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Result" },
		{ "Comment", "/** Set from graph execution. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "Set from graph execution." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEnterTransition_SetBit(void* Obj)
	{
		((FSMTransition*)Obj)->bCanEnterTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEnterTransition = { "bCanEnterTransition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMTransition), &Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEnterTransition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEnterTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEnterTransition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEnterTransitionFromEvent_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Result" },
		{ "Comment", "/** Set from graph execution when updated by event. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "Set from graph execution when updated by event." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEnterTransitionFromEvent_SetBit(void* Obj)
	{
		((FSMTransition*)Obj)->bCanEnterTransitionFromEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEnterTransitionFromEvent = { "bCanEnterTransitionFromEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMTransition), &Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEnterTransitionFromEvent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEnterTransitionFromEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEnterTransitionFromEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bIsEvaluating_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Result" },
		{ "Comment", "/** Set internally and from auto bound events. True only during evaluation. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "Set internally and from auto bound events. True only during evaluation." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bIsEvaluating_SetBit(void* Obj)
	{
		((FSMTransition*)Obj)->bIsEvaluating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bIsEvaluating = { "bIsEvaluating", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMTransition), &Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bIsEvaluating_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bIsEvaluating_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bIsEvaluating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvaluate_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Set from graph execution or configurable from details panel. Must be true for the transition to be evaluated conditionally. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "Set from graph execution or configurable from details panel. Must be true for the transition to be evaluated conditionally." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvaluate_SetBit(void* Obj)
	{
		((FSMTransition*)Obj)->bCanEvaluate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvaluate = { "bCanEvaluate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMTransition), &Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvaluate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvaluate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvaluate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvaluateFromEvent_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Allows auto-bound events to evaluate. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "Allows auto-bound events to evaluate." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvaluateFromEvent_SetBit(void* Obj)
	{
		((FSMTransition*)Obj)->bCanEvaluateFromEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvaluateFromEvent = { "bCanEvaluateFromEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMTransition), &Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvaluateFromEvent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvaluateFromEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvaluateFromEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bRunParallel_MetaData[] = {
		{ "Comment", "/**\n\x09 * This transition will not prevent the next transition in the priority sequence from being evaluated.\n\x09 * This allows the possibility for multiple active states.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "This transition will not prevent the next transition in the priority sequence from being evaluated.\nThis allows the possibility for multiple active states." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bRunParallel_SetBit(void* Obj)
	{
		((FSMTransition*)Obj)->bRunParallel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bRunParallel = { "bRunParallel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMTransition), &Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bRunParallel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bRunParallel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bRunParallel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bEvalIfNextStateActive_MetaData[] = {
		{ "Comment", "/**\n\x09 * If the transition should still evaluate if already connecting to an active state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "If the transition should still evaluate if already connecting to an active state." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bEvalIfNextStateActive_SetBit(void* Obj)
	{
		((FSMTransition*)Obj)->bEvalIfNextStateActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bEvalIfNextStateActive = { "bEvalIfNextStateActive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMTransition), &Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bEvalIfNextStateActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bEvalIfNextStateActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bEvalIfNextStateActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvalWithStartState_MetaData[] = {
		{ "Comment", "/** Secondary check state machine will make if a state is evaluating transitions on the same tick as Start State. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "Secondary check state machine will make if a state is evaluating transitions on the same tick as Start State." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvalWithStartState_SetBit(void* Obj)
	{
		((FSMTransition*)Obj)->bCanEvalWithStartState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvalWithStartState = { "bCanEvalWithStartState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMTransition), &Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvalWithStartState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvalWithStartState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvalWithStartState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bAlwaysFalse_MetaData[] = {
		{ "Comment", "/** The transition can never be taken conditionally or from an event. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "The transition can never be taken conditionally or from an event." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bAlwaysFalse_SetBit(void* Obj)
	{
		((FSMTransition*)Obj)->bAlwaysFalse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bAlwaysFalse = { "bAlwaysFalse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMTransition), &Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bAlwaysFalse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bAlwaysFalse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bAlwaysFalse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_FromGuid_MetaData[] = {
		{ "Comment", "/** Guid to the state this transition is from. Kismet compiler will convert this into a state link. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "Guid to the state this transition is from. Kismet compiler will convert this into a state link." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_FromGuid = { "FromGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransition, FromGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_FromGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_FromGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_ToGuid_MetaData[] = {
		{ "Comment", "/** Guid to the state this transition is leading to. Kismet compiler will convert this into a state link. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "Guid to the state this transition is leading to. Kismet compiler will convert this into a state link." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_ToGuid = { "ToGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransition, ToGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_ToGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_ToGuid_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_ConditionalEvaluationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_ConditionalEvaluationType_MetaData[] = {
		{ "Comment", "/** The conditional evaluation type which determines the type of evaluation required if any. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "The conditional evaluation type which determines the type of evaluation required if any." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_ConditionalEvaluationType = { "ConditionalEvaluationType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransition, ConditionalEvaluationType), Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_ConditionalEvaluationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_ConditionalEvaluationType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionEnteredGraphEvaluator_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionEnteredGraphEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPreEvaluateGraphEvaluator_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPreEvaluateGraphEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPostEvaluateGraphEvaluator_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPostEvaluateGraphEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEnterTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEnterTransitionFromEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bIsEvaluating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvaluate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvaluateFromEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bRunParallel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bEvalIfNextStateActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bCanEvalWithStartState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bAlwaysFalse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_FromGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_ToGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_ConditionalEvaluationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_ConditionalEvaluationType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMTransition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMNode_Base,
		&NewStructOps,
		"SMTransition",
		sizeof(FSMTransition),
		alignof(FSMTransition),
		Z_Construct_UScriptStruct_FSMTransition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMTransition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMTransition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMTransition"), sizeof(FSMTransition), Get_Z_Construct_UScriptStruct_FSMTransition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMTransition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMTransition_Hash() { return 2345903722U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
