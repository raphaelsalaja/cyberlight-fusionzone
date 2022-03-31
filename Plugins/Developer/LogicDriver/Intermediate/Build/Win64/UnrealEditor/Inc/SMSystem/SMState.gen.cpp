// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Nodes/States/SMState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMState() {}
// Cross Module References
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMState_Base();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMNode_Base();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMState();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMExposedFunctionHandler();
// End Cross Module References

static_assert(std::is_polymorphic<FSMState_Base>() == std::is_polymorphic<FSMNode_Base>(), "USTRUCT FSMState_Base cannot be polymorphic unless super FSMNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMState_Base;
class UScriptStruct* FSMState_Base::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMState_Base.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMState_Base.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMState_Base, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMState_Base"));
	}
	return Z_Registration_Info_UScriptStruct_SMState_Base.OuterSingleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMState_Base>()
{
	return FSMState_Base::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSMState_Base_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRootNode_MetaData[];
#endif
		static void NewProp_bIsRootNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRootNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysUpdate_MetaData[];
#endif
		static void NewProp_bAlwaysUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvalTransitionsOnStart_MetaData[];
#endif
		static void NewProp_bEvalTransitionsOnStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvalTransitionsOnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableTickTransitionEvaluation_MetaData[];
#endif
		static void NewProp_bDisableTickTransitionEvaluation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableTickTransitionEvaluation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStayActiveOnStateChange_MetaData[];
#endif
		static void NewProp_bStayActiveOnStateChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStayActiveOnStateChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowParallelReentry_MetaData[];
#endif
		static void NewProp_bAllowParallelReentry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowParallelReentry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMState_Base_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The base class for all state typed nodes. This should never be instantiated by itself but inherited by children.\n */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMState.h" },
		{ "ToolTip", "The base class for all state typed nodes. This should never be instantiated by itself but inherited by children." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMState_Base_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMState_Base>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bIsRootNode_MetaData[] = {
		{ "Comment", "/** Entry node to state machine. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMState.h" },
		{ "ToolTip", "Entry node to state machine." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bIsRootNode_SetBit(void* Obj)
	{
		((FSMState_Base*)Obj)->bIsRootNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bIsRootNode = { "bIsRootNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMState_Base), &Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bIsRootNode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bIsRootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bIsRootNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bAlwaysUpdate_MetaData[] = {
		{ "Comment", "/** Always call state update at least once before ending. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMState.h" },
		{ "ToolTip", "Always call state update at least once before ending." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bAlwaysUpdate_SetBit(void* Obj)
	{
		((FSMState_Base*)Obj)->bAlwaysUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bAlwaysUpdate = { "bAlwaysUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMState_Base), &Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bAlwaysUpdate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bAlwaysUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bAlwaysUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bEvalTransitionsOnStart_MetaData[] = {
		{ "Comment", "/** Allows transitions to be evaluated in the same tick as Start State. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMState.h" },
		{ "ToolTip", "Allows transitions to be evaluated in the same tick as Start State." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bEvalTransitionsOnStart_SetBit(void* Obj)
	{
		((FSMState_Base*)Obj)->bEvalTransitionsOnStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bEvalTransitionsOnStart = { "bEvalTransitionsOnStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMState_Base), &Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bEvalTransitionsOnStart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bEvalTransitionsOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bEvalTransitionsOnStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bDisableTickTransitionEvaluation_MetaData[] = {
		{ "Comment", "/** Prevents conditional transitions for this state from being evaluated on Tick. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMState.h" },
		{ "ToolTip", "Prevents conditional transitions for this state from being evaluated on Tick." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bDisableTickTransitionEvaluation_SetBit(void* Obj)
	{
		((FSMState_Base*)Obj)->bDisableTickTransitionEvaluation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bDisableTickTransitionEvaluation = { "bDisableTickTransitionEvaluation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMState_Base), &Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bDisableTickTransitionEvaluation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bDisableTickTransitionEvaluation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bDisableTickTransitionEvaluation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bStayActiveOnStateChange_MetaData[] = {
		{ "Comment", "/** If the state should remain active even after a transition is taken from this state. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMState.h" },
		{ "ToolTip", "If the state should remain active even after a transition is taken from this state." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bStayActiveOnStateChange_SetBit(void* Obj)
	{
		((FSMState_Base*)Obj)->bStayActiveOnStateChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bStayActiveOnStateChange = { "bStayActiveOnStateChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMState_Base), &Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bStayActiveOnStateChange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bStayActiveOnStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bStayActiveOnStateChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bAllowParallelReentry_MetaData[] = {
		{ "Comment", "/** If this state can be reentered from a parallel state if this state is already active. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMState.h" },
		{ "ToolTip", "If this state can be reentered from a parallel state if this state is already active." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bAllowParallelReentry_SetBit(void* Obj)
	{
		((FSMState_Base*)Obj)->bAllowParallelReentry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bAllowParallelReentry = { "bAllowParallelReentry", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMState_Base), &Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bAllowParallelReentry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bAllowParallelReentry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bAllowParallelReentry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMState_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bIsRootNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bAlwaysUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bEvalTransitionsOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bDisableTickTransitionEvaluation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bStayActiveOnStateChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMState_Base_Statics::NewProp_bAllowParallelReentry,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMState_Base_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMNode_Base,
		&NewStructOps,
		"SMState_Base",
		sizeof(FSMState_Base),
		alignof(FSMState_Base),
		Z_Construct_UScriptStruct_FSMState_Base_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMState_Base_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMState_Base_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMState_Base_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMState_Base()
	{
		if (!Z_Registration_Info_UScriptStruct_SMState_Base.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMState_Base.InnerSingleton, Z_Construct_UScriptStruct_FSMState_Base_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMState_Base.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSMState>() == std::is_polymorphic<FSMState_Base>(), "USTRUCT FSMState cannot be polymorphic unless super FSMState_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMState;
class UScriptStruct* FSMState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMState, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMState"));
	}
	return Z_Registration_Info_UScriptStruct_SMState.OuterSingleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMState>()
{
	return FSMState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSMState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BeginStateGraphEvaluator_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeginStateGraphEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BeginStateGraphEvaluator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateStateGraphEvaluator_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateStateGraphEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdateStateGraphEvaluator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndStateGraphEvaluator_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndStateGraphEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EndStateGraphEvaluator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * State nodes that can execute Blueprint logic.\n */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMState.h" },
		{ "ToolTip", "State nodes that can execute Blueprint logic." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMState>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMState_Statics::NewProp_BeginStateGraphEvaluator_Inner = { "BeginStateGraphEvaluator", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMExposedFunctionHandler, METADATA_PARAMS(nullptr, 0) }; // 163563912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMState_Statics::NewProp_BeginStateGraphEvaluator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/States/SMState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMState_Statics::NewProp_BeginStateGraphEvaluator = { "BeginStateGraphEvaluator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMState, BeginStateGraphEvaluator), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMState_Statics::NewProp_BeginStateGraphEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMState_Statics::NewProp_BeginStateGraphEvaluator_MetaData)) }; // 163563912
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMState_Statics::NewProp_UpdateStateGraphEvaluator_Inner = { "UpdateStateGraphEvaluator", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMExposedFunctionHandler, METADATA_PARAMS(nullptr, 0) }; // 163563912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMState_Statics::NewProp_UpdateStateGraphEvaluator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/States/SMState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMState_Statics::NewProp_UpdateStateGraphEvaluator = { "UpdateStateGraphEvaluator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMState, UpdateStateGraphEvaluator), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMState_Statics::NewProp_UpdateStateGraphEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMState_Statics::NewProp_UpdateStateGraphEvaluator_MetaData)) }; // 163563912
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMState_Statics::NewProp_EndStateGraphEvaluator_Inner = { "EndStateGraphEvaluator", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMExposedFunctionHandler, METADATA_PARAMS(nullptr, 0) }; // 163563912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMState_Statics::NewProp_EndStateGraphEvaluator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/States/SMState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMState_Statics::NewProp_EndStateGraphEvaluator = { "EndStateGraphEvaluator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMState, EndStateGraphEvaluator), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMState_Statics::NewProp_EndStateGraphEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMState_Statics::NewProp_EndStateGraphEvaluator_MetaData)) }; // 163563912
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMState_Statics::NewProp_BeginStateGraphEvaluator_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMState_Statics::NewProp_BeginStateGraphEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMState_Statics::NewProp_UpdateStateGraphEvaluator_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMState_Statics::NewProp_UpdateStateGraphEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMState_Statics::NewProp_EndStateGraphEvaluator_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMState_Statics::NewProp_EndStateGraphEvaluator,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMState_Base,
		&NewStructOps,
		"SMState",
		sizeof(FSMState),
		alignof(FSMState),
		Z_Construct_UScriptStruct_FSMState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMState()
	{
		if (!Z_Registration_Info_UScriptStruct_SMState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMState.InnerSingleton, Z_Construct_UScriptStruct_FSMState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMState_h_Statics::ScriptStructInfo[] = {
		{ FSMState_Base::StaticStruct, Z_Construct_UScriptStruct_FSMState_Base_Statics::NewStructOps, TEXT("SMState_Base"), &Z_Registration_Info_UScriptStruct_SMState_Base, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMState_Base), 1434849580U) },
		{ FSMState::StaticStruct, Z_Construct_UScriptStruct_FSMState_Statics::NewStructOps, TEXT("SMState"), &Z_Registration_Info_UScriptStruct_SMState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMState), 1522113401U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMState_h_76310220(TEXT("/Script/SMSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_States_SMState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
