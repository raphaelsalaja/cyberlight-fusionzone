// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Nodes/SMNode_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMNode_Base() {}
// Cross Module References
	SMSYSTEM_API UEnum* Z_Construct_UEnum_SMSystem_ESMTransactionType();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMNode_Base();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMExposedFunctionHandler();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstance_NoRegister();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMActiveStateTransaction();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMNetworkedTransaction();
// End Cross Module References
	static UEnum* ESMTransactionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SMSystem_ESMTransactionType, Z_Construct_UPackage__Script_SMSystem(), TEXT("ESMTransactionType"));
		}
		return Singleton;
	}
	template<> SMSYSTEM_API UEnum* StaticEnum<ESMTransactionType>()
	{
		return ESMTransactionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESMTransactionType(ESMTransactionType_StaticEnum, TEXT("/Script/SMSystem"), TEXT("ESMTransactionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SMSystem_ESMTransactionType_Hash() { return 2677978083U; }
	UEnum* Z_Construct_UEnum_SMSystem_ESMTransactionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESMTransactionType"), 0, Get_Z_Construct_UEnum_SMSystem_ESMTransactionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESMTransactionType::SM_Transition", (int64)ESMTransactionType::SM_Transition },
				{ "ESMTransactionType::SM_State", (int64)ESMTransactionType::SM_State },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
				{ "SM_State.Name", "ESMTransactionType::SM_State" },
				{ "SM_Transition.Name", "ESMTransactionType::SM_Transition" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SMSystem,
				nullptr,
				"ESMTransactionType",
				"ESMTransactionType",
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
class UScriptStruct* FSMNode_Base::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMNode_Base_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMNode_Base, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMNode_Base"), sizeof(FSMNode_Base), Get_Z_Construct_UScriptStruct_FSMNode_Base_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMNode_Base>()
{
	return FSMNode_Base::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMNode_Base(FSMNode_Base::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMNode_Base"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMNode_Base
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMNode_Base()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMNode_Base")),new UScriptStruct::TCppStructOps<FSMNode_Base>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMNode_Base;
	struct Z_Construct_UScriptStruct_FSMNode_Base_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphEvaluator_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GraphEvaluator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionInitializedGraphEvaluators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionInitializedGraphEvaluators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransitionInitializedGraphEvaluators;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionShutdownGraphEvaluators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionShutdownGraphEvaluators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransitionShutdownGraphEvaluators;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeInState_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInEndState_MetaData[];
#endif
		static void NewProp_bIsInEndState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInEndState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasUpdated_MetaData[];
#endif
		static void NewProp_bHasUpdated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DuplicateId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DuplicateId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodePosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TemplateName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StackTemplateNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackTemplateNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StackTemplateNames;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StackNodeInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackNodeInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StackNodeInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateVariableGraphProperties_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateVariableGraphProperties_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateVariableGraphProperties_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TemplateVariableGraphProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeInstanceClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NodeInstanceClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base struct for all state machine nodes. The Guid MUST be manually initialized right after construction.\n */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "Base struct for all state machine nodes. The Guid MUST be manually initialized right after construction." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMNode_Base>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_GraphEvaluator_Inner = { "GraphEvaluator", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMExposedFunctionHandler, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_GraphEvaluator_MetaData[] = {
		{ "Comment", "/** The primary graph evaluator. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "The primary graph evaluator." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_GraphEvaluator = { "GraphEvaluator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNode_Base, GraphEvaluator), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_GraphEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_GraphEvaluator_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TransitionInitializedGraphEvaluators_Inner = { "TransitionInitializedGraphEvaluators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMExposedFunctionHandler, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TransitionInitializedGraphEvaluators_MetaData[] = {
		{ "Comment", "/** Entry point to when a transition is first initialized. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "Entry point to when a transition is first initialized." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TransitionInitializedGraphEvaluators = { "TransitionInitializedGraphEvaluators", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNode_Base, TransitionInitializedGraphEvaluators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TransitionInitializedGraphEvaluators_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TransitionInitializedGraphEvaluators_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TransitionShutdownGraphEvaluators_Inner = { "TransitionShutdownGraphEvaluators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMExposedFunctionHandler, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TransitionShutdownGraphEvaluators_MetaData[] = {
		{ "Comment", "/** Entry point to when a transition is shutdown. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "Entry point to when a transition is shutdown." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TransitionShutdownGraphEvaluators = { "TransitionShutdownGraphEvaluators", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNode_Base, TransitionShutdownGraphEvaluators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TransitionShutdownGraphEvaluators_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TransitionShutdownGraphEvaluators_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TimeInState_MetaData[] = {
		{ "Category", "State Machines" },
		{ "Comment", "/** The current time spent in the state. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "The current time spent in the state." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TimeInState = { "TimeInState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNode_Base, TimeInState), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TimeInState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TimeInState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_bIsInEndState_MetaData[] = {
		{ "Category", "State Machines" },
		{ "Comment", "/** State Machine is in end state or the state is an end state. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "State Machine is in end state or the state is an end state." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_bIsInEndState_SetBit(void* Obj)
	{
		((FSMNode_Base*)Obj)->bIsInEndState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_bIsInEndState = { "bIsInEndState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSMNode_Base), &Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_bIsInEndState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_bIsInEndState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_bIsInEndState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_bHasUpdated_MetaData[] = {
		{ "Category", "State Machines" },
		{ "Comment", "/** State has updated at least once. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "State has updated at least once." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_bHasUpdated_SetBit(void* Obj)
	{
		((FSMNode_Base*)Obj)->bHasUpdated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_bHasUpdated = { "bHasUpdated", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSMNode_Base), &Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_bHasUpdated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_bHasUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_bHasUpdated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_DuplicateId_MetaData[] = {
		{ "Comment", "/** Special indicator in case this node is a duplicate within the same blueprint. If this isn't 0 then the NodeGuid will have been adjusted. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "Special indicator in case this node is a duplicate within the same blueprint. If this isn't 0 then the NodeGuid will have been adjusted." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_DuplicateId = { "DuplicateId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNode_Base, DuplicateId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_DuplicateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_DuplicateId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodePosition_MetaData[] = {
		{ "Comment", "/** The node position in the graph. Set automatically. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "The node position in the graph. Set automatically." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodePosition = { "NodePosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNode_Base, NodePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "State Machines" },
		{ "Comment", "/*\n\x09 * NodeGuid used in constructing nodes from a graph. Set initially from the editor graph.\n\x09 * This is not guaranteed to be unique across Blueprints.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "* NodeGuid used in constructing nodes from a graph. Set initially from the editor graph.\n* This is not guaranteed to be unique across Blueprints." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNode_Base, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_OwnerGuid_MetaData[] = {
		{ "Comment", "/** The state machine's NodeGuid owning this node. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "The state machine's NodeGuid owning this node." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_OwnerGuid = { "OwnerGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNode_Base, OwnerGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_OwnerGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_OwnerGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_PathGuid_MetaData[] = {
		{ "Category", "State Machines" },
		{ "Comment", "/*\n\x09 * Unique identifier calculated from this node's place in an instance.\n\x09 * Calculated by taking the MD5 hash of the full path of all owner NodeGuids and\n\x09 * this NodeGuid.\n\x09 * This is what is returned from GetGuid().\n\x09 * \n\x09 * ReadWrite so it can be easily read from custom graph nodes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "* Unique identifier calculated from this node's place in an instance.\n* Calculated by taking the MD5 hash of the full path of all owner NodeGuids and\n* this NodeGuid.\n* This is what is returned from GetGuid().\n*\n* ReadWrite so it can be easily read from custom graph nodes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_PathGuid = { "PathGuid", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNode_Base, PathGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_PathGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_PathGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNode_Base, NodeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TemplateName_MetaData[] = {
		{ "Comment", "/** The name of a template archetype to use when constructing an instance. This allows default values be passed into the instance. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "The name of a template archetype to use when constructing an instance. This allows default values be passed into the instance." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TemplateName = { "TemplateName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNode_Base, TemplateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TemplateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TemplateName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_StackTemplateNames_Inner = { "StackTemplateNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_StackTemplateNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_StackTemplateNames = { "StackTemplateNames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNode_Base, StackTemplateNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_StackTemplateNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_StackTemplateNames_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_StackNodeInstances_Inner = { "StackNodeInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMNodeInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_StackNodeInstances_MetaData[] = {
		{ "Category", "Node Class" },
		{ "Comment", "/** The node instances for this stack. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "The node instances for this stack." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_StackNodeInstances = { "StackNodeInstances", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNode_Base, StackNodeInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_StackNodeInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_StackNodeInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_OwningInstance_MetaData[] = {
		{ "Comment", "/** The state machine instance owning this node. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "The state machine instance owning this node." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_OwningInstance = { "OwningInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNode_Base, OwningInstance), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_OwningInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_OwningInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodeInstance_MetaData[] = {
		{ "Category", "Node Class" },
		{ "Comment", "/** The node instance for this node if it exists. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "The node instance for this node if it exists." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodeInstance = { "NodeInstance", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNode_Base, NodeInstance), Z_Construct_UClass_USMNodeInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodeInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodeInstance_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TemplateVariableGraphProperties_ValueProp = { "TemplateVariableGraphProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSMGraphPropertyTemplateOwner, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TemplateVariableGraphProperties_Key_KeyProp = { "TemplateVariableGraphProperties_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TemplateVariableGraphProperties_MetaData[] = {
		{ "Comment", "/** Set by the BP compiler. Template Guid -> GraphProperties. Contains data necessary to evaluate variables which have instanced BP graphs. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "Set by the BP compiler. Template Guid -> GraphProperties. Contains data necessary to evaluate variables which have instanced BP graphs." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TemplateVariableGraphProperties = { "TemplateVariableGraphProperties", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNode_Base, TemplateVariableGraphProperties), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TemplateVariableGraphProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TemplateVariableGraphProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodeInstanceClass_MetaData[] = {
		{ "Category", "Node Class" },
		{ "Comment", "/** The class to use to construct the node instance if one exists. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "The class to use to construct the node instance if one exists." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodeInstanceClass = { "NodeInstanceClass", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNode_Base, NodeInstanceClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodeInstanceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodeInstanceClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMNode_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_GraphEvaluator_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_GraphEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TransitionInitializedGraphEvaluators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TransitionInitializedGraphEvaluators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TransitionShutdownGraphEvaluators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TransitionShutdownGraphEvaluators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TimeInState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_bIsInEndState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_bHasUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_DuplicateId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_OwnerGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_PathGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TemplateName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_StackTemplateNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_StackTemplateNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_StackNodeInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_StackNodeInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_OwningInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodeInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TemplateVariableGraphProperties_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TemplateVariableGraphProperties_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_TemplateVariableGraphProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNode_Base_Statics::NewProp_NodeInstanceClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMNode_Base_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		&NewStructOps,
		"SMNode_Base",
		sizeof(FSMNode_Base),
		alignof(FSMNode_Base),
		Z_Construct_UScriptStruct_FSMNode_Base_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNode_Base_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNode_Base_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMNode_Base()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMNode_Base_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMNode_Base"), sizeof(FSMNode_Base), Get_Z_Construct_UScriptStruct_FSMNode_Base_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMNode_Base_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMNode_Base_Hash() { return 3153121628U; }
class UScriptStruct* FSMActiveStateTransaction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMActiveStateTransaction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMActiveStateTransaction, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMActiveStateTransaction"), sizeof(FSMActiveStateTransaction), Get_Z_Construct_UScriptStruct_FSMActiveStateTransaction_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMActiveStateTransaction>()
{
	return FSMActiveStateTransaction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMActiveStateTransaction(FSMActiveStateTransaction::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMActiveStateTransaction"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMActiveStateTransaction
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMActiveStateTransaction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMActiveStateTransaction")),new UScriptStruct::TCppStructOps<FSMActiveStateTransaction>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMActiveStateTransaction;
	struct Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeInState_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMActiveStateTransaction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::NewProp_StateGuid_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::NewProp_StateGuid = { "StateGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMActiveStateTransaction, StateGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::NewProp_StateGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::NewProp_StateGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMActiveStateTransaction, StartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::NewProp_TimeInState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::NewProp_TimeInState = { "TimeInState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMActiveStateTransaction, TimeInState), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::NewProp_TimeInState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::NewProp_TimeInState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::NewProp_StateGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::NewProp_TimeInState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		&NewStructOps,
		"SMActiveStateTransaction",
		sizeof(FSMActiveStateTransaction),
		alignof(FSMActiveStateTransaction),
		Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMActiveStateTransaction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMActiveStateTransaction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMActiveStateTransaction"), sizeof(FSMActiveStateTransaction), Get_Z_Construct_UScriptStruct_FSMActiveStateTransaction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMActiveStateTransaction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMActiveStateTransaction_Hash() { return 2387049063U; }
class UScriptStruct* FSMNetworkedTransaction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMNetworkedTransaction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMNetworkedTransaction, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMNetworkedTransaction"), sizeof(FSMNetworkedTransaction), Get_Z_Construct_UScriptStruct_FSMNetworkedTransaction_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMNetworkedTransaction>()
{
	return FSMNetworkedTransaction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMNetworkedTransaction(FSMNetworkedTransaction::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMNetworkedTransaction"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMNetworkedTransaction
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMNetworkedTransaction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMNetworkedTransaction")),new UScriptStruct::TCppStructOps<FSMNetworkedTransaction>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMNetworkedTransaction;
	struct Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransactionGuid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalGuids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalGuids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalGuids;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionType_MetaData[];
#endif
		static void NewProp_TransactionType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TransactionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data to send across the network. Default Implementation uses this to record TRANSITIONS which should be taken. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "Data to send across the network. Default Implementation uses this to record TRANSITIONS which should be taken." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMNetworkedTransaction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_BaseGuid_MetaData[] = {
		{ "Comment", "/** The node path guid. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "The node path guid." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_BaseGuid = { "BaseGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNetworkedTransaction, BaseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_BaseGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_BaseGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_TransactionGuid_MetaData[] = {
		{ "Comment", "/** Unique to this transaction. */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "Unique to this transaction." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_TransactionGuid = { "TransactionGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNetworkedTransaction, TransactionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_TransactionGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_TransactionGuid_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_AdditionalGuids_Inner = { "AdditionalGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_AdditionalGuids_MetaData[] = {
		{ "Comment", "/**\n\x09 * Additional guids for a transaction. For transitions this can be source and destination states.\n\x09 * When using conduits that information may be required and can't be calculated from a single transition.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "Additional guids for a transaction. For transitions this can be source and destination states.\nWhen using conduits that information may be required and can't be calculated from a single transition." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_AdditionalGuids = { "AdditionalGuids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNetworkedTransaction, AdditionalGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_AdditionalGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_AdditionalGuids_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Comment", "/** A UTC timestamp. Should be set manually. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "A UTC timestamp. Should be set manually." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNetworkedTransaction, Timestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_ActiveTime_MetaData[] = {
		{ "Comment", "/** Source state or this state's time in state. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "Source state or this state's time in state." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_ActiveTime = { "ActiveTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNetworkedTransaction, ActiveTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_ActiveTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_ActiveTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_TransactionType_MetaData[] = {
		{ "Comment", "/** ESMTransactionType. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "ESMTransactionType." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_TransactionType_SetBit(void* Obj)
	{
		((FSMNetworkedTransaction*)Obj)->TransactionType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_TransactionType = { "TransactionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMNetworkedTransaction), &Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_TransactionType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_TransactionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_TransactionType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Comment", "/** If the state is active. Valid only for a TransactionType of SM_State. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Base.h" },
		{ "ToolTip", "If the state is active. Valid only for a TransactionType of SM_State." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((FSMNetworkedTransaction*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSMNetworkedTransaction), &Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_bIsActive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_BaseGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_TransactionGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_AdditionalGuids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_AdditionalGuids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_ActiveTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_TransactionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::NewProp_bIsActive,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		&NewStructOps,
		"SMNetworkedTransaction",
		sizeof(FSMNetworkedTransaction),
		alignof(FSMNetworkedTransaction),
		Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMNetworkedTransaction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMNetworkedTransaction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMNetworkedTransaction"), sizeof(FSMNetworkedTransaction), Get_Z_Construct_UScriptStruct_FSMNetworkedTransaction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMNetworkedTransaction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMNetworkedTransaction_Hash() { return 2034940397U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
