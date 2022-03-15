// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMGraphNode_StateMachineStateNode.h"
#include "Kismet2/Kismet2NameValidators.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Graph/SMGraph.h"
#include "Graph/Schema/SMGraphSchema.h"
#include "Utilities/SMBlueprintEditorUtils.h"
#include "Graph/SMIntermediateGraph.h"
#include "Graph/Schema/SMIntermediateGraphSchema.h"
#include "ScopedTransaction.h"
#include "Helpers/SMGraphK2Node_StateReadNodes.h"
#include "Engine/Engine.h"


#define LOCTEXT_NAMESPACE "SMGraphStateMachineStateNode"

USMGraphNode_StateMachineStateNode::USMGraphNode_StateMachineStateNode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer), bReuseCurrentState_DEPRECATED(false), bReuseIfNotEndState_DEPRECATED(false),
	  bAllowIndependentTick(false),
	  bCallTickOnManualUpdate(true), bReuseReference(false), bUseTemplate(false),
	  ReferencedInstanceTemplate(nullptr), ReferencedStateMachine(nullptr), bShouldUseIntermediateGraph(false),
	  bNeedsNewReference(false), bSwitchingGraphTypes(false)
{
	DesiredNodeName = "State Machine";
}

void USMGraphNode_StateMachineStateNode::PostLoad()
{
	Super::PostLoad();

	// Check not CDO
	if (!IsTemplate() && GetLinker() && GetLinker()->IsPersistent() && GetLinker()->IsLoading())
	{
		// Make sure the state machine default instance is setup.
		InitStateMachineReferenceTemplate(true);
	}
}

void USMGraphNode_StateMachineStateNode::PostPlacedNewNode()
{
	SetToCurrentVersion();
	
	CreateBoundGraph();
	UpdateEditState();

	if (bGenerateTemplateOnNodePlacement)
	{
		InitTemplate();
	}
}

void USMGraphNode_StateMachineStateNode::PostPasteNode()
{
	// Update the runtime node guid to prevent duplicate guid generation during runtime initialization.
	// Intermediate graphs take care of this on their own from their container node.
	if (BoundGraph && !HasIntermediateGraph())
	{
		FSMNode_Base* RuntimeNode = FSMBlueprintEditorUtils::GetRuntimeNodeFromGraph(BoundGraph);
		check(RuntimeNode);
		RuntimeNode->GenerateNewNodeGuid();
	}
	
	Super::PostPasteNode();
	
	if (IsStateMachineReference())
	{
		if (!HasIntermediateGraph())
		{
			FSMBlueprintEditorUtils::RemoveAllNodesFromGraph(BoundGraph);

			const UEdGraphSchema* Schema = BoundGraph->GetSchema();
			Schema->CreateDefaultNodesForGraph(*BoundGraph);
		}

		InitStateMachineReferenceTemplate();
	}

	UpdateEditState();
}

void USMGraphNode_StateMachineStateNode::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	// Likely happens after an import. We need to cancel out because if we are being pasted PostPasteNode hasn't been called yet.
	// Creating a BoundGraph at this stage would crash during graph rename. Fixes #124
	if (PropertyChangedEvent.ChangeType == EPropertyChangeType::Unspecified && PropertyChangedEvent.Property == nullptr)
	{
		Super::PostEditChangeProperty(PropertyChangedEvent);
		return;
	}

	// Reference force changes and bound graph checks.
	{
		// Check if reference was forcefully changed.
		bool bReferencedChanged = false;
		if (PropertyChangedEvent.ChangeType == EPropertyChangeType::Redirected)
		{
			if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(USMGraphNode_StateMachineStateNode, ReferencedStateMachine))
			{
				bReferencedChanged = true;
			}
		}

		if (IsBoundGraphInvalid())
		{
			if (!BoundGraph)
			{
				CreateBoundGraph();
			}

			if (bReferencedChanged)
			{
				if (ReferencedStateMachine == nullptr)
				{
					bNeedsNewReference = true;
				}
			}
		}

		if (bReferencedChanged)
		{
			if (UBlueprint* Blueprint = FSMBlueprintEditorUtils::FindBlueprintForNode(this))
			{
				// Needed to fix GeneratedClassBy as null errors. Can't directly call compile at this stage either.
				// TODO: 4.24 has removed blueprint bytecode compile. Seems to work fine, tested with deleting / changing references.
				//FKismetEditorUtilities::RecompileBlueprintBytecode(Blueprint);
				FSMBlueprintEditorUtils::MarkBlueprintAsModified(Blueprint);
				CheckSetErrorMessages();
			}
		}
	}

	bool bStateChange = false;
	
	// Enable reference templates
	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(USMGraphNode_StateMachineStateNode, bUseTemplate))
	{
		if (bUseTemplate)
		{
			bReuseReference = false;
			InitStateMachineReferenceTemplate();
		}
		else
		{
			DestroyReferenceTemplate();
		}
	}
	// Enable class templates
	else if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(USMGraphNode_StateMachineStateNode, StateMachineClass))
	{
		InitTemplate();
		// Disable property graph refresh because InitTemplate handles it.
		bCreatePropertyGraphsOnPropertyChange = false;

		bStateChange = true;
	}

	UpdateEditState();

	Super::PostEditChangeProperty(PropertyChangedEvent);
	bCreatePropertyGraphsOnPropertyChange = true;
	
	if (bStateChange && PropertyChangedEvent.ChangeType != EPropertyChangeType::Redirected && AreTemplatesFullyLoaded())
	{
		FSMBlueprintEditorUtils::ConditionallyCompileBlueprint(FSMBlueprintEditorUtils::FindBlueprintForNodeChecked(this), false);
	}
}

void USMGraphNode_StateMachineStateNode::PostEditUndo()
{
	Super::PostEditUndo();
	if (BoundGraph)
	{
		BoundGraph->ClearFlags(RF_Transient);
	}
	UpdateEditState();
	InitStateMachineReferenceTemplate();
}

void USMGraphNode_StateMachineStateNode::DestroyNode()
{
	DestroyReferenceTemplate();
	Super::DestroyNode();
}

void USMGraphNode_StateMachineStateNode::ValidateNodeDuringCompilation(FCompilerResultsLog& MessageLog) const
{
	Super::ValidateNodeDuringCompilation(MessageLog);

	if (IsBoundGraphInvalid() || bNeedsNewReference)
	{
		MessageLog.Error(TEXT("Nested State Machine node is invalid for @@. Was a state machine reference deleted or replaced?"), this);
	}
}

UObject* USMGraphNode_StateMachineStateNode::GetJumpTargetForDoubleClick() const
{
	if (IsStateMachineReference() && !ShouldUseIntermediateGraph())
	{
		return GetReferenceToJumpTo();
	}
	return Super::GetJumpTargetForDoubleClick();
}

void USMGraphNode_StateMachineStateNode::JumpToDefinition() const
{
	// Only jump to reference if set and not intermediate graph.
	if (IsStateMachineReference() && !ShouldUseIntermediateGraph())
	{
		JumpToReference();
		return;
	}

	Super::JumpToDefinition();
}

void USMGraphNode_StateMachineStateNode::SetRuntimeDefaults(FSMState_Base& State) const
{
	Super::SetRuntimeDefaults(State);
	FSMStateMachine& StateMachine = (FSMStateMachine&)State;
	StateMachine.SetReuseCurrentState(ShouldReuseCurrentState(), ShouldReuseIfNotEndState());
	StateMachine.bHasAdditionalLogic = ShouldUseIntermediateGraph();
	StateMachine.bAllowIndependentTick = bAllowIndependentTick;
	StateMachine.bCallReferenceTickOnManualUpdate = bCallTickOnManualUpdate;
	StateMachine.bReuseReference = bReuseReference && IsStateMachineReference() && !ShouldUseTemplate();
	StateMachine.bWaitForEndState = ShouldWaitForEndState();
}

void USMGraphNode_StateMachineStateNode::ImportDeprecatedProperties()
{
	Super::ImportDeprecatedProperties();

	if (USMStateMachineInstance* Instance = Cast<USMStateMachineInstance>(GetNodeTemplate()))
	{
		Instance->SetReuseIfNotEndState(bReuseIfNotEndState_DEPRECATED);
		Instance->SetReuseCurrentState(bReuseCurrentState_DEPRECATED);
	}
}

void USMGraphNode_StateMachineStateNode::CheckSetErrorMessages()
{
	Super::CheckSetErrorMessages();

	if (IsBoundGraphInvalid() || bNeedsNewReference)
	{
		ErrorMsg = "Invalid Reference";
		ErrorType = EMessageSeverity::Error;
		bHasCompilerMessage = true;
	}
	else
	{
		ErrorMsg.Empty();
		bHasCompilerMessage = false;
	}
}

void USMGraphNode_StateMachineStateNode::SetNodeClass(UClass* Class)
{
	StateMachineClass = Class;
	Super::SetNodeClass(Class);
}

UObject* USMGraphNode_StateMachineStateNode::GetReferenceToJumpTo() const
{
	if (USMBlueprint* StateMachineReference = GetStateMachineReference())
	{
		// Only lookup the immediate graph of the reference blueprint.
		if(UObject* Target = FSMBlueprintEditorUtils::GetRootStateMachineGraph(Cast<UBlueprint>(StateMachineReference), false))
		{
			return Target;
		}
		// The graph doesn't exist, let's just return the top level one instead and leave it to the user to figure out.
		return FSMBlueprintEditorUtils::GetTopLevelStateMachineGraph(Cast<UBlueprint>(StateMachineReference));
	}

	return nullptr;
}

void USMGraphNode_StateMachineStateNode::JumpToReference() const
{
	if (UObject* HyperlinkTarget = GetReferenceToJumpTo())
	{
		// Automatically set the debug object to the correct instance of the referenced blueprint.
		if (UBlueprint* Blueprint = FSMBlueprintEditorUtils::FindBlueprintForNode(this))
		{
			if (USMInstance* CurrentDebugObject = Cast<USMInstance>(Blueprint->GetObjectBeingDebugged()))
			{
				UBlueprint* OtherBlueprint = FSMBlueprintEditorUtils::FindBlueprintForGraph(Cast<UEdGraph>(HyperlinkTarget));
				if (OtherBlueprint && Blueprint != OtherBlueprint)
				{
					if (FSMNode_Base* RuntimeNode = FSMBlueprintEditorUtils::GetRuntimeNodeFromGraph(BoundGraph))
					{
						// Find the correct runtime instance mapping to this node.
						if (const FSMNode_Base* RealRuntimeNode = CurrentDebugObject->GetDebugStateMachineConst().GetRuntimeNode(RuntimeNode->GetNodeGuid()))
						{
							// The real node has access to the full path guid.
							if (USMInstance* OtherInstance = CurrentDebugObject->GetReferencedInstanceByGuid(RealRuntimeNode->GetGuid()))
							{
								OtherBlueprint->SetObjectBeingDebugged(OtherInstance);
							}
						}
					}
				}
			}
		}

		FKismetEditorUtilities::BringKismetToFocusAttentionOnObject(HyperlinkTarget);
	}
}

bool USMGraphNode_StateMachineStateNode::ReferenceStateMachine(USMBlueprint* OtherStateMachine, bool bRestrictCircularReference)
{
	UBlueprint* ThisBlueprint = FSMBlueprintEditorUtils::FindBlueprintForNodeChecked(this);

	if (bRestrictCircularReference)
	{
		// Can't reference itself.
		if (ThisBlueprint == OtherStateMachine)
		{
			FNotificationInfo Info(LOCTEXT("TriedToReferenceSelf", "Cannot directly reference the same state machine."));

			Info.bUseLargeFont = false;
			Info.ExpireDuration = 5.0f;

			TSharedPtr<SNotificationItem> Notification = FSlateNotificationManager::Get().AddNotification(Info);
			if (Notification.IsValid())
			{
				Notification->SetCompletionState(SNotificationItem::CS_Fail);
			}

			return false;
		}

		// Check to make sure the reference doesn't have any nodes that reference this state machine.
		USMGraph* ReferencedRootStateMachineGraph = FSMBlueprintEditorUtils::GetRootStateMachineGraph(OtherStateMachine, true);
		if (ReferencedRootStateMachineGraph != nullptr)
		{
			TArray<USMGraphNode_StateMachineStateNode*> FoundNodes;
			FSMBlueprintEditorUtils::GetAllNodesOfClassNested<USMGraphNode_StateMachineStateNode>(ReferencedRootStateMachineGraph, FoundNodes);
			for (USMGraphNode_StateMachineStateNode* Node : FoundNodes)
			{
				if (Node->GetStateMachineReference() == ThisBlueprint)
				{
					FNotificationInfo Info(LOCTEXT("CircularReference", "Cannot reference a state machine which contains a reference to the caller."));

					Info.bUseLargeFont = false;
					Info.ExpireDuration = 5.0f;

					TSharedPtr<SNotificationItem> Notification = FSlateNotificationManager::Get().AddNotification(Info);
					if (Notification.IsValid())
					{
						Notification->SetCompletionState(SNotificationItem::CS_Fail);
					}

					return false;
				}
			}
		}
	}

	ReferencedStateMachine = OtherStateMachine;
	bNeedsNewReference = ReferencedStateMachine == nullptr;

	InitStateMachineReferenceTemplate();

	if (!BoundGraph)
	{
		CreateBoundGraph();
	}
	else
	{
		// Look for references to this and update the nodes.
		TArray<USMGraphK2Node_StateReadNode_GetStateMachineReference*> References;
		FSMBlueprintEditorUtils::GetAllNodesOfClassNested<USMGraphK2Node_StateReadNode_GetStateMachineReference>(BoundGraph, References);
		for (USMGraphK2Node_StateReadNode_GetStateMachineReference* Reference : References)
		{
			Reference->ReconstructNode();
		}
	}

	CheckSetErrorMessages();

	UpdateEditState();

	return true;
}

void USMGraphNode_StateMachineStateNode::InitStateMachineReferenceTemplate(bool bInitialLoad)
{
	if (!ShouldUseTemplate() || ReferencedStateMachine == nullptr || (bInitialLoad && ReferencedInstanceTemplate && ReferencedStateMachine && ReferencedInstanceTemplate->GetClass() == ReferencedStateMachine->GeneratedClass))
	{
		return;
	}

	Modify();

	const FString TemplateName = FString::Printf(TEXT("NODE_TEMPLATE_%s_%s_%s"), *GetName(), *ReferencedStateMachine->GeneratedClass->GetName(), *FGuid::NewGuid().ToString());
	USMInstance* NewTemplate = ReferencedStateMachine ? NewObject<USMInstance>(this, ReferencedStateMachine->GeneratedClass, *TemplateName, RF_ArchetypeObject | RF_Transactional | RF_Public) : nullptr;

	if (ReferencedInstanceTemplate)
	{
		if (NewTemplate)
		{
			UEngine::CopyPropertiesForUnrelatedObjects(ReferencedInstanceTemplate, NewTemplate);
		}

		// Original template isn't needed any more.
		DestroyReferenceTemplate();
	}

	ReferencedInstanceTemplate = NewTemplate;
}

void USMGraphNode_StateMachineStateNode::DestroyReferenceTemplate()
{
	if (ReferencedInstanceTemplate)
	{
		ReferencedInstanceTemplate->Modify();
		FSMBlueprintEditorUtils::TrashObject(ReferencedInstanceTemplate);
		ReferencedInstanceTemplate = nullptr;
	}
}

void USMGraphNode_StateMachineStateNode::SetUseIntermediateGraph(bool bValue)
{
	if (bShouldUseIntermediateGraph == bValue)
	{
		return;
	}

	const FScopedTransaction Transaction(NSLOCTEXT("UnrealEd", "UseIntermediateGraph", "Use Intermediate Graph"));
	Modify();

	bShouldUseIntermediateGraph = bValue;

	if (NeedsIntermediateGraph())
	{
		CreateBoundGraph();
	}

	UpdateEditState();

	FSMBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(FSMBlueprintEditorUtils::FindBlueprintForNodeChecked(this));
}

void USMGraphNode_StateMachineStateNode::CreateBoundGraph()
{
	UEdGraph* ParentGraph = GetGraph();
	check(ParentGraph);
	
	FName GraphName = NAME_None;
	FSMNode_Base* OriginalStateMachine = nullptr;

	Modify();
	ParentGraph->Modify();
	
	if (BoundGraph != nullptr)
	{
		BoundGraph->Modify();

		if (HasIntermediateGraph())
		{
			if (ParentGraph->SubGraphs.Find(BoundGraph) != INDEX_NONE)
			{
				ParentGraph->SubGraphs.Remove(BoundGraph);
			}
		}
		else
		{
			OriginalStateMachine = FSMBlueprintEditorUtils::GetRuntimeNodeFromGraph(BoundGraph);
			GraphName = BoundGraph->GetFName();

			// bSwitchingGraphTypes signals to the schema not to remove this node on graph deletion.
			bSwitchingGraphTypes = true;
			FSMBlueprintEditorUtils::RemoveGraph(FSMBlueprintEditorUtils::FindBlueprintForNode(this), BoundGraph);
			bSwitchingGraphTypes = false;
		}
		BoundGraph = nullptr;
	}

	if (NeedsIntermediateGraph())
	{
		BoundGraph = FBlueprintEditorUtils::CreateNewGraph(
			this,
			GraphName,
			USMIntermediateGraph::StaticClass(),
			USMIntermediateGraphSchema::StaticClass());
	}
	else
	{
		BoundGraph = FBlueprintEditorUtils::CreateNewGraph(
			this,
			GraphName,
			USMGraph::StaticClass(),
			USMGraphSchema::StaticClass());
	}
	check(BoundGraph);

	// Name the graph if it wasn't set properly already.
	if (GraphName.IsNone() || BoundGraph->GetFName() != GraphName)
	{
		TSharedPtr<INameValidatorInterface> NameValidator = FNameValidatorFactory::MakeValidator(this);
		FBlueprintEditorUtils::RenameGraphWithSuggestion(BoundGraph, NameValidator, DesiredNodeName);
	}

	// Initialize the state machine graph
	const UEdGraphSchema* Schema = BoundGraph->GetSchema();
	Schema->CreateDefaultNodesForGraph(*BoundGraph);

	// Set original state machine guid if it exists.
	if (OriginalStateMachine)
	{
		FSMBlueprintEditorUtils::UpdateRuntimeNodeForGraph(OriginalStateMachine, BoundGraph);
	}

	if (ParentGraph->SubGraphs.Find(BoundGraph) == INDEX_NONE)
	{
		ParentGraph->SubGraphs.Add(BoundGraph);
	}
}

void USMGraphNode_StateMachineStateNode::UpdateEditState()
{
	if (BoundGraph != nullptr)
	{
		BoundGraph->bEditable = !IsStateMachineReference() || (IsUsingIntermediateGraph() && !bNeedsNewReference);
	}
}

bool USMGraphNode_StateMachineStateNode::IsBoundGraphInvalid() const
{
	return !BoundGraph || (!IsStateMachineReference() && HasIntermediateGraph());
}

bool USMGraphNode_StateMachineStateNode::NeedsIntermediateGraph() const
{
	return ShouldUseIntermediateGraph() && !HasIntermediateGraph();
}

bool USMGraphNode_StateMachineStateNode::HasIntermediateGraph() const
{
	return BoundGraph && BoundGraph->IsA<USMIntermediateGraph>();
}

bool USMGraphNode_StateMachineStateNode::IsUsingIntermediateGraph() const
{
	return ShouldUseIntermediateGraph() && HasIntermediateGraph();
}

bool USMGraphNode_StateMachineStateNode::ShouldUseIntermediateGraph() const
{
	return IsStateMachineReference() && bShouldUseIntermediateGraph;
}

bool USMGraphNode_StateMachineStateNode::ShouldUseTemplate() const
{
	return bUseTemplate;
}

bool USMGraphNode_StateMachineStateNode::ShouldReuseCurrentState() const
{
	if (USMStateMachineInstance* Instance = Cast<USMStateMachineInstance>(GetNodeTemplate()))
	{
		return Instance->GetReuseCurrentState();
	}

	return false;
}

bool USMGraphNode_StateMachineStateNode::ShouldReuseIfNotEndState() const
{
	if (USMStateMachineInstance* Instance = Cast<USMStateMachineInstance>(GetNodeTemplate()))
	{
		return Instance->GetReuseIfNotEndState();
	}

	return false;
}

bool USMGraphNode_StateMachineStateNode::ShouldWaitForEndState() const
{
	if (USMStateMachineInstance* Instance = Cast<USMStateMachineInstance>(GetNodeTemplate()))
	{
		return Instance->GetWaitForEndState();
	}

	return false;
}

bool USMGraphNode_StateMachineStateNode::IsSwitchingGraphTypes() const
{
	return bSwitchingGraphTypes;
}

FLinearColor USMGraphNode_StateMachineStateNode::Internal_GetBackgroundColor() const
{
	const USMEditorSettings* Settings = FSMBlueprintEditorUtils::GetEditorSettings();
	const FLinearColor ColorModifier(0.5f, 0.9f, 0.9f, IsStateMachineReference() ? 0.25f : 0.7f);

	if (IsEndState())
	{
		return Settings->EndStateColor * ColorModifier;
	}

	const FLinearColor DefaultColor = Settings->StateMachineDefaultColor;

	// No input -- node unreachable.
	if (!HasInputConnections())
	{
		return DefaultColor * ColorModifier;
	}

	// State is active
	if (HasLogicStates())
	{
		return Settings->StateMachineWithLogicColor * ColorModifier;
	}

	return DefaultColor * ColorModifier;
}

bool USMGraphNode_StateMachineStateNode::HasLogicStates() const
{
	if (bNeedsNewReference)
	{
		return false;
	}

	USMGraph* Graph = IsStateMachineReference() ? FSMBlueprintEditorUtils::GetRootStateMachineGraph(ReferencedStateMachine, true) : Cast<USMGraph>(BoundGraph);
	if (Graph == nullptr)
	{
		return false;
	}

	return Graph->HasAnyLogicConnections();
}

#undef LOCTEXT_NAMESPACE
