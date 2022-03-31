// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Nodes/Transitions/SMTransition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMTransition() {}
// Cross Module References
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMTransition();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMNode_Base();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMExposedFunctionHandler();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SMSYSTEM_API UEnum* Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType();
// End Cross Module References

static_assert(std::is_polymorphic<FSMTransition>() == std::is_polymorphic<FSMNode_Base>(), "USTRUCT FSMTransition cannot be polymorphic unless super FSMNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMTransition;
class UScriptStruct* FSMTransition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMTransition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMTransition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMTransition, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMTransition"));
	}
	return Z_Registration_Info_UScriptStruct_SMTransition.OuterSingleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMTransition>()
{
	return FSMTransition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSMTransition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_CanEnterTransitionGraphEvaluator_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanEnterTransitionGraphEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CanEnterTransitionGraphEvaluator;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFromAnyState_MetaData[];
#endif
		static void NewProp_bFromAnyState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromAnyState;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_CanEnterTransitionGraphEvaluator_Inner = { "CanEnterTransitionGraphEvaluator", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMExposedFunctionHandler, METADATA_PARAMS(nullptr, 0) }; // 163563912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_CanEnterTransitionGraphEvaluator_MetaData[] = {
		{ "Comment", "/** Primary transition evaluation. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "Primary transition evaluation." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_CanEnterTransitionGraphEvaluator = { "CanEnterTransitionGraphEvaluator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransition, CanEnterTransitionGraphEvaluator), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_CanEnterTransitionGraphEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_CanEnterTransitionGraphEvaluator_MetaData)) }; // 163563912
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionEnteredGraphEvaluator_Inner = { "TransitionEnteredGraphEvaluator", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMExposedFunctionHandler, METADATA_PARAMS(nullptr, 0) }; // 163563912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionEnteredGraphEvaluator_MetaData[] = {
		{ "Comment", "/** Entry point to when a transition is taken. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "Entry point to when a transition is taken." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionEnteredGraphEvaluator = { "TransitionEnteredGraphEvaluator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransition, TransitionEnteredGraphEvaluator), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionEnteredGraphEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionEnteredGraphEvaluator_MetaData)) }; // 163563912
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPreEvaluateGraphEvaluator_Inner = { "TransitionPreEvaluateGraphEvaluator", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMExposedFunctionHandler, METADATA_PARAMS(nullptr, 0) }; // 163563912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPreEvaluateGraphEvaluator_MetaData[] = {
		{ "Comment", "/** Entry point to before a transition evaluates. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "Entry point to before a transition evaluates." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPreEvaluateGraphEvaluator = { "TransitionPreEvaluateGraphEvaluator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransition, TransitionPreEvaluateGraphEvaluator), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPreEvaluateGraphEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPreEvaluateGraphEvaluator_MetaData)) }; // 163563912
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPostEvaluateGraphEvaluator_Inner = { "TransitionPostEvaluateGraphEvaluator", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMExposedFunctionHandler, METADATA_PARAMS(nullptr, 0) }; // 163563912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPostEvaluateGraphEvaluator_MetaData[] = {
		{ "Comment", "/** Entry point to after a transition evaluates. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "Entry point to after a transition evaluates." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPostEvaluateGraphEvaluator = { "TransitionPostEvaluateGraphEvaluator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransition, TransitionPostEvaluateGraphEvaluator), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPostEvaluateGraphEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_TransitionPostEvaluateGraphEvaluator_MetaData)) }; // 163563912
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bFromAnyState_MetaData[] = {
		{ "Comment", "/** The transition has been created by an Any State. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransition.h" },
		{ "ToolTip", "The transition has been created by an Any State." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bFromAnyState_SetBit(void* Obj)
	{
		((FSMTransition*)Obj)->bFromAnyState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bFromAnyState = { "bFromAnyState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMTransition), &Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bFromAnyState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bFromAnyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bFromAnyState_MetaData)) };
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
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_ConditionalEvaluationType = { "ConditionalEvaluationType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransition, ConditionalEvaluationType), Z_Construct_UEnum_SMSystem_ESMConditionalEvaluationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_ConditionalEvaluationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_ConditionalEvaluationType_MetaData)) }; // 468032148
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_CanEnterTransitionGraphEvaluator_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_CanEnterTransitionGraphEvaluator,
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransition_Statics::NewProp_bFromAnyState,
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
		if (!Z_Registration_Info_UScriptStruct_SMTransition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMTransition.InnerSingleton, Z_Construct_UScriptStruct_FSMTransition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMTransition.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_Transitions_SMTransition_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_Transitions_SMTransition_h_Statics::ScriptStructInfo[] = {
		{ FSMTransition::StaticStruct, Z_Construct_UScriptStruct_FSMTransition_Statics::NewStructOps, TEXT("SMTransition"), &Z_Registration_Info_UScriptStruct_SMTransition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMTransition), 3350609268U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_Transitions_SMTransition_h_4151890945(TEXT("/Script/SMSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_Transitions_SMTransition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_Nodes_Transitions_SMTransition_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
