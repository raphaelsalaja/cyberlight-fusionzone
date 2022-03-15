// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMGraphNode_TransitionEdge.h"
#include "Helpers/SMGraphK2Node_FunctionNodes.h"
#include "Helpers/SMGraphK2Node_StateWriteNodes.h"
#include "Helpers/SMGraphK2Node_FunctionNodes_NodeInstance.h"
#include "RootNodes/SMGraphK2Node_TransitionEnteredNode.h"
#include "RootNodes/SMGraphK2Node_TransitionInitializedNode.h"
#include "RootNodes/SMGraphK2Node_TransitionShutdownNode.h"
#include "Graph/Schema/SMTransitionGraphSchema.h"
#include "Graph/SMTransitionGraph.h"
#include "Graph/Nodes/SMGraphNode_StateNode.h"
#include "Blueprints/SMBlueprintEditor.h"
#include "Utilities/SMBlueprintEditorUtils.h"

#include "SMTransition.h"

#include "EdGraphUtilities.h"
#include "EdGraph/EdGraphPin.h"
#include "EdGraph/EdGraph.h"
#include "Kismet2/KismetEditorUtilities.h"


#define LOCTEXT_NAMESPACE "SMGraphTransition"

USMGraphNode_TransitionEdge::USMGraphNode_TransitionEdge(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer), DelegateOwnerInstance(SMDO_This), DelegateOwnerClass(nullptr),
	  PriorityOrder_DEPRECATED(0),
	  bCanEvaluate_DEPRECATED(true), bCanEvaluateFromEvent_DEPRECATED(true), bCanEvalWithStartState_DEPRECATED(true),
	  bWasEvaluating(false), TimeSinceHover(0), bIsHoveredByUser(false)
{
	bCanRenameNode = false;
	LastHoverTimeStamp = FDateTime::UtcNow();
}

void USMGraphNode_TransitionEdge::SetRuntimeDefaults(FSMTransition& Transition) const
{
	Transition.NodePosition = NodePosition;
	
	if (USMTransitionInstance* Instance = Cast<USMTransitionInstance>(GetNodeTemplate()))
	{
		Transition.bAlwaysFalse = !PossibleToTransition();
		Transition.ConditionalEvaluationType = GetTransitionGraph()->GetConditionalEvaluationType();
		Transition.Priority = Instance->GetPriorityOrder();
		Transition.bCanEvaluate = Instance->bCanEvaluate;
		Transition.bCanEvaluateFromEvent = Instance->GetCanEvaluateFromEvent();
		Transition.bCanEvalWithStartState = Instance->GetCanEvalWithStartState();
		Transition.bRunParallel = Instance->GetRunParallel();
		Transition.bEvalIfNextStateActive = Instance->GetEvalIfNextStateActive();
		Transition.SetNodeName(GetTransitionName());
	}
}

void USMGraphNode_TransitionEdge::CopyFrom(const USMGraphNode_TransitionEdge& Transition)
{
	TransitionClass = Transition.TransitionClass;
	DelegateOwnerInstance = Transition.DelegateOwnerInstance;
	DelegateOwnerClass = Transition.DelegateOwnerClass;
	DelegatePropertyName = Transition.DelegatePropertyName;
	NodeInstanceTemplate = Transition.NodeInstanceTemplate;
}

void USMGraphNode_TransitionEdge::AllocateDefaultPins()
{
	UEdGraphPin* Inputs = CreatePin(EGPD_Input, TEXT("Transition"), TEXT("In"));
	Inputs->bHidden = true;
	UEdGraphPin* Outputs = CreatePin(EGPD_Output, TEXT("Transition"), TEXT("Out"));
	Outputs->bHidden = true;
}

FText USMGraphNode_TransitionEdge::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return FText::FromString(GetTransitionName());
}

void USMGraphNode_TransitionEdge::PinConnectionListChanged(UEdGraphPin* Pin)
{
	Super::PinConnectionListChanged(Pin);
	if (Pin->LinkedTo.Num() == 0)
	{
		// Commit suicide; transitions must always have an input and output connection
		Modify();

		// Our parent graph will have our graph in SubGraphs so needs to be modified to record that.
		if (UEdGraph* ParentGraph = GetGraph())
		{
			ParentGraph->Modify();
		}

		DestroyNode();
	}
}

void USMGraphNode_TransitionEdge::PostPlacedNewNode()
{
	SetToCurrentVersion();
	CreateBoundGraph();
	SetupDelegateDefaults();

	if (bGenerateTemplateOnNodePlacement)
	{
		InitTemplate();

		if (FSMBlueprintEditorUtils::GetProjectEditorSettings()->bDefaultNewTransitionsToTrue)
		{
			// Set default transition value to true if applicable.
			USMTransitionGraph* TransitionGraph = GetTransitionGraph();
			if (TransitionGraph->ResultNode)
			{
				const UEdGraphSchema* Schema = TransitionGraph->GetSchema();
				check(Schema);
				Schema->TrySetDefaultValue(*TransitionGraph->ResultNode->GetTransitionEvaluationPin(), "True");
			}
		}
	}
}

void USMGraphNode_TransitionEdge::PrepareForCopying()
{
	Super::PrepareForCopying();
	BoundGraph->Rename(nullptr, this, REN_DoNotDirty | REN_DontCreateRedirectors);
}

void USMGraphNode_TransitionEdge::PostPasteNode()
{
	if (!BoundGraph)
	{
		CreateBoundGraph();
	}

	TArray<UEdGraphNode*> ContainedNodes;
	FSMBlueprintEditorUtils::GetAllNodesOfClassNested<UEdGraphNode>(BoundGraph, ContainedNodes);

	for (UEdGraphNode* GraphNode : ContainedNodes)
	{
		GraphNode->CreateNewGuid();
		GraphNode->PostPasteNode();
		// Required to correct context display issues.
		GraphNode->ReconstructNode();
	}

	Super::PostPasteNode();

	UEdGraphPin* InputPin = GetInputPin();
	UEdGraphPin* OutputPin = GetOutputPin();
	check(InputPin);
	check(OutputPin);

	if (InputPin->LinkedTo.Num() == 0 && OutputPin->LinkedTo.Num() == 0)
	{
		// If this transition is being copied & pasted by itself, look for nodes the user may want to link.
		
		TArray<USMGraphNode_StateNodeBase*> StateNodes;
		StateNodes.Reserve(2);
		if (FSMBlueprintEditor* BlueprintEditor = FSMBlueprintEditorUtils::GetStateMachineEditor(this))
		{
			const TSet<TWeakObjectPtr<USMGraphNode_Base>>& Selection = BlueprintEditor->GetSelectedGraphNodesDuringPaste();
			if (Selection.Num() == 1)
			{
				if (USMGraphNode_TransitionEdge* Transition = Cast<USMGraphNode_TransitionEdge>(Selection.CreateConstIterator()->Get()))
				{
					// For a single selected transition add the pasted transition to the stack.
					if (USMGraphNode_StateNodeBase* FromState = Transition->GetFromState())
					{
						StateNodes.Add(FromState);
					}
					if (USMGraphNode_StateNodeBase* ToState = Transition->GetToState())
					{
						StateNodes.Add(ToState);
					}
				}
				else if (USMGraphNode_StateNodeBase* State = Cast<USMGraphNode_StateNodeBase>(Selection.CreateConstIterator()->Get()))
				{
					// Single selected state - treat this as a self transition.
					StateNodes.Add(State);
					StateNodes.Add(State);
				}
			}
			else
			{
				// Check for multiple selected states.
				for (TWeakObjectPtr<USMGraphNode_Base> Object : Selection)
				{
					if (USMGraphNode_StateNodeBase* StateNode = Cast<USMGraphNode_StateNodeBase>(Object.Get()))
					{
						if (StateNodes.Num() == 2)
						{
							// Only allow two selected state nodes.
							StateNodes.Empty();
							break;
						}
				
						StateNodes.Add(StateNode);
					}
				}
			}
		}

		if (StateNodes.Num() == 2)
		{
			check(StateNodes[0]);
			check(StateNodes[1]);
			InputPin->MakeLinkTo(StateNodes[0]->GetOutputPin());
			OutputPin->MakeLinkTo(StateNodes[1]->GetInputPin());
		}
	}

	// Destroy this node if there are no valid connections to any states.
	for (UEdGraphPin* Pin : Pins)
	{
		if (Pin->LinkedTo.Num() == 0)
		{
			DestroyNode();
			break;
		}
	}
}

void USMGraphNode_TransitionEdge::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	const FName PropertyName = PropertyChangedEvent.GetPropertyName();

	// Enable templates
	if (PropertyName == GET_MEMBER_NAME_CHECKED(USMGraphNode_TransitionEdge, TransitionClass))
	{
		InitTemplate();
	}
	
	Super::PostEditChangeProperty(PropertyChangedEvent);
	
	if (PropertyName == GET_MEMBER_NAME_CHECKED(USMGraphNode_TransitionEdge, DelegatePropertyName))
	{
		InitTransitionDelegate();
	}
	else if(PropertyName == GET_MEMBER_NAME_CHECKED(USMGraphNode_TransitionEdge, DelegateOwnerInstance))
	{
		DelegatePropertyName = NAME_None;
		DelegateOwnerClass = nullptr;
		InitTransitionDelegate();
	}
	else if (PropertyName == GET_MEMBER_NAME_CHECKED(USMGraphNode_TransitionEdge, DelegateOwnerClass))
	{
		DelegatePropertyName = NAME_None;
		InitTransitionDelegate();
	}
}

void USMGraphNode_TransitionEdge::DestroyNode()
{
	Modify();
	if (BoundGraph)
	{
		BoundGraph->Modify();
	}
	
	UEdGraph* GraphToRemove = BoundGraph;

	BoundGraph = nullptr;
	Super::DestroyNode();

	if (GraphToRemove)
	{
		UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForNodeChecked(this);
		FBlueprintEditorUtils::RemoveGraph(Blueprint, GraphToRemove, EGraphRemoveFlags::Recompile);
	}
}

void USMGraphNode_TransitionEdge::ReconstructNode()
{
	Super::ReconstructNode();
	RefreshTransitionDelegate();
}

void USMGraphNode_TransitionEdge::ResetDebugState()
{
	Super::ResetDebugState();

	// Prevents a previous cycle from showing it as running.
	if (const FSMTransition* DebugNode = (FSMTransition*)GetDebugNode())
	{
		const_cast<FSMTransition*>(DebugNode)->bWasEvaluating = bWasEvaluating = false;
	}
}

void USMGraphNode_TransitionEdge::UpdateTime(float DeltaTime)
{
	const USMEditorSettings* Settings = FSMBlueprintEditorUtils::GetEditorSettings();
	if (Settings->bDisplayTransitionEvaluation)
	{
		if (const FSMTransition* DebugNode = (FSMTransition*)GetDebugNode())
		{
			if (WasEvaluating() && (DebugNode->IsActive() || DebugNode->bWasActive))
			{
				// Cancel evaluation display and let the super method reset.
				bWasEvaluating = false;
				bWasDebugActive = false;
			}
			else if (DebugNode->bIsEvaluating || DebugNode->bWasEvaluating)
			{
				// Not active but evaluating.
				bIsDebugActive = true;
				bWasEvaluating = true;
			}
			const_cast<FSMTransition*>(DebugNode)->bWasEvaluating = false;
		}
	}

	Super::UpdateTime(DeltaTime);

	if (!WasDebugNodeActive())
	{
		bWasEvaluating = false;
	}
}

void USMGraphNode_TransitionEdge::ImportDeprecatedProperties()
{
	Super::ImportDeprecatedProperties();

	if (USMTransitionInstance* Instance = Cast<USMTransitionInstance>(GetNodeTemplate()))
	{
		Instance->bCanEvaluate = bCanEvaluate_DEPRECATED;
		Instance->SetCanEvaluateFromEvent(bCanEvaluateFromEvent_DEPRECATED);
		Instance->SetCanEvalWithStartState(bCanEvalWithStartState_DEPRECATED);
		Instance->SetPriorityOrder(PriorityOrder_DEPRECATED);
	}
}

void USMGraphNode_TransitionEdge::PlaceDefaultInstanceNodes()
{
	Super::PlaceDefaultInstanceNodes();

	USMGraphK2Node_TransitionResultNode* ResultNode = FSMBlueprintEditorUtils::GetFirstNodeOfClassNested<USMGraphK2Node_TransitionResultNode>(BoundGraph);
	USMGraphK2Node_TransitionInstance_CanEnterTransition* InstanceCanEnterTransition = nullptr;
	if (FSMBlueprintEditorUtils::PlaceNodeIfNotSet<USMGraphK2Node_TransitionInstance_CanEnterTransition>(BoundGraph, ResultNode, &InstanceCanEnterTransition, EGPD_Input, -550))
	{
		// Pin names won't match correcty so manually wire.
		InstanceCanEnterTransition->GetSchema()->TryCreateConnection(InstanceCanEnterTransition->FindPin(UEdGraphSchema_K2::PN_ReturnValue), ResultNode->GetInputPin());
	}

	FSMBlueprintEditorUtils::SetupDefaultPassthroughNodes<USMGraphK2Node_TransitionEnteredNode, USMGraphK2Node_TransitionInstance_OnTransitionTaken>(BoundGraph);
	FSMBlueprintEditorUtils::SetupDefaultPassthroughNodes<USMGraphK2Node_TransitionInitializedNode, USMGraphK2Node_TransitionInstance_OnTransitionInitialized>(BoundGraph);
	FSMBlueprintEditorUtils::SetupDefaultPassthroughNodes<USMGraphK2Node_TransitionShutdownNode, USMGraphK2Node_TransitionInstance_OnTransitionShutdown>(BoundGraph);
}

void USMGraphNode_TransitionEdge::CreateBoundGraph()
{
	// Create a new state machine graph
	check(BoundGraph == nullptr);
	BoundGraph = FBlueprintEditorUtils::CreateNewGraph(
		this,
		NAME_None,
		USMTransitionGraph::StaticClass(),
		USMTransitionGraphSchema::StaticClass());
	check(BoundGraph);

	// Find an interesting name
	FEdGraphUtilities::RenameGraphToNameOrCloseToName(BoundGraph, GetTransitionName());

	// Initialize the state machine graph
	const UEdGraphSchema* Schema = BoundGraph->GetSchema();
	Schema->CreateDefaultNodesForGraph(*BoundGraph);

	// Add the new graph as a child of our parent graph
	UEdGraph* ParentGraph = GetGraph();

	if (ParentGraph->SubGraphs.Find(BoundGraph) == INDEX_NONE)
	{
		ParentGraph->SubGraphs.Add(BoundGraph);
	}
}

void USMGraphNode_TransitionEdge::SetBoundGraph(UEdGraph* Graph)
{
	BoundGraph = Graph;
}

UClass* USMGraphNode_TransitionEdge::GetSelectedDelegateOwnerClass() const
{
	if (DelegateOwnerInstance == SMDO_This)
	{
		return FBlueprintEditorUtils::FindBlueprintForNodeChecked(this)->SkeletonGeneratedClass;
	}
	
	if (DelegateOwnerInstance == SMDO_PreviousState)
	{
		if (USMGraphNode_StateNodeBase* PreviousState = GetFromState())
		{
			if (UClass* NodeClass = PreviousState->GetNodeClass())
			{
				if (UBlueprint* Blueprint = UBlueprint::GetBlueprintFromClass(NodeClass))
				{
					return Blueprint->SkeletonGeneratedClass;
				}

				return NodeClass;
			}
		}
	}
	
	if (UBlueprintGeneratedClass* BPGC = Cast<UBlueprintGeneratedClass>(DelegateOwnerClass))
	{
		if(UBlueprint* BP = Cast<UBlueprint>(BPGC->ClassGeneratedBy))
		{
			return BP->SkeletonGeneratedClass;
		}
	}

	return DelegateOwnerClass;
}

void USMGraphNode_TransitionEdge::SetupDelegateDefaults()
{
	UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForNodeChecked(this);
	DelegateOwnerClass = Blueprint->SkeletonGeneratedClass;
}

void USMGraphNode_TransitionEdge::InitTransitionDelegate()
{
	if (!BoundGraph)
	{
		return;
	}

	// Backup existing.
	FVector2D PreviousEntryPosition;
	bool bHadPreviousNodes = false;
	UEdGraphPin* PreviousThenPin = nullptr;
	TArray<USMGraphK2Node_FunctionNode_TransitionEvent*> PreviousEventNodes;
	FSMBlueprintEditorUtils::GetAllNodesOfClassNested<USMGraphK2Node_FunctionNode_TransitionEvent>(BoundGraph, PreviousEventNodes);
	for (USMGraphK2Node_FunctionNode_TransitionEvent* EventNode : PreviousEventNodes)
	{
		bHadPreviousNodes = true;
		PreviousEntryPosition = FVector2D(EventNode->NodePosX, EventNode->NodePosY);
		PreviousThenPin = EventNode->GetThenPin();
	}

	// Create new.
	if (FMulticastDelegateProperty* DelegateProperty = FSMBlueprintEditorUtils::GetDelegateProperty(DelegatePropertyName, GetSelectedDelegateOwnerClass()))
	{
		// Event entry node.
		FGraphNodeCreator<USMGraphK2Node_FunctionNode_TransitionEvent> NodeCreator(*BoundGraph);
		USMGraphK2Node_FunctionNode_TransitionEvent* OurEventNode = NodeCreator.CreateNode();
		const FVector2D Position = bHadPreviousNodes ? PreviousEntryPosition : BoundGraph->GetGoodPlaceForNewNode();
		OurEventNode->NodePosX = Position.X;
		OurEventNode->NodePosY = Position.Y;
		OurEventNode->SetEventReferenceFromDelegate(DelegateProperty, DelegateOwnerInstance);
		OurEventNode->TransitionClass = TransitionClass;
		NodeCreator.Finalize();
		if (PreviousThenPin)
		{
			OurEventNode->GetThenPin()->CopyPersistentDataFromOldPin(*PreviousThenPin);
		}

		// Create return node if it doesn't exist.
		TArray<USMGraphK2Node_StateWriteNode_TransitionEventReturn*> ResultNodes;
		FSMBlueprintEditorUtils::GetAllNodesOfClassNested<USMGraphK2Node_StateWriteNode_TransitionEventReturn>(BoundGraph, ResultNodes);

		if (!bHadPreviousNodes || ResultNodes.Num() == 0)
		{
			FGraphNodeCreator<USMGraphK2Node_StateWriteNode_TransitionEventReturn> NodeReturnCreator(*BoundGraph);
			USMGraphK2Node_StateWriteNode_TransitionEventReturn* OurReturnNode = NodeReturnCreator.CreateNode();
			OurReturnNode->NodePosX = OurEventNode->NodePosX + OurEventNode->NodeWidth + 450;
			OurReturnNode->NodePosY = OurEventNode->NodePosY;
			NodeReturnCreator.Finalize();

			OurReturnNode->GetSchema()->TryCreateConnection(OurEventNode->GetOutputPin(), OurReturnNode->GetExecPin());
		}
	}

	// Clear existing.
	for (USMGraphK2Node_FunctionNode_TransitionEvent* EventNode : PreviousEventNodes)
	{
		FSMBlueprintEditorUtils::RemoveNode(FSMBlueprintEditorUtils::FindBlueprintForNodeChecked(this), EventNode);
	}

	UpdateTransitionDelegateGuid();
}

void USMGraphNode_TransitionEdge::GoToTransitionEventNode()
{
	if(USMGraphK2Node_FunctionNode_TransitionEvent* PreviousEventNode = FSMBlueprintEditorUtils::GetFirstNodeOfClassNested<USMGraphK2Node_FunctionNode_TransitionEvent>(BoundGraph))
	{
		FKismetEditorUtilities::BringKismetToFocusAttentionOnObject(PreviousEventNode);
	}
}

void USMGraphNode_TransitionEdge::RefreshTransitionDelegate()
{
	DelegatePropertyGuid.Invalidate();
	
	if (DelegatePropertyName.IsNone() || BoundGraph == nullptr)
	{
		// BoundGraph can be nullptr on copy paste without both states connected.
		return;
	}
	
	if (FMulticastDelegateProperty* DelegateProperty = FSMBlueprintEditorUtils::GetDelegateProperty(DelegatePropertyName, GetSelectedDelegateOwnerClass()))
	{
		UpdateTransitionDelegateGuid();
		
		TArray<USMGraphK2Node_FunctionNode_TransitionEvent*> PreviousEventNodes;
		FSMBlueprintEditorUtils::GetAllNodesOfClassNested<USMGraphK2Node_FunctionNode_TransitionEvent>(BoundGraph, PreviousEventNodes);

		for (USMGraphK2Node_FunctionNode_TransitionEvent* EventNode : PreviousEventNodes)
		{
			EventNode->SetEventReferenceFromDelegate(DelegateProperty, DelegateOwnerInstance);
		}
	}
}

FString USMGraphNode_TransitionEdge::GetTransitionName() const
{
	USMGraphNode_StateNodeBase* State1 = GetFromState();
	USMGraphNode_StateNodeBase* State2 = GetToState();

	const FString State1Name = State1 ? State1->GetStateName() : "StartState";
	const FString State2Name = State2 ? State2->GetStateName() : "EndState";

	return FString::Printf(TEXT("%s to %s"), *State1Name, *State2Name);
}

void USMGraphNode_TransitionEdge::CreateConnections(USMGraphNode_StateNodeBase* Start, USMGraphNode_StateNodeBase* End)
{
	Pins[0]->Modify();
	Pins[0]->LinkedTo.Empty();

	Start->GetOutputPin()->Modify();
	Pins[0]->MakeLinkTo(Start->GetOutputPin());

	// This to next
	Pins[1]->Modify();
	Pins[1]->LinkedTo.Empty();

	End->GetInputPin()->Modify();
	Pins[1]->MakeLinkTo(End->GetInputPin());

	SetDefaultsWhenPlaced();
}

bool USMGraphNode_TransitionEdge::PossibleToTransition() const
{
	if (USMTransitionGraph* Graph = Cast<USMTransitionGraph>(BoundGraph))
	{
		return Graph->HasAnyLogicConnections();
	}

	return false;
}

USMTransitionGraph* USMGraphNode_TransitionEdge::GetTransitionGraph() const
{
	return CastChecked<USMTransitionGraph>(BoundGraph);
}

USMGraphNode_StateNodeBase* USMGraphNode_TransitionEdge::GetFromState() const
{
	if (Pins.Num() && Pins[0]->LinkedTo.Num() > 0)
	{
		return Cast<USMGraphNode_StateNodeBase>(Pins[0]->LinkedTo[0]->GetOwningNode());
	}

	return nullptr;
}

USMGraphNode_StateNodeBase* USMGraphNode_TransitionEdge::GetToState() const
{
	if (Pins.Num() > 1 && Pins[1]->LinkedTo.Num() > 0)
	{
		return Cast<USMGraphNode_StateNodeBase>(Pins[1]->LinkedTo[0]->GetOwningNode());
	}

	return nullptr;
}

bool USMGraphNode_TransitionEdge::ShouldRunParallel() const
{
	if (USMTransitionInstance* Instance = GetNodeTemplateAs<USMTransitionInstance>())
	{
		return Instance->GetRunParallel();
	}

	return false;
}

FLinearColor USMGraphNode_TransitionEdge::GetBackgroundColor() const
{
	const FLinearColor BaseColor = Super::GetBackgroundColor();
	
	const USMEditorSettings* Settings = FSMBlueprintEditorUtils::GetEditorSettings();
	if (Settings->bDisplayTransitionEvaluation)
	{
		if (const FSMTransition* DebugNode = (FSMTransition*)GetDebugNode())
		{
			if (DebugNode->bIsEvaluating || bWasEvaluating)
			{
				const float TimeToFade = 0.7f;
				const float DebugTime = GetDebugTime();
				if (DebugTime < TimeToFade)
				{
					return FLinearColor::LerpUsingHSV(Settings->EvaluatingTransitionColor, BaseColor, DebugTime / TimeToFade);
				}
			}
		}
	}

	return BaseColor;
}

FLinearColor USMGraphNode_TransitionEdge::GetActiveBackgroundColor() const
{
	return FSMBlueprintEditorUtils::GetEditorSettings()->ActiveTransitionColor;
}

void USMGraphNode_TransitionEdge::SetNodeClass(UClass* Class)
{
	TransitionClass = Class;
	Super::SetNodeClass(Class);
}

float USMGraphNode_TransitionEdge::GetMaxDebugTime() const
{
	return FSMBlueprintEditorUtils::GetEditorSettings()->TimeToFadeLastActiveTransition;
}

void USMGraphNode_TransitionEdge::PreCompile(FSMKismetCompilerContext& CompilerContext)
{
	Super::PreCompile(CompilerContext);

	if (!DelegatePropertyName.IsNone())
	{
		if (UClass* DelegateClass = GetSelectedDelegateOwnerClass())
		{
			if (DelegateClass->FindPropertyByName(DelegatePropertyName) == nullptr)
			{
				// The delegate cannot be found, check to see if it was renamed.
				
				if (USMGraphK2Node_FunctionNode_TransitionEvent* TransitionEvent = FSMBlueprintEditorUtils::GetFirstNodeOfClassNested<USMGraphK2Node_FunctionNode_TransitionEvent>(BoundGraph))
				{
					UBlueprint* Blueprint = FSMBlueprintEditorUtils::FindBlueprintForNodeChecked(this);
					bool bRequiresDelegateRefresh = false;
					
					FString NewDelegateName;
					if (FProperty* RemappedProperty = FSMBlueprintEditorUtils::GetPropertyForVariable(Blueprint, DelegatePropertyName))
					{
						NewDelegateName = RemappedProperty->GetName();
					}
					else if (UFunction* Function = TransitionEvent->GetDelegateFunction())
					{
						NewDelegateName = Function->GetName();
						NewDelegateName.RemoveFromEnd(TEXT("__DelegateSignature"));
					}
					else if (DelegatePropertyGuid.IsValid())
					{
						// Attempt a guid lookup if there is one saved. This can happen if the variable was renamed once,
						// but this owning blueprint wasn't saved, and the variable was renamed again.
						
						FBPVariableDescription VariableDescription;
						if (FSMBlueprintEditorUtils::TryGetVariableByGuid(Blueprint, DelegatePropertyGuid, VariableDescription))
						{
							NewDelegateName = VariableDescription.VarName.ToString();
							bRequiresDelegateRefresh = true;
						}
					}
					
					if (!NewDelegateName.IsEmpty())
					{
						const FString OldDelegateName = DelegatePropertyName.ToString();

						DelegatePropertyName = *NewDelegateName;
						TransitionEvent->DelegatePropertyName = *NewDelegateName;

						if (OldDelegateName != NewDelegateName)
						{
							// NewDelegateName cannot be refreshed on first compile in some situations, only display the message when it's been updated.
							
							FText const InfoFormat = LOCTEXT("EventDelegateRename", "Event delegate '{0}' has been renamed to '{1}' on transition @@.");
							CompilerContext.MessageLog.Note(*FText::Format(InfoFormat, FText::FromString(OldDelegateName), FText::FromString(NewDelegateName)).ToString(), this);
						}
						
						if (bRequiresDelegateRefresh)
						{
							RefreshTransitionDelegate();
						}
						
						return;
					}
				}
				
				CompilerContext.MessageLog.Error(TEXT("Delegate property not found for transition @@."), this);
			}
			else
			{
				RefreshTransitionDelegate();
			}
		}
	}
}

FLinearColor USMGraphNode_TransitionEdge::GetTransitionColor(bool bIsHovered) const
{
	const USMEditorSettings* Settings = FSMBlueprintEditorUtils::GetEditorSettings();

	const FLinearColor HoverColor = Settings->TransitionHoverColor;
	const FLinearColor BaseColor = GetBackgroundColor();

	return bIsHovered ? BaseColor * HoverColor : BaseColor;
}

FLinearColor USMGraphNode_TransitionEdge::Internal_GetBackgroundColor() const
{
	const USMEditorSettings* Settings = FSMBlueprintEditorUtils::GetEditorSettings();
	const FLinearColor ColorModifier = GetCustomBackgroundColor() ? *GetCustomBackgroundColor() : FLinearColor(1.f, 1.f, 1.f, 1.f);
	const FLinearColor DefaultColor = Settings->TransitionEmptyColor * ColorModifier;
	
	USMTransitionGraph* Graph = Cast<USMTransitionGraph>(BoundGraph);

	if (!Graph)
	{
		return DefaultColor;
	}

	const bool bHasResultLogic = Graph->HasAnyLogicConnections();
	// This transition will never be taken.
	if (!bHasResultLogic)
	{
		return DefaultColor;
	}

	if (!Settings->bEnableTransitionWithEntryLogicColor)
	{
		return Settings->TransitionValidColor * ColorModifier;
	}

	// Transition with execution logic.
	const bool bHasTransitionTunnel = Graph->HasTransitionTunnel();
	if (bHasTransitionTunnel)
	{
		return Settings->TransitionWithEntryLogicColor * ColorModifier;
	}
	
	// Regular transition.
	return Settings->TransitionValidColor * ColorModifier;
}

void USMGraphNode_TransitionEdge::SetDefaultsWhenPlaced()
{
	// Auto set parallel mode based on previous state.
	if (USMGraphNode_StateNodeBase* PreviousState = GetFromState())
	{
		if (USMTransitionInstance* Instance = GetNodeTemplateAs<USMTransitionInstance>())
		{
			Instance->SetRunParallel(PreviousState->ShouldDefaultTransitionsToParallel());
		}
	}
}

void USMGraphNode_TransitionEdge::UpdateTransitionDelegateGuid()
{
	DelegatePropertyGuid.Invalidate();
	
	UBlueprint* Blueprint = FSMBlueprintEditorUtils::FindBlueprintForNodeChecked(this);
	FBPVariableDescription VariableOut;
	if (FSMBlueprintEditorUtils::TryGetVariableByName(Blueprint, DelegatePropertyName, VariableOut))
	{
		DelegatePropertyGuid = VariableOut.VarGuid;
	}
}

#undef LOCTEXT_NAMESPACE

