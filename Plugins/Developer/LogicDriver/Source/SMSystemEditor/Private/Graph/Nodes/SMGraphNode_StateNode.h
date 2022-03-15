// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SMGraphNode_Base.h"

#include "SMState.h"
#include "SMStateInstance.h"

#include "EdGraph/EdGraphNode.h"

#include "SMGraphNode_StateNode.generated.h"

class USMGraphNode_TransitionEdge;

/** Base class required as states and conduits branch separately from a common source. */
UCLASS()
class SMSYSTEMEDITOR_API USMGraphNode_StateNodeBase : public USMGraphNode_Base
{
	GENERATED_UCLASS_BODY()

	/**
	 * @deprecated Set on the node template instead.
	 */
	UPROPERTY()
	bool bAlwaysUpdate_DEPRECATED;

	/**
	 * @deprecated Set on the node template instead.
	 */
	UPROPERTY()
	bool bDisableTickTransitionEvaluation_DEPRECATED;

	/**
	 * @deprecated Set on the node template instead.
	 */
	UPROPERTY()
	bool bEvalTransitionsOnStart_DEPRECATED;

	/**
	 * @deprecated Set on the node template instead.
	 */
	UPROPERTY()
	bool bExcludeFromAnyState_DEPRECATED;
	
	/**
	 * Set by the editor and read by the schema to allow self transitions.
	 * We don't want to drag / drop self transitions because a single pin click will
	 * trigger them. There doesn't seem to be an ideal way for the schema to detect
	 * mouse movement to prevent single clicks when in CanCreateConnection,
	 * so we're relying on a context menu.
	 */
	bool bCanTransitionToSelf;

	// UEdGraphNode
	virtual void AllocateDefaultPins() override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual bool GetCanRenameNode() const override;
	virtual void AutowireNewNode(UEdGraphPin* FromPin) override;
	virtual void PostPlacedNewNode() override;
	virtual void PostPasteNode() override;
	virtual void DestroyNode() override;
	virtual TSharedPtr<class INameValidatorInterface> MakeNameValidator() const override;
	virtual void PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent) override;
	// ~UEdGraphNode

	// USMGraphNode
	virtual void ImportDeprecatedProperties() override;
	virtual void OnNodeMoved(const FVector2D& NewPosition) override;
	// ~USMGraphNode
	
	/** Copy configuration settings to the runtime node. */
	virtual void SetRuntimeDefaults(FSMState_Base& State) const;
	virtual FString GetStateName() const;

	/**
	 * Checks if there are no outbound transitions.
	 * @param bCheckAnyState Checks if an any state will prevent this from being an end state.
	 */
	virtual bool IsEndState(bool bCheckAnyState = true) const;

	/** Checks if there are any connections to this node. Does not count self. */
	virtual bool HasInputConnections() const;

	/** Checks if there are any connections from this node. */
	virtual bool HasOutputConnections() const;

	/** If transitions are supposed to run in parallel. */
	bool ShouldDefaultTransitionsToParallel() const;

	/** If this node shouldn't receive transitions from an Any State. */
	bool ShouldExcludeFromAnyState() const;
	
	/** Checks if there is a node connected via outgoing transition. */
	bool HasTransitionToNode(UEdGraphNode* Node) const;

	/** Checks if there is a node connected via incoming transition. */
	bool HasTransitionFromNode(UEdGraphNode* Node) const;

	/** Returns the previous node at the given input linked to index. */
	USMGraphNode_StateNodeBase* GetPreviousNode(int32 Index = 0) const;

	/** Returns the next node at the given output linked to index. */
	USMGraphNode_StateNodeBase* GetNextNode(int32 Index = 0) const;

	/** Returns a transition going to the input pin. */
	USMGraphNode_TransitionEdge* GetPreviousTransition(int32 Index = 0) const;

	/** Returns a transitions from the output pin. */
	USMGraphNode_TransitionEdge* GetNextTransition(int32 Index = 0) const;

	/** Return all transitions to the input pin. */
	void GetInputTransitions(TArray<USMGraphNode_TransitionEdge*>& OutTransitions) const;

	/** Return all transitions from the output pin. */
	void GetOutputTransitions(TArray<USMGraphNode_TransitionEdge*>& OutTransitions) const;

	/** Return the entry pin if this states is connected to an entry node, nullptr otherwise. */
	UEdGraphPin* GetConnectedEntryPin() const;
	
	FLinearColor GetBackgroundColorForNodeInstance(USMNodeInstance* NodeInstance) const;
protected:
	virtual FLinearColor Internal_GetBackgroundColor() const override;

private:
	friend class SGraphNode_StateNode;
	bool bRequestInitialAnimation;
};

USTRUCT()
struct FStateStackContainer
{
	GENERATED_BODY()

	FStateStackContainer() : StateStackClass(nullptr), NodeStackInstanceTemplate(nullptr) {}
	explicit FStateStackContainer(TSubclassOf<USMStateInstance> InClass, USMNodeInstance* InTemplate = nullptr) : StateStackClass(InClass), NodeStackInstanceTemplate(InTemplate) {}
	
	/** The class to assign the template for this state stack. */
	UPROPERTY(EditAnywhere, Category = "Class", meta = (BlueprintBaseOnly))
	TSubclassOf<USMStateInstance> StateStackClass;

	/** The instanced template to use as an archetype. */
	UPROPERTY(VisibleDefaultsOnly, Instanced, Category = "Class", meta = (DisplayName = Template))
	USMNodeInstance* NodeStackInstanceTemplate;

	void InitTemplate(UObject* Owner, bool bForceInit = false, bool bForceNewGuid = false);
	void DestroyTemplate();

	UPROPERTY()
	FGuid TemplateGuid;
};

/**
 * Regular state nodes which have K2 graphs.
 */
UCLASS()
class SMSYSTEMEDITOR_API USMGraphNode_StateNode : public USMGraphNode_StateNodeBase
{
public:
	GENERATED_UCLASS_BODY()
	
	UPROPERTY(EditAnywhere, NoClear, Category = "Class", meta = (BlueprintBaseOnly))
	TSubclassOf<USMStateInstance> StateClass;

	/** Augment the state by adding additional state classes to perform logic processing. */
	UPROPERTY(EditAnywhere, Category = "Class")
	TArray<FStateStackContainer> StateStack;

	// UEdGraphNode
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	//~ UEdGraphNode
	
	// USMGraphNode_Base
	virtual void PlaceDefaultInstanceNodes() override;
	virtual UClass* GetNodeClass() const override { return StateClass; }
	virtual void SetNodeClass(UClass* Class) override;
	virtual FName GetFriendlyNodeName() const override { return "State"; }
	virtual void InitTemplate() override;
	virtual bool AreTemplatesFullyLoaded() const override;
	virtual bool DoesNodePossiblyHaveConstructionScripts() const override;
	virtual void RunAllConstructionScripts_Internal() override;
	virtual void OnCompile(FSMKismetCompilerContext& CompilerContext) override;
	// ~USMGraphNode_Base

	const TArray<FStateStackContainer>& GetAllNodeStackTemplates() const;

	/**
	 * Retrieve the array index from the template guid
	 *
	 * @return the array index or -1 if not found.
	 */
	int32 GetIndexOfTemplate(const FGuid& TemplateGuid) const;

	/**
	 * Retrieve the template instance from an index.
	 *
	 * @return the NodeInstance template.
	 */
	USMNodeInstance* GetTemplateFromIndex(int32 Index) const;
	
	void InitStateStack();
	void DestroyStateStack();
};

/**
 * Nodes without a graph that just serve to transfer their transitions to all other USMGraphNode_StateNodeBase in a single SMGraph.
 */
UCLASS(MinimalAPI)
class USMGraphNode_AnyStateNode : public USMGraphNode_StateNodeBase
{
public:
	GENERATED_UCLASS_BODY()

	/** Allows the initial transitions to evaluate even when the active state is an initial state of this node.
	 * Default behavior prevents this. */
	UPROPERTY(EditAnywhere, Category = "Any State")
	bool bAllowInitialReentry;
	
	// UEdGraphNode
	virtual void AllocateDefaultPins() override;
	virtual void PostPlacedNewNode() override;
	virtual void PostPasteNode() override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual void OnRenameNode(const FString& NewName) override;
	// ~UEdGraphNode
	
	// USMGraphNode_Base
	virtual FName GetFriendlyNodeName() const override { return "Any State"; }
	virtual FString GetStateName() const override;
	// ~USMGraphNode_Base

protected:
	virtual FLinearColor Internal_GetBackgroundColor() const override;
	
protected:
	UPROPERTY()
	FText NodeName;
};
