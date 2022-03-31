// Copyright Recursoft LLC 2019-2022. All Rights Reserved.

#pragma once

#include "Graph/Nodes/SMGraphNode_Base.h"
#include "NodeStack/NodeStackContainer.h"
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

	/** Select a custom node class to use for this node. This can be a blueprint or C++ class. */
	UPROPERTY(EditAnywhere, NoClear, Category = "Transition", meta = (BlueprintBaseOnly))
	TSubclassOf<USMTransitionInstance> TransitionClass;
	
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
	 * The guid assigned to this property if one exists.
	 */
	UPROPERTY()
	FGuid DelegatePropertyGuid;
	
	/**
	 * Available delegates.
	 */
	UPROPERTY(EditAnywhere, Category = "Event Trigger")
	FName DelegatePropertyName;

	/**
	 * If the event should trigger a targeted update of the state machine limited to this
	 * transition and destination state.
	 * 
	 * This can efficiently allow state machines with tick disabled to update. This
	 * won't evaluate parallel or super state transitions.
	 *
	 * This setting can also be changed on each Event Trigger Result Node.
	 */
	UPROPERTY(EditAnywhere, Category = "Event Trigger", meta = (DisplayName = "Targeted Update"))
	uint8 bEventTriggersTargetedUpdate: 1;

	/**
	 * If the event should trigger a full update of the state machine. Setting this will be applied
	 * after 'Targeted Update'. A full update consists of evaluating transitions top down from the
	 * root state machine, as well as running OnStateUpdate if necessary.
	 *
	 * This is a legacy setting. To maintain old legacy behavior enable this setting and
	 * disable 'Targeted Update'.
	 *
	 * This setting can also be changed on each Event Trigger Result Node.
	 */
	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = "Event Trigger", meta = (DisplayName = "Full Update"))
	uint8 bEventTriggersFullUpdate: 1;

	/**
	 * @deprecated Set on the node template instead.
	 */
	UPROPERTY()
	uint8 bCanEvaluate_DEPRECATED: 1;

	/**
	 * @deprecated Set on the node template instead.
	 */
	UPROPERTY()
	uint8 bCanEvaluateFromEvent_DEPRECATED: 1;
	
	/**
	 * @deprecated Set on the node template instead.
	 */
	UPROPERTY()
	uint8 bCanEvalWithStartState_DEPRECATED: 1;

	/**
	 * Auto format the local graph and generate an expression for conditional evaluation.
	 * This will physically add or remove blueprint operator nodes to the local graph.
	 * 
	 * For more complex expressions generate the initial graph using the transition stack,
	 * uncheck Auto Format Graph, and update the blueprint operator nodes in the local graph.
	 *
	 * This is ideal for quick prototyping or areas where performance isn't critical,
	 * but for optimal memory usage and performance use a single transition class instead.
	 * Even with pure C++ transition classes any operator nodes in the local graph will
	 * require blueprint graph evaluation.
	 */
	UPROPERTY(EditAnywhere, Category = "Expression Generation")
	uint8 bAutoFormatGraph: 1;

	/**
	 * NOT the primary node instance or condition. No impact if only using pin defaults.
	 * Requires bAutoFormatGraph set.
	 */
	UPROPERTY(EditAnywhere, Category = "Expression Generation", meta = (DisplayName = "NOT Primary Condition"))
	uint8 bNOTPrimaryCondition: 1;
	
	/**
	 * Add additional transition classes so simple expressions can be used to determine if the transition should pass.
	 * Requires bAutoFormatGraph.
	 */
	UPROPERTY(EditAnywhere, Category = "Expression Generation")
	TArray<FTransitionStackContainer> TransitionStack;

	/**
	 * @deprecated Set on the node template instead.
	 */
	UPROPERTY()
	int32 PriorityOrder_DEPRECATED;

public:
	/** Copy configuration settings to the runtime node. */
	void SetRuntimeDefaults(FSMTransition& Transition) const;

	/** Copy configurable settings from another transition node. */
	void CopyFrom(const USMGraphNode_TransitionEdge& Transition);

	/** Find the FSMTransition used to set defaults. */
	FSMTransition* GetRuntimeNode() const;
	
	// UEdGraphNode
	virtual void AllocateDefaultPins() override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual void PinConnectionListChanged(UEdGraphPin* Pin) override;
	virtual void PostPlacedNewNode() override;
	virtual void PrepareForCopying() override;
	virtual void PostPasteNode() override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent) override;
	virtual void DestroyNode() override;
	virtual bool CanDuplicateNode() const override { return true; }
	virtual void ReconstructNode() override;
	virtual UObject* GetJumpTargetForDoubleClick() const override;
	// ~UEdGraphNode

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
	virtual void OnCompile(FSMKismetCompilerContext& CompilerContext) override;
	virtual bool AreTemplatesFullyLoaded() const override;
	virtual bool DoesNodePossiblyHaveConstructionScripts() const override;
	virtual void RunAllConstructionScripts_Internal() override;
	// ~USMGraphNode_Base

protected:
	void CreateBoundGraph();
	void SetBoundGraph(UEdGraph* Graph);

public:
	/** Return the color to use for the transition. */
	FLinearColor GetTransitionColor(bool bIsHovered) const;

	/**
	 * Return the correct icon for the transition or transition stack.
	 * @param InIndex The icon to retrieve. < 0 for base transition, 0+ for the transition stack.
	 */
	const FSlateBrush* GetTransitionIcon(int32 InIndex);
	
	UClass* GetSelectedDelegateOwnerClass() const;
	
	void GoToTransitionEventNode();

	void InitTransitionDelegate();
	
protected:
	void SetupDelegateDefaults();
	void RefreshTransitionDelegate();
	
	/** Record the guid. */
	void UpdateTransitionDelegateGuid();

	/** Update all applicable transition result nodes with the event settings of this node. */
	void UpdateResultNodeEventSettings();
	
public:
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
	bool IsFromAnyState() const;

	/** Return the best pin to use for linear expression display. */
	UEdGraphPin* GetLinearExpressionPin() const;

	///////////////////////
	/// Transition Stack
	///////////////////////
	
	/** Return all transition stack templates. */
	const TArray<FTransitionStackContainer>& GetAllNodeStackTemplates() const;

	// USMGraphNode_Base
	/**
	 * Retrieve the array index from the template guid.
	 *
	 * @return the array index or INDEX_NONE if not found.
	 */
	virtual int32 GetIndexOfTemplate(const FGuid& TemplateGuid) const override;
	// ~USMGraphNode_Base
	
	/**
	 * Retrieve the template instance from an index.
	 *
	 * @return the NodeInstance template.
	 */
	USMNodeInstance* GetTemplateFromIndex(int32 Index) const;

	/**
	 * Retrieve the template instance from a template guid.
	 *
	 * @return the NodeInstance template.
	 */
	USMNodeInstance* GetTemplateFromGuid(const FGuid& TemplateGuid) const;

	/** Return the user hovered stack template, or nullptr. */
	USMNodeInstance* GetHoveredStackTemplate() const;

	/** Clear the cached template. */
	void ClearCachedHoveredStackTemplate() const { CachedHoveredTransitionStack = nullptr; }
	
	void InitTransitionStack();
	void DestroyTransitionStack();

	/** Checks if there is at least one valid transition stack element. */
	bool HasValidTransitionStack() const;

	/** Place transition stack nodes into the local graph. */
	void FormatGraphForStackNodes();

protected:
	/** Add any transition stack instance nodes not already present. */
	void AddNewStackInstanceNodes();
	
	/** Check for and remove any GetStackNodeInstance nodes that aren't used. */
	void RemoveUnusedStackInstanceNodes();

private:
	/** Auto added nodes for the transition stack. */
	UPROPERTY()
	TArray<UEdGraphNode*> AutoGeneratedStackNodes;

	/**
	 * The initial auto generated operator. Tracked so pin 0 can be used for reconnecting
	 * user entered pins when regenerating.
	 */
	UPROPERTY()
	class UK2Node_CommutativeAssociativeBinaryOperator* InitialOperatorNode;

	/**
	 * When the user is hovering a transition stack and has right clicked.
	 * Cached so the context menu knows what was hovered at time of right click.
	 */
	UPROPERTY(Transient, DuplicateTransient)
	mutable USMNodeInstance* CachedHoveredTransitionStack;
	
	///////////////////////
	/// End Transition Stack
	///////////////////////

protected:
	virtual FLinearColor Internal_GetBackgroundColor() const override;
	void SetDefaultsWhenPlaced();

protected:
	bool bWasEvaluating;
	
private:
	friend class FSMKismetCompilerContext;
	friend class FSMGraphConnectionDrawingPolicy;
	/* Connection drawing class manages these properties, but they're
	 * stored here because connection drawing is repeatedly reinstantiated. */

	// UTC time stamp user last hovered this node.
	FDateTime LastHoverTimeStamp;
	
	// Time in seconds since last hover.
	double TimeSinceHover;
	
	// If the user is considered hovering this node.
	bool bIsHoveredByUser;

	// Determined by kismet compiler. 
	bool bFromAnyState;
};
