// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMTestHelpers.h"
#include "SMTestContext.h"

#include "Blueprints/SMBlueprint.h"

#include "Blueprints/SMBlueprintFactory.h"
#include "Utilities/SMBlueprintEditorUtils.h"
#include "Graph/SMConduitGraph.h"
#include "Graph/SMGraph.h"
#include "Graph/SMStateGraph.h"
#include "Graph/Nodes/RootNodes/SMGraphK2Node_StateMachineSelectNode.h"
#include "Graph/Nodes/SMGraphK2Node_StateMachineNode.h"
#include "Graph/Nodes/SMGraphNode_StateNode.h"
#include "Graph/Nodes/SMGraphNode_StateMachineEntryNode.h"
#include "Graph/Nodes/SMGraphNode_TransitionEdge.h"
#include "Graph/Nodes/SMGraphNode_StateMachineStateNode.h"
#include "Graph/Nodes/SMGraphNode_ConduitNode.h"
#include "Graph/Nodes/Helpers/SMGraphK2Node_StateReadNodes.h"
#include "Graph/Nodes/RootNodes/SMGraphK2Node_TransitionInitializedNode.h"
#include "Graph/Nodes/RootNodes/SMGraphK2Node_TransitionShutdownNode.h"
#include "Graph/Nodes/RootNodes/SMGraphK2Node_TransitionEnteredNode.h"

#include "EdGraph/EdGraph.h"
#include "Kismet2/KismetEditorUtilities.h"

#if WITH_DEV_AUTOMATION_TESTS

#if PLATFORM_DESKTOP

/**
 * Test nested state machines' bWaitForEndState flag.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FWaitForEndStateTest, "SMTests.WaitForEndState", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

	bool FWaitForEndStateTest::RunTest(const FString& Parameters)
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
	int32 TotalTopLevelStates = 3;
	int32 TotalNestedStates = 2;
	
	UEdGraphPin* LastStatePin = nullptr;

	// Build state machine first state.
	TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, 1, &LastStatePin);

	// Connect nested FSM.
	UEdGraphPin* EntryPointForNestedStateMachine = LastStatePin;
	USMGraphNode_StateMachineStateNode* NestedFSM = TestHelpers::BuildNestedStateMachine(this, StateMachineGraph, TotalNestedStates, &EntryPointForNestedStateMachine, nullptr);
	LastStatePin = NestedFSM->GetOutputPin();
	
	NestedFSM->GetNodeTemplateAs<USMStateMachineInstance>()->SetWaitForEndState(false);

	// Third state regular state.
	TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, 1, &LastStatePin);

	// Test transition evaluation waiting for end state.
	// [A -> [A -> B] -> C
	{
		int32 EntryHits = 0; int32 UpdateHits = 0; int32 EndHits = 0;
		TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits);
		TestEqual("Didn't wait for end state.", EntryHits, TotalTopLevelStates);
		TestEqual("Didn't wait for end state.", EndHits, TotalTopLevelStates);

		NestedFSM->GetNodeTemplateAs<USMStateMachineInstance>()->SetWaitForEndState(true);

		TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits);
		TestEqual("Waited for end state.", EntryHits, TotalTopLevelStates + TotalNestedStates - 1);
		TestEqual("Waited for end state.", EndHits, TotalTopLevelStates + TotalNestedStates - 1);
	}

	USMGraphNode_StateMachineStateNode* EndFSM = FSMBlueprintEditorUtils::ConvertNodeTo<USMGraphNode_StateMachineStateNode>(NestedFSM->GetNextNode());
	TestHelpers::BuildLinearStateMachine(this, CastChecked<USMGraph>(EndFSM->GetBoundGraph()), TotalNestedStates, nullptr);

	TotalNestedStates *= 2;
	
	// Test root end state not being considered until fsm is in end state.
	// [A -> [A -> B] -> [A -> B]
	{
		int32 EntryHits = 0; int32 UpdateHits = 0; int32 EndHits = 0;
		// Will hit all states of first FSM, then stop on first state of second fsm.
		TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits);
		TestEqual("Didn't wait for end state.", EntryHits, 4); // [A -> [A -> B] -> [A]
		TestEqual("Didn't wait for end state.", EndHits, 4);

		EndFSM->GetNodeTemplateAs<USMStateMachineInstance>()->SetWaitForEndState(true);

		// Will hit all states of all FSMs. This test doesn't stop until the root state machine is in an end state.
		TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits);
		TestEqual("Waited for end state.", EntryHits, TotalTopLevelStates + TotalNestedStates - 2); // [A -> [A -> B] -> [A -> B]
		TestEqual("Waited for end state.", EndHits, TotalTopLevelStates + TotalNestedStates - 2);
	}
	
	return true;
}

/**
 * Test conduit functionality.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FConduitTest, "SMTests.Conduit", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

	bool FConduitTest::RunTest(const FString& Parameters)
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
	const int32 TotalStates = 5;

	UEdGraphPin* LastStatePin = nullptr;

	TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin);

	USMGraphNode_StateNodeBase* FirstNode = CastChecked<USMGraphNode_StateNodeBase>(StateMachineGraph->GetEntryNode()->GetOutputNode());

	// This will become a conduit.
	USMGraphNode_StateNodeBase* SecondNode = CastChecked<USMGraphNode_StateNodeBase>(FirstNode->GetNextNode());
	USMGraphNode_ConduitNode* ConduitNode = FSMBlueprintEditorUtils::ConvertNodeTo<USMGraphNode_ConduitNode>(SecondNode);
	ConduitNode->GetNodeTemplateAs<USMConduitInstance>()->SetEvalWithTransitions(false); // Settings make this true by default.
	
	// Eval with the conduit being considered a state. It will end with the active state becoming stuck on a conduit.
	int32 EntryHits = 0; int32 UpdateHits = 0; int32 EndHits = 0;
	int32 MaxIterations = TotalStates * 2;
	USMInstance* Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, MaxIterations, false, false);

	TestTrue("State machine still active", Instance->IsActive());
	TestTrue("State machine shouldn't have been able to switch states.", !Instance->IsInEndState());

	TestTrue("Active state is conduit", Instance->GetSingleActiveState()->IsConduit());
	TestEqual("State Machine generated value", EntryHits, 1);
	TestEqual("State Machine generated value", UpdateHits, 0);
	TestEqual("State Machine generated value", EndHits, 1); // Ended state and switched to conduit.
	
	// Set conduit to true and try again.
	USMConduitGraph* Graph = CastChecked<USMConduitGraph>(ConduitNode->GetBoundGraph());
	UEdGraphPin* CanEvalPin = Graph->ResultNode->GetInputPin();
	CanEvalPin->DefaultValue = "True";

	// Eval normally.
	TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, MaxIterations, true, true);

	// Configure conduit as transition and set to false.
	ConduitNode->GetNodeTemplateAs<USMConduitInstance>()->SetEvalWithTransitions(true);
	CanEvalPin->DefaultValue = "False";
	Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, MaxIterations, false, false);

	TestTrue("State machine still active", Instance->IsActive());
	TestTrue("State machine shouldn't have been able to switch states.", !Instance->IsInEndState());

	TestFalse("Active state is not conduit", Instance->GetSingleActiveState()->IsConduit());
	TestEqual("State Machine generated value", EntryHits, 1);
	TestEqual("State Machine generated value", UpdateHits, MaxIterations); // Updates because state not transitioning out.
	TestEqual("State Machine generated value", EndHits, 0); // State should never have ended.

	// Set conduit to true but set the next transition to false. Should have same result as when the conduit was false.
	CanEvalPin->DefaultValue = "True";
	USMGraphNode_TransitionEdge* Transition = CastChecked<USMGraphNode_TransitionEdge>(ConduitNode->GetOutputNode());
	USMTransitionGraph* TransitionGraph = CastChecked<USMTransitionGraph>(Transition->GetBoundGraph());
	UEdGraphPin* TransitionPin = TransitionGraph->ResultNode->GetInputPin();
	TransitionPin->BreakAllPinLinks(true);
	TransitionPin->DefaultValue = "False";
	Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, MaxIterations, false, false);

	TestTrue("State machine still active", Instance->IsActive());
	TestTrue("State machine shouldn't have been able to switch states.", !Instance->IsInEndState());

	TestFalse("Active state is not conduit", Instance->GetSingleActiveState()->IsConduit());
	TestEqual("State Machine generated value", EntryHits, 1);
	TestEqual("State Machine generated value", UpdateHits, MaxIterations); // Updates because state not transitioning out.
	TestEqual("State Machine generated value", EndHits, 0); // State should never have ended.

	// Set transition to true and should eval normally.
	TransitionPin->DefaultValue = "True";
	TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, MaxIterations, true, true);

	// Add another conduit node (false) after the last one configured to run as a transition. Result should be the same as the last failure.
	USMGraphNode_StateNodeBase* ThirdNode = CastChecked<USMGraphNode_StateNodeBase>(ConduitNode->GetNextNode());
	USMGraphNode_ConduitNode* NextConduitNode = FSMBlueprintEditorUtils::ConvertNodeTo<USMGraphNode_ConduitNode>(ThirdNode);
	NextConduitNode->GetNodeTemplateAs<USMConduitInstance>()->SetEvalWithTransitions(true);
	Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, MaxIterations, false, false);

	TestTrue("State machine still active", Instance->IsActive());
	TestTrue("State machine shouldn't have been able to switch states.", !Instance->IsInEndState());

	TestFalse("Active state is not conduit", Instance->GetSingleActiveState()->IsConduit());
	TestEqual("State Machine generated value", EntryHits, 1);
	TestEqual("State Machine generated value", UpdateHits, MaxIterations); // Updates because state not transitioning out.
	TestEqual("State Machine generated value", EndHits, 0); // State should never have ended.

	// Set new conduit to true and eval again.
	Graph = CastChecked<USMConduitGraph>(NextConduitNode->GetBoundGraph());
	CanEvalPin = Graph->ResultNode->GetInputPin();
	CanEvalPin->DefaultValue = "True";
	TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, MaxIterations, true, true);

	// Test with evaluation disabled.
	NextConduitNode->GetNodeTemplateAs<USMConduitInstance>()->SetCanEvaluate(false);
	int32 IterationsRan;
	Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, MaxIterations, false, false, true, &IterationsRan);
	TestEqual("Iteration max count ran", IterationsRan, MaxIterations);
	TestFalse("State machine did not complete", Instance->IsInEndState());
	FSMConduit* SecondConduit = (FSMConduit*)Instance->GetSingleActiveState()->GetOutgoingTransitions()[0]->GetToState()->GetOutgoingTransitions()[0]->GetToState();
	TestTrue("Conduit found", SecondConduit->IsConduit());
	TestFalse("Second state is conduit that doesn't evaluate which prevented first conduit from passing.", SecondConduit->bCanEvaluate);

	// Restore evaluation.
	NextConduitNode->GetNodeTemplateAs<USMConduitInstance>()->SetCanEvaluate(true);
	FKismetEditorUtilities::CompileBlueprint(NewBP);
	
	// Test correct transition order.
	USMTestContext* Context = NewObject<USMTestContext>();
	Instance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);
	Instance->Start();

	FSMState_Base* CurrentState = Instance->GetRootStateMachine().GetSingleActiveState();
	TArray<TArray<FSMTransition*>> TransitionChain;
	TestTrue("Valid transition found", CurrentState->GetValidTransition(TransitionChain));

	FSMState_Base* SecondState = CurrentState->GetOutgoingTransitions()[0]->GetToState();
	FSMState_Base* ThirdState = SecondState->GetOutgoingTransitions()[0]->GetToState();
	
	TestEqual("Transition to and after conduit found", TransitionChain[0].Num(), 3);
	TestEqual("Correct transition order", TransitionChain[0][0], CurrentState->GetOutgoingTransitions()[0]);
	TestEqual("Correct transition order", TransitionChain[0][1], SecondState->GetOutgoingTransitions()[0]);
	TestEqual("Correct transition order", TransitionChain[0][2], ThirdState->GetOutgoingTransitions()[0]);

	// Test conduit initialize & shutdown
	TestHelpers::AddEventWithLogic<USMGraphK2Node_TransitionInitializedNode>(this, ConduitNode,
		USMTestContext::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTestContext, IncreaseTransitionInit)));

	TestHelpers::AddEventWithLogic<USMGraphK2Node_TransitionInitializedNode>(this, NextConduitNode,
		USMTestContext::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTestContext, IncreaseTransitionInit)));

	TestHelpers::AddEventWithLogic<USMGraphK2Node_TransitionShutdownNode>(this, ConduitNode,
		USMTestContext::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTestContext, IncreaseTransitionShutdown)));
	
	TestHelpers::AddEventWithLogic<USMGraphK2Node_TransitionShutdownNode>(this, NextConduitNode,
		USMTestContext::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTestContext, IncreaseTransitionShutdown)));

	TestHelpers::AddEventWithLogic<USMGraphK2Node_TransitionEnteredNode>(this, ConduitNode,
		USMTestContext::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTestContext, IncreaseTransitionTaken)));
	
	TestHelpers::AddEventWithLogic<USMGraphK2Node_TransitionEnteredNode>(this, NextConduitNode,
		USMTestContext::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTestContext, IncreaseTransitionTaken)));
	
	FKismetEditorUtilities::CompileBlueprint(NewBP);
	
	Context = NewObject<USMTestContext>();
	Instance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);
	Instance->Start();

	// All transition inits should be fired at once.
	TestEqual("InitValue", Context->TestTransitionInit.Count, 2);
	TestEqual("ShutdownValue", Context->TestTransitionShutdown.Count, 0);
	TestEqual("EnteredValue", Context->TestTransitionEntered.Count, 0);
	
	Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, MaxIterations, true, false);
	Context = CastChecked<USMTestContext>(Instance->GetContext());
	
	TestEqual("InitValue", Context->TestTransitionInit.Count, 2);
	TestEqual("ShutdownValue", Context->TestTransitionShutdown.Count, 2);
	TestEqual("EnteredValue", Context->TestTransitionEntered.Count, 2);

	// Test having the second conduit go back to the first conduit. When both are set as transitions this caused a stack overflow. Check it's fixed.
	NextConduitNode->GetOutputPin()->BreakAllPinLinks(true);
	TestTrue("Next conduit wired to previous conduit", NextConduitNode->GetSchema()->TryCreateConnection(NextConduitNode->GetOutputPin(), ConduitNode->GetInputPin()));
	USMGraphNode_TransitionEdge* TransitionEdge = CastChecked<USMGraphNode_TransitionEdge>(NextConduitNode->GetOutputNode());
	TestHelpers::AddTransitionResultLogic(this, TransitionEdge);
	TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, MaxIterations, true, false);

	// Test initial conduit node entry states.
	{
		USMGraphNode_ConduitNode* FirstConduitNode = FSMBlueprintEditorUtils::ConvertNodeTo<USMGraphNode_ConduitNode>(FirstNode);
		FirstConduitNode->GetOutputPin()->BreakAllPinLinks(true);

		TestHelpers::AddEventWithLogic<USMGraphK2Node_TransitionInitializedNode>(this, FirstConduitNode,
			USMTestContext::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTestContext, IncreaseTransitionInit)));

		TestHelpers::AddEventWithLogic<USMGraphK2Node_TransitionShutdownNode>(this, FirstConduitNode,
			USMTestContext::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(USMTestContext, IncreaseTransitionShutdown)));

		Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, MaxIterations, true, false);
		Context = CastChecked<USMTestContext>(Instance->GetContext());
		
		TestEqual("InitValue", Context->TestTransitionInit.Count, 1);
		TestEqual("ShutdownValue", Context->TestTransitionShutdown.Count, 1);
	}
	
	return true;
}

/**
 * Test creating an any state node.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FAnyStateTest, "SMTests.AnyStateTest", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

bool FAnyStateTest::RunTest(const FString& Parameters)
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

	USMGraphNode_StateNodeBase* LastNormalState = CastChecked<USMGraphNode_StateNodeBase>(LastStatePin->GetOwningNode());
	LastNormalState->GetNodeTemplateAs<USMStateInstance_Base>()->SetExcludeFromAnyState(false);
	
	// Add any state.
	FGraphNodeCreator<USMGraphNode_AnyStateNode> AnyStateNodeCreator(*StateMachineGraph);
	USMGraphNode_AnyStateNode* AnyState = AnyStateNodeCreator.CreateNode();
	AnyStateNodeCreator.Finalize();

	FString AnyStateInitialStateName = "AnyState_Initial";
	{
		UEdGraphPin* InputPin = AnyState->GetOutputPin();

		// Connect a state to anystate.
		TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, 1, &InputPin);

		AnyState->GetNextNode()->GetBoundGraph()->Rename(*AnyStateInitialStateName, nullptr, REN_DontCreateRedirectors);
	}

	USMGraphNode_TransitionEdge* TransitionEdge = AnyState->GetNextTransition();
	TransitionEdge->GetNodeTemplateAs<USMTransitionInstance>()->SetPriorityOrder(1);

	{
		FKismetEditorUtilities::CompileBlueprint(NewBP);
		USMTestContext* Context = NewObject<USMTestContext>();
		USMInstance* Instance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);

		Instance->Start();
		TestEqual("State machine still in initial state", Instance->GetRootStateMachine().GetSingleActiveState(), Instance->GetRootStateMachine().GetSingleInitialState());

		// Any state shouldn't be triggered because priority is lower.
		Instance->Update();
		TestNotEqual("Any state transition not called", Instance->GetRootStateMachine().GetSingleActiveState()->GetNodeName(), AnyStateInitialStateName);

		TestFalse("Not considered end state", Instance->IsInEndState());
		
		// No other transitions left except any state.
		Instance->Update();
		TestEqual("Any state transition called", Instance->GetRootStateMachine().GetSingleActiveState()->GetNodeName(), AnyStateInitialStateName);
		
		Instance->Shutdown();
	}
	
	TransitionEdge->GetNodeTemplateAs<USMTransitionInstance>()->SetPriorityOrder(-1);
	
	{
		FKismetEditorUtilities::CompileBlueprint(NewBP);
		USMTestContext* Context = NewObject<USMTestContext>();
		USMInstance* Instance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);

		Instance->Start();
		TestEqual("State machine still in initial state", Instance->GetRootStateMachine().GetSingleActiveState(), Instance->GetRootStateMachine().GetSingleInitialState());

		// Any state should evaluate first.
		Instance->Update();
		TestEqual("Any state transition called", Instance->GetRootStateMachine().GetSingleActiveState()->GetNodeName(), AnyStateInitialStateName);

		Instance->Shutdown();
	}
	
	// Try reference nodes such as Time in State
	{
		TestHelpers::AddSpecialFloatTransitionLogic<USMGraphK2Node_StateReadNode_TimeInState>(this, TransitionEdge);
		FKismetEditorUtilities::CompileBlueprint(NewBP);
		USMTestContext* Context = NewObject<USMTestContext>();
		USMInstance* Instance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);

		Instance->Start();
		TestEqual("State machine still in initial state", Instance->GetRootStateMachine().GetSingleActiveState(), Instance->GetRootStateMachine().GetSingleInitialState());

		// Any state shouldn't be triggered yet.
		Instance->Update(1);
		TestNotEqual("Any state transition not called", Instance->GetRootStateMachine().GetSingleActiveState()->GetNodeName(), AnyStateInitialStateName);
		TestFalse("Not considered end state because any state is not excluded from end.", Instance->IsInEndState());
		
		Instance->Update(3);
		TestNotEqual("Any state transition not called", Instance->GetRootStateMachine().GetSingleActiveState()->GetNodeName(), AnyStateInitialStateName);

		Instance->Update(3);
		TestNotEqual("Any state transition not called", Instance->GetRootStateMachine().GetSingleActiveState()->GetNodeName(), AnyStateInitialStateName);
		
		Instance->Update(1);
		TestEqual("Any state transition called", Instance->GetRootStateMachine().GetSingleActiveState()->GetNodeName(), AnyStateInitialStateName);

		Instance->Shutdown();
	}

	LastNormalState->GetNodeTemplateAs<USMStateInstance_Base>()->SetExcludeFromAnyState(true);

	// Try reference nodes such as Time in State
	{
		TestHelpers::AddSpecialFloatTransitionLogic<USMGraphK2Node_StateReadNode_TimeInState>(this, TransitionEdge);
		FKismetEditorUtilities::CompileBlueprint(NewBP);
		USMTestContext* Context = NewObject<USMTestContext>();
		USMInstance* Instance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);

		Instance->Start();
		TestEqual("State machine still in initial state", Instance->GetRootStateMachine().GetSingleActiveState(), Instance->GetRootStateMachine().GetSingleInitialState());

		// Any state shouldn't be triggered yet.
		Instance->Update(1);
		TestNotEqual("Any state transition not called", Instance->GetRootStateMachine().GetSingleActiveState()->GetNodeName(), AnyStateInitialStateName);
		TestTrue("Considered end state because any state is excluded from end.", Instance->IsInEndState());

		Instance->Update(3);
		TestNotEqual("Any state transition not called", Instance->GetRootStateMachine().GetSingleActiveState()->GetNodeName(), AnyStateInitialStateName);

		// Should not be called because last state is excluded.
		Instance->Update(5);
		TestNotEqual("Any state transition not called", Instance->GetRootStateMachine().GetSingleActiveState()->GetNodeName(), AnyStateInitialStateName);

		Instance->Shutdown();
	}
	
	return true;
}

/**
 * Run multiple states in parallel.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FParallelStatesTest, "SMTests.ParallelStates", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

	bool FParallelStatesTest::RunTest(const FString& Parameters)
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
	int32 Rows = 2;
	int32 Branches = 2;
	TArray<UEdGraphPin*> LastStatePins;

	// A -> (B, C) Single
	TestHelpers::BuildBranchingStateMachine(this, StateMachineGraph, Rows, Branches, false, &LastStatePins);

	int32 EntryHits = 0; int32 UpdateHits = 0; int32 EndHits = 0;
	USMInstance* Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits);
	TestEqual("States hit linearly", EntryHits, Branches);

	// A -> (B, C) Parallel
	LastStatePins.Reset();
	FSMBlueprintEditorUtils::RemoveAllNodesFromGraph(StateMachineGraph, NewBP);
	TestHelpers::BuildBranchingStateMachine(this, StateMachineGraph, Rows, Branches, true, &LastStatePins);
	Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, 1000, false);
	TestEqual("States hit parallel", EntryHits, Instance->GetStateMap().Num() - 1);

	// A -> (B, C, D, E) Parallel
	LastStatePins.Reset();
	FSMBlueprintEditorUtils::RemoveAllNodesFromGraph(StateMachineGraph, NewBP);
	Branches = 4;
	TestHelpers::BuildBranchingStateMachine(this, StateMachineGraph, Rows, Branches, true, &LastStatePins);
	Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, 1000, false);
	TestEqual("States hit parallel", EntryHits, Instance->GetStateMap().Num() - 1);

	// A -> (B -> (B1 -> ..., B2-> ...), C -> ...) Parallel
	LastStatePins.Reset();
	FSMBlueprintEditorUtils::RemoveAllNodesFromGraph(StateMachineGraph, NewBP);
	Rows = 4;
	Branches = 2;
	TestHelpers::BuildBranchingStateMachine(this, StateMachineGraph, Rows, Branches, true, &LastStatePins);
	Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, 1000, false);
	TestEqual("States hit parallel", EntryHits, Instance->GetStateMap().Num() - 1);

	LastStatePins.Reset();
	FSMBlueprintEditorUtils::RemoveAllNodesFromGraph(StateMachineGraph, NewBP);
	Rows = 3;
	Branches = 3;
	TestHelpers::BuildBranchingStateMachine(this, StateMachineGraph, Rows, Branches, true, &LastStatePins);
	Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, 1000, false);
	TestEqual("States hit parallel", EntryHits, Instance->GetStateMap().Num() - 1);
	
	{
		TArray<FGuid> ActiveGuids;
		Instance->GetAllActiveStateGuids(ActiveGuids);
		const float TotalActiveEndStates = FMath::Pow((float)Branches, (float)Rows); // Only end states are active.

		TestEqual("Active guids match end states.", ActiveGuids.Num(), (int32)TotalActiveEndStates);

		// Reset and reload. Only end states should be active.
		Instance->Shutdown();
		Instance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, NewObject<USMTestContext>());
		Instance->LoadFromMultipleStates(ActiveGuids);

		TestEqual("All initial states set", Instance->GetRootStateMachine().GetInitialStates().Num(), ActiveGuids.Num());
		Instance->Start();
		TestEqual("All states reloaded", TestHelpers::ArrayContentsInArray(Instance->GetAllActiveStateGuidsCopy(), ActiveGuids), ActiveGuids.Num());
	}

	// Test with leaving states active.
	{
		LastStatePins.Reset();
		FSMBlueprintEditorUtils::RemoveAllNodesFromGraph(StateMachineGraph, NewBP);
		Rows = 3;
		Branches = 3;
		TestHelpers::BuildBranchingStateMachine(this, StateMachineGraph, Rows, Branches, true, &LastStatePins, true);
		Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, 1000, false);
		TestEqual("States hit parallel", EntryHits, Instance->GetStateMap().Num() - 1);

		TArray<FGuid> ActiveGuids;
		Instance->GetAllActiveStateGuids(ActiveGuids);

		TestEqual("Active guids match all states.", ActiveGuids.Num(), Instance->GetStateMap().Num() - 1);
		
		// Reset and reload.
		Instance->Shutdown();
		Instance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, NewObject<USMTestContext>());
		Instance->LoadFromMultipleStates(ActiveGuids);

		TestEqual("All initial states set", Instance->GetRootStateMachine().GetInitialStates().Num(), ActiveGuids.Num());
		Instance->Start();
		TestEqual("All states reloaded", TestHelpers::ArrayContentsInArray(Instance->GetAllActiveStateGuidsCopy(), ActiveGuids), ActiveGuids.Num());

		// Test manually deactivating states.
		{
			TArray<USMStateInstance_Base*> StateInstances;
			Instance->GetAllStateInstances(StateInstances);

			StateInstances[1]->SetActive(false);
			TestEqual("State active changed", TestHelpers::ArrayContentsInArray(Instance->GetAllActiveStateGuidsCopy(), ActiveGuids), ActiveGuids.Num() - 1);

			StateInstances[1]->SetActive(true);
			TestEqual("State active changed", TestHelpers::ArrayContentsInArray(Instance->GetAllActiveStateGuidsCopy(), ActiveGuids), ActiveGuids.Num());

			for (USMStateInstance_Base* StateInstance : StateInstances)
			{
				StateInstance->SetActive(false);
			}

			TestEqual("State active changed", Instance->GetAllActiveStateGuidsCopy().Num(), 0);

			for (USMStateInstance_Base* StateInstance : StateInstances)
			{
				StateInstance->SetActive(true);
			}

			TestEqual("State active changed", TestHelpers::ArrayContentsInArray(Instance->GetAllActiveStateGuidsCopy(), ActiveGuids), ActiveGuids.Num());
		}
	}

	// Test state re-entry
	{
		LastStatePins.Reset();
		FSMBlueprintEditorUtils::RemoveAllNodesFromGraph(StateMachineGraph, NewBP);

		TestHelpers::BuildBranchingStateMachine(this, StateMachineGraph, 2, 1, true, &LastStatePins, true, true);
		Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, 1000, false);
		TestEqual("States hit parallel", EntryHits, Instance->GetStateMap().Num() - 1);
		TestEqual("States hit parallel", UpdateHits, 1);
		TestEqual("States hit parallel", EndHits, 0);

		Instance->Update(1.f);

		USMTestContext* Context = CastChecked<USMTestContext>(Instance->GetContext());
		EntryHits = Context->GetEntryInt();
		UpdateHits = Context->GetUpdateInt();
		EndHits = Context->GetEndInt();
		
		TestEqual("States hit parallel", EntryHits, Instance->GetStateMap().Num());
		TestEqual("States hit parallel", UpdateHits, 3); // Each state updates again. Currently we let a state that was re-entered run its update logic in the same tick.
		TestEqual("States hit parallel", EndHits, 0);

		// Without re-entry
		{
			LastStatePins.Reset();
			FSMBlueprintEditorUtils::RemoveAllNodesFromGraph(StateMachineGraph, NewBP);

			TestHelpers::BuildBranchingStateMachine(this, StateMachineGraph, 2, 1, true, &LastStatePins, true, false);
			Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, 1000, false);
			
			TestEqual("States hit parallel", EntryHits, Instance->GetStateMap().Num() - 1);
			TestEqual("States hit parallel", UpdateHits, 1);
			TestEqual("States hit parallel", EndHits, 0);

			Instance->Update(1.f);

			Context = CastChecked<USMTestContext>(Instance->GetContext());
			EntryHits = Context->GetEntryInt();
			UpdateHits = Context->GetUpdateInt();
			EndHits = Context->GetEndInt();

			TestEqual("States hit parallel", EntryHits, Instance->GetStateMap().Num() - 1);
			TestEqual("States hit parallel", UpdateHits, 3); // Each state updates again.
			TestEqual("States hit parallel", EndHits, 0);
		}

		// Without transition evaluation connecting to an already active state.
		{
			LastStatePins.Reset();
			FSMBlueprintEditorUtils::RemoveAllNodesFromGraph(StateMachineGraph, NewBP);

			TestHelpers::BuildBranchingStateMachine(this, StateMachineGraph, 2, 1, true, &LastStatePins, true, true, false);
			Instance = TestHelpers::RunStateMachineToCompletion(this, NewBP, EntryHits, UpdateHits, EndHits, 1000, false);

			TestEqual("States hit parallel", EntryHits, Instance->GetStateMap().Num() - 1);
			TestEqual("States hit parallel", UpdateHits, 1);
			TestEqual("States hit parallel", EndHits, 0);

			Instance->Update(1.f);

			Context = CastChecked<USMTestContext>(Instance->GetContext());
			EntryHits = Context->GetEntryInt();
			UpdateHits = Context->GetUpdateInt();
			EndHits = Context->GetEndInt();

			TestEqual("States hit parallel", EntryHits, Instance->GetStateMap().Num() - 1);
			TestEqual("States hit parallel", UpdateHits, 3); // Each state updates again.
			TestEqual("States hit parallel", EndHits, 0);
		}
	}
	
	return NewAsset.DeleteAsset(this);
}

#endif

#endif //WITH_DEV_AUTOMATION_TESTS