// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "Blueprints/SMBlueprint.h"
#include "SMTestHelpers.h"
#include "Blueprints/SMBlueprintFactory.h"
#include "Utilities/SMBlueprintEditorUtils.h"
#include "SMTestContext.h"
#include "K2Node_CallFunction.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Graph/SMGraph.h"
#include "Graph/SMStateGraph.h"
#include "Graph/Nodes/SMGraphK2Node_StateMachineNode.h"
#include "Graph/Nodes/SMGraphNode_StateNode.h"
#include "Graph/Nodes/SMGraphNode_StateMachineEntryNode.h"
#include "Graph/Nodes/SMGraphNode_TransitionEdge.h"
#include "Graph/Nodes/SMGraphNode_StateMachineStateNode.h"
#include "Graph/Nodes/Helpers/SMGraphK2Node_StateWriteNodes.h"
#include "Graph/Nodes/RootNodes/SMGraphK2Node_TransitionInitializedNode.h"
#include "Graph/Nodes/RootNodes/SMGraphK2Node_TransitionShutdownNode.h"
#include "Graph/Nodes/RootNodes/SMGraphK2Node_TransitionPreEvaluateNode.h"
#include "Graph/Nodes/RootNodes/SMGraphK2Node_TransitionPostEvaluateNode.h"
#include "Graph/Nodes/RootNodes/SMGraphK2Node_TransitionEnteredNode.h"
#include "Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h"


#if WITH_DEV_AUTOMATION_TESTS

#if PLATFORM_DESKTOP

/**
 * Disable tick on a state and manually evaluate from the state instance.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStateManualTransitionTest, "SMTests.StateManualTransition", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

bool FStateManualTransitionTest::RunTest(const FString& Parameters)
{
	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, false))
	{
		return false;
	}

	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();

	// Find root state machine.
	USMGraphK2Node_StateMachineNode* RootStateMachineNode = FSMBlueprintEditorUtils::GetRootStateMachineNode(NewBP);

	// Find the state machine graph.
	USMGraph* StateMachineGraph = RootStateMachineNode->GetStateMachineGraph();

	// Total states to test.
	const int32 TotalStates = 2;

	UEdGraphPin* LastStatePin = nullptr;

	// Test manually calling EvaluateTransitions
	{
		TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin);

		USMGraphNode_StateNode* FirstStateNode = CastChecked<USMGraphNode_StateNode>(StateMachineGraph->GetEntryNode()->GetOutputNode());
		FirstStateNode->GetNodeTemplateAs<USMStateInstance_Base>()->SetDisableTickTransitionEvaluation(true);

		int32 EntryHits = 0; int32 UpdateHits = 0; int32 EndHits = 0;
		const int32 MaxIterations = 3;
		USMInstance* Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, MaxIterations, false, false);

		TestTrue("State machine still active", Instance->IsActive());
		TestTrue("State machine shouldn't have been able to switch states.", !Instance->IsInEndState());

		TestEqual("State Machine generated value", EntryHits, 1);
		TestEqual("State Machine generated value", UpdateHits, MaxIterations);
		TestEqual("State Machine generated value", EndHits, 0);

		USMStateInstance* StateInstance = CastChecked<USMStateInstance>(Instance->GetSingleActiveState()->GetNodeInstance());

		// Test DoesTransitionPass API
		{
			USMTransitionInstance* NextTransition = StateInstance->GetTransitionByIndex(0);
			check(NextTransition);

			TestTrue("DoesTransitionPass works and doesn't explode!", NextTransition->DoesTransitionPass());
		}
		
		StateInstance->EvaluateTransitions();

		TestTrue("State machine should have now switched states.", Instance->IsInEndState());
		TestTrue("State machine should still be active.", Instance->IsActive());

		USMTestContext* Context = CastChecked<USMTestContext>(StateInstance->GetContext());
		TestEqual("Update should NOT have been called from manual transition evaluation.", Context->GetUpdateInt(), MaxIterations);
	}

	// Test the state calling EvaluateTransitions
	{
		LastStatePin = nullptr;
		FSMBlueprintEditorUtils::RemoveAllNodesFromGraph(StateMachineGraph, NewBP);
		
		TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin, USMStateManualTransitionTestInstance::StaticClass());

		USMGraphNode_StateNode* FirstStateNode = CastChecked<USMGraphNode_StateNode>(StateMachineGraph->GetEntryNode()->GetOutputNode());
		FirstStateNode->GetNodeTemplateAs<USMStateInstance_Base>()->SetDisableTickTransitionEvaluation(true);

		int32 EntryHits = 0; int32 UpdateHits = 0; int32 EndHits = 0;
		TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits);
	}
	
	return true;
}

/**
 * Test optional transition event nodes.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTransitionCanEvaluateTest, "SMTests.TransitionCanEvaluate", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

	bool FTransitionCanEvaluateTest::RunTest(const FString& Parameters)
{
	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, false))
	{
		return false;
	}

	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();

	// Find root state machine.
	USMGraphK2Node_StateMachineNode* RootStateMachineNode = FSMBlueprintEditorUtils::GetRootStateMachineNode(NewBP);

	// Find the state machine graph.
	USMGraph* StateMachineGraph = RootStateMachineNode->GetStateMachineGraph();

	// Total states to test.
	UEdGraphPin* LastStatePin = nullptr;

	// Build a state machine of only two states.
	{
		const int32 CurrentStates = 2;
		TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, CurrentStates, &LastStatePin);
		if (!NewAsset.SaveAsset(this))
		{
			return false;
		}
	}

	{
		USMGraphNode_TransitionEdge* TransitionEdge =
			CastChecked<USMGraphNode_TransitionEdge>(Cast<USMGraphNode_StateNode>(LastStatePin->GetOwningNode())->GetInputPin()->LinkedTo[0]->GetOwningNode());

		UK2Node_CallFunction* PreEvalNode = TestHelpers::AddEventWithLogic<USMGraphK2Node_TransitionPreEvaluateNode>(this, TransitionEdge,
			USMTestContext::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTestContext, IncreaseTransitionPreEval)));

		TestHelpers::AddEventWithLogic<USMGraphK2Node_TransitionPostEvaluateNode>(this, TransitionEdge,
			USMTestContext::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTestContext, IncreaseTransitionPostEval)));

		USMGraphK2Node_StateWriteNode_CanEvaluate* SetCanEvaluate = TestHelpers::CreateNewNode<USMGraphK2Node_StateWriteNode_CanEvaluate>(this,
			TransitionEdge->GetBoundGraph(), PreEvalNode->GetThenPin(), false);

		TestNotNull("Can Evaluate Write not should exist", SetCanEvaluate);
		if (!SetCanEvaluate)
		{
			return false;
		}

		// First run will never swith states.
		{
			FKismetEditorUtilities::CompileBlueprint(NewBP);

			// Create a context we will run the state machine for.
			USMTestContext* Context = NewObject<USMTestContext>();
			USMInstance* StateMachineInstance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);

			// Test initial values

			TestEqual("PreEvalValue", Context->TestTransitionPreEval.Count, 0);
			TestEqual("PostEvalValue", Context->TestTransitionPostEval.Count, 0);

			// Test in start state.

			StateMachineInstance->Start();
			TestTrue("State Machine should have started", StateMachineInstance->IsActive());

			TestEqual("PreEvalValue", Context->TestTransitionPreEval.Count, 0);
			TestEqual("PostEvalValue", Context->TestTransitionPostEval.Count, 0);

			// Test pre/post eval after trying to change. But eval is never run.

			TArray<TArray<FSMTransition*>> TransitionChain;
			const bool bFoundTransition = StateMachineInstance->GetRootStateMachine().GetSingleActiveState()->GetValidTransition(TransitionChain);

			TestFalse("No valid transition should exist", bFoundTransition);
			TestEqual("PreEvalValue", Context->TestTransitionPreEval.Count, 1);
			TestEqual("PostEvalValue", Context->TestTransitionPostEval.Count, 1);

			TestTrue("PostEval should have occurred after PreEval", Context->TestTransitionPreEval.TimeStamp < Context->TestTransitionPostEval.TimeStamp);

			StateMachineInstance->Shutdown();
		}

		SetCanEvaluate->GetInputPin()->DefaultValue = "true";

		// Second run should work normally.
		{
			FKismetEditorUtilities::CompileBlueprint(NewBP);

			// Create a context we will run the state machine for.
			USMTestContext* Context = NewObject<USMTestContext>();
			USMInstance* StateMachineInstance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);

			// Test initial values

			TestEqual("PreEvalValue", Context->TestTransitionPreEval.Count, 0);
			TestEqual("PostEvalValue", Context->TestTransitionPostEval.Count, 0);

			// Test in start state.

			StateMachineInstance->Start();
			TestTrue("State Machine should have started", StateMachineInstance->IsActive());

			TestEqual("PreEvalValue", Context->TestTransitionPreEval.Count, 0);
			TestEqual("PostEvalValue", Context->TestTransitionPostEval.Count, 0);

			// Test pre/post eval after trying to change. But eval is never run.

			TArray<TArray<FSMTransition*>> TransitionChain;
			const bool bFoundTransition = StateMachineInstance->GetRootStateMachine().GetSingleActiveState()->GetValidTransition(TransitionChain);
			TestTrue("Transition found", bFoundTransition);
			FSMTransition* ValidTransition = TransitionChain[0][0];

			TestNotNull("Transition should evaluate", ValidTransition);
			TestEqual("PreEvalValue", Context->TestTransitionPreEval.Count, 1);
			TestEqual("PostEvalValue", Context->TestTransitionPostEval.Count, 1);

			TestTrue("PostEval should have occurred after PreEval", Context->TestTransitionPreEval.TimeStamp < Context->TestTransitionPostEval.TimeStamp);

			StateMachineInstance->Shutdown();
		}
	}

	return NewAsset.DeleteAsset(this);
}

/**
 * Test optional transition event nodes.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTransitionEventTest, "SMTests.TransitionEvents", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

	bool FTransitionEventTest::RunTest(const FString& Parameters)
{
	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, false))
	{
		return false;
	}

	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();

	// Find root state machine.
	USMGraphK2Node_StateMachineNode* RootStateMachineNode = FSMBlueprintEditorUtils::GetRootStateMachineNode(NewBP);

	// Find the state machine graph.
	USMGraph* StateMachineGraph = RootStateMachineNode->GetStateMachineGraph();

	// Total states to test.
	UEdGraphPin* LastStatePin = nullptr;

	// Build a state machine of only two states.
	{
		const int32 CurrentStates = 2;
		TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, CurrentStates, &LastStatePin);
		if (!NewAsset.SaveAsset(this))
		{
			return false;
		}
	}

	{
		USMGraphNode_TransitionEdge* TransitionEdge =
			CastChecked<USMGraphNode_TransitionEdge>(Cast<USMGraphNode_StateNode>(LastStatePin->GetOwningNode())->GetInputPin()->LinkedTo[0]->GetOwningNode());

		TestHelpers::AddEventWithLogic<USMGraphK2Node_TransitionInitializedNode>(this, TransitionEdge,
			USMTestContext::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTestContext, IncreaseTransitionInit)));

		TestHelpers::AddEventWithLogic<USMGraphK2Node_TransitionShutdownNode>(this, TransitionEdge,
			USMTestContext::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTestContext, IncreaseTransitionShutdown)));

		TestHelpers::AddEventWithLogic<USMGraphK2Node_TransitionPreEvaluateNode>(this, TransitionEdge,
			USMTestContext::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTestContext, IncreaseTransitionPreEval)));

		TestHelpers::AddEventWithLogic<USMGraphK2Node_TransitionPostEvaluateNode>(this, TransitionEdge,
			USMTestContext::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTestContext, IncreaseTransitionPostEval)));

		TestHelpers::AddEventWithLogic<USMGraphK2Node_TransitionEnteredNode>(this, TransitionEdge,
			USMTestContext::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTestContext, IncreaseTransitionTaken)));

		FKismetEditorUtilities::CompileBlueprint(NewBP);

		// Create a context we will run the state machine for.
		USMTestContext* Context = NewObject<USMTestContext>();
		USMInstance* StateMachineInstance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);

		// Test initial values

		TestEqual("InitValue", Context->TestTransitionInit.Count, 0);
		TestEqual("ShutdownValue", Context->TestTransitionShutdown.Count, 0);
		TestEqual("PreEvalValue", Context->TestTransitionPreEval.Count, 0);
		TestEqual("PostEvalValue", Context->TestTransitionPostEval.Count, 0);
		TestEqual("TransitionEntered", Context->TestTransitionEntered.Count, 0);

		// Test in start state.

		StateMachineInstance->Start();
		TestTrue("State Machine should have started", StateMachineInstance->IsActive());

		TestEqual("InitValue", Context->TestTransitionInit.Count, 1);
		TestEqual("ShutdownValue", Context->TestTransitionShutdown.Count, 0);
		TestEqual("PreEvalValue", Context->TestTransitionPreEval.Count, 0);
		TestEqual("PostEvalValue", Context->TestTransitionPostEval.Count, 0);
		TestEqual("TransitionEntered", Context->TestTransitionEntered.Count, 0);

		// Test pre/post eval
		TArray<TArray<FSMTransition*>> TransitionChain;
		const bool bFoundTransition = StateMachineInstance->GetRootStateMachine().GetSingleActiveState()->GetValidTransition(TransitionChain);
		TestTrue("Transition found", bFoundTransition);
		FSMTransition* ValidTransition = TransitionChain[0][0];

		TestEqual("InitValue", Context->TestTransitionInit.Count, 1);
		TestEqual("ShutdownValue", Context->TestTransitionShutdown.Count, 0);
		TestEqual("PreEvalValue", Context->TestTransitionPreEval.Count, 1);
		TestEqual("PostEvalValue", Context->TestTransitionPostEval.Count, 1);
		TestEqual("TransitionEntered", Context->TestTransitionEntered.Count, 0);

		TestTrue("PostEval should have occurred after PreEval", Context->TestTransitionPreEval.TimeStamp < Context->TestTransitionPostEval.TimeStamp);

		// Test after taking the transition.

		StateMachineInstance->GetRootStateMachine().ProcessTransition(ValidTransition, ValidTransition->GetFromState(), ValidTransition->GetToState(), nullptr, 1.f);

		TestEqual("InitValue", Context->TestTransitionInit.Count, 1);
		TestEqual("ShutdownValue", Context->TestTransitionShutdown.Count, 1);
		TestEqual("PreEvalValue", Context->TestTransitionPreEval.Count, 1);
		TestEqual("PostEvalValue", Context->TestTransitionPostEval.Count, 1);
		TestEqual("TransitionEntered", Context->TestTransitionEntered.Count, 1);

		TestTrue("TransitionEntered should have occurred after Shutdown", Context->TestTransitionShutdown.TimeStamp < Context->TestTransitionEntered.TimeStamp);

		// Should shut down the state machine now.
		StateMachineInstance->Update(1.f);

		TestTrue("State Machine should be in end state", StateMachineInstance->IsInEndState());

		TestEqual("InitValue", Context->TestTransitionInit.Count, 1);
		TestEqual("ShutdownValue", Context->TestTransitionShutdown.Count, 1);
		TestEqual("PreEvalValue", Context->TestTransitionPreEval.Count, 1);
		TestEqual("PostEvalValue", Context->TestTransitionPostEval.Count, 1);
		TestEqual("TransitionEntered", Context->TestTransitionEntered.Count, 1);

		StateMachineInstance->Shutdown();
		TestFalse("State Machine should have stopped", StateMachineInstance->IsActive());
	}

	return NewAsset.DeleteAsset(this);
}

/**
 * Test automatically binding to a multi-cast delegate on the context.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTransitionEventAutoBindContextTest, "SMTests.TransitionEventsAutoBindContext", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

bool FTransitionEventAutoBindContextTest::RunTest(const FString& Parameters)
{
	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, false))
	{
		return false;
	}

	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();

	// Find root state machine.
	USMGraphK2Node_StateMachineNode* RootStateMachineNode = FSMBlueprintEditorUtils::GetRootStateMachineNode(NewBP);

	// Find the state machine graph.
	USMGraph* StateMachineGraph = RootStateMachineNode->GetStateMachineGraph();

	// Total states to test.
	UEdGraphPin* LastStatePin = nullptr;
	
	// Build a state machine of only two states.
	{
		const int32 CurrentStates = 2;
		TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, CurrentStates, &LastStatePin);
	}

	USMGraphNode_TransitionEdge* TransitionEdge =
		CastChecked<USMGraphNode_TransitionEdge>(Cast<USMGraphNode_StateNode>(LastStatePin->GetOwningNode())->GetInputPin()->LinkedTo[0]->GetOwningNode());
	TransitionEdge->GetNodeTemplateAs<USMTransitionInstance>()->SetCanEvaluate(false);
	
	// Validate transition can't evaluate.
	{
		int32 a, b, c;
		USMInstance* Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, a, b, c, 5, false, false);
		TestFalse("State machine shouldn't have switched states due to transition evaluation being false.", Instance->IsInEndState());
	}
	
	// Setup a transition event binding.
	{
		TransitionEdge->DelegateOwnerInstance = ESMDelegateOwner::SMDO_Context;
		TransitionEdge->DelegateOwnerClass = USMTestContext::StaticClass();
		TransitionEdge->DelegatePropertyName = GET_MEMBER_NAME_CHECKED(USMTestContext, TransitionEvent);

		TransitionEdge->InitTransitionDelegate();

		FKismetEditorUtilities::CompileBlueprint(NewBP);

		// Create a context we will run the state machine for.
		USMTestContext* Context = NewObject<USMTestContext>();
		USMInstance* Instance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);

		Instance->Start();
		Instance->Update(0.f);
		TestEqual("State machine still in initial state", Instance->GetRootStateMachine().GetSingleActiveState(), Instance->GetRootStateMachine().GetSingleInitialState());
		TestFalse("State machine shouldn't have switched states due to transition evaluation being false.", Instance->IsInEndState());
		
		Context->TransitionEvent.Broadcast();
		TestNotEqual("State machine switched states", Instance->GetRootStateMachine().GetSingleActiveState(), Instance->GetRootStateMachine().GetSingleInitialState());
		TestTrue("State machine now in end state.", Instance->IsInEndState());

		Instance->Shutdown();
		TestFalse("State Machine should have stopped", Instance->IsActive());
	}

	// Test disabling autobound event evaluation.
	{
		TransitionEdge->GetNodeTemplateAs<USMTransitionInstance>()->SetCanEvaluateFromEvent(false);
		
		FKismetEditorUtilities::CompileBlueprint(NewBP);

		// Create a context we will run the state machine for.
		USMTestContext* Context = NewObject<USMTestContext>();
		USMInstance* Instance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);

		Instance->Start();
		Instance->Update(0.f);
		TestEqual("State machine still in initial state", Instance->GetRootStateMachine().GetSingleActiveState(), Instance->GetRootStateMachine().GetSingleInitialState());
		TestFalse("State machine shouldn't have switched states due to transition evaluation being false.", Instance->IsInEndState());

		// Shouldn't cause evaluation.
		Context->TransitionEvent.Broadcast();
		
		TestEqual("State machine still in initial state", Instance->GetRootStateMachine().GetSingleActiveState(), Instance->GetRootStateMachine().GetSingleInitialState());
		TestFalse("State machine shouldn't have switched states due to transition evaluation being false.", Instance->IsInEndState());
	}

	// Test disabling tick evaluation
	{
		TransitionEdge->GetNodeTemplateAs<USMTransitionInstance>()->SetCanEvaluateFromEvent(true);
		
		USMGraphNode_StateNodeBase* FirstState = CastChecked<USMGraphNode_StateNodeBase>(StateMachineGraph->GetEntryNode()->GetOutputNode());
		FirstState->GetNodeTemplateAs<USMStateInstance_Base>()->SetDisableTickTransitionEvaluation(true);
		FKismetEditorUtilities::CompileBlueprint(NewBP);

		// Create a context we will run the state machine for.
		USMTestContext* Context = NewObject<USMTestContext>();
		USMInstance* Instance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);

		Instance->Start();
		Instance->Update(0.f);
		TestEqual("State machine still in initial state", Instance->GetRootStateMachine().GetSingleActiveState(), Instance->GetRootStateMachine().GetSingleInitialState());
		TestFalse("State machine shouldn't have switched states due to transition evaluation being false.", Instance->IsInEndState());

		// Should cause evaluation.
		Context->TransitionEvent.Broadcast();

		TestNotEqual("State machine switched states", Instance->GetRootStateMachine().GetSingleActiveState(), Instance->GetRootStateMachine().GetSingleInitialState());
		TestTrue("State machine now in end state.", Instance->IsInEndState());

		Instance->Shutdown();
		TestFalse("State Machine should have stopped", Instance->IsActive());
	}

	return true;
}

/**
 * Test automatically binding to a multi-cast delegate for the previous state.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTransitionEventAutoBindPreviousStateTest, "SMTests.TransitionEventsAutoBindPreviousState", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

bool FTransitionEventAutoBindPreviousStateTest::RunTest(const FString& Parameters)
{
	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, false))
	{
		return false;
	}

	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();

	// Find root state machine.
	USMGraphK2Node_StateMachineNode* RootStateMachineNode = FSMBlueprintEditorUtils::GetRootStateMachineNode(NewBP);

	// Find the state machine graph.
	USMGraph* StateMachineGraph = RootStateMachineNode->GetStateMachineGraph();

	// Total states to test.
	UEdGraphPin* LastStatePin = nullptr;
	
	// Build a state machine of only two states.
	{
		const int32 CurrentStates = 2;
		TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, CurrentStates, &LastStatePin);
	}

	USMGraphNode_TransitionEdge* TransitionEdge =
		CastChecked<USMGraphNode_TransitionEdge>(Cast<USMGraphNode_StateNode>(LastStatePin->GetOwningNode())->GetInputPin()->LinkedTo[0]->GetOwningNode());
	TransitionEdge->GetNodeTemplateAs<USMTransitionInstance>()->SetCanEvaluate(false);

	TestHelpers::SetNodeClass(this, TransitionEdge->GetFromState(), USMStateTestInstance::StaticClass());
	
	// Validate transition can't evaluate.
	{
		int32 a, b, c;
		USMInstance* Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, a, b, c, 5, false, false);
		TestFalse("State machine shouldn't have switched states due to transition evaluation being false.", Instance->IsInEndState());
	}
	
	// Setup a transition event binding.
	{
		TransitionEdge->DelegateOwnerInstance = ESMDelegateOwner::SMDO_PreviousState;
		TransitionEdge->DelegatePropertyName = GET_MEMBER_NAME_CHECKED(USMStateTestInstance, StateEvent);

		TransitionEdge->InitTransitionDelegate();

		FKismetEditorUtilities::CompileBlueprint(NewBP);

		// Create a context we will run the state machine for.
		USMTestContext* Context = NewObject<USMTestContext>();
		USMInstance* Instance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);

		Instance->Start();
		Instance->Update(0.f);
		TestEqual("State machine still in initial state", Instance->GetRootStateMachine().GetSingleActiveState(), Instance->GetRootStateMachine().GetSingleInitialState());
		TestFalse("State machine shouldn't have switched states due to transition evaluation being false.", Instance->IsInEndState());
		
		CastChecked<USMStateTestInstance>(Instance->GetSingleActiveState()->GetNodeInstance())->StateEvent.Broadcast();
		TestNotEqual("State machine switched states", Instance->GetRootStateMachine().GetSingleActiveState(), Instance->GetRootStateMachine().GetSingleInitialState());
		TestTrue("State machine now in end state.", Instance->IsInEndState());

		Instance->Shutdown();
		TestFalse("State Machine should have stopped", Instance->IsActive());
	}

	// Test disabling autobound event evaluation.
	{
		TransitionEdge->GetNodeTemplateAs<USMTransitionInstance>()->SetCanEvaluateFromEvent(false);
		
		FKismetEditorUtilities::CompileBlueprint(NewBP);

		// Create a context we will run the state machine for.
		USMTestContext* Context = NewObject<USMTestContext>();
		USMInstance* Instance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);

		Instance->Start();
		Instance->Update(0.f);
		TestEqual("State machine still in initial state", Instance->GetRootStateMachine().GetSingleActiveState(), Instance->GetRootStateMachine().GetSingleInitialState());
		TestFalse("State machine shouldn't have switched states due to transition evaluation being false.", Instance->IsInEndState());

		// Shouldn't cause evaluation.
		CastChecked<USMStateTestInstance>(Instance->GetSingleActiveState()->GetNodeInstance())->StateEvent.Broadcast();
		
		TestEqual("State machine still in initial state", Instance->GetRootStateMachine().GetSingleActiveState(), Instance->GetRootStateMachine().GetSingleInitialState());
		TestFalse("State machine shouldn't have switched states due to transition evaluation being false.", Instance->IsInEndState());
	}

	// Test disabling tick evaluation
	{
		TransitionEdge->GetNodeTemplateAs<USMTransitionInstance>()->SetCanEvaluateFromEvent(true);
		
		USMGraphNode_StateNodeBase* FirstState = CastChecked<USMGraphNode_StateNodeBase>(StateMachineGraph->GetEntryNode()->GetOutputNode());
		FirstState->GetNodeTemplateAs<USMStateInstance_Base>()->SetDisableTickTransitionEvaluation(true);
		FKismetEditorUtilities::CompileBlueprint(NewBP);

		// Create a context we will run the state machine for.
		USMTestContext* Context = NewObject<USMTestContext>();
		USMInstance* Instance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);

		Instance->Start();
		Instance->Update(0.f);
		TestEqual("State machine still in initial state", Instance->GetRootStateMachine().GetSingleActiveState(), Instance->GetRootStateMachine().GetSingleInitialState());
		TestFalse("State machine shouldn't have switched states due to transition evaluation being false.", Instance->IsInEndState());

		// Should cause evaluation.
		CastChecked<USMStateTestInstance>(Instance->GetSingleActiveState()->GetNodeInstance())->StateEvent.Broadcast();

		TestNotEqual("State machine switched states", Instance->GetRootStateMachine().GetSingleActiveState(), Instance->GetRootStateMachine().GetSingleInitialState());
		TestTrue("State machine now in end state.", Instance->IsInEndState());

		Instance->Shutdown();
		TestFalse("State Machine should have stopped", Instance->IsActive());
	}

	return true;
}

/**
 * Check transition optimization type is correct.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTransitionOptimizationTest, "SMTests.TransitionOptimization", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

	bool FTransitionOptimizationTest::RunTest(const FString& Parameters)
{
	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, false))
	{
		return false;
	}

	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();

	// Find root state machine.
	USMGraphK2Node_StateMachineNode* RootStateMachineNode = FSMBlueprintEditorUtils::GetRootStateMachineNode(NewBP);

	// Find the state machine graph.
	USMGraph* StateMachineGraph = RootStateMachineNode->GetStateMachineGraph();

	// Total states to test.
	const int32 TotalStates = 2;
	const int32 MaxIterations = TotalStates;
	
	UEdGraphPin* LastStatePin = nullptr;
	TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin);

	USMGraphNode_TransitionEdge* TransitionEdge =
		CastChecked<USMGraphNode_TransitionEdge>(Cast<USMGraphNode_StateNode>(LastStatePin->GetOwningNode())->GetInputPin()->LinkedTo[0]->GetOwningNode());

	USMTransitionGraph* TransitionGraph = TransitionEdge->GetTransitionGraph();
	ESMConditionalEvaluationType EvaluationType;

	int32 A, B, C;
	int32 IterationsRan;
	// Node instance evaluation.
	{
		TestHelpers::SetNodeClass(this, TransitionEdge, USMTransitionTestInstance::StaticClass());
		EvaluationType = TransitionGraph->GetConditionalEvaluationType();
		TestEqual("Evaluation type is for the node instance", EvaluationType, ESMConditionalEvaluationType::SM_NodeInstance);
		USMInstance* Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, A, B, C, MaxIterations, false, false, true, &IterationsRan);
		TestEqual("Max iterations ran", IterationsRan, MaxIterations);
		TestFalse("State machine didn't finish", Instance->IsInEndState());
		
		USMTransitionTestInstance* TransitionInstance = CastChecked<USMTransitionTestInstance>(CastChecked<USMStateInstance_Base>(Instance->GetSingleActiveState()->GetNodeInstance())->GetTransitionByIndex(0));
		TransitionInstance->bCanTransition = true;

		Instance->Update();
		TestTrue("State machine finished", Instance->IsInEndState());
		
		TestHelpers::SetNodeClass(this, TransitionEdge, nullptr);
	}
	
	// Always true
	{
		TransitionGraph->ResultNode->BreakAllNodeLinks();
		TransitionGraph->GetSchema()->TrySetDefaultValue(*TransitionGraph->ResultNode->GetTransitionEvaluationPin(), "True");
		EvaluationType = TransitionGraph->GetConditionalEvaluationType();
		TestEqual("Evaluation type is always true", EvaluationType, ESMConditionalEvaluationType::SM_AlwaysTrue);
		TestHelpers::RunStateMachineToCompletion(this, NewBP, A, B, C, MaxIterations, true, true, true, &IterationsRan);
		TestEqual("Exected iterations ran", IterationsRan, 1);
	}

	// Always false
	{
		TransitionGraph->GetSchema()->TrySetDefaultValue(*TransitionGraph->ResultNode->GetTransitionEvaluationPin(), "False");
		EvaluationType = TransitionGraph->GetConditionalEvaluationType();
		TestEqual("Evaluation type is always false", EvaluationType, ESMConditionalEvaluationType::SM_AlwaysFalse);

		TestHelpers::RunStateMachineToCompletion(this, NewBP, A, B, C, MaxIterations, true, true, true, &IterationsRan);
		TestEqual("First state is considered the end state since the transition is always false", IterationsRan, 0);
	}

	// Graph evaluation false
	{
		FName VarName = "NewVar";
		FEdGraphPinType VarType;
		VarType.PinCategory = UEdGraphSchema_K2::PC_Boolean;

		// Create new variable.
		FBlueprintEditorUtils::AddMemberVariable(NewBP, VarName, VarType, "False");

		FProperty* NewProperty = FSMBlueprintEditorUtils::GetPropertyForVariable(NewBP, VarName);

		// Place variable getter and wire to result node.
		FSMBlueprintEditorUtils::PlacePropertyOnGraph(TransitionGraph, NewProperty, TransitionGraph->ResultNode->GetTransitionEvaluationPin(), nullptr);
		
		EvaluationType = TransitionGraph->GetConditionalEvaluationType();
		TestEqual("Evaluation type is graph evaluation", EvaluationType, ESMConditionalEvaluationType::SM_Graph);

		USMInstance* Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, A, B, C, MaxIterations, false, false);
		TestFalse("Instance not finished", Instance->IsInEndState());

		FBlueprintEditorUtils::RemoveMemberVariable(NewBP, VarName);
	}

	// Graph evaluation true
	{
		FName VarName = "NewVar";
		FEdGraphPinType VarType;
		VarType.PinCategory = UEdGraphSchema_K2::PC_Boolean;

		// Create new variable.
		FBlueprintEditorUtils::AddMemberVariable(NewBP, VarName, VarType, "True");

		FProperty* NewProperty = FSMBlueprintEditorUtils::GetPropertyForVariable(NewBP, VarName);

		// Place variable getter and wire to result node.
		FSMBlueprintEditorUtils::PlacePropertyOnGraph(TransitionGraph, NewProperty, TransitionGraph->ResultNode->GetTransitionEvaluationPin(), nullptr);

		EvaluationType = TransitionGraph->GetConditionalEvaluationType();
		TestEqual("Evaluation type is accurate", EvaluationType, ESMConditionalEvaluationType::SM_Graph);

		TestHelpers::RunStateMachineToCompletion(this, NewBP, A, B, C, MaxIterations);
	}
	
	return true;
}

/**
 * Test project settings that impact transitions.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTransitionSettingsTest, "SMTests.TransitionSettingsTests", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

bool FTransitionSettingsTest::RunTest(const FString& Parameters)
{
	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, false))
	{
		return false;
	}

	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();

	// Find root state machine.
	USMGraphK2Node_StateMachineNode* RootStateMachineNode = FSMBlueprintEditorUtils::GetRootStateMachineNode(NewBP);

	// Find the state machine graph.
	USMGraph* StateMachineGraph = RootStateMachineNode->GetStateMachineGraph();

	// Total states to test.
	const int32 TotalStates = 2;

	UEdGraphPin* LastStatePin = nullptr;
	const bool bForceTransitionsToTrue = false;

	const bool bUserNewTransitionValue = FSMBlueprintEditorUtils::GetProjectEditorSettings()->bDefaultNewTransitionsToTrue;
	
	// Test default value as false
	{
		FSMBlueprintEditorUtils::GetMutableProjectEditorSettings()->bDefaultNewTransitionsToTrue = false;
		
		TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin, nullptr, nullptr, bForceTransitionsToTrue);

		USMGraphNode_StateNode* FirstStateNode = CastChecked<USMGraphNode_StateNode>(StateMachineGraph->GetEntryNode()->GetOutputNode());

		const FString DefaultValue = FirstStateNode->GetNextTransition()->GetTransitionGraph()->ResultNode->GetTransitionEvaluationPin()->GetDefaultAsString();
		TestEqual("Default is false", DefaultValue, "");
	}

	// Test default value as true
	{
		FSMBlueprintEditorUtils::GetMutableProjectEditorSettings()->bDefaultNewTransitionsToTrue = true;

		LastStatePin = nullptr;
		FSMBlueprintEditorUtils::RemoveAllNodesFromGraph(StateMachineGraph);

		TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin, nullptr, nullptr, bForceTransitionsToTrue);

		USMGraphNode_StateNode* FirstStateNode = CastChecked<USMGraphNode_StateNode>(StateMachineGraph->GetEntryNode()->GetOutputNode());

		const FString DefaultValue = FirstStateNode->GetNextTransition()->GetTransitionGraph()->ResultNode->GetTransitionEvaluationPin()->GetDefaultAsString();
		TestEqual("Default is false", DefaultValue, "True");
	}

	FSMBlueprintEditorUtils::GetMutableProjectEditorSettings()->bDefaultNewTransitionsToTrue = bUserNewTransitionValue;
	
	return true;
}

#endif

#endif //WITH_DEV_AUTOMATION_TESTS