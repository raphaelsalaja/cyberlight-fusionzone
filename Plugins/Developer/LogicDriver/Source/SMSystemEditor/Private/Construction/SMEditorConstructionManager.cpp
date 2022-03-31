// Copyright Recursoft LLC 2019-2022. All Rights Reserved.

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
		
		TMap<TWeakObjectPtr<USMBlueprint>, FSMConstructionConfiguration> BlueprintsToConstruct = BlueprintsPendingConstruction;
		for (const auto& BlueprintConfigKeyVal : BlueprintsToConstruct)
		{
			if (BlueprintConfigKeyVal.Key.IsValid())
			{
				RunAllConstructionScriptsForBlueprint_Internal(BlueprintConfigKeyVal.Key.Get(), BlueprintConfigKeyVal.Value);
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
	
	USMGraphNode_StateMachineEntryNode* EntryNode = InGraph->GetEntryNode();
	if (!ensure(EntryNode))
	{
		// TODO: check instead.
		return;
	}
			
	TArray<USMGraphNode_StateNodeBase*> InitialStateNodes;
	EntryNode->GetAllOutputNodesAs(InitialStateNodes);

	TSet<USMGraphNode_StateNodeBase*> InitialStatesSet(InitialStateNodes);
	
	UBlueprint* ThisBlueprint = FSMBlueprintEditorUtils::FindBlueprintForGraph(InGraph);
	TMap<FGuid, FSMTransition*> AllTransitions;
	
	TSet<UEdGraphNode*> GraphNodes;
	for (UEdGraphNode* GraphNode : InGraph->Nodes)
	{
		USMGraphNode_StateNodeBase* GraphStateNodeBaseSelected = nullptr;
		FSMState_Base* RuntimeStateSelected = nullptr;
		if (USMGraphNode_StateMachineStateNode* StateMachineNode = Cast<USMGraphNode_StateMachineStateNode>(GraphNode))
		{
			if (StateMachineNode->IsStateMachineReference())
			{
				if (USMBlueprint* ReferenceBlueprint = StateMachineNode->GetStateMachineReference())
				{
					if (ThisBlueprint == ReferenceBlueprint)
					{
						// Circular reference?
						continue;
					}
					
					GraphStateNodeBaseSelected = StateMachineNode;
					RuntimeStateSelected = new FSMStateMachine();
					GraphStateNodeBaseSelected->SetRuntimeDefaults(*RuntimeStateSelected);
					SetupRootStateMachine(*(FSMStateMachine*)RuntimeStateSelected, ReferenceBlueprint);
					ConstructEditorStateMachine
					(
						FSMBlueprintEditorUtils::GetRootStateMachineGraph(ReferenceBlueprint),
						*(FSMStateMachine*)RuntimeStateSelected, Storage
					);
				}
			}
			else if (USMGraph* NestedFSMGraph = Cast<USMGraph>(StateMachineNode->GetBoundGraph()))
			{
				if (USMGraphNode_StateMachineEntryNode* NestedEntryNode = NestedFSMGraph->GetEntryNode())
				{
					GraphStateNodeBaseSelected = StateMachineNode;
					GraphStateNodeBaseSelected->SetRuntimeDefaults(NestedEntryNode->StateMachineNode);
					RuntimeStateSelected = new FSMStateMachine(NestedEntryNode->StateMachineNode);
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
				// State stack.
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

			if (InitialStatesSet.Contains(GraphStateNodeBaseSelected))
			{
				RuntimeStateSelected->bIsRootNode = true;
				StateMachineOut.AddInitialState(RuntimeStateSelected);
			}

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

							// Transition stack.
							for (const FTransitionStackContainer& StackTemplate : Transition->TransitionStack)
							{
								if (StackTemplate.NodeStackInstanceTemplate)
								{
									StackTemplate.NodeStackInstanceTemplate->bIsEditorExecution = true;
									StackTemplate.NodeStackInstanceTemplate->SetOwningNode(RuntimeTransition);
									RuntimeTransition->StackNodeInstances.Add(StackTemplate.NodeStackInstanceTemplate);
								}
							}
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
	FSMConstructionConfiguration Configuration;
	Configuration.bSkipOnCompile = false;
	Configuration.bFullRefreshNeeded = true;
	RunAllConstructionScriptsForBlueprint(InBlueprint, MoveTemp(Configuration));

	if (BlueprintsPendingConstruction.Contains(InBlueprint))
	{
		const FSMConstructionConfiguration& Data = BlueprintsPendingConstruction.FindChecked(InBlueprint);
		RunAllConstructionScriptsForBlueprint_Internal(InBlueprint, Data);
		CleanupEditorStateMachine(InBlueprint);
		BlueprintsPendingConstruction.Remove(InBlueprint);
	}
}

void FSMEditorConstructionManager::RunAllConstructionScriptsForBlueprint(UObject* InObject, const FSMConstructionConfiguration& InConfiguration)
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
		if (!(InConfiguration.bSkipOnCompile && Blueprint->bBeingCompiled) && !BlueprintsBeingConstructed.Contains(Blueprint) && !BlueprintsPendingConstruction.Contains(Blueprint))
		{
			// Don't add pending if currently being constructed.
			// Running the construction script itself can trigger property changes triggering this.
			BlueprintsPendingConstruction.Add(MakeWeakObjectPtr(Blueprint), InConfiguration);
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

FSMEditorStateMachine& FSMEditorConstructionManager::CreateEditorStateMachine(USMBlueprint* InBlueprint)
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

	FSMStateMachine& RootStateMachine = EditorFSM.StateMachineEditorInstance->GetRootStateMachine();

	// Setup the root node instance.
	SetupRootStateMachine(RootStateMachine, InBlueprint);

	ConstructEditorStateMachine
	(
		FSMBlueprintEditorUtils::GetRootStateMachineGraph(InBlueprint),
		RootStateMachine, EditorFSM.EditorInstanceNodeStorage
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
		EditorFSM.StateMachineEditorInstance->GetRootStateMachine().SetNodeName(USMInstance::GetRootNodeNameDefault());

		EditorFSM.StateMachineEditorInstance->AddToRoot();
		bWasCreated = true;
	}
	else
	{
		bWasCreated = false;
	}
	
	return EditorFSM;
}

void FSMEditorConstructionManager::SetupRootStateMachine(FSMStateMachine& StateMachineInOut, const USMBlueprint* InBlueprint) const
{
	StateMachineInOut.NodeInstance = nullptr;

	// Use skeleton class if BPGC is being regenerated.
	if (USMBlueprintGeneratedClass* BPGC = Cast<USMBlueprintGeneratedClass>(!InBlueprint->GeneratedClass || InBlueprint->GeneratedClass->bLayoutChanging ?
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

		StateMachineInOut.NodeInstance = NewObject<USMStateMachineInstance>(GetTransientPackage(), StateMachineClass.Get() ? StateMachineClass.Get() : USMStateMachineInstance::StaticClass());
		StateMachineInOut.NodeInstance->SetOwningNode(&StateMachineInOut);
	}
}

void FSMEditorConstructionManager::RunAllConstructionScriptsForBlueprint_Internal(USMBlueprint* InBlueprint, const FSMConstructionConfiguration& InConfigurationData)
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

	const TWeakObjectPtr<USMBlueprint> BlueprintWeakPtr = InBlueprint;
	BlueprintsBeingConstructed.Add(BlueprintWeakPtr);
	
	FSMEditorStateMachine& EditorStateMachine = CreateEditorStateMachine(InBlueprint);

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
		if (GraphNode->CanRunConstructionScripts())
		{
			GraphNode->RunAllConstructionScripts();
		}
	}

	// Perform a second pass -- There was a bug that caused construction scripts to be fired a second time.
	// This is fixed, but the extra pass allows additional behavior on standard cs, such as the changing a nested FSM node property and having the owning
	// FSM construction script read it. Without a second pass it wouldn't update until a manual compile was initiated.
	
	for (USMGraphNode_Base* GraphNode : GraphNodes)
	{
		if (GraphNode->CanRunConstructionScripts())
		{
			GraphNode->RunAllConstructionScripts();
			GraphNode->RequestSlateRefresh(InConfigurationData.bFullRefreshNeeded);
		}
	}

	BlueprintsBeingConstructed.Remove(BlueprintWeakPtr);
}

#undef LOCTEXT_NAMESPACE
