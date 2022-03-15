// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMGraphK2Node_RuntimeNodeContainer.h"
#include "BlueprintNodeSpawner.h"
#include "BlueprintActionDatabaseRegistrar.h"
#include "K2Node_StructMemberGet.h"
#include "K2Node_CallFunction.h"
#include "Graph/SMGraph.h"
#include "Utilities/SMBlueprintEditorUtils.h"

#define LOCTEXT_NAMESPACE "SMContainerNode"

USMGraphK2Node_RuntimeNodeContainer::USMGraphK2Node_RuntimeNodeContainer(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer), bHasNodeGuidGeneratedForCopy(false)
{
}

void USMGraphK2Node_RuntimeNodeContainer::PrepareForCopying()
{
	Super::PrepareForCopying();
	// So referenced nodes know that this node is not ready.
	bHasNodeGuidGeneratedForCopy = false;
}

void USMGraphK2Node_RuntimeNodeContainer::PostPasteNode()
{
	Super::PostPasteNode();

	if (bIsBeingDestroyed)
	{
		return;
	}

	ForceGenerateNodeGuid();
}

bool USMGraphK2Node_RuntimeNodeContainer::HasExternalDependencies(TArray<UStruct*>* OptionalOutput) const
{
	UClass* OwningClass = nullptr;
	if(USMGraphNode_Base* GraphNode = Cast<USMGraphNode_Base>(GetGraph()->GetOuter()))
	{
		OwningClass = GraphNode->GetNodeClass();
	}

	// Add the owning node class here since the USMGraphNode that really owns it doens't have a HasExternalDependencies method.
	if (OwningClass && OptionalOutput)
	{
		OptionalOutput->AddUnique(OwningClass);
	}
	
	const bool bSuperResult = Super::HasExternalDependencies(OptionalOutput);
	return bSuperResult || OwningClass != nullptr;
}

UScriptStruct* USMGraphK2Node_RuntimeNodeContainer::GetRunTimeNodeType() const
{
	UScriptStruct* BaseClass = FSMNode_Base::StaticStruct();

	for (TFieldIterator<FProperty> PropIt(GetClass(), EFieldIteratorFlags::IncludeSuper); PropIt; ++PropIt)
	{
		if (FStructProperty* StructProp = CastField<FStructProperty>(*PropIt))
		{
			if (StructProp->Struct->IsChildOf(BaseClass))
			{
				return StructProp->Struct;
			}
		}
	}

	return nullptr;
}

FStructProperty* USMGraphK2Node_RuntimeNodeContainer::GetRuntimeNodeProperty() const
{
	UScriptStruct* BaseFStruct = FSMNode_Base::StaticStruct();

	for (TFieldIterator<FProperty> PropIt(GetClass(), EFieldIteratorFlags::IncludeSuper); PropIt; ++PropIt)
	{
		if (FStructProperty* StructProp = CastField<FStructProperty>(*PropIt))
		{
			if (StructProp->Struct->IsChildOf(BaseFStruct))
			{
				return StructProp;
			}
		}
	}

	return nullptr;
}

void USMGraphK2Node_RuntimeNodeContainer::ForceGenerateNodeGuid()
{
	// This has already been called for this copy.
	if(bHasNodeGuidGeneratedForCopy)
	{
		return;
	}
	GetRunTimeNodeChecked()->GenerateNewNodeGuid();
	bHasNodeGuidGeneratedForCopy = true;
}

void USMGraphK2Node_RuntimeNodeReference::PostPasteNode()
{
	Super::PostPasteNode();

	if(bIsBeingDestroyed)
	{
		return;
	}

	USMGraphK2Node_RuntimeNodeContainer* ContainerNode = GetRuntimeContainer();

	// Check that the paste operation has completed for this node.
	if(ContainerNode && !ContainerNode->HasNewNodeGuidGenerated())
	{
		ContainerNode->ForceGenerateNodeGuid();
	}

	SyncWithContainer();
}

void USMGraphK2Node_RuntimeNodeReference::PreCompileValidate(FCompilerResultsLog& MessageLog)
{
	Super::PreCompileValidate(MessageLog);
	
	USMGraphK2Node_RuntimeNodeContainer* Container = GetRuntimeContainer();
	if (Container && Container->GetRunTimeNodeChecked()->GetNodeGuid() != RuntimeNodeGuid)
	{
		MessageLog.Error(TEXT("Runtime node mismatch on reference node @@ with container node @@"), this, Container);
	}
}

void USMGraphK2Node_RuntimeNodeReference::SyncWithContainer()

{	// Restore reference to container.
	if (USMGraphK2Node_RuntimeNodeContainer* Container = GetRuntimeContainer())
	{
		RuntimeNodeGuid = Container->GetRunTimeNodeChecked()->GetNodeGuid();
	}
}

USMGraphK2Node_RuntimeNodeContainer* USMGraphK2Node_RuntimeNodeReference::GetRuntimeContainer() const
{
	return FSMBlueprintEditorUtils::GetRuntimeContainerFromGraph(GetGraph());
}

UK2Node_CallFunction* USMGraphK2Node_RuntimeNodeReference::CreateFunctionCallWithGuidInput(UFunction* Function,
	FSMKismetCompilerContext& CompilerContext, USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer,
	FProperty* NodeProperty, FName PinName)
{
	UK2Node_CallFunction* GetReferenceFunctionNode = FSMBlueprintEditorUtils::CreateFunctionCall(CompilerContext.ConsolidatedEventGraph, Function);

	UK2Node_StructMemberGet* GuidGetNode = CompilerContext.SpawnIntermediateNode<UK2Node_StructMemberGet>(this, CompilerContext.ConsolidatedEventGraph);
	GuidGetNode->VariableReference.SetSelfMember(NodeProperty->GetFName());
	GuidGetNode->StructType = RuntimeNodeContainer->GetRunTimeNodeType();
	GuidGetNode->AllocateDefaultPins();

	UEdGraphPin* GetReferenceInputPin = GetReferenceFunctionNode->FindPinChecked(PinName, EGPD_Input);
	// Find the property on FSMNode. Can't use member name since it's protected.
	UEdGraphPin* ValuePin = GuidGetNode->FindPinChecked(FName("PathGuid"));

	CompilerContext.ConsolidatedEventGraph->GetSchema()->TryCreateConnection(ValuePin, GetReferenceInputPin);

	return GetReferenceFunctionNode;
}

void USMGraphK2Node_RuntimeNodeReference::GetMenuActions_Internal(
	FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	UClass* ActionKey = GetClass();

	// Only list option to create this node if it is not already placed.
	if (ActionRegistrar.IsOpenForRegistration(ActionKey))
	{
		UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
		check(NodeSpawner != nullptr);
		ActionRegistrar.AddBlueprintAction(ActionKey, NodeSpawner);
	}
}

USMGraphK2Node_RuntimeNodeReference::USMGraphK2Node_RuntimeNodeReference(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

#undef LOCTEXT_NAMESPACE
