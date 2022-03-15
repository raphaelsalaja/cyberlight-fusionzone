// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "Kismet2/CompilerResultsLog.h"
#include "KismetCompilerModule.h"
#include "KismetCompiler.h"
#include "Blueprints/SMBlueprint.h"
#include "K2Node_CustomEvent.h"
#include "Blueprints/SMBlueprintGeneratedClass.h"
#include "SMNode_Base.h"


class USMGraphK2Node_FunctionNode;
class USMGraphNode_StateMachineStateNode;
class UK2Node_StructMemberSet;
class USMGraphK2Node_StateWriteNode;
class USMGraphK2Node_StateReadNode;
class USMGraph;
class USMGraphK2Node_RuntimeNodeContainer;
class USMGraphK2Node_RootNode;
class USMGraphK2Node_StateMachineNode;
class USMGraphK2Node_StateMachineEntryNode;


struct FTemplateContainer
{
	enum ETemplateType
	{
		NodeTemplate,
		ReferenceTemplate,
		StackTemplate
	};

	FTemplateContainer(UObject* InTemplate, ETemplateType InType, FGuid Guid = FGuid::NewGuid())
	{
		Template = InTemplate;
		TemplateType = InType;
		TemplateGuid = Guid;
	}

	bool operator==(const FTemplateContainer& Other) const
	{
		return this->Template == Other.Template && this->TemplateGuid == Other.TemplateGuid && this->TemplateType == Other.TemplateType;
	}
	
	UObject* Template;
	ETemplateType TemplateType;
	FGuid TemplateGuid;
};

class FSMKismetCompiler : public IBlueprintCompiler
{
public:
	/** IBlueprintCompiler interface */
	virtual bool CanCompile(const UBlueprint* Blueprint) override;
	virtual void Compile(UBlueprint* Blueprint, const FKismetCompilerOptions& CompileOptions, FCompilerResultsLog& Results) override;
	virtual bool GetBlueprintTypesForClass(UClass* ParentClass, UClass*& OutBlueprintClass, UClass*& OutBlueprintGeneratedClass) const override;
	/** ~IBlueprintCompiler interface */
};

class FSMKismetCompilerContext : public FKismetCompilerContext
{
	typedef FKismetCompilerContext Super;

public:
	FSMKismetCompilerContext(UBlueprint* InBlueprint,
		FCompilerResultsLog& InMessageLog, const FKismetCompilerOptions& InCompilerOptions);

protected:
	// FKismetCompilerContext interface
	virtual void MergeUbergraphPagesIn(UEdGraph* Ubergraph) override;
	virtual void SpawnNewClass(const FString& NewClassName) override;
	virtual void OnNewClassSet(UBlueprintGeneratedClass* ClassToUse) override;
	virtual void CleanAndSanitizeClass(UBlueprintGeneratedClass* ClassToClean, UObject*& InOldCDO) override;
	virtual void CopyTermDefaultsToDefaultObject(UObject* DefaultObject) override;
	virtual void PreCompile() override;
	virtual void PostCompile() override;
	// ~FKismetCompilerContext interface

	/** Locate the selected state machine. */
	USMGraphK2Node_StateMachineNode* GetRootStateMachineNode() const;

	/** Calls ValidateNodeDuringCompilation on all nodes. */
	void ValidateAllNodes(USMGraph* StateMachineGraph);

	/** Generates a run-time state machine from the default instance and checks for errors. */
	void ValidateDefaultObject(USMInstance* DefaultInstance);

	/** Creates and assigns container nodes for relevant nested FSMs. */
	void PreProcessStateMachineNodes(UEdGraph* Graph);
	
	/** Assigns unique guids to each runtime container and references so the reference can lookup the container from the consolidated event graph. */
	void PreProcessRuntimeReferences(UEdGraph* Graph);

	/** Clone all nested parent graphs per entry. Look for duplicates and adjust. */
	void ExpandParentNodes(UEdGraph* Graph);
	
	/** Create runtime properties from a state machine graph. */
	void ProcessStateMachineGraph(USMGraph* StateMachineGraph);

	/** Run through the ConsolidatedGraph and create properties for runtime nodes and entry points. */
	void ProcessRuntimeContainers();

	/** Run through the ConsolidatedGraph and create entry points referencing the runtime nodes. */
	void ProcessRuntimeReferences();

	/** Run through the ConsolidatedGraph and create entry points for property graphs. */
	void ProcessPropertyNodes();

	/** Discover input delegates and try to associate them with a node. */
	void ProcessInputNodes();

	/** Add getters to process special read nodes. */
	void ProcessReadNode(USMGraphK2Node_StateReadNode* ReadNode);

	/** Add setters to process special write nodes. */
	void ProcessWriteNode(USMGraphK2Node_StateWriteNode* WriteNode);

	/** Call expand logic on function node. */
	void ProcessFunctionNode(USMGraphK2Node_FunctionNode* FunctionNode);

public:
	/** Creates and wires an entry point and runtime function. */
	UK2Node_CustomEvent* SetupStateEntry(USMGraphK2Node_RuntimeNodeContainer* ContainerNode, FStructProperty* Property);

	/** Creates and wires an entry point and runtime function. */
	UK2Node_CustomEvent* SetupTransitionEntry(USMGraphK2Node_RuntimeNodeContainer* ContainerNode, FStructProperty* Property);
	
	/** Creates proper k2 node representing a state machine entry point. */
	USMGraphK2Node_StateMachineEntryNode* ProcessNestedStateMachineNode(USMGraphNode_StateMachineStateNode* StateMachineStateNode);

	/** Creates and wires an entry point for property evaluation. */
	UK2Node_CustomEvent* SetupPropertyEntry(class USMGraphK2Node_PropertyNode_Base* PropertyNode, FStructProperty* Property);
	
	/** Finds the parent graph, clones it, and processes it as part of the blueprint compiling. */
	USMGraph* ProcessParentNode(class USMGraphNode_StateMachineParentNode* ParentStateMachineNode);
	
	/** Creates a setter for the given node. If the given node doesn't contain all of the desired properties a getter can be made
	 * so values aren't overwritten. */
	UK2Node_StructMemberSet* CreateSetter(UK2Node* WriteNode, FName PropertyName, UScriptStruct* ScriptStruct, bool bCreateGetterForDefaults = true);

	/** Spawn a new entry node. Creating pins will not break links. */
	UK2Node_CustomEvent* CreateEntryNode(USMGraphK2Node_RootNode* RootNode, FName FunctionName, bool bCreateAndLinkParamPins = false);

	/** Creates a runtime property based on the FSMNode of the given graph root node. */
	FStructProperty* CreateRuntimeProperty(USMGraphK2Node_RuntimeNodeContainer* RuntimeContainerNode);

	/** Creates a runtime property for a property node. */
	FStructProperty* CreateRuntimeProperty(class USMGraphK2Node_PropertyNode_Base* PropertyNode);

	/** Add a template to the list for the specified runtime guid. TemplateGuid only needed for state stack templates. */
	void AddDefaultObjectTemplate(const FGuid& RuntimeGuid, UObject* Template, FTemplateContainer::ETemplateType TemplateType, FGuid TemplateGuid = FGuid());

	/** Create a unique function name which can be used during run-time. */
	static FName CreateFunctionName(USMGraphK2Node_RootNode* GraphNode, FSMNode_Base* RuntimeNode);
	static FName CreateFunctionName(USMGraphK2Node_RootNode* GraphNode, FSMGraphProperty_Base* PropertyNode);
	USMBlueprint* GetSMBlueprint() const { return Cast<USMBlueprint>(Blueprint); }

protected:
	/* Looks for derived blueprints with parent calls and marks the blueprints dirty. */
	void RecompileChildren();
	
protected:
	friend class USMGraphNode_Base;
	friend class USMGraphNode_StateNode;
	
	/** Generated blueprint class which will contain the state machine template. */
	USMBlueprintGeneratedClass* NewSMBlueprintClass;

	/** New properties mapped to their nodes. */
	TMap<FProperty*, class USMGraphK2Node_Base*> AllocatedNodePropertiesToNodes;

	/** ContainerOwnerGuid mapped to GraphRuntimeNodeContainer. */
	TMap<FGuid, USMGraphK2Node_RuntimeNodeContainer*> MappedContainerNodes;

	/** The original source containers mapped to their consolidated graph copies. */
	TMap<USMGraphK2Node_RuntimeNodeContainer*, USMGraphK2Node_RuntimeNodeContainer*> SourceContainerToDuplicatedContainer;

	/** Runtime NodeGuid mapped to instance templates still owned by their state graph node. */
	TMap<FGuid, TArray<FTemplateContainer>> DefaultObjectTemplates;

	/** Node templates mapped to graph property guids mapped to their nodes. Used for setting graph properties in the instance templates stored in the CDO. */
	TMap<UObject*, TMap<FGuid, class USMGraphK2Node_Base*>> MappedTemplatesToNodeProperties;

	/** Graph properties may have their guids regenerated. This maps the Node Template -> Original Guid -> New Guid. */
	TMap<UObject*, TMap<FGuid, FGuid>> GraphPropertyRemap;

	/** Total number of states in the graph, excluding any states and entry point. */
	uint32 NumberStates;

	/** Total number of transitions, including valid AnyState transitions. */
	uint32 NumberTransitions;
	
	/**
	 * Lets us know if the blueprint we're working with is derived from another SMBlueprint type. 
	 * Current derived behavior allows child graphs to replace parent graphs.
	 */
	bool bBlueprintIsDerived;

	/** Set if at least one input event is detected. */
	UK2Node* InputConsumingEvent;
};


class FSMNodeKismetCompiler : public IBlueprintCompiler
{
public:
	/** IBlueprintCompiler interface */
	virtual bool CanCompile(const UBlueprint* Blueprint) override;
	virtual void Compile(UBlueprint* Blueprint, const FKismetCompilerOptions& CompileOptions, FCompilerResultsLog& Results) override;
	virtual bool GetBlueprintTypesForClass(UClass* ParentClass, UClass*& OutBlueprintClass, UClass*& OutBlueprintGeneratedClass) const override;
	/** ~IBlueprintCompiler interface */
};


class FSMNodeKismetCompilerContext : public FKismetCompilerContext
{
	typedef FKismetCompilerContext Super;

public:
	FSMNodeKismetCompilerContext(UBlueprint* InBlueprint,
		FCompilerResultsLog& InMessageLog, const FKismetCompilerOptions& InCompilerOptions);

protected:
	virtual void CopyTermDefaultsToDefaultObject(UObject* DefaultObject) override;
};