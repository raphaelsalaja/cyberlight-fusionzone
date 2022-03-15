// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphNode.h"
#include "Graph/Nodes/SMGraphNode_Base.h"
#include "Helpers/SMGraphK2Node_FunctionNodes.h"
#include "SMTransitionInstance.h"
#include "SMGraphNode_TransitionEdge.generated.h"


struct FSMTransition;
class USMGraphNode_StateNodeBase;
class USMTransitionGraph;

UCLASS()
class SMSYSTEMEDITOR_API USMGraphNode_TransitionEdge : public USMGraphNode_Base
{
	GENERATED_UCLASS_BODY()

	/**
	 * The instance which owns the delegate the transition should bind to.
	 */
	UPROPERTY(EditAnywhere, Category = "Event Trigger")
	TEnumAsByte<ESMDelegateOwner> DelegateOwnerInstance;

	/**
	 * The class of the instance containing the delegate.
	 */
	UPROPERTY(EditAnywhere, Category = "Event Trigger")
	TSubclassOf<UObject> DelegateOwnerClass;

	/**
	 * Available delegates.
	 */
	UPROPERTY(EditAnywhere, Category = "Event Trigger")
	FName DelegatePropertyName;

	/**
	 * The guid assigned to this property if one exists.
	 */
	UPROPERTY()
	FGuid DelegatePropertyGuid;
	
	/**
	 * @deprecated Set on the node template instead.
	 */
	UPROPERTY()
	int32 PriorityOrder_DEPRECATED;

	/**
	 * @deprecated Set on the node template instead.
	 */
	UPROPERTY()
	bool bCanEvaluate_DEPRECATED;

	/**
	 * @deprecated Set on the node template instead.
	 */
	UPROPERTY()
	bool bCanEvaluateFromEvent_DEPRECATED;
	
	/**
	 * @deprecated Set on the node template instead.
	 */
	UPROPERTY()
	bool bCanEvalWithStartState_DEPRECATED;
	
	UPROPERTY(EditAnywhere, NoClear, Category = "Class", meta = (BlueprintBaseOnly))
	TSubclassOf<USMTransitionInstance> TransitionClass;
	
	/** Copy configuration settings to the runtime node. */
	void SetRuntimeDefaults(FSMTransition& Transition) const;

	/** Copy configurable settings from another transition node. */
	void CopyFrom(const USMGraphNode_TransitionEdge& Transition);
	
	//~ Begin UEdGraphNode Interface
	virtual void AllocateDefaultPins() override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual void PinConnectionListChanged(UEdGraphPin* Pin) override;
	virtual void PostPlacedNewNode() override;
	virtual void PrepareForCopying() override;
	virtual void PostPasteNode() override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void DestroyNode() override;
	virtual bool CanDuplicateNode() const override { return true; }
	virtual void ReconstructNode() override;
	//~ End UEdGraphNode Interface

	// USMGraphNode_Base
	virtual void ResetDebugState() override;
	virtual void UpdateTime(float DeltaTime) override;
	virtual void ImportDeprecatedProperties() override;
	virtual void PlaceDefaultInstanceNodes() override;
	virtual FName GetFriendlyNodeName() const override { return "Transition"; }
	virtual FLinearColor GetBackgroundColor() const override;
	virtual FLinearColor GetActiveBackgroundColor() const override;
	virtual UClass* GetNodeClass() const override { return TransitionClass; }
	virtual void SetNodeClass(UClass* Class) override;
	virtual bool SupportsPropertyGraphs() const override { return false; }
	virtual float GetMaxDebugTime() const override;
	virtual void PreCompile(FSMKismetCompilerContext& CompilerContext) override;
	// ~USMGraphNode_Base
	
	FLinearColor GetTransitionColor(bool bIsHovered) const;

	void CreateBoundGraph();
	void SetBoundGraph(UEdGraph* Graph);
	
	UClass* GetSelectedDelegateOwnerClass() const;
	
	void SetupDelegateDefaults();
	void InitTransitionDelegate();
	void GoToTransitionEventNode();
	void RefreshTransitionDelegate();
	
	FString GetTransitionName() const;
	void CreateConnections(USMGraphNode_StateNodeBase* Start, USMGraphNode_StateNodeBase* End);

	/** Checks if there is any possibility of transitioning. */
	bool PossibleToTransition() const;

	USMTransitionGraph* GetTransitionGraph() const;
	
	USMGraphNode_StateNodeBase* GetFromState() const;
	USMGraphNode_StateNodeBase* GetToState() const;

	bool ShouldRunParallel() const;
	bool WasEvaluating() const { return bWasEvaluating; }
	bool IsHovered() const { return bIsHoveredByUser; }
protected:
	virtual FLinearColor Internal_GetBackgroundColor() const override;
	void SetDefaultsWhenPlaced();

	/** Record the guid. */
	void UpdateTransitionDelegateGuid();
	
	bool bWasEvaluating;

private:
	friend class FSMGraphConnectionDrawingPolicy;
	/* Connection drawing class manages these properties, but they're
	 * stored here because connection drawing is repeatedly reinstantiated. */

	// UTC time stamp user last hovered this node.
	FDateTime LastHoverTimeStamp;
	// Time in seconds since last hover.
	double TimeSinceHover;
	// If the user is considered hovering this node.
	bool bIsHoveredByUser;
};
