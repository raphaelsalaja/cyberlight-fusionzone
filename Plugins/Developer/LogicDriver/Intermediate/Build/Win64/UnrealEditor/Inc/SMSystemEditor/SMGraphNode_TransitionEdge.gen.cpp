// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Nodes/SMGraphNode_TransitionEdge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphNode_TransitionEdge() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_TransitionEdge_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_TransitionEdge();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMTransitionInstance_NoRegister();
	SMSYSTEMEDITOR_API UEnum* Z_Construct_UEnum_SMSystemEditor_ESMDelegateOwner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SMSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTransitionStackContainer();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeInstance_NoRegister();
// End Cross Module References
	void USMGraphNode_TransitionEdge::StaticRegisterNativesUSMGraphNode_TransitionEdge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMGraphNode_TransitionEdge);
	UClass* Z_Construct_UClass_USMGraphNode_TransitionEdge_NoRegister()
	{
		return USMGraphNode_TransitionEdge::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TransitionClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelegateOwnerInstance_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DelegateOwnerInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelegateOwnerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DelegateOwnerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelegatePropertyGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DelegatePropertyGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelegatePropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DelegatePropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEventTriggersTargetedUpdate_MetaData[];
#endif
		static void NewProp_bEventTriggersTargetedUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEventTriggersTargetedUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEventTriggersFullUpdate_MetaData[];
#endif
		static void NewProp_bEventTriggersFullUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEventTriggersFullUpdate;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEvalWithStartState_MetaData[];
#endif
		static void NewProp_bCanEvalWithStartState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEvalWithStartState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFormatGraph_MetaData[];
#endif
		static void NewProp_bAutoFormatGraph_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFormatGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNOTPrimaryCondition_MetaData[];
#endif
		static void NewProp_bNOTPrimaryCondition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNOTPrimaryCondition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransitionStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PriorityOrder;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AutoGeneratedStackNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoGeneratedStackNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoGeneratedStackNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialOperatorNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InitialOperatorNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedHoveredTransitionStack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedHoveredTransitionStack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_TransitionClass_MetaData[] = {
		{ "BlueprintBaseOnly", "" },
		{ "Category", "Transition" },
		{ "Comment", "/** Select a custom node class to use for this node. This can be a blueprint or C++ class. */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "Select a custom node class to use for this node. This can be a blueprint or C++ class." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_TransitionClass = { "TransitionClass", nullptr, (EPropertyFlags)0x0014000002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_TransitionEdge, TransitionClass), Z_Construct_UClass_USMTransitionInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_TransitionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_TransitionClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerInstance_MetaData[] = {
		{ "Category", "Event Trigger" },
		{ "Comment", "/**\n\x09 * The instance which owns the delegate the transition should bind to.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "The instance which owns the delegate the transition should bind to." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerInstance = { "DelegateOwnerInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_TransitionEdge, DelegateOwnerInstance), Z_Construct_UEnum_SMSystemEditor_ESMDelegateOwner, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerInstance_MetaData)) }; // 2885278918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerClass_MetaData[] = {
		{ "Category", "Event Trigger" },
		{ "Comment", "/**\n\x09 * The class of the instance containing the delegate.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "The class of the instance containing the delegate." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerClass = { "DelegateOwnerClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_TransitionEdge, DelegateOwnerClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyGuid_MetaData[] = {
		{ "Comment", "/**\n\x09 * The guid assigned to this property if one exists.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "The guid assigned to this property if one exists." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyGuid = { "DelegatePropertyGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_TransitionEdge, DelegatePropertyGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyName_MetaData[] = {
		{ "Category", "Event Trigger" },
		{ "Comment", "/**\n\x09 * Available delegates.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "Available delegates." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyName = { "DelegatePropertyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_TransitionEdge, DelegatePropertyName), METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bEventTriggersTargetedUpdate_MetaData[] = {
		{ "Category", "Event Trigger" },
		{ "Comment", "/**\n\x09 * If the event should trigger a targeted update of the state machine limited to this\n\x09 * transition and destination state.\n\x09 * \n\x09 * This can efficiently allow state machines with tick disabled to update. This\n\x09 * won't evaluate parallel or super state transitions.\n\x09 *\n\x09 * This setting can also be changed on each Event Trigger Result Node.\n\x09 */" },
		{ "DisplayName", "Targeted Update" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "If the event should trigger a targeted update of the state machine limited to this\ntransition and destination state.\n\nThis can efficiently allow state machines with tick disabled to update. This\nwon't evaluate parallel or super state transitions.\n\nThis setting can also be changed on each Event Trigger Result Node." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bEventTriggersTargetedUpdate_SetBit(void* Obj)
	{
		((USMGraphNode_TransitionEdge*)Obj)->bEventTriggersTargetedUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bEventTriggersTargetedUpdate = { "bEventTriggersTargetedUpdate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMGraphNode_TransitionEdge), &Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bEventTriggersTargetedUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bEventTriggersTargetedUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bEventTriggersTargetedUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bEventTriggersFullUpdate_MetaData[] = {
		{ "Category", "Event Trigger" },
		{ "Comment", "/**\n\x09 * If the event should trigger a full update of the state machine. Setting this will be applied\n\x09 * after 'Targeted Update'. A full update consists of evaluating transitions top down from the\n\x09 * root state machine, as well as running OnStateUpdate if necessary.\n\x09 *\n\x09 * This is a legacy setting. To maintain old legacy behavior enable this setting and\n\x09 * disable 'Targeted Update'.\n\x09 *\n\x09 * This setting can also be changed on each Event Trigger Result Node.\n\x09 */" },
		{ "DisplayName", "Full Update" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "If the event should trigger a full update of the state machine. Setting this will be applied\nafter 'Targeted Update'. A full update consists of evaluating transitions top down from the\nroot state machine, as well as running OnStateUpdate if necessary.\n\nThis is a legacy setting. To maintain old legacy behavior enable this setting and\ndisable 'Targeted Update'.\n\nThis setting can also be changed on each Event Trigger Result Node." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bEventTriggersFullUpdate_SetBit(void* Obj)
	{
		((USMGraphNode_TransitionEdge*)Obj)->bEventTriggersFullUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bEventTriggersFullUpdate = { "bEventTriggersFullUpdate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMGraphNode_TransitionEdge), &Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bEventTriggersFullUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bEventTriggersFullUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bEventTriggersFullUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluate_MetaData[] = {
		{ "Comment", "/**\n\x09 * @deprecated Set on the node template instead.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "@deprecated Set on the node template instead." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluate_SetBit(void* Obj)
	{
		((USMGraphNode_TransitionEdge*)Obj)->bCanEvaluate_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluate = { "bCanEvaluate", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMGraphNode_TransitionEdge), &Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluateFromEvent_MetaData[] = {
		{ "Comment", "/**\n\x09 * @deprecated Set on the node template instead.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "@deprecated Set on the node template instead." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluateFromEvent_SetBit(void* Obj)
	{
		((USMGraphNode_TransitionEdge*)Obj)->bCanEvaluateFromEvent_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluateFromEvent = { "bCanEvaluateFromEvent", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMGraphNode_TransitionEdge), &Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluateFromEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluateFromEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluateFromEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvalWithStartState_MetaData[] = {
		{ "Comment", "/**\n\x09 * @deprecated Set on the node template instead.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "@deprecated Set on the node template instead." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvalWithStartState_SetBit(void* Obj)
	{
		((USMGraphNode_TransitionEdge*)Obj)->bCanEvalWithStartState_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvalWithStartState = { "bCanEvalWithStartState", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMGraphNode_TransitionEdge), &Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvalWithStartState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvalWithStartState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvalWithStartState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bAutoFormatGraph_MetaData[] = {
		{ "Category", "Expression Generation" },
		{ "Comment", "/**\n\x09 * Auto format the local graph and generate an expression for conditional evaluation.\n\x09 * This will physically add or remove blueprint operator nodes to the local graph.\n\x09 * \n\x09 * For more complex expressions generate the initial graph using the transition stack,\n\x09 * uncheck Auto Format Graph, and update the blueprint operator nodes in the local graph.\n\x09 *\n\x09 * This is ideal for quick prototyping or areas where performance isn't critical,\n\x09 * but for optimal memory usage and performance use a single transition class instead.\n\x09 * Even with pure C++ transition classes any operator nodes in the local graph will\n\x09 * require blueprint graph evaluation.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "Auto format the local graph and generate an expression for conditional evaluation.\nThis will physically add or remove blueprint operator nodes to the local graph.\n\nFor more complex expressions generate the initial graph using the transition stack,\nuncheck Auto Format Graph, and update the blueprint operator nodes in the local graph.\n\nThis is ideal for quick prototyping or areas where performance isn't critical,\nbut for optimal memory usage and performance use a single transition class instead.\nEven with pure C++ transition classes any operator nodes in the local graph will\nrequire blueprint graph evaluation." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bAutoFormatGraph_SetBit(void* Obj)
	{
		((USMGraphNode_TransitionEdge*)Obj)->bAutoFormatGraph = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bAutoFormatGraph = { "bAutoFormatGraph", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMGraphNode_TransitionEdge), &Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bAutoFormatGraph_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bAutoFormatGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bAutoFormatGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bNOTPrimaryCondition_MetaData[] = {
		{ "Category", "Expression Generation" },
		{ "Comment", "/**\n\x09 * NOT the primary node instance or condition. No impact if only using pin defaults.\n\x09 * Requires bAutoFormatGraph set.\n\x09 */" },
		{ "DisplayName", "NOT Primary Condition" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "NOT the primary node instance or condition. No impact if only using pin defaults.\nRequires bAutoFormatGraph set." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bNOTPrimaryCondition_SetBit(void* Obj)
	{
		((USMGraphNode_TransitionEdge*)Obj)->bNOTPrimaryCondition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bNOTPrimaryCondition = { "bNOTPrimaryCondition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USMGraphNode_TransitionEdge), &Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bNOTPrimaryCondition_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bNOTPrimaryCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bNOTPrimaryCondition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_TransitionStack_Inner = { "TransitionStack", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransitionStackContainer, METADATA_PARAMS(nullptr, 0) }; // 498468803
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_TransitionStack_MetaData[] = {
		{ "Category", "Expression Generation" },
		{ "Comment", "/**\n\x09 * Add additional transition classes so simple expressions can be used to determine if the transition should pass.\n\x09 * Requires bAutoFormatGraph.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "Add additional transition classes so simple expressions can be used to determine if the transition should pass.\nRequires bAutoFormatGraph." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_TransitionStack = { "TransitionStack", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_TransitionEdge, TransitionStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_TransitionStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_TransitionStack_MetaData)) }; // 498468803
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_PriorityOrder_MetaData[] = {
		{ "Comment", "/**\n\x09 * @deprecated Set on the node template instead.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "@deprecated Set on the node template instead." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_PriorityOrder = { "PriorityOrder", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_TransitionEdge, PriorityOrder_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_PriorityOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_PriorityOrder_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_AutoGeneratedStackNodes_Inner = { "AutoGeneratedStackNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_AutoGeneratedStackNodes_MetaData[] = {
		{ "Comment", "/** Auto added nodes for the transition stack. */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "Auto added nodes for the transition stack." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_AutoGeneratedStackNodes = { "AutoGeneratedStackNodes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_TransitionEdge, AutoGeneratedStackNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_AutoGeneratedStackNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_AutoGeneratedStackNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_InitialOperatorNode_MetaData[] = {
		{ "Comment", "/**\n\x09 * The initial auto generated operator. Tracked so pin 0 can be used for reconnecting\n\x09 * user entered pins when regenerating.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "The initial auto generated operator. Tracked so pin 0 can be used for reconnecting\nuser entered pins when regenerating." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_InitialOperatorNode = { "InitialOperatorNode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_TransitionEdge, InitialOperatorNode), Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_InitialOperatorNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_InitialOperatorNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_CachedHoveredTransitionStack_MetaData[] = {
		{ "Comment", "/**\n\x09 * When the user is hovering a transition stack and has right clicked.\n\x09 * Cached so the context menu knows what was hovered at time of right click.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "When the user is hovering a transition stack and has right clicked.\nCached so the context menu knows what was hovered at time of right click." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_CachedHoveredTransitionStack = { "CachedHoveredTransitionStack", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_TransitionEdge, CachedHoveredTransitionStack), Z_Construct_UClass_USMNodeInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_CachedHoveredTransitionStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_CachedHoveredTransitionStack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_TransitionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bEventTriggersTargetedUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bEventTriggersFullUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluateFromEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvalWithStartState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bAutoFormatGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bNOTPrimaryCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_TransitionStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_TransitionStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_PriorityOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_AutoGeneratedStackNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_AutoGeneratedStackNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_InitialOperatorNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_CachedHoveredTransitionStack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphNode_TransitionEdge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::ClassParams = {
		&USMGraphNode_TransitionEdge::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::PropPointers),
		0,
		0x009004A4u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphNode_TransitionEdge()
	{
		if (!Z_Registration_Info_UClass_USMGraphNode_TransitionEdge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMGraphNode_TransitionEdge.OuterSingleton, Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMGraphNode_TransitionEdge.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphNode_TransitionEdge>()
	{
		return USMGraphNode_TransitionEdge::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphNode_TransitionEdge);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_TransitionEdge_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_TransitionEdge_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMGraphNode_TransitionEdge, USMGraphNode_TransitionEdge::StaticClass, TEXT("USMGraphNode_TransitionEdge"), &Z_Registration_Info_UClass_USMGraphNode_TransitionEdge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMGraphNode_TransitionEdge), 562333138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_TransitionEdge_h_807733406(TEXT("/Script/SMSystemEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_TransitionEdge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_TransitionEdge_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
