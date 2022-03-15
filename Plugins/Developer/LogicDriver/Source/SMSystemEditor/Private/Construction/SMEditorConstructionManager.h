// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "Blueprints/SMBlueprint.h"
#include "SMStateMachine.h"
#include "SMNode_Base.h"

#include "TickableEditorObject.h"

class USMGraph;
class FSMBlueprintEditor;
class USMEditorInstance;

struct FSMEditorStateMachine
{
	/** The sm instance used during editor time. */
	USMEditorInstance* StateMachineEditorInstance;
	
	/** Storage for all editor runtime nodes. This memory is manually managed! */
	TArray<FSMNode_Base*> EditorInstanceNodeStorage;
};

/**
 * Construction manager singleton for running construction scripts and building editor state machines.
 */
class SMSYSTEMEDITOR_API FSMEditorConstructionManager : public FTickableEditorObject
{
public:
	FSMEditorConstructionManager(FSMEditorConstructionManager const&) = delete;
	void operator=(FSMEditorConstructionManager const&) = delete;

	/** Cancels RunAllConstructionScriptsForBlueprint if true. */
	bool bDisableConstructionScripts = false;
private:
	FSMEditorConstructionManager() {}

public:
	virtual ~FSMEditorConstructionManager() override;

	/** Access the Construction Manager. */
	static FSMEditorConstructionManager* GetInstance();

	// FTickableEditorObject
	virtual void Tick(float DeltaTime) override;
	virtual bool IsTickable() const override;
	virtual ETickableTickType GetTickableTickType() const override { return ETickableTickType::Conditional; }
	virtual TStatId GetStatId() const override;
	// ~FTickableEditorObject

	/** Checks if there are construction scripts for this frame. */
	bool HasPendingConstructionScripts() const;

	/**
	 * True if construction scripts are currently running for this frame.
	 * 
	 * @param ForBlueprint If construction scripts are running for the given blueprint. Null implies any.
	 * @return True if construction scripts are in progress.
	 */
	bool IsRunningConstructionScripts(USMBlueprint* ForBlueprint = nullptr) const;
	
	/**
	 * Recursively build out a state machine from an editor graph. This is executed this frame.
	 *
	 * @param InGraph A state machine editor graph.
	 * @param StateMachineOut The outgoing state machine being assembled. This should be the root.
	 * @param Storage Heap memory will be initialized here. This memory MUST be freed manually to prevent a memory leak.
	 */
	void ConstructEditorStateMachine(USMGraph* InGraph, FSMStateMachine& StateMachineOut, TArray<FSMNode_Base*>& Storage);

	/**
	 * Frees all associated memory and resets the editor state machine map.
	 */
	void CleanupAllEditorStateMachines();

	/**
	 *  Shutdown the editor instance and free node memory.
	 *
	 *  @param InBlueprint for the editor state machine.
	 */
	void CleanupEditorStateMachine(USMBlueprint* InBlueprint);

	/**
	 * Runs all construction scripts for every node in a blueprint. This is executed on this frame
	 * and even during a compile.
	 *
	 * @param InBlueprint The blueprint to run all construction scripts for.
	 */
	void RunAllConstructionScriptsForBlueprintImmediately(USMBlueprint* InBlueprint);
	
	/**
	 * Runs all construction scripts for every node in a blueprint. This is executed on the next frame.
	 *
	 * @param InObject The exact blueprint or the object belonging to the blueprint to run all construction scripts for.
	 * @param bSkipOnCompile Construction scripts will not run if the blueprint is being compiled.
	 */
	void RunAllConstructionScriptsForBlueprint(UObject* InObject, bool bSkipOnCompile = true);

	/**
	 * Create or update a state machine for editor use.
	 *
	 * @param InBlueprint The blueprint owning the state machine.
	 */
	FSMEditorStateMachine& RebuildEditorStateMachine(USMBlueprint* InBlueprint);

	/**
	 * Instantiate the editor instance / root state machine.
	 *
	 * @param InBlueprint for the editor state machine.
	 * @param bWasCreated true if initially created.
	 *
	 * @return The state machine reference.
	 */
	FSMEditorStateMachine& GetOrCreateEditorStateMachine(USMBlueprint* InBlueprint, bool& bWasCreated);

protected:
	/**
	 * Assemble editor state machines and run construction scripts this frame.
	 *
	 * @param InBlueprint The blueprint to run all construction scripts for.
	 */
	void RunAllConstructionScriptsForBlueprint_Internal(USMBlueprint* InBlueprint);
	
private:
	/** Loaded blueprints mapped to their editor state machine. */
	TMap<TWeakObjectPtr<USMBlueprint>, FSMEditorStateMachine> EditorStateMachines;

	/** All blueprints waiting to have their construction scripts run. */
	TSet<TWeakObjectPtr<USMBlueprint>> BlueprintsPendingConstruction;

	/** All blueprints in process of being constructed for a frame. */
	TSet<TWeakObjectPtr<USMBlueprint>> BlueprintsBeingConstructed;
};

