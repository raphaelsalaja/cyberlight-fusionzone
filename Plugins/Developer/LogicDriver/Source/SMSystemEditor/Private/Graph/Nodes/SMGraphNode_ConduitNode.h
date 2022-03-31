// Copyright Recursoft LLC 2019-2022. All Rights Reserved.

#pragma once

#include "SMGraphNode_StateNode.h"

#include "SMConduitInstance.h"

#include "SMGraphNode_ConduitNode.generated.h"

class USMGraphNode_TransitionEdge;
class USMGraph;

UCLASS(MinimalAPI)
class USMGraphNode_ConduitNode : public USMGraphNode_StateNodeBase
{
	GENERATED_UCLASS_BODY()

	/** Select a custom node class to use for this node. This can be a blueprint or C++ class. */
	UPROPERTY(EditAnywhere, NoClear, Category = "Conduit", meta = (BlueprintBaseOnly))
	TSubclassOf<USMConduitInstance> ConduitClass;

	/**
	 * @deprecated Set on the node template instead.
	 */
	UPROPERTY()
	uint8 bEvalWithTransitions_DEPRECATED: 1;

public:
	// UEdGraphNode
	virtual void AllocateDefaultPins() override;
	virtual FText GetTooltipText() const override;
	virtual void PostPlacedNewNode() override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	//~ UEdGraphNode

	// USMGraphNode_Base
	virtual void ResetDebugState() override;
	virtual void UpdateTime(float DeltaTime) override;
	virtual void ImportDeprecatedProperties() override;
	virtual void PlaceDefaultInstanceNodes() override;
	virtual UClass* GetNodeClass() const override { return ConduitClass; }
	virtual void SetNodeClass(UClass* Class) override;
	virtual FName GetFriendlyNodeName() const override { return "Conduit"; }
	virtual void SetRuntimeDefaults(FSMState_Base& State) const override;
	virtual FLinearColor GetActiveBackgroundColor() const override;
	virtual UObject* GetJumpTargetForDoubleClick() const override;
	// ~USMGraphNode_Base

	/** If this conduit should be configured to evaluate with transitions. */
	bool ShouldEvalWithTransitions() const;
	bool WasEvaluating() const { return bWasEvaluating; }

protected:
	virtual FLinearColor Internal_GetBackgroundColor() const override;

	bool bWasEvaluating;
};
