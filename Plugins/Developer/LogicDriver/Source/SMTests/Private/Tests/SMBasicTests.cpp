// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "Blueprints/SMBlueprint.h"
#include "SMTestHelpers.h"
#include "Blueprints/SMBlueprintGeneratedClass.h"
#include "Blueprints/SMBlueprintFactory.h"
#include "Utilities/SMBlueprintEditorUtils.h"
#include "SMTestContext.h"
#include "Utilities/SMVersionUtils.h"
#include "EdGraph/EdGraph.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Graph/SMGraphK2.h"
#include "Graph/SMGraph.h"
#include "Graph/SMStateGraph.h"
#include "Graph/Schema/SMGraphK2Schema.h"
#include "Graph/Nodes/RootNodes/SMGraphK2Node_StateMachineSelectNode.h"
#include "Graph/Nodes/SMGraphK2Node_StateMachineNode.h"
#include "Graph/Nodes/SMGraphNode_StateNode.h"
#include "Graph/Nodes/SMGraphNode_TransitionEdge.h"
#include "Graph/Nodes/SMGraphNode_StateMachineStateNode.h"
#include "Graph/Nodes/SMGraphNode_ConduitNode.h"


#if WITH_DEV_AUTOMATION_TESTS

#if PLATFORM_DESKTOP

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FCreateAssetTest, "SMTests.CreateAsset", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

	bool FCreateAssetTest::RunTest(const FString& Parameters)
{
	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, true))
	{
		return false;
	}

	// Verify correct type created.
	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();
	TestNotNull("New asset object should be USMBlueprint", NewBP);

	{
		USMBlueprintGeneratedClass* GeneratedClass = Cast<USMBlueprintGeneratedClass>(NewBP->GetGeneratedClass());
		TestNotNull("Generated Class should match expected class", GeneratedClass);

		// Verify new version set correctly.
		TestTrue("Instance version is correctly created", FSMVersionUtils::IsAssetUpToDate(NewBP));
	}

	bool bReverify = false;

Verify:

	// Verify event graph.
	{
		TObjectPtr<UEdGraph>* FoundGraph = NewBP->UbergraphPages.FindByPredicate([&](UEdGraph* Graph)
		{
			return Graph->GetFName() == USMGraphK2Schema::GN_EventGraph;
		});
		TestNotNull("Event Graph should exist", FoundGraph);
	}

	// Verify state machine graph.
	{
		USMGraphK2* TopLevelGraph = FSMBlueprintEditorUtils::GetTopLevelStateMachineGraph(NewBP);
		TestNotNull("State Machine Graph should exist", TopLevelGraph);

		TArray<USMGraphK2Node_StateMachineSelectNode*> SelectNodes;
		TopLevelGraph->GetNodesOfClass<USMGraphK2Node_StateMachineSelectNode>(SelectNodes);

		TestTrue("One state machine select node should exist", SelectNodes.Num() == 1);

		USMGraphK2Node_StateMachineSelectNode* SelectNode = SelectNodes[0];
		TestTrue("Select node should have a single default wire", SelectNode->GetInputPin()->LinkedTo.Num() == 1);
		TestTrue("SelectNode should be wired to a state machine definition node", SelectNode->GetInputPin()->LinkedTo[0]->GetOwningNode()->IsA<USMGraphK2Node_StateMachineNode>());
	}

	// Verify reloading asset works properly.
	if (!bReverify)
	{
		if (!NewAsset.LoadAsset(this))
		{
			return false;
		}

		NewBP = NewAsset.GetObjectAs<USMBlueprint>();
		TestNotNull("New asset object should be USMBlueprint", NewBP);

		USMBlueprintGeneratedClass* GeneratedClass = Cast<USMBlueprintGeneratedClass>(NewBP->GetGeneratedClass());
		TestNotNull("Generated Class should match expected class", GeneratedClass);

		//////////////////////////////////////////////////////////////////////////
		// ** If changing instance version number change this test. **
		//////////////////////////////////////////////////////////////////////////
		// Verify version matches.
		TestTrue("Instance version is correctly created", FSMVersionUtils::IsAssetUpToDate(NewBP));

		bReverify = true;
		goto Verify;
	}

	return NewAsset.DeleteAsset(this);
}

/**
 * Test deleting by both node and graph.
 * Deletion has some circular logic involved so we want to make sure we don't get stuck in a loop and that everything cleans up properly.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FDeleteDeleteNodeTest, "SMTests.DeleteNode", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

	bool FDeleteDeleteNodeTest::RunTest(const FString& Parameters)
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
	int32 TotalStates = 0;
	UEdGraphPin* LastStatePin = nullptr;

	// Build a state machine of three states.
	{
		const int32 CurrentStates = 3;
		TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, CurrentStates, &LastStatePin);
		if (!NewAsset.SaveAsset(this))
		{
			return false;
		}
		TotalStates += CurrentStates;
	}

	// Verify works before deleting.
	{
		const int32 ExpectedValue = TotalStates;
		int32 EntryHits = 0; int32 UpdateHits = 0; int32 EndHits = 0;
		TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits);
		TestEqual("State Machine generated value", EntryHits, ExpectedValue);
		TestEqual("State Machine generated value", UpdateHits, 0);
		TestEqual("State Machine generated value", EndHits, ExpectedValue);
	}


	// Test deleting the last node by deleting the node.
	{
		USMGraphNode_StateNode* LastStateNode = CastChecked<USMGraphNode_StateNode>(LastStatePin->GetOwningNode());
		USMStateGraph* StateGraph = CastChecked<USMStateGraph>(LastStateNode->GetBoundGraph());
		USMGraph* OwningGraph = LastStateNode->GetStateMachineGraph();

		// Set last state pin to the previous state.
		LastStatePin = CastChecked<USMGraphNode_TransitionEdge>(LastStateNode->GetInputPin()->LinkedTo[0]->GetOwningNode())->GetInputPin()->LinkedTo[0];

		TestTrue("State Machine Graph should own State Node", OwningGraph->Nodes.Contains(LastStateNode));
		TestTrue("State Machine Graph should have a State Graph subgraph", OwningGraph->SubGraphs.Contains(StateGraph));

		FSMBlueprintEditorUtils::RemoveNode(NewBP, LastStateNode, true);

		TestTrue("State Machine Graph should not own State Node", !OwningGraph->Nodes.Contains(LastStateNode));
		TestTrue("State Machine Graph should not have a State Graph subgraph", !OwningGraph->SubGraphs.Contains(StateGraph));

		TotalStates--;

		// Verify runs without last state.
		{
			const int32 ExpectedValue = TotalStates;
			int32 EntryHits = 0; int32 UpdateHits = 0; int32 EndHits = 0;
			TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits);
			TestEqual("State Machine generated value", EntryHits, ExpectedValue);
			TestEqual("State Machine generated value", UpdateHits, 0);
			TestEqual("State Machine generated value", EndHits, ExpectedValue);
		}
	}

	// Test deleting the last node by deleting the graph.
	{
		USMGraphNode_StateNode* LastStateNode = CastChecked<USMGraphNode_StateNode>(LastStatePin->GetOwningNode());
		USMStateGraph* StateGraph = CastChecked<USMStateGraph>(LastStateNode->GetBoundGraph());
		USMGraph* OwningGraph = LastStateNode->GetStateMachineGraph();

		TestTrue("State Machine Graph should own State Node", OwningGraph->Nodes.Contains(LastStateNode));
		TestTrue("State Machine Graph should have a State Graph subgraph", OwningGraph->SubGraphs.Contains(StateGraph));

		FSMBlueprintEditorUtils::RemoveGraph(NewBP, StateGraph);

		TestTrue("State Machine Graph should not own State Node", !OwningGraph->Nodes.Contains(LastStateNode));
		TestTrue("State Machine Graph should not have a State Graph subgraph", !OwningGraph->SubGraphs.Contains(StateGraph));

		TotalStates--;

		// Verify runs without last state.
		{
			const int32 ExpectedValue = TotalStates;
			int32 EntryHits = 0; int32 UpdateHits = 0; int32 EndHits = 0;
			TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits);
			TestEqual("State Machine generated value", EntryHits, ExpectedValue);
			TestEqual("State Machine generated value", UpdateHits, 0);
			TestEqual("State Machine generated value", EndHits, ExpectedValue);
		}
	}

	return NewAsset.DeleteAsset(this);
}

/**
 * Assemble and run a hierarchical state machine.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FAssembleStateMachineTest, "SMTests.AssembleStateMachine", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

	bool FAssembleStateMachineTest::RunTest(const FString& Parameters)
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
	int32 TotalStates = 1;

	UEdGraphPin* LastStatePin = nullptr;

	// Build single state - state machine.
	TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, 1, &LastStatePin);
	if (!NewAsset.SaveAsset(this))
	{
		return false;
	}
	TestHelpers::TestLinearStateMachine(this, NewBP, TotalStates);

	// Add on a second state.
	TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, 1, &LastStatePin, USMStateTestInstance::StaticClass(), USMTransitionTestInstance::StaticClass());
	if (!NewAsset.SaveAsset(this))
	{
		return false;
	}
	TotalStates++;
	TestHelpers::TestLinearStateMachine(this, NewBP, TotalStates);

	// Build a nested state machine.
	UEdGraphPin* EntryPointForNestedStateMachine = LastStatePin;
	USMGraphNode_StateMachineStateNode* NestedStateMachineNode = TestHelpers::CreateNewNode<USMGraphNode_StateMachineStateNode>(this, StateMachineGraph, EntryPointForNestedStateMachine);

	UEdGraphPin* LastNestedPin = nullptr;
	{
		TestHelpers::BuildLinearStateMachine(this, Cast<USMGraph>(NestedStateMachineNode->GetBoundGraph()), 1, &LastNestedPin);
		LastStatePin = NestedStateMachineNode->GetOutputPin();
	}

	// Add logic to the state machine transition.
	USMGraphNode_TransitionEdge* TransitionToNestedStateMachine = CastChecked<USMGraphNode_TransitionEdge>(NestedStateMachineNode->GetInputPin()->LinkedTo[0]->GetOwningNode());
	TestHelpers::AddTransitionResultLogic(this, TransitionToNestedStateMachine);

	TotalStates += 1; // Nested machine is a single state.
	TestHelpers::TestLinearStateMachine(this, NewBP, TotalStates);

	// Add more top level.
	TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, 10, &LastStatePin);
	if (!NewAsset.SaveAsset(this))
	{
		return false;
	}
	TotalStates += 10;

	// This will run the nested machine only up to the first state.
	TestHelpers::TestLinearStateMachine(this, NewBP, TotalStates);

	int32 ExpectedEntryValue = TotalStates;
	// Run the same machine until an end state is reached.
	{
		int32 EntryHits = 0; int32 UpdateHits = 0; int32 EndHits = 0;
		TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits);

		TestEqual("State Machine generated value", EntryHits, ExpectedEntryValue);
		TestEqual("State Machine generated value", UpdateHits, 0);
		TestEqual("State Machine generated value", EndHits, ExpectedEntryValue);
	}

	// Add to the nested state machine
	{
		TestHelpers::BuildLinearStateMachine(this, Cast<USMGraph>(NestedStateMachineNode->GetBoundGraph()), 10, &LastNestedPin);
		TotalStates += 10;
	}

	// Run the same machine until an end state is reached. The result should be the same as the top level machine won't wait for the nested machine.
	{
		int32 EntryHits = 0; int32 UpdateHits = 0; int32 EndHits = 0;
		TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits);

		TestEqual("State Machine generated value", EntryHits, ExpectedEntryValue);
		TestEqual("State Machine generated value", UpdateHits, 0);
		TestEqual("State Machine generated value", EndHits, ExpectedEntryValue);
	}

	// Run the same machine until an end state is reached. This time we force states to update when ending.
	{
		TArray<USMGraphNode_StateNode*> TopLevelStates;
		FSMBlueprintEditorUtils::GetAllNodesOfClassNested<USMGraphNode_StateNode>(StateMachineGraph, TopLevelStates);
		check(TopLevelStates.Num() > 0);

		for (USMGraphNode_StateNode* State : TopLevelStates)
		{
			State->GetNodeTemplateAs<USMStateInstance_Base>()->SetAlwaysUpdate(true);
		}

		int32 EntryHits = 0; int32 UpdateHits = 0; int32 EndHits = 0;
		TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits);

		TestEqual("State Machine generated value", EntryHits, ExpectedEntryValue);
		// Last update entry is called after stopping meaning UpdateTime is 0, which we used to test updates.
		TestEqual("State Machine generated value", UpdateHits, ExpectedEntryValue - 1);
		TestEqual("State Machine generated value", EndHits, ExpectedEntryValue);
	}

	return NewAsset.DeleteAsset(this);
}

/**
 * Test a single tick vs double tick to start state and evaluate transitions.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStateNodeSingleTickTest, "SMTests.SingleTick", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

	bool FStateNodeSingleTickTest::RunTest(const FString& Parameters)
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
	int32 TotalStates = 2;

	UEdGraphPin* LastStatePin = nullptr;

	TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin);
	if (!NewAsset.SaveAsset(this))
	{
		return false;
	}
	
	TestHelpers::TestLinearStateMachine(this, NewBP, TotalStates);

	int32 ExpectedEntryValue = TotalStates;
	// Run with normal tick approach.
	{
		int32 EntryHits = 0; int32 UpdateHits = 0; int32 EndHits = 0;
		USMInstance* TestedStateMachine = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, 0, false, false);

		TestFalse("State machine not in last state", TestedStateMachine->IsInEndState());
		
		TestNotEqual("State Machine generated value", EntryHits, ExpectedEntryValue);
		TestNotEqual("State Machine generated value", EndHits, ExpectedEntryValue);
	}
	{
		TArray<USMGraphNode_StateNodeBase*> StateNodes;
		FSMBlueprintEditorUtils::GetAllNodesOfClassNested<USMGraphNode_StateNodeBase>(StateMachineGraph, StateNodes);
		StateNodes[0]->GetNodeTemplateAs<USMStateInstance_Base>()->SetEvalTransitionsOnStart(true);
		
		int32 EntryHits = 0; int32 UpdateHits = 0; int32 EndHits = 0;
		USMInstance* TestedStateMachine = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, 0, true, true);

		TestTrue("State machine in last state", TestedStateMachine->IsInEndState());

		TestEqual("State Machine generated value", EntryHits, ExpectedEntryValue);
		TestEqual("State Machine generated value", EndHits, ExpectedEntryValue);

		// Test custom transition values.
		USMGraphNode_TransitionEdge* Transition = StateNodes[0]->GetNextTransition(0);
		Transition->GetNodeTemplateAs<USMTransitionInstance>()->SetCanEvalWithStartState(false);
		TestedStateMachine = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, 0, false, false);

		TestFalse("State machine in last state", TestedStateMachine->IsInEndState());

		TestNotEqual("State Machine generated value", EntryHits, ExpectedEntryValue);
		TestNotEqual("State Machine generated value", EndHits, ExpectedEntryValue);
	}
	// Test larger on same tick
	{
		FSMBlueprintEditorUtils::RemoveAllNodesFromGraph(StateMachineGraph);
		ExpectedEntryValue = TotalStates = 10;
		
		LastStatePin = nullptr;
		TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin);

		TArray<USMGraphNode_StateNodeBase*> StateNodes;
		FSMBlueprintEditorUtils::GetAllNodesOfClassNested<USMGraphNode_StateNodeBase>(StateMachineGraph, StateNodes);

		for (USMGraphNode_StateNodeBase* Node : StateNodes)
		{
			Node->GetNodeTemplateAs<USMStateInstance_Base>()->SetEvalTransitionsOnStart(true);
		}
		
		int32 EntryHits = 0; int32 UpdateHits = 0; int32 EndHits = 0;
		USMInstance* TestedStateMachine = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, 0, true, true);

		TestTrue("State machine in last state", TestedStateMachine->IsInEndState());

		TestEqual("State Machine generated value", EntryHits, ExpectedEntryValue);
		TestEqual("State Machine generated value", EndHits, ExpectedEntryValue);
	}
	
	return NewAsset.DeleteAsset(this);
}


/**
 * Test state history functions.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStateHistoryTest, "SMTests.StateHistory", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

	bool FStateHistoryTest::RunTest(const FString& Parameters)
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
	int32 TotalStates = 3;

	UEdGraphPin* LastStatePin = nullptr;

	TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin);
	FKismetEditorUtilities::CompileBlueprint(NewBP);
	
	USMInstance* TestInstance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, NewObject<USMTestContext>());

	TestEqual("No history", TestInstance->GetStateHistory().Num(), 0);

	TestInstance->Start();
	
	TestEqual("No history after start", TestInstance->GetStateHistory().Num(), 0);

	TestNull("PreviousEnteredState null", TestInstance->GetSingleActiveStateInstance()->GetPreviousActiveState());
	TestNull("PreviousEnteredTransition null", TestInstance->GetSingleActiveStateInstance()->GetPreviousActiveTransition());
	
	FPlatformProcess::Sleep(0.1f);
	TestInstance->Update();
	{
		TestEqual("1 state in history", TestInstance->GetStateHistory().Num(), 1);

		const FGuid StateGuid = TestInstance->GetStateHistory()[0].StateGuid;

		TestEqual("Initial state guid found", StateGuid, TestInstance->GetRootStateMachine().GetSingleInitialState()->GetGuid());
		TestNotNull("State instance found from guid", TestInstance->GetStateInstanceByGuid(StateGuid));

		TestEqual("PreviousEnteredState correct", TestInstance->GetSingleActiveStateInstance()->GetPreviousActiveState(),
			Cast<USMStateInstance_Base>(TestInstance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance()));
		TestEqual("PreviousEnteredTransition correct", TestInstance->GetSingleActiveStateInstance()->GetPreviousActiveTransition(),
			Cast<USMTransitionInstance>(TestInstance->GetRootStateMachine().GetSingleInitialState()->GetOutgoingTransitions()[0]->GetNodeInstance()));
	}
	FPlatformProcess::Sleep(0.1f);
	TestInstance->Update();
	{
		TestEqual("2 states in history", TestInstance->GetStateHistory().Num(), 2);

		const FGuid StateGuid = TestInstance->GetStateHistory()[1].StateGuid;

		TestNotEqual("Next state guid found", StateGuid, TestInstance->GetRootStateMachine().GetSingleInitialState()->GetGuid());

		USMStateInstance_Base* PrevStateInstance = TestInstance->GetStateInstanceByGuid(StateGuid);
		TestNotNull("State instance found from guid", PrevStateInstance);

		TestNotEqual("History different", TestInstance->GetStateHistory()[0], TestInstance->GetStateHistory()[1]);
		TestTrue("Time stamp greater", TestInstance->GetStateHistory()[1].StartTime > TestInstance->GetStateHistory()[0].StartTime);

		TestEqual("PreviousEnteredState correct", TestInstance->GetSingleActiveStateInstance()->GetPreviousActiveState(), PrevStateInstance);
		
		TestInstance->SetStateHistoryMaxCount(1);
		{
			TestEqual("1 state in history", TestInstance->GetStateHistory().Num(), 1);
			TestEqual("Recent state kept", TestInstance->GetStateHistory()[0].StateGuid, StateGuid);
		}
	}
	
	return true;
}

#endif

#endif //WITH_DEV_AUTOMATION_TESTS