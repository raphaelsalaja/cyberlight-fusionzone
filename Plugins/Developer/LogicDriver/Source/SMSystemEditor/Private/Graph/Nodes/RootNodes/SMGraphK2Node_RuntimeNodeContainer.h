// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SMGraphK2Node_RootNode.h"
#include "Nodes/SMNode_Base.h"
#include "Compilers/SMKismetCompiler.h"
#include "SMGraphK2Node_RuntimeNodeContainer.generated.h"

UCLASS(MinimalAPI)
class USMGraphK2Node_RuntimeNodeContainer : public USMGraphK2Node_RootNode
{
	GENERATED_UCLASS_BODY()
	// UEdGraphNode
	virtual void PrepareForCopying() override;
	virtual void PostPasteNode() override;
	virtual bool HasExternalDependencies(TArray<UStruct*>* OptionalOutput) const override;
	// ~UedGraphNode

	virtual FSMNode_Base* GetRunTimeNode() { return nullptr; }
	FORCEINLINE FSMNode_Base* GetRunTimeNodeChecked() { FSMNode_Base* Node = GetRunTimeNode(); check(Node); return Node; }

	/** Helper to determine which run time node this graph node represents.
	 * Requires that the GraphNode contain a node derived from USMNode_Base.
	 */
	UScriptStruct* GetRunTimeNodeType() const;
	FStructProperty* GetRuntimeNodeProperty() const;

	// Assign a new runtime node Guid.
	void ForceGenerateNodeGuid();
	// Checks if a new Guid has been generated. This resets on every copy.
	bool HasNewNodeGuidGenerated() const { return bHasNodeGuidGeneratedForCopy; }

	/** Generated during compile so this container can be found by references when placed on the consolidated event graph. */
	UPROPERTY()
	FGuid ContainerOwnerGuid;
	
private:
	bool bHasNodeGuidGeneratedForCopy;
};

UCLASS()
class SMSYSTEMEDITOR_API USMGraphK2Node_RuntimeNodeReference : public USMGraphK2Node_RootNode
{
	GENERATED_UCLASS_BODY()

	//~ UEdGraphNode
	virtual void PostPasteNode() override;
	// ~UedGraphNode

	// USMGraphK2Node_Base
	virtual void PreCompileValidate(FCompilerResultsLog& MessageLog) override;
	// ~USMGraphK2Node_Base

	void SyncWithContainer();

	/**
	 * Locates the runtime container node. This assumes the graph the reference node belongs to
	 * also has the container node nested at some level. Result is checked except when processing
	 * StateMachineState nodes, as their container may not be generated yet.
	 */
	virtual USMGraphK2Node_RuntimeNodeContainer* GetRuntimeContainer() const;

	/** When true the state machine compiler won't automatically expand this node and will instead call CustomExpandNode or allow the engine to do it.. */
	virtual bool HandlesOwnExpansion() const { return false; }
	/** Custom node expand. This occurs at an earlier stage than when the engine normally calls ExpandNode. */
	virtual void CustomExpandNode(FSMKismetCompilerContext& CompilerContext, USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty) {}
	
	UPROPERTY()
	FGuid RuntimeNodeGuid;

	/** Set during compile to match id generated in this reference's owning container. */
	UPROPERTY()
	FGuid ContainerOwnerGuid;
	
protected:
	/** Creates a function call and wires a guid struct member get to the function input. */
	UK2Node_CallFunction* CreateFunctionCallWithGuidInput(UFunction* Function, FSMKismetCompilerContext& CompilerContext,
		USMGraphK2Node_RuntimeNodeContainer* RuntimeNodeContainer, FProperty* NodeProperty, FName PinName = "Guid");

	void GetMenuActions_Internal(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const;

};
