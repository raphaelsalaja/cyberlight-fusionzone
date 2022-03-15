// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "Construction/SMEditorConstructionManager.h"
#include "Utilities/SMBlueprintEditorUtils.h"
#include "SMEditorInstance.h"
#include "Graph/SMGraph.h"
#include "Graph/Nodes/SMGraphNode_Base.h"
#include "Graph/Nodes/SMGraphNode_ConduitNode.h"
#include "Graph/Nodes/SMGraphNode_StateMachineEntryNode.h"
#include "Graph/Nodes/SMGraphNode_StateMachineStateNode.h"
#include "Graph/Nodes/SMGraphNode_StateNode.h"
#include "Graph/Nodes/SMGraphNode_TransitionEdge.h"
#include "SMSystemEditorLog.h"

#include "SMConduit.h"
#include "SMStateMachineInstance.h"

#define LOCTEXT_NAMESPACE "SMEditorConstructionManager"

FSMEditorConstructionManager::~FSMEditorConstructionManager()
{
	CleanupAllEditorStateMachines();
	BlueprintsPendingConstruction.Reset();
}

FSMEditorConstructionManager* FSMEditorConstructionManager::GetInstance()
{
	static TSharedPtr<FSMEditorConstructionManager> ConstructionManager;
	if (!ConstructionManager.IsValid())
	{
		ConstructionManager = MakeShareable(new FSMEditorConstructionManager());
	}
	return ConstructionManager.Get();
}

void FSMEditorConstructionManager::Tick(float DeltaTime)
{
	if (HasPendingConstructionScripts()) // Sanity check, should always be true if tick is called.
	{
		DECLARE_SCOPE_CYCLE_COUNTER(TEXT("FSMEditorConstructionManager::Tick"), STAT_ConstructionManagerTick, STATGROUP_LogicDriverEditor);
		
		TSet<TWeakObjectPtr<USMBlueprint>> BlueprintsToConstruct = BlueprintsPendingConstruction;
		for (const TWeakObjectPtr<USMBlueprint>& Blueprint : BlueprintsToConstruct)
		{
			if (Blueprint.IsValid())
			{
				RunAllConstructionScriptsForBlueprint_Internal(Blueprint.Get());
			}
		}

		CleanupAllEditorStateMachines();
		BlueprintsPendingConstruction.Reset();
	}
}

bool FSMEditorConstructionManager::IsTickable() const
{
	return HasPendingConstructionScripts();
}

TStatId FSMEditorConstructionManager::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(FSMEditorConstructionManager, STATGROUP_Tickables);
}

bool FSMEditorConstructionManager::HasPendingConstructionScripts() const
{
	return BlueprintsPendingConstruction.Num() > 0;
}

bool FSMEditorConstructionManager::IsRunningConstructionScripts(USMBlueprint* ForBlueprint) const
{
	return ForBlueprint ? BlueprintsBeingConstructed.Contains(ForBlueprint) : BlueprintsBeingConstructed.Num() > 0;
}

void FSMEditorConstructionManager::ConstructEditorStateMachine(USMGraph* InGraph, FSMStateMachine& StateMachineOut, TArray<FSMNode_Base*>& Storage)
{
	if (!InGraph)
	{
		return;
	}

	TMap<FGuid, FSMTransition*> AllTransitions;
	
	TSet<UEdGraphNode*> GraphNodes;
	for (UEdGraphNode* GraphNode : InGraph->Nodes)
	{
		USMGraphNode_StateNodeBase* GraphStateNodeBaseSelected = nullptr;
		FSMState_Base* RuntimeStateSelected = nullptr;
		if (USMGraphNode_StateMachineStateNode* StateMachineNode = Cast<USMGraphNode_StateMachineStateNode>(GraphNode))
		{
			if (USMGraph* NestedFSMGraph = Cast<USMGraph>(StateMachineNode->GetBoundGraph()))
			{
				if (USMGraphNode_StateMachineEntryNode* EntryNode = NestedFSMGraph->GetEntryNode())
				{
					GraphStateNodeBaseSelected = StateMachineNode;
					GraphStateNodeBaseSelected->SetRuntimeDefaults(EntryNode->StateMachineNode);
					RuntimeStateSelected = new FSMStateMachine(EntryNode->StateMachineNode);
					ConstructEditorStateMachine(NestedFSMGraph, *(FSMStateMachine*)RuntimeStateSelected, Storage);
				}
			}
		}
		else if (USMGraphNode_StateNode* StateNode = Cast<USMGraphNode_StateNode>(GraphNode))
		{
			if (USMGraphK2* StateGraph = Cast<USMGraphK2>(StateNode->GetBoundGraph()))
			{
				if (FSMNode_Base* Node = StateGraph->GetRuntimeNode())
				{
					GraphStateNodeBaseSelected = StateNode;
					StateNode->SetRuntimeDefaults(*(FSMState*)Node);
					RuntimeStateSelected = new FSMState(*(FSMState*)Node);
				}
			}
		}
		else if (USMGraphNode_ConduitNode* ConduitNode = Cast<USMGraphNode_ConduitNode>(GraphNode))
		{
			if (USMGraphK2* StateGraph = Cast<USMGraphK2>(ConduitNode->GetBoundGraph()))
			{
				if (FSMNode_Base* Node = StateGraph->GetRuntimeNode())
				{
					GraphStateNodeBaseSelected = ConduitNode;
					ConduitNode->SetRuntimeDefaults(*(FSMState_Base*)Node);
					RuntimeStateSelected = new FSMConduit(*(FSMConduit*)Node);
				}
			}
		}
		
		auto GetOrCopyTransition = [&](FSMTransition* InTransition, USMGraphNode_TransitionEdge* TransitionEdge) -> FSMTransition*
		{
			if (FSMTransition* Transition = AllTransitions.FindRef(InTransition->GetNodeGuid()))
			{
				return Transition;
			}

			TransitionEdge->SetRuntimeDefaults(*InTransition);
			FSMTransition* NewTransition = new FSMTransition(*InTransition);
			AllTransitions.Add(NewTransition->GetNodeGuid(), NewTransition);
			
			NewTransition->NodeInstance = TransitionEdge->GetNodeTemplate();
			if (NewTransition->NodeInstance)
			{
				NewTransition->NodeInstance->bIsEditorExecution = true;
				NewTransition->NodeInstance->SetOwningNode(NewTransition);
			}
			StateMachineOut.AddTransition(NewTransition);
			Storage.Add(NewTransition);
			return NewTransition;
		};

		if (GraphStateNodeBaseSelected && RuntimeStateSelected)
		{
			RuntimeStateSelected->NodeInstance = GraphStateNodeBaseSelected->GetNodeTemplate();
			if (RuntimeStateSelected->NodeInstance)
			{
				RuntimeStateSelected->NodeInstance->bIsEditorExecution = true;
				RuntimeStateSelected->NodeInstance->SetOwningNode(RuntimeStateSelected);
			}

			if (USMGraphNode_StateNode* GraphStateNode = Cast<USMGraphNode_StateNode>(GraphStateNodeBaseSelected))
			{
				for (const FStateStackContainer& StackTemplate : GraphStateNode->StateStack)
				{
					if (StackTemplate.NodeStackInstanceTemplate)
					{
						StackTemplate.NodeStackInstanceTemplate->bIsEditorExecution = true;
						StackTemplate.NodeStackInstanceTemplate->SetOwningNode(RuntimeStateSelected);
						RuntimeStateSelected->StackNodeInstances.Add(StackTemplate.NodeStackInstanceTemplate);
					}
				}
			}
			
			StateMachineOut.AddState(RuntimeStateSelected);
			Storage.Add(RuntimeStateSelected);

			// Input Transitions
			{
				TArray<USMGraphNode_TransitionEdge*> Transitions;
				GraphStateNodeBaseSelected->GetInputTransitions(Transitions);

				for (USMGraphNode_TransitionEdge* Transition : Transitions)
				{
					if (USMGraphK2* TransitionGraph = Cast<USMGraphK2>(Transition->GetBoundGraph()))
					{
						if (FSMNode_Base* Node = TransitionGraph->GetRuntimeNode())
						{
							FSMTransition* RuntimeTransition = GetOrCopyTransition((FSMTransition*)Node, Transition);
							RuntimeTransition->SetToState(RuntimeStateSelected);
						}
					}
				}
			}

			// Output transitions
			{
				TArray<USMGraphNode_TransitionEdge*> Transitions;
				GraphStateNodeBaseSelected->GetOutputTransitions(Transitions);

				for (USMGraphNode_TransitionEdge* Transition : Transitions)
				{
					if (USMGraphK2* TransitionGraph = Cast<USMGraphK2>(Transition->GetBoundGraph()))
					{
						if (FSMNode_Base* Node = TransitionGraph->GetRuntimeNode())
						{
							FSMTransition* RuntimeTransition = GetOrCopyTransition((FSMTransition*)Node, Transition);
							RuntimeTransition->SetFromState(RuntimeStateSelected);
						}
					}
				}
			}

			RuntimeStateSelected->SortTransitions();
		}
	}
}

void FSMEditorConstructionManager::CleanupAllEditorStateMachines()
{
	TArray<TWeakObjectPtr<USMBlueprint>> AllBlueprints;
	EditorStateMachines.GetKeys(AllBlueprints);

	for (const TWeakObjectPtr<USMBlueprint>& Blueprint : AllBlueprints)
	{
		CleanupEditorStateMachine(Blueprint.Get());
	}
}

void FSMEditorConstructionManager::CleanupEditorStateMachine(USMBlueprint* InBlueprint)
{
	if (FSMEditorStateMachine* EditorFSM = EditorStateMachines.Find(InBlueprint))
	{
		if (EditorFSM->StateMachineEditorInstance)
		{
			EditorFSM->StateMachineEditorInstance->Shutdown();
		}

		for (FSMNode_Base* Node : EditorFSM->EditorInstanceNodeStorage)
		{
			if (USMNodeInstance* Template = Node->GetNodeInstance())
			{
				Template->SetOwningNode(nullptr);
				Template->bIsEditorExecution = false;
			}
			for (USMNodeInstance* StackNode : Node->StackNodeInstances)
			{
				StackNode->SetOwningNode(nullptr);
				StackNode->bIsEditorExecution = false;
			}
			delete Node;
		}

		EditorFSM->EditorInstanceNodeStorage.Reset();

		if (EditorFSM->StateMachineEditorInstance)
		{
			EditorFSM->StateMachineEditorInstance->RemoveFromRoot();
		}
		EditorStateMachines.Remove(InBlueprint);
	}
}

void FSMEditorConstructionManager::RunAllConstructionScriptsForBlueprintImmediately(USMBlueprint* InBlueprint)
{
	RunAllConstructionScriptsForBlueprint(InBlueprint, false);

	if (BlueprintsPendingConstruction.Contains(InBlueprint))
	{
		RunAllConstructionScriptsForBlueprint_Internal(InBlueprint);
		CleanupEditorStateMachine(InBlueprint);
		BlueprintsPendingConstruction.Remove(InBlueprint);
	}
}

void FSMEditorConstructionManager::RunAllConstructionScriptsForBlueprint(UObject* InObject, bool bSkipOnCompile)
{
	const ESMEditorConstructionScriptProjectSetting ConstructionProjectSetting = FSMBlueprintEditorUtils::GetProjectEditorSettings()->EditorNodeConstructionScriptSetting;
	if (bDisableConstructionScripts || ConstructionProjectSetting == ESMEditorConstructionScriptProjectSetting::SM_Legacy)
	{
		LDEDITOR_LOG_INFO
		(
			TEXT("Skipping FSMEditorConstructionManager::RunAllConstructionScriptsForBlueprint, bDisableConstructionScripts: %s, ConstructionProjectSetting %d"),
			bDisableConstructionScripts ? TEXT("true") : TEXT("false"), ConstructionProjectSetting
		);
		return;
	}

	if (USMBlueprint* Blueprint = FSMBlueprintEditorUtils::FindBlueprintFromObject(InObject))
	{
		if (!(bSkipOnCompile && Blueprint->bBeingCompiled) && !BlueprintsBeingConstructed.Contains(Blueprint) && !BlueprintsPendingConstruction.Contains(Blueprint))
		{
			// Don't add pending if currently being constructed.
			// Running the construction script itself can trigger property changes triggering this.
			BlueprintsPendingConstruction.Add(MakeWeakObjectPtr(Blueprint));
		}
	}
	else
	{
		LDEDITOR_LOG_WARNING
		(
			TEXT("Couldn't find SMBlueprint for FSMEditorConstructionManager::RunAllConstructionScriptsForBlueprint")
		);
	}
}

FSMEditorStateMachine& FSMEditorConstructionManager::RebuildEditorStateMachine(USMBlueprint* InBlueprint)
{
	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("FSMEditorConstructionManager::RebuildEditorStateMachine"), STAT_RebuildEditorStateMachine, STATGROUP_LogicDriverEditor);
	
	bool bWasCreated = false;
	FSMEditorStateMachine& EditorFSM = GetOrCreateEditorStateMachine(InBlueprint, bWasCreated);

	if (!bWasCreated)
	{
		if (!InBlueprint->IsPossiblyDirty())
		{
			// Don't bother rebuilding if we haven't changed.
			return EditorFSM;
		}
		
		CleanupEditorStateMachine(InBlueprint);
	}

	FSMStateMachine* RootStateMachine = &EditorFSM.StateMachineEditorInstance->GetRootStateMachine();

	// Setup the root node instance.
	{
		RootStateMachine->NodeInstance = nullptr;

		// Use skeleton class if BPGC is being regenerated.
		if (USMBlueprintGeneratedClass* BPGC = Cast<USMBlueprintGeneratedClass>(!InBlueprint->GeneratedClass || InBlueprint->GeneratedClass->HasAnyClassFlags(CLASS_LayoutChanging) ?
			InBlueprint->SkeletonGeneratedClass :
			InBlueprint->GeneratedClass))
		{
			TSubclassOf<USMStateMachineInstance> StateMachineClass = nullptr;

			// An old CDO is needed during a compile when the CDO is being rebuilt. This should only be viable from a skeleton class.
			USMInstance* DefaultInstance = BPGC->GetOldCDO().Get();
				
			if (DefaultInstance == nullptr)
			{
				// Either we are the BPGC or we are being newly created. Otherwise we should be using the cached CDO.
				ensure(InBlueprint->GeneratedClass == nullptr || BPGC == InBlueprint->GeneratedClass);
				DefaultInstance = Cast<USMInstance>(BPGC->GetDefaultObject(false));
			}
			else
			{
				// Skeletons should use cached CDO.
				ensure(BPGC == InBlueprint->SkeletonGeneratedClass);
			}
			
			if (ensure(DefaultInstance))
			{
				StateMachineClass = DefaultInstance->GetStateMachineClass();
			}

			RootStateMachine->NodeInstance = NewObject<USMStateMachineInstance>(GetTransientPackage(), StateMachineClass.Get() ? StateMachineClass.Get() : USMStateMachineInstance::StaticClass());
			RootStateMachine->NodeInstance->SetOwningNode(RootStateMachine);
		}
	}

	ConstructEditorStateMachine
	(
		FSMBlueprintEditorUtils::GetRootStateMachineGraph(InBlueprint),
		*RootStateMachine, EditorFSM.EditorInstanceNodeStorage
	);

	EditorFSM.StateMachineEditorInstance->Initialize(NewObject<USMEditorContext>());
	return EditorFSM;
}

FSMEditorStateMachine& FSMEditorConstructionManager::GetOrCreateEditorStateMachine(USMBlueprint* InBlueprint, bool& bWasCreated)
{
	FSMEditorStateMachine& EditorFSM = EditorStateMachines.FindOrAdd(InBlueprint);
	if (!EditorFSM.StateMachineEditorInstance)
	{
		EditorFSM.StateMachineEditorInstance = NewObject<USMEditorInstance>();
		EditorFSM.StateMachineEditorInstance->GetRootStateMachine().SetNodeGuid(FGuid::NewGuid());
		EditorFSM.StateMachineEditorInstance->GetRootStateMachine().SetNodeName("Root");

		EditorFSM.StateMachineEditorInstance->AddToRoot();
		bWasCreated = true;
	}
	else
	{
		bWasCreated = false;
	}
	
	return EditorFSM;
}

void FSMEditorConstructionManager::RunAllConstructionScriptsForBlueprint_Internal(USMBlueprint* InBlueprint)
{
	const ESMEditorConstructionScriptProjectSetting ConstructionProjectSetting = FSMBlueprintEditorUtils::GetProjectEditorSettings()->EditorNodeConstructionScriptSetting;
	if (bDisableConstructionScripts || ConstructionProjectSetting == ESMEditorConstructionScriptProjectSetting::SM_Legacy)
	{
		LDEDITOR_LOG_INFO
		(
			TEXT("Skipping FSMEditorConstructionManager::RunAllConstructionScriptsForBlueprint_Internal, bDisableConstructionScripts: %s, ConstructionProjectSetting %d"),
			bDisableConstructionScripts ? TEXT("true") : TEXT("false"), ConstructionProjectSetting
		);
		return;
	}

	check(InBlueprint);
	if (InBlueprint->HasAnyFlags(RF_NeedPostLoad | RF_NeedPostLoadSubobjects))
	{
		// Don't run construction scripts while loading. CDO will be null.
		return;
	}

	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("FSMEditorConstructionManager::RunAllConstructionScriptsForBlueprint"), STAT_RunAllBlueprintConstructionScripts, STATGROUP_LogicDriverEditor);
	BlueprintsBeingConstructed.Add(InBlueprint);
	
	FSMEditorStateMachine& EditorStateMachine = RebuildEditorStateMachine(InBlueprint);

	// Run the construction script for our root node.
	if (USMNodeInstance* NodeInstance = EditorStateMachine.StateMachineEditorInstance->GetRootStateMachine().GetNodeInstance())
	{
		if (NodeInstance->GetClass() != USMStateMachineInstance::StaticClass())
		{
			NodeInstance->RunConstructionScript();
		}
	}
	
	TArray<USMGraphNode_Base*> GraphNodes;
	FSMBlueprintEditorUtils::GetAllNodesOfClassNested(InBlueprint, GraphNodes);

	for (USMGraphNode_Base* GraphNode : GraphNodes)
	{
		GraphNode->RunAllConstructionScripts();
	}

	// Perform a second pass -- There was a bug that caused construction scripts to be fired a second time.
	// This is fixed, but the extra pass allows additional behavior on standard cs, such as the changing a nested FSM node property and having the owning
	// FSM construction script read it. Without a second pass it wouldn't update until a manual compile was initiated.
	
	for (USMGraphNode_Base* GraphNode : GraphNodes)
	{
		GraphNode->RunAllConstructionScripts();
	}

	BlueprintsBeingConstructed.Remove(InBlueprint);
}

#undef LOCTEXT_NAMESPACE
