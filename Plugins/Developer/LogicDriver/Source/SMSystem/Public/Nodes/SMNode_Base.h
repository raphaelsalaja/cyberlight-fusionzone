// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SMGraphProperty_Base.h"
#include "SMNode_Base.generated.h"

class USMInstance;
class USMNodeInstance;

UENUM()
enum class ESMTransactionType : uint8
{
	SM_Transition,
	SM_State
};

#define SM_ACTIVE_TIME_NOT_SET -1.f

/** Data to send across the network. Default Implementation uses this to record TRANSITIONS which should be taken. */
USTRUCT()
struct SMSYSTEM_API FSMNetworkedTransaction
{
	GENERATED_BODY()
	
	FSMNetworkedTransaction() : FSMNetworkedTransaction(FGuid()) {}
	
	explicit FSMNetworkedTransaction(const FGuid& TGuid, ESMTransactionType Type = ESMTransactionType::SM_Transition) :
		BaseGuid(TGuid), TransactionGuid(FGuid::NewGuid()), Timestamp(0), ActiveTime(SM_ACTIVE_TIME_NOT_SET), TransactionType((int32)Type), bIsActive(false), bIsServer(0)
	{
	}

	/** The node path guid. */
	UPROPERTY()
	FGuid BaseGuid;
	
	/** Unique to this transaction. */
	UPROPERTY(meta = (IgnoreForMemberInitializationTest))
	FGuid TransactionGuid;

	/**
	 * Additional guids for a transaction. For transitions this can be source and destination states.
	 * When using conduits that information may be required and can't be calculated from a single transition.
	 */
	UPROPERTY()
	TArray<FGuid> AdditionalGuids;
	
	/** A UTC timestamp. Should be set manually. */
	UPROPERTY()
	FDateTime Timestamp;

	/** Source state or this state's time in state. */
	UPROPERTY()
	float ActiveTime;
	
	/** ESMTransactionType. */
	UPROPERTY()
	uint8 TransactionType: 1;

	/** If the state is active. Valid only for a TransactionType of SM_State. */
	UPROPERTY()
	uint8 bIsActive: 1;

	/** Set from server during processing. */
	uint8 bIsServer: 1;

	FORCEINLINE bool IsTransition() const { return (ESMTransactionType)TransactionType == ESMTransactionType::SM_Transition; }
	FORCEINLINE bool IsState() const { return (ESMTransactionType)TransactionType == ESMTransactionType::SM_State; }

	FORCEINLINE bool AreAdditionalGuidsSetupForTransitions() const { return AdditionalGuids.Num() == 2; }
	FORCEINLINE const FGuid& GetTransitionSourceGuid() const { check(AreAdditionalGuidsSetupForTransitions()); return AdditionalGuids[0]; }
	FORCEINLINE const FGuid& GetTransitionDestinationGuid() const  { check(AreAdditionalGuidsSetupForTransitions()); return AdditionalGuids[1]; }
};

USTRUCT()
struct SMSYSTEM_API FSMActiveStateTransaction
{
	GENERATED_BODY();

	FSMActiveStateTransaction() : StartTime(0), TimeInState(0)
	{
	}

	FSMActiveStateTransaction(const FGuid& InGuid, const FDateTime& InStartTime, const float InTimeInState)
	{
		StateGuid = InGuid;
		StartTime = InStartTime;
		TimeInState = InTimeInState;
	}
	
	UPROPERTY(meta = (IgnoreForMemberInitializationTest))
	FGuid StateGuid;

	UPROPERTY()
	FDateTime StartTime;

	UPROPERTY()
	float TimeInState;
};

/**
 * Base struct for all state machine nodes. The Guid MUST be manually initialized right after construction.
 */
USTRUCT(BlueprintInternalUseOnly)
struct SMSYSTEM_API FSMNode_Base
{
	GENERATED_USTRUCT_BODY()

	friend class FSMEditorConstructionManager;
	
public:
	/** The primary graph evaluator. */
	UPROPERTY()
	TArray<FSMExposedFunctionHandler> GraphEvaluator;

	/** Entry point to when a transition is first initialized. */
	UPROPERTY()
	TArray<FSMExposedFunctionHandler> TransitionInitializedGraphEvaluators;

	/** Entry point to when a transition is shutdown. */
	UPROPERTY()
	TArray<FSMExposedFunctionHandler> TransitionShutdownGraphEvaluators;

	/** The current time spent in the state. */
	UPROPERTY(BlueprintReadWrite, Category = "State Machines")
	float TimeInState;

	/** State Machine is in end state or the state is an end state. */
	UPROPERTY(BlueprintReadWrite, Category = "State Machines")
	bool bIsInEndState;

	/** State has updated at least once. */
	UPROPERTY(BlueprintReadWrite, Category = "State Machines")
	bool bHasUpdated;

	/** Special indicator in case this node is a duplicate within the same blueprint. If this isn't 0 then the NodeGuid will have been adjusted. */
	UPROPERTY()
	int32 DuplicateId;

	/** The node position in the graph. Set automatically. */
	UPROPERTY()
	FVector2D NodePosition;
	
public:
	virtual void UpdateReadStates() {}

public:
	FSMNode_Base();
	virtual ~FSMNode_Base() = default;
	FSMNode_Base(const FSMNode_Base& Node) = default;

	/** Initialize the graph evaluator with the instance. */
	virtual void Initialize(UObject* Instance);
	bool IsInitialized() const { return bInitialized; }

	/** Resets persistent data. */
	virtual void Reset();

	/** Unique identifier used in constructing nodes from a graph. May not be unique if this is from a parent graph or a reference. */
	const FGuid& GetNodeGuid() const;
	void GenerateNewNodeGuid();
	
	/** Unique identifier taking into account qualified path. Unique across blueprints if called after Instance initialization. */
	const FGuid& GetGuid() const;
	/** Calculate the value returned from GetGuid(). Gets all owner nodes and builds a path to this node. Hashes the path and sets PathGuid. */
	virtual void CalculatePathGuid(TMap<FString, int32>& MappedPaths);
	/** Unhashed string format of the guid path. MappedPaths are used to adjust for collisions. */
	FString GetGuidPath(TMap<FString, int32>& MappedPaths) const;
	
	/** Only generate a new guid if the current guid is invalid. This needs to be called
	 * on new nodes. */
	void GenerateNewNodeGuidIfNotSet();
	void SetNodeGuid(const FGuid& NewGuid);

	/** The state machine's NodeGuid owning this node. */
	void SetOwnerNodeGuid(const FGuid& NewGuid);
	/** Unique identifier to help determine which state machine this node belongs to. */
	const FGuid& GetOwnerNodeGuid() const { return OwnerGuid; }

	/** The node directly owning this node. Should be a StateMachine. */
	void SetOwnerNode(FSMNode_Base* Owner);
	/** The node directly owning this node. Should be a StateMachine. */
	virtual FSMNode_Base* GetOwnerNode() const { return OwnerNode; }
	
	/** The state machine instance owning this node. */
	USMInstance* GetOwningInstance() const { return OwningInstance; }

	/** Create the node instance if a node instance class is set. */
	void CreateNodeInstance();
	void CreateStackInstances();
	virtual void RunConstructionScripts();
	
	/** Calls CheckNodeInstanceCompatible. */
	void SetNodeInstanceClass(UClass* NewNodeInstanceClass);
	
	/** Derived nodes should overload and check for the correct type. */
	virtual bool IsNodeInstanceClassCompatible(UClass* NewNodeInstanceClass) const;
	
	/** Return the current node instance. Only valid after initialization and may be nullptr. */
	virtual USMNodeInstance* GetNodeInstance() const { return NodeInstance; }
	
	/** Returns the current stack instances. */
	const TArray<USMNodeInstance*>& GetStackInstances() const { return StackNodeInstances; }
	
	/** Returns a specific state from the stack. */
	USMNodeInstance* GetNodeInStack(int32 Index) const;
	
	/** The default node instance class. Each derived node class needs to implement. */
	virtual UClass* GetDefaultNodeInstanceClass() const { return nullptr; }
	
	void AddVariableGraphProperty(const FSMGraphProperty_Base_Runtime& GraphProperty, const FGuid& OwningTemplateGuid);

	void SetNodeName(const FString& Name);
	const FString& GetNodeName() const { return NodeName; }
	
	void SetTemplateName(const FName& Name);
	const FName& GetTemplateName() const { return TemplateName; }
	void AddStackTemplateName(const FName& Name);
	
	/** If this node is active. */
	virtual bool IsActive() const { return bIsActive; }

	virtual void ExecuteInitializeNodes();
	virtual void ExecuteShutdownNodes();

	/** Set the time in state as recorded from the server. */
	virtual void SetServerTimeInState(float InTime);

	/** The time in state as recorded by the server. Kept in the base node as transitions can utilize it. */
	float GetServerTimeInState() const { return ServerTimeInState; }
	
	/**
	* Checks if the instance is allowed to execute properties automatically.
	* @param OnEvent GRAPH_PROPERTY_EVAL_[TYPE]
	* @param ForTemplate The specific template to check against.
	*/
	virtual bool CanExecuteGraphProperties(uint32 OnEvent, const class USMStateInstance_Base* ForTemplate) const { return false; }
	
	/** Execute desired graph properties for the given event. */
	virtual bool TryExecuteGraphProperties(uint32 OnEvent);
	
	/**
	 * Evaluates graph properties.
	 * @param ForTemplateGuid If specified only graph properties for this template will be executed. If null all properties will be executed.
	 */
	void ExecuteGraphProperties(const FGuid* ForTemplateGuid = nullptr);

	/** Retrieve the embedded graph properties. */
	const TArray<FSMGraphProperty_Base_Runtime*>& GetGraphProperties() const { return GraphProperties; }
	
#if WITH_EDITORONLY_DATA
	virtual bool IsDebugActive() const { return bIsActive; }
	virtual bool WasDebugActive() const { return bWasActive; }
	
	/** Debug helper in case a state switches to inactive in one frame. */
	bool bWasActive = false;
#endif

#if WITH_EDITOR
	/** Performs a safe reset. It's possible referenced structs have changed in the BP and may not be valid. */
	virtual void EditorShutdown();
#endif
	
protected:
	/** Execute the graph. */
	virtual void Execute();
	virtual void SetActive(bool bValue);

	void ResetGraphProperties();
	void CreateGraphProperties();
	void CreateGraphPropertiesForTemplate(USMNodeInstance* Template, const TSet<FProperty*>& GraphStructPropertiesForStateMachine);
protected:
	/*
	 * NodeGuid used in constructing nodes from a graph. Set initially from the editor graph.
	 * This is not guaranteed to be unique across Blueprints.
	 */
	UPROPERTY(BlueprintReadWrite, Category = "State Machines")
	FGuid Guid;

	/** The state machine's NodeGuid owning this node. */
	UPROPERTY()
	FGuid OwnerGuid;

	/*
	 * Unique identifier calculated from this node's place in an instance.
	 * Calculated by taking the MD5 hash of the full path of all owner NodeGuids and
	 * this NodeGuid.
	 * This is what is returned from GetGuid().
	 * 
	 * ReadWrite so it can be easily read from custom graph nodes.
	 */
	UPROPERTY(BlueprintReadWrite, Category = "State Machines")
	FGuid PathGuid;
	
	/** The node directly owning this node. Should be a StateMachine. */
	FSMNode_Base* OwnerNode;

	UPROPERTY()
	FString NodeName;

	/** The name of a template archetype to use when constructing an instance. This allows default values be passed into the instance. */
	UPROPERTY()
	FName TemplateName;

	UPROPERTY()
	TArray<FName> StackTemplateNames;

	/** The node instances for this stack. */
	UPROPERTY(BlueprintReadWrite, Transient, Category = "Node Class")
	TArray<USMNodeInstance*> StackNodeInstances;

	/** The state machine instance owning this node. */
	UPROPERTY()
	USMInstance* OwningInstance;

	/** The node instance for this node if it exists. */
	UPROPERTY(BlueprintReadWrite, Transient, Category = "Node Class")
	USMNodeInstance* NodeInstance;

	/** Custom graph structs with special handling. Dynamically loaded on initialization from embedded structs. */
	TArray<FSMGraphProperty_Base_Runtime*> GraphProperties;

	/** Set by the BP compiler. Template Guid -> GraphProperties. Contains data necessary to evaluate variables which have instanced BP graphs. */
	UPROPERTY()
	TMap<FGuid, FSMGraphPropertyTemplateOwner> TemplateVariableGraphProperties;
	
	/** The class to use to construct the node instance if one exists. */
	UPROPERTY(BlueprintReadWrite, Category = "Node Class")
	UClass* NodeInstanceClass;

private:
	/** Last recorded active time in state from the server. */
	float ServerTimeInState;
	
	bool bInitialized;
	bool bIsActive;
};