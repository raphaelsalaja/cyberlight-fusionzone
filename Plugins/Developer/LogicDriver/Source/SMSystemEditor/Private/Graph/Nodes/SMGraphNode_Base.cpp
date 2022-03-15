// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMGraphNode_Base.h"
#include "Graph/SMGraph.h"
#include "Graph/Schema/SMGraphSchema.h"
#include "Graph/SMPropertyGraph.h"
#include "SMGraphNode_StateNode.h"
#include "Customization/SMEditorCustomization.h"
#include "Blueprints/SMBlueprintEditor.h"
#include "Utilities/SMNodeInstanceUtils.h"
#include "Utilities/SMBlueprintEditorUtils.h"
#include "Construction/SMEditorConstructionManager.h"
#include "SMSystemEditorLog.h"

#include "Blueprints/SMBlueprint.h"
#include "SMUtils.h"

#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Engine/Engine.h"
#include "UObject/UObjectThreadContext.h"
#include "EdGraphUtilities.h"


#define LOCTEXT_NAMESPACE "SMGraphNodeBase"

/** Log a message to the message log up to 4 arguments long. */
#define LOG_MESSAGE(LOG_TYPE, MESSAGE, ARGS, ARGS_COUNT)						\
	do {																		\
		if(ARGS_COUNT == 0)														\
			MessageLog.LOG_TYPE(MESSAGE);										\
		else if(ARGS_COUNT == 1)												\
			MessageLog.LOG_TYPE(MESSAGE, ARGS[0]);								\
		else if(ARGS_COUNT == 2)												\
			MessageLog.LOG_TYPE(MESSAGE, ARGS[0], ARGS[1]);						\
		else if(ARGS_COUNT == 3)												\
			MessageLog.LOG_TYPE(MESSAGE, ARGS[0], ARGS[1], ARGS[2]);			\
		else if(ARGS_COUNT >= 4)												\
			MessageLog.LOG_TYPE(MESSAGE, ARGS[0], ARGS[1], ARGS[2], ARGS[3]);	\
																				\
	} while(0)

USMGraphNode_Base::USMGraphNode_Base(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCanRenameNode = true;
	DebugTotalTime = 0.f;
	bIsDebugActive = false;
	bWasDebugActive = false;
	bCreatePropertyGraphsOnPropertyChange = true;
	bCreatePropertyGraphsSilently = false;
	bChangeFromRedirect = false;
	MaxTimeToShowDebug = 1.f;
	BoundGraph = nullptr;
	NodeInstanceTemplate = nullptr;
	CachedBrush = FSlateNoResource();
	bJustPasted = false;
	bIsEditUndo = false;
	bGenerateTemplateOnNodePlacement = true;
	bIsPrecompiling = false;
	bIsRunningConstructionScripts = false;
	bRequiresGuidRegeneration = false;
	bNeedsStateStackConversion = false;
	bTEST_ForceNoTemplateGuid = false;
}

void USMGraphNode_Base::DestroyNode()
{
	Super::DestroyNode();
	DestroyAllPropertyGraphs();
}

void USMGraphNode_Base::PostPasteNode()
{
	bJustPasted = true;
	Super::PostPasteNode();

	if (UEdGraph* Graph = GetBoundGraph())
	{
		// Add the new graph as a child of our parent graph
		UEdGraph* ParentGraph = GetGraph();

		if (ParentGraph->SubGraphs.Find(Graph) == INDEX_NONE)
		{
			ParentGraph->SubGraphs.Add(Graph);
		}

		// Restore transactional flag that is lost during copy/paste process
		Graph->SetFlags(RF_Transactional);
	}

	SetReadOnlyNodePosition();
	InitTemplate();
	CreateGraphPropertyGraphs(true);

	UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForNodeChecked(this);
	
	const ESMEditorConstructionScriptProjectSetting ConstructionProjectSetting = FSMBlueprintEditorUtils::GetProjectEditorSettings()->EditorNodeConstructionScriptSetting;
	if (ConstructionProjectSetting == ESMEditorConstructionScriptProjectSetting::SM_Standard)
	{
		FSMEditorConstructionManager::GetInstance()->RunAllConstructionScriptsForBlueprint(Blueprint);
	}
	
	FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
	
	bJustPasted = false;
}

void USMGraphNode_Base::PostEditUndo()
{
	bIsEditUndo = true;
	
	Super::PostEditUndo();

	if (NodeInstanceTemplate)
	{
		NodeInstanceTemplate->ClearFlags(RF_Transient);
	}
	
	// No bound graph prevents the property graphs from finding their blueprint. This could happen if a graph deletion was being redone.
	if(BoundGraph == nullptr)
	{
		return;
	}
	RefreshAllProperties(false);

	// If the transaction being undone contains property graph deletion, the graphs can get added back in incorrectly.
	// So far this is the best place to catch this, but idealy these graphs wouldn't be added back in at all.
	// Test cases show only construction script modification of arrays to be responsible for this.
	FSMBlueprintEditorUtils::CleanupInvalidPropertyGraphs(FSMBlueprintEditorUtils::FindBlueprintForNode(this));
	
	bIsEditUndo = false;
}

void USMGraphNode_Base::PostPlacedNewNode()
{
	SetToCurrentVersion();
	Super::PostPlacedNewNode();
}

void USMGraphNode_Base::OnRenameNode(const FString& NewName)
{
	FBlueprintEditorUtils::RenameGraph(GetBoundGraph(), NewName);
}

UObject* USMGraphNode_Base::GetJumpTargetForDoubleClick() const
{
	return BoundGraph;
}

bool USMGraphNode_Base::CanJumpToDefinition() const
{
	return GetJumpTargetForDoubleClick() != nullptr;
}

void USMGraphNode_Base::JumpToDefinition() const
{
	if (UObject* HyperlinkTarget = GetJumpTargetForDoubleClick())
	{
		FKismetEditorUtilities::BringKismetToFocusAttentionOnObject(HyperlinkTarget);
	}
}

bool USMGraphNode_Base::CanCreateUnderSpecifiedSchema(const UEdGraphSchema* Schema) const
{
	return Schema->IsA(USMGraphSchema::StaticClass());
}

void USMGraphNode_Base::ReconstructNode()
{
	Super::ReconstructNode();

	for (const auto& KeyVal : GraphPropertyGraphs)
	{
		Cast<USMPropertyGraph>(KeyVal.Value)->RefreshProperty(false, false);
	}

	if (GraphPropertyGraphs.Num() && AreTemplatesFullyLoaded())
	{
		UBlueprint* Blueprint = FSMBlueprintEditorUtils::FindBlueprintForNodeChecked(this);
		FSMBlueprintEditorUtils::ConditionallyCompileBlueprint(Blueprint);
	}
}

void USMGraphNode_Base::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	bChangeFromRedirect = PropertyChangedEvent.ChangeType == EPropertyChangeType::Redirected;
	
	const ESMEditorConstructionScriptProjectSetting ConstructionProjectSetting = FSMBlueprintEditorUtils::GetProjectEditorSettings()->EditorNodeConstructionScriptSetting;
	if (ConstructionProjectSetting == ESMEditorConstructionScriptProjectSetting::SM_Standard)
	{
		FSMEditorConstructionManager::GetInstance()->RunAllConstructionScriptsForBlueprint(this);
	}
	
	/* BoundGraph could be null if undoing/redoing deletion. */
	if (bCreatePropertyGraphsOnPropertyChange && BoundGraph)
	{
		CreateGraphPropertyGraphs();
	}

	FSMBlueprintEditorUtils::InvalidateCaches(FSMBlueprintEditorUtils::FindBlueprintForNode(this));

	bChangeFromRedirect = false;
}

void USMGraphNode_Base::PinConnectionListChanged(UEdGraphPin* Pin)
{
	Super::PinConnectionListChanged(Pin);
	FSMBlueprintEditorUtils::InvalidateCaches(FSMBlueprintEditorUtils::FindBlueprintForNode(this));
}

void USMGraphNode_Base::ValidateNodeDuringCompilation(FCompilerResultsLog& MessageLog) const
{
	Super::ValidateNodeDuringCompilation(MessageLog);

	for (const FSMGraphNodeLog& Log : CollectedLogs)
	{
		switch (Log.LogType)
		{
		case EMessageSeverity::Info:
		{
			LOG_MESSAGE(Note, *Log.ConsoleMessage, Log.ReferenceList, Log.ReferenceList.Num());
			break;
		}
		case EMessageSeverity::Warning:
		{
			LOG_MESSAGE(Warning, *Log.ConsoleMessage, Log.ReferenceList, Log.ReferenceList.Num());
			break;
		}
		case EMessageSeverity::Error:
		{
			LOG_MESSAGE(Error, *Log.ConsoleMessage, Log.ReferenceList, Log.ReferenceList.Num());
			break;
		}
		}
	}
}

void USMGraphNode_Base::CreateGraphPropertyGraphs(bool bGenerateNewGuids)
{
	bGenerateNewGuids = bGenerateNewGuids || bRequiresGuidRegeneration;
	
	TSet<FGuid> LiveGuids;
	bool bHasChanged = CreateGraphPropertyGraphsForTemplate(NodeInstanceTemplate, bGenerateNewGuids, LiveGuids);

	if (USMGraphNode_StateNode* StateNode = Cast<USMGraphNode_StateNode>(this))
	{
		// State nodes may have extra property graphs with the state stack.
		for (const FStateStackContainer& StackTemplate : StateNode->GetAllNodeStackTemplates())
		{
			if (CreateGraphPropertyGraphsForTemplate(StackTemplate.NodeStackInstanceTemplate, bGenerateNewGuids, LiveGuids) && !bHasChanged)
			{
				bHasChanged = true;
			}
		}
	}
	
	// Remove graphs no longer used.
	TArray<FGuid> CurrentKeys;
	GraphPropertyGraphs.GetKeys(CurrentKeys);

	for(const FGuid& Guid : CurrentKeys)
	{
		if(!LiveGuids.Contains(Guid))
		{
			UEdGraph* GraphToRemove = GraphPropertyGraphs[Guid];
			RemovePropertyGraph(Cast<USMPropertyGraph>(GraphToRemove), false);
			GraphPropertyTemplates.Remove(Guid);
			GraphPropertyGraphs.Remove(Guid);
			GraphPropertyNodes.Remove(Guid);
			bHasChanged = true;
		}
	}

	if(bHasChanged && !bJustPasted)
	{
		ReconstructNode();
		if (GraphPropertyGraphs.Num() == 0 && !bChangeFromRedirect && AreTemplatesFullyLoaded())
		{
			// Reconstruct node only refreshes with > 0 property graphs as an optimization.
			// If the user deleted all property graphs we may have to compile again to refresh.
			UBlueprint* Blueprint = FSMBlueprintEditorUtils::FindBlueprintForNodeChecked(this);
			FSMBlueprintEditorUtils::ConditionallyCompileBlueprint(Blueprint);
		}
	}

	bRequiresGuidRegeneration = false;
	bNeedsStateStackConversion = false;
}

bool USMGraphNode_Base::CreateGraphPropertyGraphsForTemplate(USMNodeInstance* Template, bool bGenerateNewGuids, TSet<FGuid>& LiveGuidsInOut, bool bResetNonVariableGuids)
{
	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("USMGraphNode_Base::CreateGraphPropertyGraphsForTemplate"), STAT_CreateGraphPropertyGraphsForTemplate, STATGROUP_LogicDriverEditor);
	
	bool bHasChanged = false;
	
	if (Template && SupportsPropertyGraphs())
	{
		if (!bCreatePropertyGraphsSilently)
		{
			Modify();
			if (BoundGraph)
			{
				BoundGraph->Modify();
			}
		}

		UClass* TemplateClass = Template->GetClass();
		for (TFieldIterator<FProperty> It(TemplateClass); It; ++It)
		{
			FProperty* Property = *It;
			bool bIsActualGraphProperty = false;

			FName VarName = Property->GetFName();
			if (VarName == GET_MEMBER_NAME_CHECKED(USMNodeInstance, ExposedPropertyOverrides))
			{
				continue;
			}

			// So custom graph details can be displayed.
			if (FStructProperty* StructProperty = FSMNodeInstanceUtils::IsPropertyGraphProperty(Property))
			{
				bIsActualGraphProperty = true;
				FSMGraphPropertyCustomization::RegisterNewStruct(StructProperty->Struct->GetFName());
			}

			// Only properties that are instance editable.
			if (!bIsActualGraphProperty && !FSMNodeInstanceUtils::IsPropertyExposedToGraphNode(Property))
			{
				continue;
			}

			FProperty* TargetProperty = Property;
			int32 ArraySize = 1;
			FArrayProperty* ArrayProperty = CastField<FArrayProperty>(Property);
			if (ArrayProperty)
			{
				TargetProperty = ArrayProperty->Inner;

				FScriptArrayHelper Helper(ArrayProperty, ArrayProperty->ContainerPtrToValuePtr<uint8>(Template));
				ArraySize = Helper.Num();

				// No array initialized yet.
				if (ArraySize == 0)
				{
					continue;
				}
			}

			// Storage for properties initialized only within this scope.
			TArray<FSMGraphProperty> TempGraphProperties;
			TempGraphProperties.Reserve(ArraySize);

			// Look for an override.
			FSMGraphProperty* MatchedGraphProperty = Template->ExposedPropertyOverrides.FindByPredicate([&](const FSMGraphProperty_Base& GraphProperty)
			{
				return GraphProperty.VariableName == VarName;
			});
			
			// Contains temp properties or pointers to stored properties.
			TArray<FSMGraphProperty_Base*> GraphProperties;
			if (bIsActualGraphProperty)
			{
				// This property itself is a graph property.
				USMUtils::BlueprintPropertyToNativeProperty(Property, Template, GraphProperties);

				// Set the variable information. This may still be used for lookup later.
				for (int32 Idx = 0; Idx < GraphProperties.Num(); ++Idx)
				{
					if (MatchedGraphProperty)
					{
						// Read only and hidden overrides are still used on real properties so save them.
						GraphProperties[Idx]->bReadOnly = MatchedGraphProperty->bReadOnly;
						GraphProperties[Idx]->bHidden = MatchedGraphProperty->bHidden;
					}
					
					FSMNodeInstanceUtils::SetGraphPropertyFromProperty(*GraphProperties[Idx], TargetProperty, Template, Idx, false);

					if (bResetNonVariableGuids)
					{
						// Template guid will have been set from above.
						GraphProperties[Idx]->SetTemplateGuid(Template->GetTemplateGuid(), true);
					}
				}
			}
			else
			{
				for (int32 Idx = 0; Idx < ArraySize; ++Idx)
				{
					// Check if the array has been modified. This requires special handling for adding or removing elements.
					if (Template->WasArrayPropertyModified(Property->GetFName()) && Template->ArrayIndexChanged == Idx)
					{
						if (Template->ArrayChangeType == EPropertyChangeType::ArrayRemove)
						{
							HandlePropertyGraphArrayRemoval(GraphProperties, TempGraphProperties, TargetProperty, Idx, ArraySize, MatchedGraphProperty, Template);
						}
						else if (Template->ArrayChangeType == EPropertyChangeType::ArrayAdd)
						{
							HandlePropertyGraphArrayInsertion(GraphProperties, TempGraphProperties, TargetProperty, Idx, ArraySize, MatchedGraphProperty, Template);
						}

						// Always trigger an update if the array was modified.
						bHasChanged = true;
						break;
					}

					// Default handling with no array modification.
					{
						FSMGraphProperty TempProperty;

						if (MatchedGraphProperty)
						{
							// Assign override defaults before assigning a guid.
							TempProperty = *MatchedGraphProperty;
						}

						FSMNodeInstanceUtils::SetGraphPropertyFromProperty(TempProperty, TargetProperty, Template, Idx, true, !bNeedsStateStackConversion);
						if (bNeedsStateStackConversion && bGenerateNewGuids && !bTEST_ForceNoTemplateGuid)
						{
							/*
							 * Special conversion for anyone who was on the dev branch when the pre 2.4 import change went live.
							 */
							if (!GraphPropertyGraphs.FindRef(TempProperty.GetGuid()))
							{
								FSMGraphProperty UpToDateTempProperty;
								FSMNodeInstanceUtils::SetGraphPropertyFromProperty(UpToDateTempProperty, TargetProperty, Template, Idx, true, true);
								if (GraphPropertyGraphs.FindRef(UpToDateTempProperty.GetGuid()))
								{
									TempProperty = UpToDateTempProperty;
								}
							}
						}
						
						TempGraphProperties.Add(MoveTemp(TempProperty));
						GraphProperties.Add(&TempGraphProperties.Last());
					}
				}
			}

			for (int32 i = 0; i < GraphProperties.Num(); ++i)
			{
				FSMGraphProperty_Base* GraphProperty = GraphProperties[i];
				check(GraphProperty);
				GraphProperty->RealDisplayName = Property->GetDisplayNameText();
				GraphProperty->ArrayIndex = i;

				GraphProperty->SetTemplateGuid(Template->GetTemplateGuid());
				FGuid Guid = GraphProperty->GenerateNewGuidIfNotValid();

				// Make sure reference is up to date.. if this was a copy paste operation it won't be.
				if (USMGraphK2Node_PropertyNode_Base* ExistingGraphPropertyNode = GraphPropertyNodes.FindRef(Guid))
				{
					ExistingGraphPropertyNode->SyncWithContainer();
				}

				UEdGraph* OldGraph = GraphPropertyGraphs.FindRef(Guid);
				if (bGenerateNewGuids && OldGraph)
				{
					// Remove these so they don't get deleted later, we just want to reassign the guid.
					GraphPropertyGraphs.Remove(Guid);
					GraphPropertyNodes.Remove(Guid);
					GraphPropertyTemplates.Remove(Guid);
					
					// Create a new guid if requested.
					if (!GraphProperty->ShouldGenerateGuidFromVariable())
					{
						Guid = GraphProperty->GenerateNewGuid();
					}
					else if (bNeedsStateStackConversion)
					{
						if (!bTEST_ForceNoTemplateGuid)
						{
							// This will apply the template guid.
							FSMNodeInstanceUtils::SetGraphPropertyFromProperty(*GraphProperty, TargetProperty, Template, i, true);
						}
						Guid = GraphProperty->GetGuid();
					}
				}

				LiveGuidsInOut.Add(Guid);

				// Refresh the runtime node property in case it has changed.
				if (USMGraphK2Node_PropertyNode_Base* ExistingGraphPropertyNode = GraphPropertyNodes.FindRef(Guid))
				{
					ExistingGraphPropertyNode->SetPropertyNode(GraphProperty);
				}

				if (GraphPropertyGraphs.Contains(Guid))
				{
					continue;
				}

				UEdGraph* PropertyGraph = nullptr;
				if (bGenerateNewGuids && OldGraph)
				{
					PropertyGraph = OldGraph;
					CastChecked<USMPropertyGraph>(PropertyGraph)->RefreshProperty();
				}
				else
				{
					// Load the package for this module. This is needed to find the correct class to load.
					UPackage* Package = GraphProperty->GetEditorModule();
					if (!Package)
					{
						FSMGraphNodeLog NodeLog(EMessageSeverity::Error);
						NodeLog.ConsoleMessage = TEXT("Could not find editor module for node @@.");
						NodeLog.NodeMessage = FString::Printf(TEXT("Could not find editor module for node @@!"));
						NodeLog.ReferenceList.Add(this);
						AddNodeLogMessage(NodeLog);
						continue;
					}
					UClass* GraphClass = GraphProperty->GetGraphClass(Package);
					if (!GraphClass)
					{
						FSMGraphNodeLog NodeLog(EMessageSeverity::Error);
						NodeLog.ConsoleMessage = TEXT("Could not find graph class for node @@.");
						NodeLog.NodeMessage = FString::Printf(TEXT("Could not find graph class for node @@!"));
						NodeLog.ReferenceList.Add(this);
						AddNodeLogMessage(NodeLog);
						continue;
					}
					UClass* SchemaClass = GraphProperty->GetGraphSchemaClass(Package);
					if (!SchemaClass)
					{
						FSMGraphNodeLog NodeLog(EMessageSeverity::Error);
						NodeLog.ConsoleMessage = TEXT("Could not find schema class for node @@.");
						NodeLog.NodeMessage = FString::Printf(TEXT("Could not find schema class for node @@!"));
						NodeLog.ReferenceList.Add(this);
						AddNodeLogMessage(NodeLog);
						continue;
					}

					PropertyGraph = FBlueprintEditorUtils::CreateNewGraph(
						BoundGraph,
						NAME_None,
						GraphClass,
						SchemaClass);
					check(PropertyGraph);

					FEdGraphUtilities::RenameGraphToNameOrCloseToName(PropertyGraph, *GraphProperty->GetDisplayName().ToString());

					CastChecked<USMPropertyGraph>(PropertyGraph)->TempGraphProperty = GraphProperty;

					// Initialize the property graph
					const UEdGraphSchema* Schema = PropertyGraph->GetSchema();
					Schema->CreateDefaultNodesForGraph(*PropertyGraph);
				}

				BoundGraph->SubGraphs.AddUnique(PropertyGraph);

				// Record the template used.
				GraphPropertyTemplates.Add(Guid, Template);
				
				// Look for placed property nodes and link them.
				InitPropertyGraphNodes(PropertyGraph, GraphProperty);

				// Clear out temp property as it won't be valid after this scope.
				CastChecked<USMPropertyGraph>(PropertyGraph)->TempGraphProperty = nullptr;

				GraphPropertyGraphs.Add(Guid, PropertyGraph);
				bHasChanged = true;
			}
		}

		Template->ResetArrayCheck();
	}

	return bHasChanged;
}

UEdGraph* USMGraphNode_Base::GetGraphPropertyGraph(const FGuid& Guid) const
{
	return GraphPropertyGraphs.FindRef(Guid);
}

USMGraphK2Node_PropertyNode_Base* USMGraphNode_Base::GetGraphPropertyNode(const FGuid& Guid) const
{
	return GraphPropertyNodes.FindRef(Guid);
}

USMGraphK2Node_PropertyNode_Base* USMGraphNode_Base::GetGraphPropertyNode(const FName& VariableName, USMNodeInstance* TemplateMatch) const
{
	for (const auto& KeyVal : GraphPropertyNodes)
	{
		if (!KeyVal.Value)
		{
			continue;
		}
		FSMGraphProperty_Base* GraphProperty = KeyVal.Value->GetPropertyNodeChecked();
		if (GraphProperty->VariableName == VariableName)
		{
			if (TemplateMatch && TemplateMatch->GetTemplateGuid() != GraphProperty->GetTemplateGuid())
			{
				continue;
			}
			return KeyVal.Value;
		}
	}

	return nullptr;
}

TArray<USMGraphK2Node_PropertyNode_Base*> USMGraphNode_Base::GetAllPropertyGraphNodesAsArray() const
{
	TArray<USMGraphK2Node_PropertyNode_Base*> Nodes;

	for(const auto& KeyVal : GraphPropertyNodes)
	{
		if (KeyVal.Value)
		{
			Nodes.Add(KeyVal.Value);
		}
	}

	return Nodes;
}

void USMGraphNode_Base::InitPropertyGraphNodes(UEdGraph* PropertyGraph, FSMGraphProperty_Base* Property)
{
	Modify();
	
	TArray<USMGraphK2Node_PropertyNode_Base*> PropertyNodes;
	FSMBlueprintEditorUtils::GetAllNodesOfClassNested<USMGraphK2Node_PropertyNode_Base>(PropertyGraph, PropertyNodes);
	for (USMGraphK2Node_PropertyNode_Base* PlacedPropertyNode : PropertyNodes)
	{
		PlacedPropertyNode->Modify();
		PlacedPropertyNode->OwningGraphNode = this;
		PlacedPropertyNode->SetPropertyNode(Property);
		PlacedPropertyNode->SetPinValueFromPropertyDefaults(bJustPasted);
		GraphPropertyNodes.Add(Property->GetGuid(), PlacedPropertyNode);
	}
}

void USMGraphNode_Base::RefreshAllProperties(bool bModify, bool bSetFromPinFirst)
{
	for(const auto& KeyVal : GetAllPropertyGraphs())
	{
		if(USMPropertyGraph* PropertyGraph = Cast<USMPropertyGraph>(KeyVal.Value))
		{
			PropertyGraph->RefreshProperty(bModify, bSetFromPinFirst);
		}
	}
}

void USMGraphNode_Base::ForceRecreateProperties()
{
	CreateGraphPropertyGraphs();
	RefreshAllProperties(false, false);
}

void USMGraphNode_Base::SetGraphPropertyDefaultsFromPins()
{
	for (const auto& Property : GraphPropertyNodes)
	{
		Property.Value->SetPropertyDefaultsFromPin();
	}
}

void USMGraphNode_Base::SetPinsFromGraphProperties(bool bUpdateTemplateDefaults, bool bUseArchetype)
{
	for (const auto& Property : GraphPropertyNodes)
	{
		Property.Value->SetPinValueFromPropertyDefaults(bUpdateTemplateDefaults, bUseArchetype, true);
	}
}

USMGraphK2Node_PropertyNode_Base* USMGraphNode_Base::GetPropertyNodeUnderMouse() const
{
	for(const auto& KeyVal : GetAllPropertyGraphNodes())
	{
		if(KeyVal.Value->bMouseOverNodeProperty)
		{
			return KeyVal.Value;
		}
	}

	return nullptr;
}

UEdGraphPin* USMGraphNode_Base::GetInputPin() const
{
	if(Pins.Num() == 0 || Pins[INDEX_PIN_INPUT]->Direction == EGPD_Output)
	{
		return nullptr;
	}

	return Pins[INDEX_PIN_INPUT];
}

UEdGraphPin* USMGraphNode_Base::GetOutputPin() const
{
	for(UEdGraphPin* Pin : Pins)
	{
		if(Pin->Direction == EGPD_Output)
		{
			return Pin;
		}
	}

	return nullptr;
}

UEdGraphNode* USMGraphNode_Base::GetOutputNode() const
{
	UEdGraphPin* OutputPin = GetOutputPin();

	if (OutputPin)
	{
		if (OutputPin->LinkedTo.Num() > 0 && OutputPin->LinkedTo[INDEX_PIN_INPUT]->GetOwningNode() != nullptr)
		{
			return OutputPin->LinkedTo[INDEX_PIN_INPUT]->GetOwningNode();
		}
	}

	return nullptr;
}

void USMGraphNode_Base::GetAllOutputNodes(TArray<UEdGraphNode*>& OutNodes) const
{
	UEdGraphPin* OutputPin = GetOutputPin();

	if (OutputPin)
	{
		for (int32 Idx = 0; Idx < OutputPin->LinkedTo.Num(); ++Idx)
		{
			OutNodes.Add(OutputPin->LinkedTo[Idx]->GetOwningNode());
		}
	}
}

void USMGraphNode_Base::PreCompile(FSMKismetCompilerContext& CompilerContext)
{
	if (!BoundGraph)
	{
		return;
	}

	bIsPrecompiling = true;
	
	/** Call in case the version manager hasn't run. */
	ConvertToCurrentVersion();
	
	ResetLogMessages();

	if (CompilerContext.CompileOptions.CompileType == EKismetCompileType::Full &&
		GetNodeClass() && !GetNodeClass()->HasAnyClassFlags(CLASS_LayoutChanging) &&
		NodeInstanceTemplate &&
		NodeInstanceTemplate->GetClass()->GetName().StartsWith(TEXT("REINST_")))
	{
		// Not sure how we can get into this state, possibly due to changing the node class in some way
		// and unreal saving the REINST class to disk. Catch the issue here, otherwise a check fails at runtime.
		// It's not safe to reinit the template in this case unless it's a full compile.
		CompilerContext.MessageLog.Warning(TEXT("Fixing template REINST class mismatch for node @@."), this);
		InitTemplate();
	}
	
	TMap<FGuid, UEdGraph*> PropertyGraphs = GetAllPropertyGraphs();

	for (const auto& KeyVal : PropertyGraphs)
	{
		if (KeyVal.Value == nullptr)
		{
			GraphPropertyGraphs.Remove(KeyVal.Key);
			GraphPropertyNodes.Remove(KeyVal.Key);
			GraphPropertyTemplates.Remove(KeyVal.Key);
			
			CompilerContext.MessageLog.Error(TEXT("Property graph missing on load on node @@."), this);
		}
	}

	SetReadOnlyNodePosition(FVector2D(NodePosX, NodePosY));
	ForceRecreateProperties();

	bIsPrecompiling = false;
}

void USMGraphNode_Base::OnCompile(FSMKismetCompilerContext& CompilerContext)
{
	if(!BoundGraph)
	{
		return;
	}

	FSMNode_Base* RuntimeNode = FSMBlueprintEditorUtils::GetRuntimeNodeFromGraph(BoundGraph);
	check(RuntimeNode);
	RuntimeNode->SetNodeInstanceClass(GetNodeClass());
	if(NodeInstanceTemplate && !IsUsingDefaultNodeClass())
	{
		// We don't need the default template at runtime.
		CompilerContext.AddDefaultObjectTemplate(RuntimeNode->GetNodeGuid(), NodeInstanceTemplate, FTemplateContainer::NodeTemplate);
	}
}

void USMGraphNode_Base::ResetDebugState()
{
	// Prevents a previous cycle from showing it as running.
	if (const FSMNode_Base* DebugNode = GetDebugNode())
	{
		const_cast<FSMNode_Base*>(DebugNode)->bWasActive = bWasDebugActive = false;
	}
}

void USMGraphNode_Base::OnWidgetConstruct()
{
	ResetDebugState();
}

void USMGraphNode_Base::UpdateTime(float DeltaTime)
{
	if (const FSMNode_Base* DebugNode = GetDebugNode())
	{
		MaxTimeToShowDebug = GetMaxDebugTime();
		
		// Toggle active status and reset time if switching active states.
		if(DebugNode->IsActive() || (DebugNode->bWasActive && !WasDebugNodeActive()))
		{
			bWasDebugActive = false;

			// Was active is debug only data and exists to help us determine if we should draw an active state.
			const_cast<FSMNode_Base*>(DebugNode)->bWasActive = false;
			if (!IsDebugNodeActive())
			{
				bIsDebugActive = true;
				DebugTotalTime = 0.f;
			}
		}
		else if (IsDebugNodeActive())
		{
			bWasDebugActive = true;
			bIsDebugActive = false;
			DebugTotalTime = 0.f;
		}
		// In the event a node is no longer active but is still being reported it is and we don't want to display it any more.
		else if (WasDebugNodeActive() && !IsDebugNodeActive() && DebugTotalTime >= MaxTimeToShowDebug)
		{
			bWasDebugActive = false;
		}
		else
		{
			DebugTotalTime += DeltaTime;
		}
	}
	else
	{
		bIsDebugActive = bWasDebugActive = false;
	}
}

void USMGraphNode_Base::ResetLogMessages()
{
	CollectedLogs.Empty();
	bHasCompilerMessage = false;
}

void USMGraphNode_Base::UpdateErrorMessageFromLogs()
{
	bHasCompilerMessage = TryGetNodeLogMessage(ErrorMsg, ErrorType);
}

void USMGraphNode_Base::AddNodeLogMessage(const FSMGraphNodeLog& Message)
{
	CollectedLogs.Add(Message);
}

bool USMGraphNode_Base::TryGetNodeLogMessage(FString& OutMessage, int32& OutSeverity) const
{
	int32 Severity = EMessageSeverity::Info;
	FString Message;
	for (const FSMGraphNodeLog& Log : CollectedLogs)
	{
		if (!Message.IsEmpty())
		{
			Message += "\n";
		}

		Message += Log.NodeMessage;

		if (Log.LogType < Severity)
		{
			Severity = Log.LogType;
		}
	}

	OutMessage = Message;
	OutSeverity = Severity;

	return CollectedLogs.Num() > 0;
}

void USMGraphNode_Base::OnNodeMoved(const FVector2D& NewPosition)
{
	SetReadOnlyNodePosition(NewPosition);
	UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForNodeChecked(this);
	FBlueprintEditorUtils::MarkBlueprintAsModified(Blueprint);
}

void USMGraphNode_Base::SetReadOnlyNodePosition()
{
	SetReadOnlyNodePosition(
		FVector2D(
			static_cast<float>(NodePosX),
			static_cast<float>(NodePosY)));
}

void USMGraphNode_Base::SetReadOnlyNodePosition(const FVector2D& Position)
{
	NodePosition = Position;
}

void USMGraphNode_Base::InitTemplate()
{
	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("USMGraphNode_Base::InitTemplate"), STAT_InitTemplate, STATGROUP_LogicDriverEditor);
	
	UClass* NodeClass = GetNodeClass();
	UClass* DefaultNodeClass = GetDefaultNodeClass();
	if (NodeClass == nullptr)
	{
		/* No longer allow null classes.
		 * The default class is used to configure shared properties for all states.
		 * A default template is not needed at runtime and won't be copied to the CDO. */
		if (!DefaultNodeClass)
		{
			ensureAlways(GetClass() == USMGraphNode_StateMachineEntryNode::StaticClass() || GetClass() == USMGraphNode_AnyStateNode::StaticClass());
			return;
		}
		
		SetNodeClass(DefaultNodeClass);
		return;
	}

	Modify();

	FString NodeName = GetName();
	NodeName = FSMBlueprintEditorUtils::GetSafeName(NodeName);
	
	const FString TemplateName = FString::Printf(TEXT("NODE_TEMPLATE_%s_%s_%s"), *NodeName, *NodeClass->GetName(), *FGuid::NewGuid().ToString());
	USMNodeInstance* NewTemplate = NewObject<USMNodeInstance>(this, NodeClass, *TemplateName, RF_ArchetypeObject | RF_Transactional | RF_Public);

	UClass* OldClass = nullptr;
	
	if (NodeInstanceTemplate)
	{
		OldClass = NodeInstanceTemplate->GetClass();
		
		NodeInstanceTemplate->Modify();
		
		if (NewTemplate)
		{
			UEngine::CopyPropertiesForUnrelatedObjects(NodeInstanceTemplate, NewTemplate);
		}

		// Original template isn't needed any more.
		DestroyTemplate();
	}

	NodeInstanceTemplate = NewTemplate;

	// We only want a template for default classes.
	if (NodeClass != DefaultNodeClass && NodeInstanceTemplate)
	{
		const ESMEditorConstructionScriptProjectSetting ConstructionProjectSetting = FSMBlueprintEditorUtils::GetProjectEditorSettings()->EditorNodeConstructionScriptSetting;
		if (ConstructionProjectSetting == ESMEditorConstructionScriptProjectSetting::SM_Legacy && !IsBeingPasted() && !FUObjectThreadContext::Get().IsRoutingPostLoad)
		{
			NodeInstanceTemplate->RunConstructionScript();
		}
	}
	
	// Need to recreate property graphs before reconstructing the node otherwise properties will mismatch and cause a crash.
	if (BoundGraph)
	{
		const bool bGenerateNewGuids = (OldClass && LoadedVersion == CURRENT_VERSION) &&
			(OldClass->IsChildOf(NodeClass) || NodeClass->IsChildOf(OldClass));
		// We only need new guids if manually switching to/from an inherited class.
		// Otherwise the properties won't evaluate properly and are still tied to the old class.
		CreateGraphPropertyGraphs(bGenerateNewGuids);
	}

	if (NodeClass != DefaultNodeClass)
	{
		PlaceDefaultInstanceNodes();
	}
	
	// Template may have new widgets to display.
	if (!bJustPasted)
	{
		// Pasting by default will call reconstruct node.
		ReconstructNode();
	}
}

void USMGraphNode_Base::DestroyTemplate()
{
	if (NodeInstanceTemplate)
	{
		NodeInstanceTemplate->Modify();
		FSMBlueprintEditorUtils::TrashObject(NodeInstanceTemplate);
		NodeInstanceTemplate = nullptr;
	}
}

void USMGraphNode_Base::RunAllConstructionScripts()
{
	if (IsRunningConstructionScripts() || HasAnyFlags(RF_NeedLoad | RF_NeedPostLoad))
	{
		return;
	}

	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("USMGraphNode_Base::RunAllConstructionScripts"), STAT_RunAllNodeConstructionScripts, STATGROUP_LogicDriverEditor);

	bIsRunningConstructionScripts = true;
	
	// Load user entered pins to the default object. Even nodes without construction scripts still need to do this so other nodes can read them.
	SetGraphPropertyDefaultsFromPins();

	// Optimization for nodes that have no construction scripts defined.
	if (!DoesNodePossiblyHaveConstructionScripts())
	{
		bIsRunningConstructionScripts = false;
		return;
	}
	
	// Run construction script -- It's possible the script further updates the default values.
	RunAllConstructionScripts_Internal();

	// Variable structure could have been modified by construction script -- ie changing number of array elements.
	if (!bNeedsStateStackConversion)
	{
		// Do not recreate if we are converting. It isn't necessary as construction scripts weren't supported and this
		// can prematurely reset bNeedsStateStackConversion.

		// Create silently or we risk dirtying on load. TODO: There should be a better way of preventing this.
		bCreatePropertyGraphsSilently = true;
		ForceRecreateProperties();
		bCreatePropertyGraphsSilently = false;
	}
	
	// Load the default values back to the pins in case the construction script modified them.
	SetPinsFromGraphProperties(false, false);
	
	bIsRunningConstructionScripts = false;

	RequestSlateRefresh();
}

bool USMGraphNode_Base::DoesNodePossiblyHaveConstructionScripts() const
{
	return NodeInstanceTemplate && NodeInstanceTemplate->bHasEditorConstructionScripts;
}

void USMGraphNode_Base::DestroyAllPropertyGraphs()
{
	Modify();
	
	for (const auto& KeyVal : GetAllPropertyGraphNodes())
	{
		if (KeyVal.Value)
		{
			USMPropertyGraph* Graph = KeyVal.Value->GetPropertyGraph();
			RemovePropertyGraph(Graph, false);
		}
	}

	GraphPropertyNodes.Empty();
	GraphPropertyGraphs.Empty();
	GraphPropertyTemplates.Empty();
}

void USMGraphNode_Base::PlaceDefaultInstanceNodes()
{
	Modify();

	if (BoundGraph)
	{
		BoundGraph->Modify();
	}
}

void USMGraphNode_Base::RunAllConstructionScripts_Internal()
{
	if (NodeInstanceTemplate && !FUObjectThreadContext::Get().IsRoutingPostLoad)
	{
		NodeInstanceTemplate->RunConstructionScript();
	}
}

void USMGraphNode_Base::SetNodeClass(UClass* Class)
{
	InitTemplate();
}

UClass* USMGraphNode_Base::GetDefaultNodeClass() const
{
	if (FSMNode_Base* RuntimeNode = FindRuntimeNode())
	{
		return RuntimeNode->GetDefaultNodeInstanceClass();
	}

	return nullptr;
}

USMNodeInstance* USMGraphNode_Base::GetNodeTemplateFromGuid(const FGuid& Guid) const
{
	return GraphPropertyTemplates.FindRef(Guid);
}

bool USMGraphNode_Base::AreTemplatesFullyLoaded() const
{
	return NodeInstanceTemplate && !NodeInstanceTemplate->HasAnyFlags(RF_NeedLoad | RF_NeedPostLoad);
}

USMGraph* USMGraphNode_Base::GetStateMachineGraph() const
{
	return Cast<USMGraph>(GetGraph());
}

FSMNode_Base* USMGraphNode_Base::FindRuntimeNode() const
{
	return FSMBlueprintEditorUtils::GetRuntimeNodeFromGraph(GetBoundGraph());
}

const FSMNode_Base* USMGraphNode_Base::GetDebugNode() const
{
	USMBlueprint* Blueprint = CastChecked<USMBlueprint>(FSMBlueprintEditorUtils::FindBlueprintForNode(this));

	if (USMInstance* Instance = Cast<USMInstance>(Blueprint->GetObjectBeingDebugged()))
	{
		if (FSMNode_Base* RuntimeNode = FindRuntimeNode())
		{
			const FSMDebugStateMachine& DebugMachine = Instance->GetDebugStateMachineConst();

			// Find the real runtime node being debugged.
			return DebugMachine.GetRuntimeNode(RuntimeNode->GetNodeGuid());
		}
	}

	return nullptr;
}

float USMGraphNode_Base::GetMaxDebugTime() const
{
	const USMEditorSettings* Settings = FSMBlueprintEditorUtils::GetEditorSettings();
	return Settings->TimeToDisplayLastActiveState + Settings->TimeToFadeLastActiveState;
}

FLinearColor USMGraphNode_Base::GetBackgroundColor() const
{
	const FLinearColor* CustomColor = GetCustomBackgroundColor();
	const FLinearColor BaseColor = Internal_GetBackgroundColor() * (CustomColor ? *CustomColor : FLinearColor(1.f, 1.f, 1.f, 1.f));
	const FLinearColor ActiveColor = GetActiveBackgroundColor();

	if (GetDebugNode() == nullptr)
	{
		return BaseColor;
	}

	if (IsDebugNodeActive())
	{
		return ActiveColor;
	}

	const float TimeToFade = 0.7f;
	const float DebugTime = GetDebugTime();

	if (bWasDebugActive && DebugTime < TimeToFade)
	{
		return FLinearColor::LerpUsingHSV(ActiveColor, BaseColor, DebugTime / TimeToFade);
	}

	return BaseColor;
}

FLinearColor USMGraphNode_Base::GetActiveBackgroundColor() const
{
	const USMEditorSettings* Settings = FSMBlueprintEditorUtils::GetEditorSettings();
	return Settings->ActiveStateColor;
}

const FSlateBrush* USMGraphNode_Base::GetNodeIcon()
{
	if(USMNodeInstance* Instance = GetNodeTemplate())
	{
		if(Instance->HasCustomIcon())
		{
			UTexture2D* Texture = Instance->GetNodeIcon();
			const FString TextureName = Texture ? Texture->GetFullName() : FString();
			const FVector2D Size = Instance->GetNodeIconSize();
			const FLinearColor TintColor = Instance->GetNodeIconTintColor();
			if(CachedTexture != TextureName || CachedTextureSize != Size || CachedNodeTintColor != TintColor)
			{
				CachedTexture = TextureName;
				CachedTextureSize = Size;
				CachedNodeTintColor = TintColor;
				FSlateBrush Brush;
				if (Texture)
				{
					Brush.SetResourceObject(Texture);
					Brush.ImageSize = Size.GetMax() > 0 ? Size : FVector2D(Texture->GetSizeX(), Texture->GetSizeY());
					Brush.TintColor = TintColor;
				}
				else
				{
					Brush = FSlateNoResource();
				}
				
				CachedBrush = Brush;
			}

			return &CachedBrush;
		}
	}

	return nullptr;
}

bool USMGraphNode_Base::ConvertToCurrentVersion(bool bOnlyOnLoad)
{	
	if ((!IsTemplate() && GetLinker() && GetLinker()->IsPersistent() && GetLinker()->IsLoading()) || !bOnlyOnLoad)
	{
		if (GetDefaultNodeClass())
		{
			if (NodeInstanceTemplate == nullptr)
			{
				// Configure pre 2.3 nodes that are missing node instance templates.
				InitTemplate();
			}
			if (LoadedVersion < TEMPLATE_PROPERTY_VERSION)
			{
				// Pre 2.3 nodes need to have their properties imported to the node instance template.
				ImportDeprecatedProperties();
			}
			if (LoadedVersion < STATESTACK_VERSION)
			{
				// Pre 2.4 nodes need their graph property guids updated to account for different node templates.
				
				bRequiresGuidRegeneration = true;
				bNeedsStateStackConversion = true;

				if (!bIsPrecompiling)
				{
					// If pre-compile isn't what called the upgrade method we need to force recreate the properties
					// as a precaution because the booleans aren't saved and this is a one time upgrade. Testing
					// show that this branch shouldn't be called.
					ForceRecreateProperties();
					bRequiresGuidRegeneration = false;
					bNeedsStateStackConversion = false;
				}
			}
		}

		return SetToCurrentVersion();
	}

	return false;
}

bool USMGraphNode_Base::SetToCurrentVersion()
{
	const int32 LastVersion = LoadedVersion;
	LoadedVersion = CURRENT_VERSION;

	return LastVersion != LoadedVersion;
}

void USMGraphNode_Base::ForceSetVersion(int32 NewVersion)
{
	LoadedVersion = NewVersion;
}

void USMGraphNode_Base::RequestSlateRefresh()
{
	OnGraphNodeRefreshRequestedEvent.Broadcast(this);
}

FLinearColor USMGraphNode_Base::Internal_GetBackgroundColor() const
{
	return FLinearColor::Black;
}

const FLinearColor* USMGraphNode_Base::GetCustomBackgroundColor(USMNodeInstance* NodeInstance) const
{
	if (!NodeInstance)
	{
		NodeInstance = NodeInstanceTemplate;
	}
	
	if(!NodeInstance || !NodeInstance->HasCustomColor())
	{
		return nullptr;
	}

	return &NodeInstance->GetNodeColor();
}

void USMGraphNode_Base::RemovePropertyGraph(USMPropertyGraph* PropertyGraph, bool RemoveFromMaps)
{
	if(!PropertyGraph)
	{
		return;
	}

	PropertyGraph->Modify();
	PropertyGraph->ResultNode->Modify();
	
	if(RemoveFromMaps)
	{
		const FGuid& Guid = PropertyGraph->ResultNode->GetPropertyNode()->GetGuid();
		GraphPropertyGraphs.Remove(Guid);
		GraphPropertyNodes.Remove(Guid);
		GraphPropertyTemplates.Remove(Guid);
	}
	
	if (FSMBlueprintEditor* Editor = FSMBlueprintEditorUtils::GetStateMachineEditor(this))
	{
		Editor->CloseDocumentTab(PropertyGraph);
	}

	if (UEdGraph* ParentGraph = Cast<UEdGraph>(PropertyGraph->GetOuter()))
	{
		ParentGraph->Modify();
		ParentGraph->SubGraphs.Remove(PropertyGraph);
	}

	if(PropertyGraph->HasAnyFlags(RF_NeedLoad | RF_NeedPostLoad))
	{
		FSMBlueprintEditorUtils::TrashObject(PropertyGraph);
	}
	else
	{
		UBlueprint* Blueprint = FSMBlueprintEditorUtils::FindBlueprintForNodeChecked(this);
		FSMBlueprintEditorUtils::RemoveGraph(Blueprint, PropertyGraph, EGraphRemoveFlags::None);
	}
}

void USMGraphNode_Base::HandlePropertyGraphArrayRemoval(TArray<FSMGraphProperty_Base*>& GraphProperties,
	TArray<FSMGraphProperty>& TempGraphProperties, FProperty* TargetProperty, int32 RemovalIndex, int32 ArraySize, FSMGraphProperty* OverrideGraphProperty, USMNodeInstance* Template)
{
	FSMGraphProperty TempProperty;

	if (OverrideGraphProperty)
	{
		// Assign override defaults before assigning a guid.
		TempProperty = *OverrideGraphProperty;
	}

	// The property index being removed.
	FSMNodeInstanceUtils::SetGraphPropertyFromProperty(TempProperty, TargetProperty, Template, RemovalIndex);
	UEdGraph* PropertyGraphToRemove = GraphPropertyGraphs.FindRef(TempProperty.GetGuid());
	
	// Remove the graph for the deleted index.
	if (PropertyGraphToRemove)
	{
		RemovePropertyGraph(Cast<USMPropertyGraph>(PropertyGraphToRemove), true);
	}

	// The current graph array size hasn't been adjusted for the removal yet and we need to iterate through everything.
	ArraySize++; 

	// Reassign all guids that follow next in the array to their current index - 1.
	for (int32 NextIdx = RemovalIndex + 1; NextIdx < ArraySize; ++NextIdx)
	{
		FSMGraphProperty NextGraphProperty;

		if (OverrideGraphProperty)
		{
			// Assign override defaults before assigning a guid.
			NextGraphProperty = *OverrideGraphProperty;
		}

		FSMNodeInstanceUtils::SetGraphPropertyFromProperty(NextGraphProperty, TargetProperty, Template, NextIdx);
		const FGuid OldGuid = NextGraphProperty.GetGuid();

		UEdGraph* NextGraph = GraphPropertyGraphs.FindRef(OldGuid);
		USMGraphK2Node_PropertyNode_Base* NextNode = GraphPropertyNodes.FindRef(OldGuid);
		
		// Remove the old guids.
		GraphPropertyGraphs.Remove(OldGuid);
		GraphPropertyNodes.Remove(OldGuid);
		USMNodeInstance* OldTemplate = nullptr;
		GraphPropertyTemplates.RemoveAndCopyValue(OldGuid, OldTemplate);

		// Update the new guids.
		if (OldTemplate != nullptr)
		{
			FSMNodeInstanceUtils::SetGraphPropertyFromProperty(NextGraphProperty, TargetProperty, OldTemplate, NextIdx - 1);
		}
		if (NextGraph && NextNode)
		{
			const FGuid& NewGuid = NextGraphProperty.GetGuid();
			
			GraphPropertyGraphs.Add(NewGuid, NextGraph);
			GraphPropertyNodes.Add(NewGuid, NextNode);
			GraphPropertyTemplates.Add(NewGuid, Template);
		}

		TempGraphProperties.Add(NextGraphProperty);
		GraphProperties.Add(&TempGraphProperties.Last());
	}
}

void USMGraphNode_Base::HandlePropertyGraphArrayInsertion(TArray<FSMGraphProperty_Base*>& GraphProperties,
	TArray<FSMGraphProperty>& TempGraphProperties, FProperty* TargetProperty, int32 InsertionIndex, int32 ArraySize,
	FSMGraphProperty* OverrideGraphProperty, USMNodeInstance* Template)
{
	// Reassign this guid and all guids that follow next in the array to their current index + 1.
	// Go backwards since the previous index would overwrite the next index.
	for (int32 NextIdx = ArraySize - 1; NextIdx >= InsertionIndex; --NextIdx)
	{
		FSMGraphProperty NextGraphProperty;

		if (OverrideGraphProperty)
		{
			// Assign override defaults before assigning a guid.
			NextGraphProperty = *OverrideGraphProperty;
		}

		FSMNodeInstanceUtils::SetGraphPropertyFromProperty(NextGraphProperty, TargetProperty, Template, NextIdx);
		const FGuid OldGuid = NextGraphProperty.GetGuid();

		UEdGraph* NextGraph = GraphPropertyGraphs.FindRef(OldGuid);
		USMGraphK2Node_PropertyNode_Base* NextNode = GraphPropertyNodes.FindRef(OldGuid);

		// Remove the old guids.
		GraphPropertyGraphs.Remove(OldGuid);
		GraphPropertyNodes.Remove(OldGuid);
		USMNodeInstance* OldTemplate = nullptr;
		GraphPropertyTemplates.RemoveAndCopyValue(OldGuid, OldTemplate);

		// Update the new guids.
		if (OldTemplate != nullptr)
		{
			// Can be nullptr on array add (not insertion)
			FSMNodeInstanceUtils::SetGraphPropertyFromProperty(NextGraphProperty, TargetProperty, OldTemplate, NextIdx + 1);
		}
		
		if (NextGraph && NextNode)
		{
			const FGuid& NewGuid = NextGraphProperty.GetGuid();

			GraphPropertyGraphs.Add(NewGuid, NextGraph);
			GraphPropertyNodes.Add(NewGuid, NextNode);
			GraphPropertyTemplates.Add(NewGuid, OldTemplate);
		}
	}

	// Add the temp graph properties including the insertion property now that their guids have been updated properly.
	for (int32 Idx = InsertionIndex; Idx < ArraySize; ++Idx)
	{
		FSMGraphProperty NextGraphProperty;

		if (OverrideGraphProperty)
		{
			// Assign override defaults before assigning a guid.
			NextGraphProperty = *OverrideGraphProperty;
		}
		
		FSMNodeInstanceUtils::SetGraphPropertyFromProperty(NextGraphProperty, TargetProperty, Template, Idx);
		TempGraphProperties.Add(NextGraphProperty);
		GraphProperties.Add(&TempGraphProperties.Last());
	}
}

#undef LOCTEXT_NAMESPACE
