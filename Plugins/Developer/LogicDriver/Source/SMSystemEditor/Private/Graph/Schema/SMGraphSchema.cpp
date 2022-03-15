// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMGraphSchema.h"

#include "Commands/SMEditorCommands.h"
#include "Graph/SMGraph.h"
#include "Graph/Nodes/SMGraphK2Node_StateMachineNode.h"
#include "Graph/Nodes/SMGraphNode_ConduitNode.h"
#include "Graph/Nodes/SMGraphNode_StateMachineStateNode.h"
#include "Graph/Nodes/SMGraphNode_StateMachineParentNode.h"
#include "Graph/Nodes/SMGraphNode_StateNode.h"
#include "Graph/Nodes/SMGraphNode_TransitionEdge.h"
#include "Graph/Nodes/SMGraphNode_StateMachineEntryNode.h"
#include "Blueprints/SMBlueprintEditor.h"
#include "Utilities/SMBlueprintEditorUtils.h"
#include "Construction/SMEditorConstructionManager.h"
#include "Graph/ConnectionDrawing/SMGraphConnectionDrawingPolicy.h"

#include "Blueprints/SMBlueprint.h"

#include "Framework/Commands/GenericCommands.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "UObject/UObjectIterator.h"
#include "ScopedTransaction.h"
#include "GraphEditorActions.h"
#include "EdGraphUtilities.h"
#include "ContentBrowserModule.h"
#include "ContentBrowser/Private/SAssetDialog.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/Kismet2NameValidators.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "EdGraphNode_Comment.h"
#include "ToolMenu.h"

#define LOCTEXT_NAMESPACE "SMGraphSchema"


template<typename T>
TSharedPtr<T> AddNewStateNodeAction(FGraphContextMenuBuilder& ContextMenuBuilder, const FText& Category, const FText& MenuDesc, const FText& Tooltip, const int32 Grouping = 0)
{
	TSharedPtr<T> NewStateNode(new T(Category, MenuDesc, Tooltip, Grouping));
	ContextMenuBuilder.AddAction(NewStateNode);
	return NewStateNode;
}

UEdGraphNode* FSMGraphSchemaAction_NewComment::PerformAction(class UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode /*= true*/)
{
	// Add menu item for creating comment boxes
	UEdGraphNode_Comment* CommentTemplate = NewObject<UEdGraphNode_Comment>();

	UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForGraph(ParentGraph);

	FVector2D SpawnLocation = Location;

	FSlateRect Bounds;
	if (Blueprint != nullptr && FKismetEditorUtilities::GetBoundsForSelectedNodes(Blueprint, Bounds, 50.0f))
	{
		CommentTemplate->SetBounds(Bounds);
		SpawnLocation.X = CommentTemplate->NodePosX;
		SpawnLocation.Y = CommentTemplate->NodePosY;
	}

	return FEdGraphSchemaAction_NewNode::SpawnNodeFromTemplate<UEdGraphNode_Comment>(ParentGraph, CommentTemplate, SpawnLocation);
}

UEdGraphNode* FSMGraphSchemaAction_NewNode::PerformAction(class UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode /*= true*/)
{
	UEdGraphNode* ResultNode = nullptr;

	if (NodeTemplate != nullptr)
	{
		const FScopedTransaction Transaction(NSLOCTEXT("UnrealEd", "AddNode", "Add Node"));
		ParentGraph->Modify();
		if (FromPin != nullptr)
		{
			FromPin->Modify();
		}

		NodeTemplate->Rename(nullptr, ParentGraph);
		ParentGraph->AddNode(NodeTemplate, true, bSelectNewNode);

		NodeTemplate->CreateNewGuid();

		// Optimization to not double generate a template.
		if (USMGraphNode_Base* GraphNode = Cast<USMGraphNode_Base>(NodeTemplate))
		{
			GraphNode->bGenerateTemplateOnNodePlacement = NodeClass == nullptr;
		}
		
		NodeTemplate->PostPlacedNewNode();
		NodeTemplate->AllocateDefaultPins();
		
		NodeTemplate->NodePosX = Location.X;
		NodeTemplate->NodePosY = Location.Y;

		NodeTemplate->SetFlags(RF_Transactional);

		ResultNode = NodeTemplate;

		if (NodeClass == nullptr && !bDontOverrideDefaultClass)
		{
			// Check for node defaults set under project settings.
			// Custom rules will still override these.
			
			const USMProjectEditorSettings* Settings = FSMBlueprintEditorUtils::GetProjectEditorSettings();
			if(Cast<USMGraphNode_StateNode>(NodeTemplate))
			{
				UClass* DefaultClass = Settings->DefaultStateClass.LoadSynchronous();
				if(!FSMNodeClassRule::IsBaseClass(DefaultClass))
				{
					NodeClass = DefaultClass;
				}
			}
			else if (USMGraphNode_StateMachineStateNode* StateMachineNode = Cast<USMGraphNode_StateMachineStateNode>(NodeTemplate))
			{
				if (!StateMachineNode->IsA<USMGraphNode_StateMachineParentNode>() /* bDontOverrideDefaultClass set for references */)
				{
					UClass* DefaultClass = Settings->DefaultStateMachineClass.LoadSynchronous();
					if(!FSMNodeClassRule::IsBaseClass(DefaultClass))
					{
						NodeClass = DefaultClass;
					}
				}
			}
			else if (Cast<USMGraphNode_ConduitNode>(NodeTemplate))
			{
				UClass* DefaultClass = Settings->DefaultConduitClass.LoadSynchronous();
				if(!FSMNodeClassRule::IsBaseClass(DefaultClass))
				{
					NodeClass = DefaultClass;
				}
			}
			else if (Cast<USMGraphNode_TransitionEdge>(NodeTemplate))
			{
				UClass* DefaultClass = Settings->DefaultTransitionClass.LoadSynchronous();
				if(!FSMNodeClassRule::IsBaseClass(DefaultClass))
				{
					NodeClass = DefaultClass;
				}
			}
		}
		
		// Set the actual node class if one is set.
		if (NodeClass)
		{
			if (USMGraphNode_Base* GraphNode = Cast<USMGraphNode_Base>(NodeTemplate))
			{
				GraphNode->SetNodeClass(NodeClass);
				GraphNode->CreateGraphPropertyGraphs();

				// If the instance has a custom name supplied use that.
				if (USMStateInstance_Base* NodeInstance = Cast<USMStateInstance_Base>(GraphNode->GetNodeTemplate()))
				{
					const FString DefaultNodeName = FSMBlueprintEditorUtils::GetProjectEditorSettings()->bRestrictInvalidCharacters ?
						FSMBlueprintEditorUtils::GetSafeStateName(NodeInstance->GetNodeDisplayName()) : NodeInstance->GetNodeDisplayName();
					if (!DefaultNodeName.IsEmpty())
					{
						const TSharedPtr<INameValidatorInterface> NameValidator = FNameValidatorFactory::MakeValidator(GraphNode);
						FBlueprintEditorUtils::RenameGraphWithSuggestion(GraphNode->GetBoundGraph(), NameValidator, DefaultNodeName);
					}
				}
			}
		}

		// Check for transition that needs to be set from the previous state to this one.
		if(USMGraphNode_StateNodeBase* StateNode = Cast<USMGraphNode_StateNodeBase>(NodeTemplate))
		{
			if (USMGraphNode_TransitionEdge* TransitionNode = StateNode->GetPreviousTransition())
			{
				if (USMGraphNode_Base* FromNode = Cast<USMGraphNode_Base>(FromPin->GetOwningNode()))
				{
					UClass* StateMachineClass = FSMBlueprintEditorUtils::GetStateMachineClassFromGraph(ParentGraph);
					
					TArray<UClass*> TransitionClasses;
					FSMBlueprintEditorUtils::GetAllNodeSubClasses(USMTransitionInstance::StaticClass(), TransitionClasses);
					for (UClass* TransitionClass : TransitionClasses)
					{
						if (USMTransitionInstance* DefaultObject = Cast<USMTransitionInstance>(TransitionClass->GetDefaultObject()))
						{
							const FSMTransitionConnectionValidator& Filter = DefaultObject->GetAllowedConnections();
							if (Filter.IsConnectionValid(FromNode ? FromNode->GetNodeClass() : nullptr, NodeClass, StateMachineClass, false))
							{
								TransitionNode->SetNodeClass(TransitionClass);
								TransitionNode->CreateGraphPropertyGraphs();
								break;
							}
						}
					}
				}
			}
		}

		NodeTemplate->AutowireNewNode(FromPin);
		ParentGraph->NotifyGraphChanged();
		
		UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForGraphChecked(ParentGraph);
		FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
	}

	return ResultNode;
}

void FSMGraphSchemaAction_NewNode::AddReferencedObjects(FReferenceCollector& Collector)
{
	FEdGraphSchemaAction::AddReferencedObjects(Collector);
	Collector.AddReferencedObject(NodeTemplate);
}

UEdGraphNode* FSMGraphSchemaAction_NewStateMachineReferenceNode::PerformAction(UEdGraph* ParentGraph,
	UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode)
{
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");

	FOpenAssetDialogConfig SelectAssetConfig;
	SelectAssetConfig.DialogTitleOverride = LOCTEXT("ChooseStateMachinePath", "Choose a state machine");
	SelectAssetConfig.bAllowMultipleSelection = false;
	SelectAssetConfig.AssetClassNames.Add(USMBlueprint::StaticClass()->GetFName());

	// Set the path to the current folder.
	if (UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForGraph(ParentGraph))
	{
		UObject* AssetOuter = Blueprint->GetOuter();
		UPackage* AssetPackage = AssetOuter->GetOutermost();

		// Remove the file name and go directly to the folder.
		FString AssetPath = AssetPackage->GetName();
		const int LastSlashPos = AssetPath.Find(TEXT("/"), ESearchCase::IgnoreCase, ESearchDir::FromEnd);
		SelectAssetConfig.DefaultPath = AssetPath.Left(LastSlashPos);
	}

	TArray<FAssetData> AssetData = ContentBrowserModule.Get().CreateModalOpenAssetDialog(SelectAssetConfig);
	if (AssetData.Num() == 1)
	{
		USMBlueprint *ReferencedBlueprint = Cast<USMBlueprint>(AssetData[0].GetAsset());
		if (ReferencedBlueprint != nullptr)
		{
			if (!ReferencedBlueprint->HasAnyFlags(RF_Transient) && !ReferencedBlueprint->IsPendingKill())
			{
				// Create the new node.
				if (USMGraphNode_StateMachineStateNode* NewStateMachineNode = Cast<USMGraphNode_StateMachineStateNode>(Super::PerformAction(ParentGraph, FromPin, Location, bSelectNewNode)))
				{
					// Rename the graph to match reference.
					TSharedPtr<INameValidatorInterface> NameValidator = FNameValidatorFactory::MakeValidator(NewStateMachineNode);
					FBlueprintEditorUtils::RenameGraphWithSuggestion(NewStateMachineNode->GetBoundGraph(), NameValidator, ReferencedBlueprint->GetFName().ToString());

					// Convert to a reference only if valid, otherwise abort out.
					if (!NewStateMachineNode->ReferenceStateMachine(ReferencedBlueprint))
					{
						UBlueprint* ThisBlueprint = FBlueprintEditorUtils::FindBlueprintForNodeChecked(NewStateMachineNode);
						FBlueprintEditorUtils::RemoveNode(ThisBlueprint, NewStateMachineNode);

						return nullptr;
					}

					return NewStateMachineNode;
				}
			}
		}
	}

	return nullptr;
}

USMGraphSchema::USMGraphSchema(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void USMGraphSchema::CreateDefaultNodesForGraph(UEdGraph& Graph) const
{
	// Create the result node
	FGraphNodeCreator<USMGraphNode_StateMachineEntryNode> NodeCreator(Graph);
	USMGraphNode_StateMachineEntryNode* EntryNode = NodeCreator.CreateNode();
	NodeCreator.Finalize();
	SetNodeMetaData(EntryNode, FNodeMetadata::DefaultGraphNode);

	if (USMGraph* StateMachineGraph = CastChecked<USMGraph>(&Graph))
	{
		StateMachineGraph->EntryNode = EntryNode;
	}
}

EGraphType USMGraphSchema::GetGraphType(const UEdGraph* TestEdGraph) const
{
	return GT_StateMachine;
}

void USMGraphSchema::GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const
{
	Super::GetGraphContextActions(ContextMenuBuilder);

	// Vertical order for which groups show up in the context menu.
	const int32 BaseGrouping = 1;
	const int32 UserGrouping = 0;

	UClass* StateMachineClass = FSMBlueprintEditorUtils::GetStateMachineClassFromGraph(ContextMenuBuilder.CurrentGraph);
	USMStateMachineInstance* StateMachineDefault = StateMachineClass ? Cast<USMStateMachineInstance>(StateMachineClass->GetDefaultObject()) : nullptr;
	
	// Validate which nodes can be placed.
	bool bBaseStatesAllowed = true;
	bool bBaseStateMachinesAllowed = true;
	bool bReferencesAllowed = true;
	bool bParentsAllowed = true;
	
	UClass* BaseStateMachineClass = nullptr;
	if(StateMachineDefault)
	{
		const FSMStateMachineNodePlacementValidator& Rules = StateMachineDefault->GetAllowedStates();
		bBaseStatesAllowed = Rules.IsStateAllowed(USMStateInstance::StaticClass());
		bBaseStateMachinesAllowed = Rules.bAllowSubStateMachines && Rules.IsStateAllowed(USMStateMachineInstance::StaticClass());
		BaseStateMachineClass = Rules.bAllowSubStateMachines ? Rules.DefaultSubStateMachineClass.LoadSynchronous() : nullptr;
		bReferencesAllowed = Rules.bAllowReferences;
		bParentsAllowed = Rules.bAllowParents;
	}
	
	// Add new state node
	if (bBaseStatesAllowed)
	{
		TSharedPtr<FSMGraphSchemaAction_NewNode> NewNodeAction = AddNewStateNodeAction<FSMGraphSchemaAction_NewNode>(ContextMenuBuilder, FText::GetEmpty(), LOCTEXT("AddState", "Add State..."), LOCTEXT("AddStateTooltip", "A new state which contains entry points for logic execution."), BaseGrouping);
		NewNodeAction->NodeTemplate = NewObject<USMGraphNode_StateNode>(ContextMenuBuilder.OwnerOfTemporaries);
	}

	// Add new conduit node
	{
		TSharedPtr<FSMGraphSchemaAction_NewNode> NewNodeAction = AddNewStateNodeAction<FSMGraphSchemaAction_NewNode>(ContextMenuBuilder, FText::GetEmpty(), LOCTEXT("AddConduit", "Add Conduit..."), LOCTEXT("AddConduitTooltip", "A new conduit for branching to different states."), BaseGrouping);
		NewNodeAction->NodeTemplate = NewObject<USMGraphNode_ConduitNode>(ContextMenuBuilder.OwnerOfTemporaries);
	}

	// Add new state machine node
	if (bBaseStateMachinesAllowed)
	{
		TSharedPtr<FSMGraphSchemaAction_NewNode> NewNodeAction = AddNewStateNodeAction<FSMGraphSchemaAction_NewNode>(ContextMenuBuilder, FText::GetEmpty(), LOCTEXT("AddStateMachine", "Add State Machine..."), LOCTEXT("AddStateMachineTooltip", "A new state machine."), BaseGrouping);
		NewNodeAction->NodeTemplate = NewObject<USMGraphNode_StateMachineStateNode>(ContextMenuBuilder.OwnerOfTemporaries);
		NewNodeAction->NodeClass = BaseStateMachineClass;
	}

	// Add new parent state machine node
	if (bParentsAllowed)
	{
		UBlueprint* OwnerBlueprint = FBlueprintEditorUtils::FindBlueprintForGraphChecked(ContextMenuBuilder.CurrentGraph);

		TArray<USMBlueprintGeneratedClass*> ParentClasses;
		if (FSMBlueprintEditorUtils::TryGetParentClasses(OwnerBlueprint, ParentClasses))
		{
			TSharedPtr<FSMGraphSchemaAction_NewNode> NewNodeAction = AddNewStateNodeAction<FSMGraphSchemaAction_NewNode>(ContextMenuBuilder, FText::GetEmpty(), LOCTEXT("AddParentStateMachine", "Add State Machine Parent..."), LOCTEXT("AddParentStateMachineTooltip", "A new state machine from the parent graph."), BaseGrouping);
			NewNodeAction->NodeTemplate = NewObject<USMGraphNode_StateMachineParentNode>(ContextMenuBuilder.OwnerOfTemporaries);
		}
	}

	// Add new state machine reference node
	if (bReferencesAllowed)
	{
		TSharedPtr<FSMGraphSchemaAction_NewStateMachineReferenceNode> NewNodeAction = AddNewStateNodeAction<FSMGraphSchemaAction_NewStateMachineReferenceNode>(ContextMenuBuilder, FText::GetEmpty(), LOCTEXT("AddStateMachineReference", "Add State Machine Reference..."), LOCTEXT("AddStateMachineReferenceTooltip", "Link to an existing state machine."), BaseGrouping);
		NewNodeAction->NodeTemplate = NewObject<USMGraphNode_StateMachineStateNode>(ContextMenuBuilder.OwnerOfTemporaries);
	}
	
	// Entry point (only if doesn't already exist) Shouldn't need this since the entry point can't be removed.
	{
		bool bHasEntry = false;
		for (auto NodeIt = ContextMenuBuilder.CurrentGraph->Nodes.CreateConstIterator(); NodeIt; ++NodeIt)
		{
			UEdGraphNode* Node = *NodeIt;
			if (const USMGraphNode_StateMachineEntryNode* StateNode = Cast<USMGraphNode_StateMachineEntryNode>(Node))
			{
				bHasEntry = true;
				break;
			}
		}

		if (!bHasEntry)
		{
			TSharedPtr<FSMGraphSchemaAction_NewNode> Action = AddNewStateNodeAction<FSMGraphSchemaAction_NewNode>(ContextMenuBuilder, FText::GetEmpty(), LOCTEXT("AddEntryPoint", "Add Entry Point..."), LOCTEXT("AddEntryPointTooltip", "Define State Machine's Entry Point."), BaseGrouping);
			Action->NodeTemplate = NewObject<USMGraphNode_StateMachineEntryNode>(ContextMenuBuilder.OwnerOfTemporaries);
		}
	}

	if (!ContextMenuBuilder.FromPin)
	{
		// Add comment
		{
			UBlueprint* OwnerBlueprint = FBlueprintEditorUtils::FindBlueprintForGraphChecked(ContextMenuBuilder.CurrentGraph);
			const bool bIsManyNodesSelected = (FKismetEditorUtilities::GetNumberOfSelectedNodes(OwnerBlueprint) > 0);
			const FText MenuDescription = bIsManyNodesSelected ? LOCTEXT("CreateCommentSelection", "Create Comment from Selection") : LOCTEXT("AddComment", "Add Comment...");
			const FText ToolTip = LOCTEXT("CreateCommentSelectionTooltip", "Create a resizeable comment box around selected nodes.");

			TSharedPtr<FSMGraphSchemaAction_NewComment> NewComment(new FSMGraphSchemaAction_NewComment(FText::GetEmpty(), MenuDescription, ToolTip, BaseGrouping));
			ContextMenuBuilder.AddAction(NewComment);
		}
		
		// Add any state node
		{
			TSharedPtr<FSMGraphSchemaAction_NewNode> NewNodeAction = AddNewStateNodeAction<FSMGraphSchemaAction_NewNode>(ContextMenuBuilder, FText::GetEmpty(), LOCTEXT("AddAnyState", "Add Any State..."), LOCTEXT("AddAnyStateTooltip", "A special state node that represents any other state within this FSM."), BaseGrouping);
			NewNodeAction->NodeTemplate = NewObject<USMGraphNode_AnyStateNode>(ContextMenuBuilder.OwnerOfTemporaries);
		}
	}

	// Custom node actions
	{
		TArray<UClass*> NodeClasses;
		FSMBlueprintEditorUtils::GetAllNodeSubClasses(USMStateInstance_Base::StaticClass(), NodeClasses);

		UClass* FromClass = FSMBlueprintEditorUtils::GetNodeClassFromPin(ContextMenuBuilder.FromPin);

		for (UClass* NodeClass : NodeClasses)
		{
			if (NodeClass->HasAnyClassFlags(CLASS_Abstract))
			{
				continue;
			}
			
			if (USMStateInstance_Base* NodeDefault = Cast<USMStateInstance_Base>(NodeClass->GetDefaultObject()))
			{
				if (!NodeDefault->IsRegisteredWithContextMenu())
				{
					continue;
				}

				// Validate allowed placement in state machine.
				if (StateMachineDefault)
				{
					if (!StateMachineDefault->GetAllowedStates().IsStateAllowed(NodeClass))
					{
						continue;
					}
				}

				// Validate connection.
				{
					if (!NodeDefault->GetAllowedConnections().IsInboundConnectionValid(FromClass, StateMachineClass) && NodeDefault->HideFromContextMenuIfRulesFail())
					{
						continue;
					}
				}

				FText MenuDescription = FText::FromString(FString::Printf(TEXT("Add %s..."), *NodeDefault->GetNodeDisplayName()));
				const FSMNodeDescription& NodeDescription = NodeDefault->GetNodeDescription();

				TSharedPtr<FSMGraphSchemaAction_NewNode> NewNodeAction = AddNewStateNodeAction<FSMGraphSchemaAction_NewNode>(ContextMenuBuilder, NodeDescription.Category, MenuDescription, NodeDescription.Description, UserGrouping);
				if (NodeClass->IsChildOf(USMStateMachineInstance::StaticClass()))
				{
					NewNodeAction->NodeTemplate = NewObject<USMGraphNode_StateMachineStateNode>(ContextMenuBuilder.OwnerOfTemporaries);
				}
				else if (NodeClass->IsChildOf(USMConduitInstance::StaticClass()))
				{
					NewNodeAction->NodeTemplate = NewObject<USMGraphNode_ConduitNode>(ContextMenuBuilder.OwnerOfTemporaries);
				}
				else
				{
					NewNodeAction->NodeTemplate = NewObject<USMGraphNode_StateNode>(ContextMenuBuilder.OwnerOfTemporaries);
				}
				NewNodeAction->NodeClass = NodeClass;
			}
		}
	}
}

void USMGraphSchema::GetContextMenuActions(class UToolMenu* Menu, class UGraphNodeContextMenuContext* Context) const
{
	const UEdGraph* CurrentGraph = Context->Graph;
	const UEdGraphNode* InGraphNode = Context->Node;
	const UEdGraphPin* InGraphPin = Context->Pin;
	const bool bIsDebugging = Context->bIsDebugging;
	
	if (InGraphNode)
	{
		if (FSMBlueprintEditor* Editor = FSMBlueprintEditorUtils::GetStateMachineEditor(InGraphNode))
		{
			Editor->SelectedNodeForContext = MakeWeakObjectPtr<UEdGraphNode>(const_cast<UEdGraphNode*>(InGraphNode));
		}
		
		FToolMenuSection& Section = Menu->AddSection("SMGraphSchemaNodeActions", LOCTEXT("NodeActionsMenuHeader", "Node Actions"));
		{
			Section.AddMenuEntry(FGenericCommands::Get().Delete);
			Section.AddMenuEntry(FGenericCommands::Get().Cut);
			Section.AddMenuEntry(FGenericCommands::Get().Copy);
			Section.AddMenuEntry(FGenericCommands::Get().Duplicate);

			if (bool bCanRename = InGraphNode->bCanRenameNode)
			{
				if (const USMGraphNode_Base* Node = Cast<USMGraphNode_Base>(InGraphNode))
				{
					if (USMStateInstance_Base* NodeInstance = Cast<USMStateInstance_Base>(Node->GetNodeTemplate()))
					{
						bCanRename = NodeInstance->ShouldDisplayNameWidget() && !NodeInstance->ShouldUseDisplayNameOnly();
					}
				}

				if (bCanRename)
				{
					Section.AddMenuEntry(FGenericCommands::Get().Rename);
				}
			}

			if (!bIsDebugging)
			{
				FToolMenuSection& StateSection = Menu->AddSection("SMGraphSchemaStateActions", LOCTEXT("StateActionsMenuHeader", "State Actions"));
				
				if (const USMGraphNode_StateNode* StateNode = Cast<USMGraphNode_StateNode>(InGraphNode))
				{
					StateSection.AddMenuEntry(FSMEditorCommands::Get().CutAndMergeStates);
					StateSection.AddMenuEntry(FSMEditorCommands::Get().CopyAndMergeStates);
				}
				
				StateSection.AddMenuEntry(FSMEditorCommands::Get().CollapseToStateMachine);

				if (CanReplaceNode(InGraphNode))
				{
					StateSection.AddSubMenu(
						NAME_None,
						LOCTEXT("NodeActionsReplaceWith", "Replace With..."),
						LOCTEXT("NodeActionsReplaceWithToolTip", "Perform a destructive replacement of the selected node"),
						FNewMenuDelegate::CreateUObject((USMGraphSchema*const)this, &USMGraphSchema::GetReplaceWithMenuActions, InGraphNode));
				}

				if (const USMGraphNode_StateMachineStateNode* StateMachineNode = Cast<USMGraphNode_StateMachineStateNode>(InGraphNode))
				{
					//MenuBuilder->EndSection();
					FToolMenuSection& StateMachineSection = Menu->AddSection("SMGraphSchemaReferenceActions", LOCTEXT("ReferenceActionsMenuHeader", "Reference Actions"));
					{
						if (StateMachineNode->IsStateMachineReference())
						{
							StateMachineSection.AddMenuEntry(FSMEditorCommands::Get().JumpToStateMachineReference);
							StateMachineSection.AddMenuEntry(FSMEditorCommands::Get().ChangeStateMachineReference);

							if (StateMachineNode->ShouldUseIntermediateGraph())
							{
								StateMachineSection.AddMenuEntry(FSMEditorCommands::Get().DisableIntermediateGraph);
							}
							else
							{
								StateMachineSection.AddMenuEntry(FSMEditorCommands::Get().EnableIntermediateGraph);
							}
						}
						else
						{
							StateMachineSection.AddMenuEntry(FSMEditorCommands::Get().ConvertToStateMachineReference);
						}
					}
				}
			}
			else
			{
				// Allow some state machine actions while debugging
				if (const USMGraphNode_StateMachineStateNode* StateMachineNode = Cast<USMGraphNode_StateMachineStateNode>(InGraphNode))
				{
					//MenuBuilder->EndSection();
					FToolMenuSection& ReferenceSection = Menu->AddSection("SMGraphSchemaReferenceActions", LOCTEXT("ReferenceActionsMenuHeader", "Reference Actions"));
					{
						if (StateMachineNode->IsStateMachineReference())
						{
							ReferenceSection.AddMenuEntry(FSMEditorCommands::Get().JumpToStateMachineReference);
						}
					}
				}
			}
		}

		FToolMenuSection& GraphSection = Menu->AddSection("SMGraphSchemaGraphActions", LOCTEXT("GraphActionsMenuHeader", "Graph Actions"));
		{
			GraphSection.AddMenuEntry(FSMEditorCommands::Get().GoToGraph);
			GraphSection.AddMenuEntry(FSMEditorCommands::Get().GoToNodeBlueprint);
			if (const USMGraphNode_StateNode* StateNode = Cast<USMGraphNode_StateNode>(InGraphNode))
			{
				GraphSection.AddMenuEntry(FSMEditorCommands::Get().GoToPropertyBlueprint);
			}
		}

		FToolMenuSection& LinkSection = Menu->AddSection("SMGraphSchemaLinkActions", LOCTEXT("LinkActionsMenuHeader", "Link Actions"));
		{
			LinkSection.AddMenuEntry(FGraphEditorCommands::Get().BreakNodeLinks);
			if (!bIsDebugging && InGraphNode->IsA<USMGraphNode_StateNodeBase>())
			{
				LinkSection.AddMenuEntry(FSMEditorCommands::Get().CreateSelfTransition);
			}
		}

		if (const USMGraphNode_Base* GraphNode = Cast<USMGraphNode_Base>(InGraphNode))
		{
			// Check for custom graph property context menus.
			if (USMGraphK2Node_PropertyNode_Base* PropertyNode = GraphNode->GetPropertyNodeUnderMouse())
			{
				PropertyNode->GetContextMenuActionsForOwningNode(CurrentGraph, InGraphNode, InGraphPin, Menu, bIsDebugging);
			}
		}
	}

	Super::GetContextMenuActions(Menu, Context);
}

const FPinConnectionResponse USMGraphSchema::CanCreateConnection(const UEdGraphPin* PinA, const UEdGraphPin* PinB) const
{
	// Make sure the pins are not on the same node
	if (PinA->GetOwningNode() == PinB->GetOwningNode())
	{
		USMGraphNode_StateNodeBase* State = Cast<USMGraphNode_StateNodeBase>(PinA->GetOwningNode());

		// Only connect to same states when using context menu.
		if (!State || !State->bCanTransitionToSelf)
		{
			return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, LOCTEXT("PinErrorSameNode", "Use the context menu to create self-transitions."));
		}
	}

	if (PinB->GetOwningNode()->IsA<USMGraphNode_AnyStateNode>())
	{
		return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, LOCTEXT("PinErrorAnyStateNode", "Cannot connect to an AnyState Node."));
	}
	
	const bool bPinAIsEntry = PinA->GetOwningNode()->IsA(USMGraphNode_StateMachineEntryNode::StaticClass());
	const bool bPinBIsEntry = PinB->GetOwningNode()->IsA(USMGraphNode_StateMachineEntryNode::StaticClass());
	USMGraphNode_StateNodeBase* StateNodeA = Cast<USMGraphNode_StateNodeBase>(PinA->GetOwningNode());
	USMGraphNode_StateNodeBase* StateNodeB = Cast<USMGraphNode_StateNodeBase>(PinB->GetOwningNode());

	if (bPinAIsEntry || bPinBIsEntry)
	{
		if (bPinAIsEntry && StateNodeB)
		{
			// Check for user defined rules.
			FPinConnectionResponse UserResponse;
			if (!DoesUserAllowPlacement(PinA->GetOwningNode(), PinB->GetOwningNode(), UserResponse))
			{
				return UserResponse;
			}

			USMGraphNode_StateMachineEntryNode* EntryNode = CastChecked<USMGraphNode_StateMachineEntryNode>(PinA->GetOwningNode());
			if (EntryNode->bAllowParallelEntryStates)
			{
				return FPinConnectionResponse(CONNECT_RESPONSE_MAKE, TEXT(""));
			}
			
			return FPinConnectionResponse(CONNECT_RESPONSE_BREAK_OTHERS_A, TEXT(""));
		}

		if (bPinBIsEntry && StateNodeA)
		{
			return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, LOCTEXT("PinErrorEntryNode", "Cannot connect a state to an entry node."));
		}

		return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, LOCTEXT("PinErrorNotStateNode", "Entry must connect to a state node."));
	}

	const bool bPinAIsTransition = PinA->GetOwningNode()->IsA(USMGraphNode_TransitionEdge::StaticClass());
	const bool bPinBIsTransition = PinB->GetOwningNode()->IsA(USMGraphNode_TransitionEdge::StaticClass());

	if (bPinAIsTransition && bPinBIsTransition)
	{
		return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, LOCTEXT("PinErrorTransition", "Cannot wire a transition to a transition."));
	}
	if (bPinAIsTransition)
	{
		return FPinConnectionResponse(CONNECT_RESPONSE_BREAK_OTHERS_A, TEXT(""));
	}
	if (bPinBIsTransition)
	{
		return FPinConnectionResponse(CONNECT_RESPONSE_BREAK_OTHERS_B, TEXT(""));
	}

	// Check for user defined rules.
	FPinConnectionResponse UserResponse;
	if(!DoesUserAllowPlacement(PinA->GetOwningNode(), PinB->GetOwningNode(), UserResponse))
	{
		return UserResponse;
	}
	
	if (!bPinAIsTransition && !bPinBIsTransition)
	{
		return FPinConnectionResponse(CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE, TEXT("Create a transition."));
	}

	return FPinConnectionResponse(CONNECT_RESPONSE_MAKE, TEXT(""));
}

bool USMGraphSchema::TryCreateConnection(UEdGraphPin* PinA, UEdGraphPin* PinB) const
{
	if (CanCreateConnection(PinA, PinB).Response == CONNECT_RESPONSE_DISALLOW)
	{
		return false;
	}

	if (PinB->Direction == PinA->Direction)
	{
		if (USMGraphNode_StateNodeBase* Node = Cast<USMGraphNode_StateNodeBase>(PinB->GetOwningNode()))
		{
			if (PinA->Direction == EGPD_Input)
			{
				PinB = Node->GetOutputPin();
			}
			else
			{
				PinB = Node->GetInputPin();
			}
		}
	}

	const bool bModified = UEdGraphSchema::TryCreateConnection(PinA, PinB);

	if (bModified)
	{
		UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForNodeChecked(PinA->GetOwningNode());
		FBlueprintEditorUtils::MarkBlueprintAsModified(Blueprint);

		const ESMEditorConstructionScriptProjectSetting ConstructionProjectSetting = FSMBlueprintEditorUtils::GetProjectEditorSettings()->EditorNodeConstructionScriptSetting;
		if (ConstructionProjectSetting == ESMEditorConstructionScriptProjectSetting::SM_Standard)
		{
			FSMEditorConstructionManager::GetInstance()->RunAllConstructionScriptsForBlueprint(Cast<USMBlueprint>(Blueprint));
		}
	}

	return bModified;
}

bool USMGraphSchema::CreateAutomaticConversionNodeAndConnections(UEdGraphPin* A, UEdGraphPin* B) const
{
	USMGraphNode_StateNodeBase* NodeA = Cast<USMGraphNode_StateNodeBase>(A->GetOwningNode());
	USMGraphNode_StateNodeBase* NodeB = Cast<USMGraphNode_StateNodeBase>(B->GetOwningNode());

	if (NodeA == nullptr || NodeB == nullptr)
		return false;

	if (NodeA->GetOutputPin() == nullptr || NodeB->GetInputPin() == nullptr)
		return false;

	FVector2D InitPos((NodeA->NodePosX + NodeB->NodePosX) / 2, (NodeA->NodePosY + NodeB->NodePosY) / 2);

	FSMGraphSchemaAction_NewNode Action;
	Action.NodeTemplate = NewObject<USMGraphNode_TransitionEdge>(NodeA->GetGraph());

	USMGraphNode_TransitionEdge* EdgeNode = Cast<USMGraphNode_TransitionEdge>(Action.PerformAction(NodeA->GetGraph(), nullptr, InitPos, false));

	UClass* StateMachineClass = FSMBlueprintEditorUtils::GetStateMachineClassFromGraph(NodeA->GetStateMachineGraph());

	// If this is a transition being placed as part of a new state node then the state node will handle this.
	// This only matters if this transition is being connected after a state has been placed.
	TArray<UClass*> TransitionClasses;
	FSMBlueprintEditorUtils::GetAllNodeSubClasses(USMTransitionInstance::StaticClass(), TransitionClasses);
	
	for (UClass* TransitionClass : TransitionClasses)
	{
		if (USMTransitionInstance* DefaultObject = Cast<USMTransitionInstance>(TransitionClass->GetDefaultObject()))
		{
			const FSMTransitionConnectionValidator& Filter = DefaultObject->GetAllowedConnections();
			if (Filter.IsConnectionValid(NodeA->GetNodeClass(), NodeB->GetNodeClass(), StateMachineClass, false))
			{
				EdgeNode->SetNodeClass(TransitionClass);
				EdgeNode->CreateGraphPropertyGraphs();
				break;
			}
		}
	}

	if (A->Direction == EGPD_Output)
	{
		EdgeNode->CreateConnections(NodeA, NodeB);
	}
	else
	{
		EdgeNode->CreateConnections(NodeB, NodeA);
	}

	// Self transition.
	if (NodeA == NodeB)
	{
		if (USMTransitionInstance* TransitionInstance = EdgeNode->GetNodeTemplateAs<USMTransitionInstance>())
		{
			TransitionInstance->SetCanEvalWithStartState(false);
		}
	}

	UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForGraphChecked(EdgeNode->GetBoundGraph());
	FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);

	return true;
}

FConnectionDrawingPolicy* USMGraphSchema::CreateConnectionDrawingPolicy(int32 InBackLayerID, int32 InFrontLayerID,
	float InZoomFactor, const FSlateRect& InClippingRect, FSlateWindowElementList& InDrawElements,
	UEdGraph* InGraphObj) const
{
	return new FSMGraphConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, InZoomFactor, InClippingRect, InDrawElements, InGraphObj);
}

FLinearColor USMGraphSchema::GetPinTypeColor(const FEdGraphPinType& PinType) const
{
	return FLinearColor::Gray;
}

void USMGraphSchema::GetGraphDisplayInformation(const UEdGraph& Graph, FGraphDisplayInfo& DisplayInfo) const
{
	Super::GetGraphDisplayInformation(Graph, DisplayInfo);

	if (const USMGraphNode_StateMachineStateNode* StateNode = Cast<const USMGraphNode_StateMachineStateNode>(Graph.GetOuter()))
	{
		FString NodeType = "state machine";
		if (StateNode->IsA<USMGraphNode_StateMachineParentNode>())
		{
			NodeType = "parent";
		}
		else if (StateNode->IsStateMachineReference())
		{
			NodeType = "reference";
		}

		DisplayInfo.PlainName = FText::Format(LOCTEXT("StateNameGraphTitle", "{0} ({1})"), FText::FromString(StateNode->GetStateName()), FText::FromString(NodeType));
	}
	DisplayInfo.DisplayName = DisplayInfo.PlainName;
	DisplayInfo.DocExcerptName = nullptr;
	DisplayInfo.Tooltip = FText::FromName(Graph.GetFName());
}

void USMGraphSchema::BreakNodeLinks(UEdGraphNode& TargetNode) const
{
	const FScopedTransaction Transaction(NSLOCTEXT("UnrealEd", "GraphEd_BreakNodeLinks", "Break Node Links"));

	// Most nodes work fine without this. StateMachineEntry node does not.
	UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForNodeChecked(&TargetNode);
	Super::BreakNodeLinks(TargetNode);
	FBlueprintEditorUtils::MarkBlueprintAsModified(Blueprint);
}

void USMGraphSchema::BreakPinLinks(UEdGraphPin& TargetPin, bool bSendsNodeNotification) const
{
	const FScopedTransaction Transaction(NSLOCTEXT("UnrealEd", "GraphEd_BreakPinLinks", "Break Pin Links"));

	// Most nodes work fine without this. StateMachineEntry node does not.
	UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForNodeChecked(TargetPin.GetOwningNode());
	Super::BreakPinLinks(TargetPin, bSendsNodeNotification);
	FBlueprintEditorUtils::MarkBlueprintAsModified(Blueprint);

	const ESMEditorConstructionScriptProjectSetting ConstructionProjectSetting = FSMBlueprintEditorUtils::GetProjectEditorSettings()->EditorNodeConstructionScriptSetting;
	if (ConstructionProjectSetting == ESMEditorConstructionScriptProjectSetting::SM_Standard)
	{
		FSMEditorConstructionManager::GetInstance()->RunAllConstructionScriptsForBlueprint(Cast<USMBlueprint>(Blueprint));
	}
}

void USMGraphSchema::BreakSinglePinLink(UEdGraphPin* SourcePin, UEdGraphPin* TargetPin) const
{
	const FScopedTransaction Transaction(NSLOCTEXT("UnrealEd", "GraphEd_BreakSinglePinLink", "Break Pin Link"));

	// Most nodes work fine without this. StateMachineEntry node does not.
	UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForNodeChecked(TargetPin->GetOwningNode());
	Super::BreakSinglePinLink(SourcePin, TargetPin);
	FBlueprintEditorUtils::MarkBlueprintAsModified(Blueprint);
}

bool USMGraphSchema::SupportsDropPinOnNode(UEdGraphNode* InTargetNode, const FEdGraphPinType& InSourcePinType, EEdGraphPinDirection InSourcePinDirection, FText& OutErrorMessage) const
{
	return Cast<USMGraphNode_StateNode>(InTargetNode) != nullptr;
}

void USMGraphSchema::HandleGraphBeingDeleted(UEdGraph& GraphBeingRemoved) const
{
	if (UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForGraph(&GraphBeingRemoved))
	{
		if (USMGraph* StateMachineGraph = Cast<USMGraph>(&GraphBeingRemoved))
		{
			bool bHasBoundGraph = false;

			UEdGraphNode* StateMachineNode = nullptr;
			if (USMGraphK2Node_StateMachineNode* StateMachineK2Node = StateMachineGraph->GetOwningStateMachineK2Node())
			{
				StateMachineNode = StateMachineK2Node;
				bHasBoundGraph = StateMachineK2Node->GetStateMachineGraph() != nullptr;
			}
			else if (USMGraphNode_StateMachineStateNode* StateMachineStateNode = StateMachineGraph->GetOwningStateMachineNodeWhenNested())
			{
				StateMachineNode = StateMachineStateNode;
				bHasBoundGraph = !StateMachineStateNode->IsSwitchingGraphTypes() && StateMachineStateNode->GetBoundGraph() != nullptr;
			}
			else
			{
				// No entry node.
				check(false);
			}

			// Let the node delete first-- it will trigger graph removal. Helps with undo buffer transaction.
			if (bHasBoundGraph)
			{
				FBlueprintEditorUtils::RemoveNode(Blueprint, StateMachineNode, true);
				return;
			}

			// Remove this graph from the parent graph.
			UEdGraph* ParentGraph = StateMachineNode->GetGraph();
			ParentGraph->SubGraphs.Remove(StateMachineGraph);

			// Remove all contained states and transitions.
			TArray<UEdGraphNode*> AllNodes;
			StateMachineGraph->GetNodesOfClass<UEdGraphNode>(AllNodes);

			// Remove all sub nodes.
			for (UEdGraphNode* Node : AllNodes)
			{
				FBlueprintEditorUtils::RemoveNode(Blueprint, Node, true);
			}
		}

		FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
	}

	Super::HandleGraphBeingDeleted(GraphBeingRemoved);
}

bool USMGraphSchema::DoesUserAllowPlacement(const UEdGraphNode* A, const UEdGraphNode* B, FPinConnectionResponse& ResponseOut)
{
	const USMGraphNode_Base* StateNodeA = Cast<USMGraphNode_Base>(A);
	const USMGraphNode_Base* StateNodeB = Cast<USMGraphNode_Base>(B);

	ensure(!StateNodeA || !StateNodeA->IsA<USMGraphNode_TransitionEdge>());
	ensure(!StateNodeB || !StateNodeB->IsA<USMGraphNode_TransitionEdge>());
	
	UClass* StateClassA = StateNodeA ? StateNodeA->GetNodeClass() : nullptr;
	UClass* StateClassB = StateNodeB ? StateNodeB->GetNodeClass() : nullptr;
	
	if (USMGraph* StateMachineGraph = StateNodeA ? StateNodeA->GetStateMachineGraph() : StateNodeB ? StateNodeB->GetStateMachineGraph() : nullptr)
	{
		UClass* StateMachineClass = FSMBlueprintEditorUtils::GetStateMachineClassFromGraph(StateMachineGraph);

		if (StateClassA)
		{
			if (USMStateInstance_Base* DefaultObject = Cast<USMStateInstance_Base>(StateClassA->GetDefaultObject()))
			{
				const FSMStateConnectionValidator& Filter = DefaultObject->GetAllowedConnections();
				if (!Filter.IsOutboundConnectionValid(StateClassB, StateMachineClass))
				{
					FFormatNamedArguments Args;
					Args.Add(TEXT("FromClass"), FText::FromString(GetNameSafe(StateClassA)));
					Args.Add(TEXT("ToClass"), FText::FromString(GetNameSafe(StateClassB)));
					
					ResponseOut = FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, FText::Format(LOCTEXT("PinRuleViolation",
						"A user defined rule in {FromClass} prevents a connection to state class: {ToClass}."), Args));
					return false;
				}
			}
		}
		if (StateClassB)
		{
			if (USMStateInstance_Base* DefaultObject = Cast<USMStateInstance_Base>(StateClassB->GetDefaultObject()))
			{
				const FSMStateConnectionValidator& Filter = DefaultObject->GetAllowedConnections();
				if (!Filter.IsInboundConnectionValid(StateClassA, StateMachineClass))
				{
					FFormatNamedArguments Args;
					Args.Add(TEXT("FromClass"), FText::FromString(GetNameSafe(StateClassA)));
					Args.Add(TEXT("ToClass"), FText::FromString(GetNameSafe(StateClassB)));
					
					ResponseOut = FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, FText::Format(LOCTEXT("PinRuleViolation",
						"A user defined rule in {ToClass} prevents a connection from state class: {FromClass}."), Args));
					return false;
				}
			}
		}
	}

	return true;
}

bool USMGraphSchema::CanReplaceNode(const UEdGraphNode* InGraphNode)
{
	bool bCanAddStateMachine, bCanAddStateMachineRef, bCanAddState, bCanAddConduit, bCanAddParent;
	return CanReplaceNodeWith(InGraphNode, bCanAddStateMachine, bCanAddStateMachineRef, bCanAddState, bCanAddConduit, bCanAddParent);
}

bool USMGraphSchema::CanReplaceNodeWith(const UEdGraphNode* InGraphNode, bool& bStateMachine, bool& bStateMachineRef,
	bool& bState, bool& bConduit, bool& bStateMachineParent)
{
	if (!InGraphNode->IsA<USMGraphNode_StateNodeBase>())
	{
		return false;
	}

	bool bCanAddStateMachine = !InGraphNode->IsA<USMGraphNode_StateMachineStateNode>() || InGraphNode->IsA<USMGraphNode_StateMachineParentNode>();
	bool bCanAddStateMachineRef = bCanAddStateMachine;
	bool bCanAddStateMachineParent = !InGraphNode->IsA<USMGraphNode_StateMachineParentNode>();
	bool bCanAddState = !InGraphNode->IsA<USMGraphNode_StateNode>();
	bool bCanAddConduit = !InGraphNode->IsA<USMGraphNode_ConduitNode>();

	if (USMGraphNode_StateMachineStateNode const* StateMachineNode = Cast<USMGraphNode_StateMachineStateNode>(InGraphNode))
	{
		if (!StateMachineNode->IsA<USMGraphNode_StateMachineParentNode>())
		{
			if (StateMachineNode->IsStateMachineReference())
			{
				bCanAddStateMachine = true;
				bCanAddStateMachineRef = false;
			}
			else
			{
				bCanAddStateMachine = false;
				bCanAddStateMachineRef = true;
			}
		}
	}

	// Only allow parent to be set if the blueprint is a child.
	if (bCanAddStateMachineParent)
	{
		TArray<USMBlueprintGeneratedClass*> ParentClasses;
		UBlueprint* OwnerBlueprint = FBlueprintEditorUtils::FindBlueprintForNodeChecked(InGraphNode);
		bCanAddStateMachineParent = FSMBlueprintEditorUtils::TryGetParentClasses(OwnerBlueprint, ParentClasses);
	}

	bStateMachine = bCanAddStateMachine;
	bStateMachineRef = bCanAddStateMachineRef;
	bState = bCanAddState;
	bConduit = bCanAddConduit;
	bStateMachineParent = bCanAddStateMachineParent;

	return bStateMachine || bStateMachineRef || bState || bConduit || bStateMachineParent;
}

void USMGraphSchema::GetReplaceWithMenuActions(FMenuBuilder& MenuBuilder, const UEdGraphNode* InGraphNode) const
{
	bool bCanAddStateMachine, bCanAddStateMachineRef, bCanAddState, bCanAddConduit, bCanAddParent;

	if (!CanReplaceNodeWith(InGraphNode, bCanAddStateMachine, bCanAddStateMachineRef, bCanAddState, bCanAddConduit, bCanAddParent))
	{
		return;
	}

	MenuBuilder.BeginSection("SMGraphSchemaNodeReplacementActions", LOCTEXT("NodeActionsReplacementMenuHeader", "Replacement"));

	if (bCanAddStateMachine)
	{
		MenuBuilder.AddMenuEntry(FSMEditorCommands::Get().ReplaceWithStateMachine);
	}

	if (bCanAddStateMachineRef)
	{
		MenuBuilder.AddMenuEntry(FSMEditorCommands::Get().ReplaceWithStateMachineReference);
	}

	if (bCanAddParent)
	{
		MenuBuilder.AddMenuEntry(FSMEditorCommands::Get().ReplaceWithStateMachineParent);
	}

	if (bCanAddState)
	{
		MenuBuilder.AddMenuEntry(FSMEditorCommands::Get().ReplaceWithState);
	}

	if (bCanAddConduit)
	{
		MenuBuilder.AddMenuEntry(FSMEditorCommands::Get().ReplaceWithConduit);
	}

	MenuBuilder.EndSection();
}

#undef LOCTEXT_NAMESPACE
