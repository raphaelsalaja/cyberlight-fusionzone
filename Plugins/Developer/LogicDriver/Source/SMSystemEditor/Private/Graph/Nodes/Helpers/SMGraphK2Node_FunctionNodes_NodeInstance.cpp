// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMGraphK2Node_FunctionNodes_NodeInstance.h"
#include "BlueprintNodeSpawner.h"
#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintDelegateNodeSpawner.h"
#include "Utilities/SMBlueprintEditorUtils.h"
#include "EdGraph/EdGraph.h"
#include "K2Node_CallFunction.h"
#include "K2Node_DynamicCast.h"
#include "SMConduitInstance.h"
#include "SMGraphK2Node_StateReadNodes.h"
#include "SMTransitionInstance.h"

#define LOCTEXT_NAMESPACE "SMFunctionNodeInstances"


USMGraphK2Node_FunctionNode_NodeInstance::USMGraphK2Node_FunctionNode_NodeInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void USMGraphK2Node_FunctionNode_NodeInstance::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	if (GetClass() != USMGraphK2Node_FunctionNode_NodeInstance::StaticClass())
	{
		GetMenuActions_Internal(ActionRegistrar);
	}
}

FText USMGraphK2Node_FunctionNode_NodeInstance::GetMenuCategory() const
{
	return FText::FromString(STATE_MACHINE_INSTANCE_CALL_CATEGORY);
}

bool USMGraphK2Node_FunctionNode_NodeInstance::IsCompatibleWithGraph(UEdGraph const* Graph) const
{
	return Graph->GetSchema()->GetClass()->IsChildOf<USMGraphK2Schema>() && FSMBlueprintEditorUtils::GetNodeTemplateClass(Graph) != nullptr;
}

FText USMGraphK2Node_FunctionNode_NodeInstance::GetTooltipText() const
{
	return LOCTEXT("NodeInstanceTooltip", "Call the instance method.");
}

void USMGraphK2Node_FunctionNode_NodeInstance::AllocateDefaultPins()
{
	CreatePin(EGPD_Input, USMGraphK2Schema::PC_Exec, USMGraphK2Schema::PN_Execute);
	CreatePin(EGPD_Output, USMGraphK2Schema::PC_Exec, USMGraphK2Schema::PN_Then);
}

void USMGraphK2Node_FunctionNode_NodeInstance::PreCompileValidate(FCompilerResultsLog& MessageLog)
{
	Super::PreCompileValidate(MessageLog);

	Modify();
	NodeInstanceClass = FSMBlueprintEditorUtils::GetNodeTemplateClass(GetGraph(), true);
}

void USMGraphK2Node_FunctionNode_NodeInstance::CustomExpandNode(FSMKismetCompilerContext& CompilerContext,
                                                                USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty)
{
}

bool USMGraphK2Node_FunctionNode_NodeInstance::ExpandAndWireStandardFunction(UFunction* Function, UEdGraphPin* SelfPin,
	FSMKismetCompilerContext& CompilerContext, USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer,
	FProperty* NodeProperty)
{
	if (!NodeInstanceClass)
	{
		CompilerContext.MessageLog.Error(TEXT("Can't expand node @@, instance template not set."), this);
		return false;
	}

	// Retrieve the getter for the node instance.
	UK2Node_DynamicCast* CastNode = nullptr;
	if (!SelfPin)
	{
		USMGraphK2Node_StateReadNode_GetNodeInstance::CreateAndWireExpandedNodes(this, NodeInstanceClass, CompilerContext, RuntimeNodeContainer, NodeProperty, &CastNode);
		check(CastNode);
	}
	
	return Super::ExpandAndWireStandardFunction(Function, SelfPin ? SelfPin : CastNode->GetCastResultPin(), CompilerContext, RuntimeNodeContainer, NodeProperty);
}


USMGraphK2Node_StateInstance_Base::USMGraphK2Node_StateInstance_Base(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void USMGraphK2Node_StateInstance_Base::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	if (GetClass() != USMGraphK2Node_StateInstance_Base::StaticClass())
	{
		return Super::GetMenuActions(ActionRegistrar);
	}
}

bool USMGraphK2Node_StateInstance_Base::IsCompatibleWithGraph(UEdGraph const* Graph) const
{
	if (!Super::IsCompatibleWithGraph(Graph))
	{
		return false;
	}

	return FSMBlueprintEditorUtils::GetNodeTemplateClass(Graph)->IsChildOf(USMStateInstance_Base::StaticClass());
}


USMGraphK2Node_TransitionInstance_Base::USMGraphK2Node_TransitionInstance_Base(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void USMGraphK2Node_TransitionInstance_Base::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	if (GetClass() != USMGraphK2Node_TransitionInstance_Base::StaticClass())
	{
		return Super::GetMenuActions(ActionRegistrar);
	}
}

bool USMGraphK2Node_TransitionInstance_Base::IsCompatibleWithGraph(UEdGraph const* Graph) const
{
	if (!Super::IsCompatibleWithGraph(Graph))
	{
		return false;
	}

	return FSMBlueprintEditorUtils::GetNodeTemplateClass(Graph)->IsChildOf(USMTransitionInstance::StaticClass());
}


USMGraphK2Node_ConduitInstance_Base::USMGraphK2Node_ConduitInstance_Base(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}


void USMGraphK2Node_ConduitInstance_Base::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	if (GetClass() != USMGraphK2Node_ConduitInstance_Base::StaticClass())
	{
		return Super::GetMenuActions(ActionRegistrar);
	}
}

bool USMGraphK2Node_ConduitInstance_Base::IsCompatibleWithGraph(UEdGraph const* Graph) const
{
	if (!Super::IsCompatibleWithGraph(Graph))
	{
		return false;
	}

	return FSMBlueprintEditorUtils::GetNodeTemplateClass(Graph)->IsChildOf(USMConduitInstance::StaticClass());
}


USMGraphK2Node_StateInstance_Begin::USMGraphK2Node_StateInstance_Begin(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FText USMGraphK2Node_StateInstance_Begin::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("StartStateNode", "Call On State Begin (Instance)");
}

void USMGraphK2Node_StateInstance_Begin::CustomExpandNode(FSMKismetCompilerContext& CompilerContext,
	USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty)
{
	ExpandAndWireStandardFunction(USMStateInstance_Base::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMStateInstance_Base, OnStateBegin)),
		nullptr, CompilerContext, RuntimeNodeContainer, NodeProperty);
}


USMGraphK2Node_StateInstance_Update::USMGraphK2Node_StateInstance_Update(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void USMGraphK2Node_StateInstance_Update::AllocateDefaultPins()
{
	CreatePin(EGPD_Input, USMGraphK2Schema::PC_Exec, UEdGraphSchema_K2::PN_Execute);
	CreatePin(EGPD_Input, USMGraphK2Schema::PC_Float, TEXT("DeltaSeconds"));
	CreatePin(EGPD_Output, USMGraphK2Schema::PC_Exec, UEdGraphSchema_K2::PN_Then);
}

FText USMGraphK2Node_StateInstance_Update::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("UpdateStateNode", "Call On State Update (Instance)");
}

void USMGraphK2Node_StateInstance_Update::CustomExpandNode(FSMKismetCompilerContext& CompilerContext,
	USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty)
{
	if (!NodeInstanceClass)
	{
		CompilerContext.MessageLog.Error(TEXT("Can't expand node @@, instance template not set."), this);
		return;
	}

	// Retrieve the getter for the node instance.
	UK2Node_DynamicCast* CastNode = nullptr;
	USMGraphK2Node_StateReadNode_GetNodeInstance::CreateAndWireExpandedNodes(this, NodeInstanceClass, CompilerContext, RuntimeNodeContainer, NodeProperty, &CastNode);
	check(CastNode);

	UEdGraphPin* GetInstanceOutputPin = CastNode->GetCastResultPin();
	
	// Call update.
	UFunction* Function = USMStateInstance_Base::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMStateInstance_Base, OnStateUpdate));
	UK2Node_CallFunction* StartFunctionNode = FSMBlueprintEditorUtils::CreateFunctionCall(CompilerContext.ConsolidatedEventGraph, Function);

	UEdGraphPin* SelfPinIn = StartFunctionNode->FindPinChecked(UEdGraphSchema_K2::PN_Self);
	UEdGraphPin* SecondsPinIn = StartFunctionNode->FindPinChecked(FName("DeltaSeconds"));
	UEdGraphPin* ExecutePinIn = StartFunctionNode->FindPinChecked(UEdGraphSchema_K2::PN_Execute);
	UEdGraphPin* ThenPinIn = StartFunctionNode->FindPinChecked(UEdGraphSchema_K2::PN_Then);

	UEdGraphPin* SecondsPinOut = FindPinChecked(FName("DeltaSeconds"));
	UEdGraphPin* ExecutePinOut = FindPinChecked(UEdGraphSchema_K2::PN_Execute);
	UEdGraphPin* ThenPinOut = FindPinChecked(UEdGraphSchema_K2::PN_Then);

	// Wire the reference pin to the self pin so we are calling start on the reference.
	CompilerContext.ConsolidatedEventGraph->GetSchema()->TryCreateConnection(GetInstanceOutputPin, SelfPinIn);

	// Wire old pins to new pins.
	SecondsPinIn->CopyPersistentDataFromOldPin(*SecondsPinOut);
	ExecutePinIn->CopyPersistentDataFromOldPin(*ExecutePinOut);
	ThenPinIn->CopyPersistentDataFromOldPin(*ThenPinOut);

	BreakAllNodeLinks();
}


USMGraphK2Node_StateInstance_End::USMGraphK2Node_StateInstance_End(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FText USMGraphK2Node_StateInstance_End::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("StopStateNode", "Call On State End (Instance)");
}

void USMGraphK2Node_StateInstance_End::CustomExpandNode(FSMKismetCompilerContext& CompilerContext,
	USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty)
{
	ExpandAndWireStandardFunction(USMStateInstance_Base::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMStateInstance_Base, OnStateEnd)),
		nullptr, CompilerContext, RuntimeNodeContainer, NodeProperty);
}


USMGraphK2Node_StateInstance_StateMachineStart::USMGraphK2Node_StateInstance_StateMachineStart(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FText USMGraphK2Node_StateInstance_StateMachineStart::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("StateMachineStartNode", "Call On Root State Machine Start (Instance)");
}

void USMGraphK2Node_StateInstance_StateMachineStart::CustomExpandNode(FSMKismetCompilerContext& CompilerContext,
	USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty)
{
	ExpandAndWireStandardFunction(USMStateInstance_Base::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMStateInstance_Base, OnRootStateMachineStart)),
		nullptr, CompilerContext, RuntimeNodeContainer, NodeProperty);
}


USMGraphK2Node_StateInstance_StateMachineStop::USMGraphK2Node_StateInstance_StateMachineStop(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FText USMGraphK2Node_StateInstance_StateMachineStop::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("StateMachineStopNode", "Call On Root State Machine Stop (Instance)");
}

void USMGraphK2Node_StateInstance_StateMachineStop::CustomExpandNode(FSMKismetCompilerContext& CompilerContext,
	USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty)
{
	ExpandAndWireStandardFunction(USMStateInstance_Base::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMStateInstance_Base, OnRootStateMachineStop)),
		nullptr, CompilerContext, RuntimeNodeContainer, NodeProperty);
}


USMGraphK2Node_StateInstance_OnStateInitialized::USMGraphK2Node_StateInstance_OnStateInitialized(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FText USMGraphK2Node_StateInstance_OnStateInitialized::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("InstanceStateInitialized", "Call On State Initialized (Instance)");
}

void USMGraphK2Node_StateInstance_OnStateInitialized::CustomExpandNode(FSMKismetCompilerContext& CompilerContext,
	USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty)
{
	ExpandAndWireStandardFunction(USMStateInstance::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMStateInstance, OnStateInitialized)),
		nullptr, CompilerContext, RuntimeNodeContainer, NodeProperty);
}


USMGraphK2Node_StateInstance_OnStateShutdown::USMGraphK2Node_StateInstance_OnStateShutdown(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FText USMGraphK2Node_StateInstance_OnStateShutdown::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("InstanceStateShutdown", "Call On State Shutdown (Instance)");
}

void USMGraphK2Node_StateInstance_OnStateShutdown::CustomExpandNode(FSMKismetCompilerContext& CompilerContext,
	USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty)
{
	ExpandAndWireStandardFunction(USMStateInstance::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMStateInstance, OnStateShutdown)),
		nullptr, CompilerContext, RuntimeNodeContainer, NodeProperty);
}


USMGraphK2Node_TransitionInstance_CanEnterTransition::USMGraphK2Node_TransitionInstance_CanEnterTransition(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void USMGraphK2Node_TransitionInstance_CanEnterTransition::AllocateDefaultPins()
{
	CreatePin(EGPD_Output, USMGraphK2Schema::PC_Boolean, USMGraphK2Schema::PN_ReturnValue);
}

FText USMGraphK2Node_TransitionInstance_CanEnterTransition::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("InstanceCanEnterTransition", "Get Can Enter Transition (Instance)");
}

void USMGraphK2Node_TransitionInstance_CanEnterTransition::CustomExpandNode(FSMKismetCompilerContext& CompilerContext,
	USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty)
{
	if (!NodeInstanceClass)
	{
		CompilerContext.MessageLog.Error(TEXT("Can't expand node @@, instance template not set."), this);
		return;
	}

	// Retrieve the getter for the node instance.
	UK2Node_DynamicCast* CastNode = nullptr;
	USMGraphK2Node_StateReadNode_GetNodeInstance::CreateAndWireExpandedNodes(this, NodeInstanceClass, CompilerContext, RuntimeNodeContainer, NodeProperty, &CastNode);
	check(CastNode);

	UEdGraphPin* GetInstanceOutputPin = CastNode->GetCastResultPin();

	// Call end function.
	UFunction* Function = USMTransitionInstance::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTransitionInstance, CanEnterTransition));
	UK2Node_CallFunction* EvalFunctionNode = FSMBlueprintEditorUtils::CreateFunctionCall(CompilerContext.ConsolidatedEventGraph, Function);

	UEdGraphPin* SelfPinIn = EvalFunctionNode->FindPinChecked(FName(USMGraphK2Schema::PN_Self));
	UEdGraphPin* ResultPinOut = EvalFunctionNode->FindPinChecked(USMGraphK2Schema::PN_ReturnValue);

	UEdGraphPin* OldResultPinIn = FindPinChecked(USMGraphK2Schema::PN_ReturnValue);

	// Wire the reference pin to the self pin so we are calling start on the reference.
	CompilerContext.ConsolidatedEventGraph->GetSchema()->TryCreateConnection(GetInstanceOutputPin, SelfPinIn);

	// Wire old pins to new pins.
	ResultPinOut->CopyPersistentDataFromOldPin(*OldResultPinIn);

	BreakAllNodeLinks();
}


USMGraphK2Node_TransitionInstance_OnTransitionTaken::USMGraphK2Node_TransitionInstance_OnTransitionTaken(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FText USMGraphK2Node_TransitionInstance_OnTransitionTaken::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("InstanceTransitionEntered", "Call On Transition Entered (Instance)");
}

void USMGraphK2Node_TransitionInstance_OnTransitionTaken::CustomExpandNode(FSMKismetCompilerContext& CompilerContext,
	USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty)
{
	ExpandAndWireStandardFunction(USMTransitionInstance::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTransitionInstance, OnTransitionEntered)),
		nullptr, CompilerContext, RuntimeNodeContainer, NodeProperty);
}


USMGraphK2Node_TransitionInstance_OnTransitionInitialized::USMGraphK2Node_TransitionInstance_OnTransitionInitialized(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FText USMGraphK2Node_TransitionInstance_OnTransitionInitialized::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("InstanceTransitionInitialized", "Call On Transition Initialized (Instance)");
}

void USMGraphK2Node_TransitionInstance_OnTransitionInitialized::CustomExpandNode(FSMKismetCompilerContext& CompilerContext,
	USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty)
{
	ExpandAndWireStandardFunction(USMTransitionInstance::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTransitionInstance, OnTransitionInitialized)),
		nullptr, CompilerContext, RuntimeNodeContainer, NodeProperty);
}


USMGraphK2Node_TransitionInstance_OnTransitionShutdown::USMGraphK2Node_TransitionInstance_OnTransitionShutdown(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FText USMGraphK2Node_TransitionInstance_OnTransitionShutdown::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("InstanceTransitionShutdown", "Call On Transition Shutdown (Instance)");
}

void USMGraphK2Node_TransitionInstance_OnTransitionShutdown::CustomExpandNode(FSMKismetCompilerContext& CompilerContext,
	USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty)
{
	ExpandAndWireStandardFunction(USMTransitionInstance::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTransitionInstance, OnTransitionShutdown)),
		nullptr, CompilerContext, RuntimeNodeContainer, NodeProperty);
}


USMGraphK2Node_ConduitInstance_CanEnterTransition::USMGraphK2Node_ConduitInstance_CanEnterTransition(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void USMGraphK2Node_ConduitInstance_CanEnterTransition::AllocateDefaultPins()
{
	CreatePin(EGPD_Output, USMGraphK2Schema::PC_Boolean, USMGraphK2Schema::PN_ReturnValue);
}

FText USMGraphK2Node_ConduitInstance_CanEnterTransition::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("ConduitInstanceCanEnterTransition", "Get Can Enter Transition (Instance)");
}

void USMGraphK2Node_ConduitInstance_CanEnterTransition::CustomExpandNode(FSMKismetCompilerContext& CompilerContext,
	USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty)
{
	if (!NodeInstanceClass)
	{
		CompilerContext.MessageLog.Error(TEXT("Can't expand node @@, instance template not set."), this);
		return;
	}

	// Retrieve the getter for the node instance.
	UK2Node_DynamicCast* CastNode = nullptr;
	USMGraphK2Node_StateReadNode_GetNodeInstance::CreateAndWireExpandedNodes(this, NodeInstanceClass, CompilerContext, RuntimeNodeContainer, NodeProperty, &CastNode);
	check(CastNode);

	UEdGraphPin* GetInstanceOutputPin = CastNode->GetCastResultPin();

	// Call end function.
	UFunction* Function = USMConduitInstance::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMConduitInstance, CanEnterTransition));
	UK2Node_CallFunction* EvalFunctionNode = FSMBlueprintEditorUtils::CreateFunctionCall(CompilerContext.ConsolidatedEventGraph, Function);

	UEdGraphPin* SelfPinIn = EvalFunctionNode->FindPinChecked(FName(USMGraphK2Schema::PN_Self));
	UEdGraphPin* ResultPinOut = EvalFunctionNode->FindPinChecked(USMGraphK2Schema::PN_ReturnValue);

	UEdGraphPin* OldResultPinIn = FindPinChecked(USMGraphK2Schema::PN_ReturnValue);

	// Wire the reference pin to the self pin so we are calling start on the reference.
	CompilerContext.ConsolidatedEventGraph->GetSchema()->TryCreateConnection(GetInstanceOutputPin, SelfPinIn);

	// Wire old pins to new pins.
	ResultPinOut->CopyPersistentDataFromOldPin(*OldResultPinIn);

	BreakAllNodeLinks();
}

USMGraphK2Node_ConduitInstance_OnConduitEntered::USMGraphK2Node_ConduitInstance_OnConduitEntered(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FText USMGraphK2Node_ConduitInstance_OnConduitEntered::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("InstanceConduitEntered", "Call On Conduit Entered (Instance)");
}

void USMGraphK2Node_ConduitInstance_OnConduitEntered::CustomExpandNode(FSMKismetCompilerContext& CompilerContext,
	USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty)
{
	ExpandAndWireStandardFunction(USMConduitInstance::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMConduitInstance, OnConduitEntered)),
		nullptr, CompilerContext, RuntimeNodeContainer, NodeProperty);
}

USMGraphK2Node_ConduitInstance_OnConduitInitialized::USMGraphK2Node_ConduitInstance_OnConduitInitialized(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FText USMGraphK2Node_ConduitInstance_OnConduitInitialized::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("InstanceConduitInitialized", "Call On Conduit Initialized (Instance)");
}

void USMGraphK2Node_ConduitInstance_OnConduitInitialized::CustomExpandNode(FSMKismetCompilerContext& CompilerContext,
	USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty)
{
	ExpandAndWireStandardFunction(USMConduitInstance::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMConduitInstance, OnConduitInitialized)),
		nullptr, CompilerContext, RuntimeNodeContainer, NodeProperty);
}


USMGraphK2Node_ConduitInstance_OnConduitShutdown::USMGraphK2Node_ConduitInstance_OnConduitShutdown(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FText USMGraphK2Node_ConduitInstance_OnConduitShutdown::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("InstanceConduitShutdown", "Call On Conduit Shutdown (Instance)");
}

void USMGraphK2Node_ConduitInstance_OnConduitShutdown::CustomExpandNode(FSMKismetCompilerContext& CompilerContext,
	USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty)
{
	ExpandAndWireStandardFunction(USMConduitInstance::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMConduitInstance, OnConduitShutdown)),
		nullptr, CompilerContext, RuntimeNodeContainer, NodeProperty);
}

#undef LOCTEXT_NAMESPACE
