// Copyright Recursoft LLC 2019-2022. All Rights Reserved.

#pragma once

#include "ISMStateMachineInterface.h"
#include "SMNodeRules.h"
#include "SMLogging.h"
#include "SMInputTypes.h"
#include "SMGraphProperty_Base.h"

#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "Components/InputComponent.h"

#include "SMNodeInstance.generated.h"

class UWorld;
class USMInstance;
class USMStateMachineInstance;
struct FSMNode_Base;

DECLARE_DWORD_ACCUMULATOR_STAT_EXTERN(TEXT("SMNodeInstances"), STAT_NodeInstances, STATGROUP_LogicDriver, SMSYSTEM_API);

/* Gets the value as defined on the struct. */
#define GET_NODE_STRUCT_VALUE(StructType, StructVariable) \
	if (StructType* StructOwner = GetOwningNodeAs<StructType>()) \
	{ \
		return StructOwner->StructVariable; \
	} \

/* Gets the node property value. */
#define GET_NODE_DEFAULT_VALUE_DIF_VAR(StructType, InstanceVariable, StructVariable) \
		GET_NODE_STRUCT_VALUE(StructType, StructVariable) \
		return InstanceVariable;

/* Gets the node property value. */
#define GET_NODE_DEFAULT_VALUE(StructType, Variable) \
		GET_NODE_DEFAULT_VALUE_DIF_VAR(StructType, Variable, Variable);


/* Sets both the node instance variable and the struct owner variable to the given value. */
#define SET_NODE_DEFAULT_VALUE_DIF_VAR(StructType, InstanceVariable, StructVariable, Value) \
		InstanceVariable = Value; \
		if (StructType* StructOwner = GetOwningNodeAs<StructType>()) \
		{ \
			StructOwner->StructVariable = Value; \
		}

/* Sets both the node instance variable and the struct owner variable to the given value. */
#define SET_NODE_DEFAULT_VALUE(StructType, Variable, Value) \
		SET_NODE_DEFAULT_VALUE_DIF_VAR(StructType, Variable, Variable, Value);

/**
 * This information will be viewable when selecting new nodes or hovering over nodes.
 */
USTRUCT()
struct SMSYSTEM_API FSMNodeDescription
{
	GENERATED_USTRUCT_BODY()

	/** The name of this node type. */
	UPROPERTY(EditDefaultsOnly, Category = "General", meta = (InstancedTemplate))
	FName Name;

	/** Which category this should fall under. */
	UPROPERTY(EditDefaultsOnly, Category = "General", meta = (InstancedTemplate))
	FText Category;

	/** The tooltip when selecting the action. */
	UPROPERTY(EditDefaultsOnly, Category = "General", meta = (InstancedTemplate, MultiLine = true))
	FText Description;
};

UENUM(BlueprintType)
enum class ESMExecutionEnvironment : uint8
{
	/**
	* This node is running for an editor state machine. This is generally only valid
	* during editor time construction scripts. Use this to allow the construction script
	* to set default values during compile instead of recalculating values during run-time.
	*
	* When running with Editor Execution, only default values entered into public properties
	* from the state machine graph will be available. Connecting a variable to a public
	* property within the state machine graph will not evaluate until run-time. Additionally,
	* the owning SMInstance will not be available at editor time since that is the class
	* being compiled.
	*
	* To configure editor construction script settings, go under
	* Project Settings -> Logic Driver -> Editor Node Construction Script Setting.
	*/
	EditorExecution,
	/**
	 * This node is running in a simulation or game.
	 */
	GameExecution
};

/**
 * [Logic Driver] The abstract base node class all state machine nodes derive from.
 */
UCLASS(Abstract, NotBlueprintable, BlueprintType, ClassGroup = LogicDriver, hideCategories = (SMNodeInstance), meta = (DisplayName = "Node Class Base"))
class SMSYSTEM_API USMNodeInstance : public UObject, public ISMInstanceInterface
{
	GENERATED_BODY()
	
public:
	USMNodeInstance();
	
	// UObject
	virtual UWorld* GetWorld() const override;
	virtual void BeginDestroy() override;
	// ~UObject

	// ISMInstanceInterface
	/** The object which this node is running for. Determined by the owning state machine. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	virtual UObject* GetContext() const override;
	// ~ISMInstanceInterface

	/** Perform native initialization, called before Initialize for all node types. This API is subject to change. */
	virtual void NativeInitialize();

	/** Perform native cleanup, called after Shutdown for all node types. This API is subject to change. */
	virtual void NativeShutdown();

	/** Called when the immediate owning state machine blueprint is starting. If this is part of a reference
	 * then it will be called when the reference starts. If this is for a state machine node
	 * then it will only be called when the top level state machine starts.*/
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Node Instance")
	void OnRootStateMachineStart();

	/** Called when the immediate owning state machine blueprint is stopping. If this is part of a reference
	 * then it will be called when the reference stops. If this is for a state machine node
	 * then it will only be called when the top level state machine stops.*/
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Node Instance")
	void OnRootStateMachineStop();
	
	/** Signal the construction script should start. */
	void RunConstructionScript();

	/** The name of the protected ConstructionScript function. */
	static FName GetConstructionScriptFunctionName() { return GET_FUNCTION_NAME_CHECKED(USMNodeInstance, ConstructionScript); }
	
protected:
	virtual void OnRootStateMachineStart_Implementation() {}
	virtual void OnRootStateMachineStop_Implementation() {}
	
	/**
	* A construction script that runs in the editor when the blueprint is modified.
	* During run-time it will run after all nodes have instantiated.
	*
	* CAUTION:
	* Any values set here while running with editor execution will replace the
	* instance default values in state machine graphs when that state machine is compiled.
	*
	* When running with Editor Execution, only default values entered into public properties
	* from the state machine graph will be available. Connecting a variable to a public
	* property within the state machine graph will not evaluate until run-time. Additionally,
	* the owning SMInstance will not be available at editor time since that is the class
	* being compiled.
	*
	* If construction scripts aren't working in the editor, you may need to adjust your
	* settings to `Standard`.
	* 
	* To configure editor construction script settings, go under
	* Project Settings -> Logic Driver -> Editor Node Construction Script Setting.
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Default")
	void ConstructionScript();

#if WITH_EDITORONLY_DATA
public:
	/** Checks for user override on native classes if editor construction scripts should be skipped. */
	bool ShouldSkipNativeEditorConstructionScripts() const { return bSkipNativeEditorConstructionScripts; }

protected:
	/**
	* Tell the state machine compiler to skip editor construction scripts for this native class.
	* 
	* This is primarily an optimization to improve performance when construction scripts aren't used on native classes.
	* For blueprint classes the state machine compiler can easily check if there is logic defined, but not for native classes.
	* 
	* Children class may override this behavior, and blueprint children will override if there is any construction script
	* logic defined.
	*/
	UPROPERTY()
	bool bSkipNativeEditorConstructionScripts;

private:
	friend class USMGraphNode_StateNode;
	friend class USMGraphNode_TransitionEdge;
	
	// If editor construction scripts are defined; set during bp compile.
	// Should always match CDO. Variable is looked up by name in several places.
	UPROPERTY()
	bool bHasEditorConstructionScripts = true;
	
#endif
	
private:
	friend struct FSMNode_Base;

	// If run-time construction scripts are defined; set during bp compile.
	// Should always match CDO. Variable is looked up by name in several places.
	UPROPERTY()
	bool bHasGameConstructionScripts = true;
	
public:
	/**
	 * Retrieve an owning blueprint state machine.
	 * @param bTopMostInstance If the state machine is a reference return the top most instance.
	 * @return The state machine instance this node is running for.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	USMInstance* GetStateMachineInstance(bool bTopMostInstance = false) const;

	/** Set during initialization of the state machine. */
	void SetOwningNode(FSMNode_Base* Node);
	
	/** Reference to the owning node within a state machine. */
	const FSMNode_Base* GetOwningNode() const { return OwningNode; }

	/** Reference the owning struct node as a given type. */
	template<typename T>
	T* GetOwningNodeAs() const { return static_cast<T*>(OwningNode); }
	
	/** Some nodes such as references may have special handling for returning a container node. */
	virtual const FSMNode_Base* GetOwningNodeContainer() const { return GetOwningNode(); }
	
	/** The instance of the direct state machine node this node is part of. Every node except the root state machine has an owning state machine node. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	USMStateMachineInstance* GetOwningStateMachineNodeInstance() const;

	/** Return the server interface if there is one. This may be null. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance|Network")
	TScriptInterface<ISMStateMachineNetworkedInterface> GetNetworkInterface() const;
	
	/** The current time spent in the state. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	virtual float GetTimeInState() const;

	/** State Machine is in an end state or the state is an end state. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	virtual bool IsInEndState() const;

	/** State has updated at least once. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	virtual bool HasUpdated() const;
	
	/** If this node is active. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	bool IsActive() const;

	/** Retrieve the node name. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	const FString& GetNodeName() const;
	
	/** Unique identifier taking into account qualified path. Unique across blueprints if called after Instance initialization. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	const FGuid& GetGuid() const;
	
	/** Retrieve the icon representing this node. Null by default. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Node Display")
	UTexture2D* GetNodeIcon() const;

	/** Retrieve the size to use when displaying the icon. Leave 0,0 to auto size. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Node Display")
	FVector2D GetNodeIconSize() const;

	/** Retrieve the tint to use when displaying the icon. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Node Display")
	FLinearColor GetNodeIconTintColor() const;
	
	/**
	 * Evaluate graphs of properties exposed directly on this node.
	 * @param bTargetOnly Only evaluate graph properties for the target node instance (such as a self target). Useful for only evaluating properties of select state stack instances.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	void EvaluateGraphProperties(bool bTargetOnly = false);

	/** Retrieve the template guid. The template guid cannot be modified at runtime. */
	const FGuid& GetTemplateGuid() const { return TemplateGuid; }

	/** Retrieve the node position in the graph. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	const FVector2D& GetNodePosition() const;

	/** True after the initialize sequence is called on this node and false after shutdown is called. */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	bool IsInitialized() const { return bIsInitialized; }
	
public:
	/**
	* Customize how exposed graph properties are displayed on the node.
	* 
	* Match the variable name with the variable you want to override.
	* Property must be instance editable.
	*/
	UPROPERTY(EditDefaultsOnly, Category = "Properties", meta = (InstancedTemplate, HideOnNode))
	TArray<FSMGraphProperty> ExposedPropertyOverrides;

	/** Searches the ExposedPropertyOverrides to find a property by name. */
	FSMGraphProperty* FindExposedPropertyOverrideByName(const FName& VariableName) const;

	/**
	 * Should graph properties evaluate even if they only contain default values. This includes properties that
	 * have values directly entered into a node without any blueprint expressions connected, such as typing a
	 * value into a string field.
	 *
	 * When false default values entered into an exposed property won't ever evaluate and the value at compile time
	 * will be used until modified at run-time. If any blueprint pins are connected to the property then this setting
	 * doesn't apply.
	 *
	 * Setting this to off is an optimization and may improve performance. However, if you modify the value at
	 * run-time it will no longer reset (re-evaluate) to the default value On State Begin. This is on by default
	 * for backwards compatibility and to maintain consistent behavior with variable evaluation.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Properties", meta = (InstancedTemplate, HideOnNode))
	uint8 bEvalDefaultProperties: 1;

	/**
	 * Properties marked as public will be exposed on this node as a graph.
	 * 
	 * When this is true that graph will automatically evaluate on state entry.
	 * When this is false you should manually call EvaluateGraphProperties().
	 * 
	 * Graph properties are only valid for nodes deriving from USMStateInstance_Base.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Properties", meta = (InstancedTemplate, HideOnNode))
	uint8 bAutoEvalExposedProperties: 1;
	
#if WITH_EDITOR
public:
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	/*
	 * True if an array property was added or removed through the details panel.
	 */
	bool WasArrayPropertyModified(const FName& PropertyName) const;

	/**
	 * This is true only if a user has manually changed a pin value on an exposed variable,
	 * and only during PostEditChangeProperty.
	 */
	bool IsNodePinChanging() const;

private:
	void ResetArrayCheck();
	
private:
	friend class USMGraphNode_Base;
	friend class USMGraphK2Node_PropertyNode_Base;
	
	FName ArrayPropertyChanged;
	int32 ArrayIndexChanged;
	uint32 ArrayChangeType;

	/** Set from the editor when an exposed pin value is changing. */
	bool bIsNodePinChanging;
#endif

protected:
	virtual void ConstructionScript_Implementation() {}
	virtual UTexture2D* GetNodeIcon_Implementation() const;
	virtual FVector2D GetNodeIconSize_Implementation() const;
	virtual FLinearColor GetNodeIconTintColor_Implementation() const;
	
protected:
	/**
	 * The icon to use when displaying this node.
	 * This exists in run-time as well in case this image is needed for purposes outside of editor use. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Display", meta = (DisplayPriority = 1, NodeBaseOnly))
	UTexture2D* NodeIcon;

	/** The size of the node icon. Leave 0,0 to auto size. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Display", meta = (DisplayPriority = 2, NodeBaseOnly))
	FVector2D NodeIconSize;

	/** The tint color to apply to the node icon. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Display", meta = (DisplayPriority = 3, NodeBaseOnly))
	FLinearColor NodeIconTintColor;

public:	
	/**
	 * Sets the display name of the node. Valid from editor construction scripts only.
	 * Development Only!
	 */
	UFUNCTION(BlueprintCallable, Category = "Node Display", meta = (DevelopmentOnly))
	void SetDisplayName(FName NewDisplayName);

	/**
	 * Sets the color of the node. Requires UseCustomColor set to true. Valid from editor construction scripts only.
	 * Development Only!
	 */
	UFUNCTION(BlueprintCallable, Category = "Node Display", meta = (DevelopmentOnly))
	void SetNodeColor(FLinearColor NewColor);

	/**
	 * Tells the node to use a custom color. Valid from editor construction scripts only.
	 * Development Only!
	 */
	UFUNCTION(BlueprintCallable, Category = "Node Display", meta = (DevelopmentOnly))
	void SetUseCustomColor(bool bValue);

	/**
	 * Tells the node to use a custom icon. Valid from editor construction scripts only.
	 * Override the GetNodeIcon function to dynamically set the icon.
	 * Development Only!
	*/
	UFUNCTION(BlueprintCallable, Category = "Node Display", meta = (DevelopmentOnly))
	void SetUseCustomIcon(bool bValue);

	/**
	 * Sets the read only status of an exposed variable. Valid from editor construction scripts only.
	 * Development Only!
	 *
	 * @param VariableName The name of the exposed variable as defined in this node class.
	 * @param bSetIsReadOnly Set the variable read only status.
	 */
	UFUNCTION(BlueprintCallable, Category = "Node Display", meta = (DevelopmentOnly))
	void SetVariableReadOnly(FName VariableName, bool bSetIsReadOnly);

	/**
	* Sets the hidden status of an exposed variable. Valid from editor construction scripts only.
	* Development Only!
	*
	* @param VariableName The name of the exposed variable as defined in this node class.
	* @param bSetHidden Set the variable hidden status.
	*/
	UFUNCTION(BlueprintCallable, Category = "Node Display", meta = (DevelopmentOnly))
	void SetVariableHidden(FName VariableName, bool bSetHidden);
	
	/**
	 * Checks if this node is running for an editor state machine. This is generally only valid
	 * during editor time construction scripts. Use this to allow the construction script
	 * to set default values during compile instead of recalculating values during run-time.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance")
	bool IsEditorExecution() const;

	/**
	* Determine if this node is running for editor construction scripts or for a game.
	*/
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance", Meta = (ExpandEnumAsExecs = "ExecutionEnvironment"))
	void WithExecutionEnvironment(ESMExecutionEnvironment& ExecutionEnvironment);

	/** If this node can be created on a new thread. */
	bool IsInitializationThreadSafe() const;
	
	/**
	 * [EXPERIMENTAL] Resets all properties back to their defaults. Exposed graph properties will also be reset and may need to be re-evaluated.
	 * This API may be removed or modified in a future update.
	 */
	UFUNCTION(BlueprintCallable, Category = "Logic Driver|Node Instance|Experimental", meta = (Experimental, DisplayName = "Reset Variables (Experimental)"))
	void ResetVariables();

	bool GetResetVariablesOnInitialize() const { return bResetVariablesOnInitialize; }
	
protected:
	/**
	 * [EXPERIMENTAL] Resets all properties back to their default values when the node is initialized.
	 * Please communicate any issues with this to Recursoft.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, AdvancedDisplay, Category = "Properties", meta = (Experimental, InstancedTemplate, DisplayName = "[Experimental] Reset Variables On Initialize"))
	bool bResetVariablesOnInitialize;
	
#if WITH_EDITORONLY_DATA
public:
	bool HasCustomColor() const { return bUseCustomColors; }
	const FLinearColor& GetNodeColor() const { return NodeColor; }
	const FSMNodeDescription& GetNodeDescription() const { return NodeDescription; }
	bool HasCustomIcon() const { return bDisplayCustomIcon; }

	/** The default name which should be used. */
	FString GetNodeDisplayName() const;

	/** Sets the template guid. Editor use only. */
	void SetTemplateGuid(const FGuid& NewTemplateGuid) { TemplateGuid = NewTemplateGuid; }
	
protected:
	/** Describe the node. This provides information to the context menu and to tooltips. */
	UPROPERTY(EditDefaultsOnly, Category = "General", meta = (InstancedTemplate, ShowOnlyInnerProperties))
	FSMNodeDescription NodeDescription;

	/** The standard color for this node. */
	UPROPERTY(EditDefaultsOnly, Category = "Color", meta = (EditCondition = "bUseCustomColors", DisplayPriority = 1))
	FLinearColor NodeColor;
	
	/** Override editor default icon with the custom icon chosen. */
	UPROPERTY(EditDefaultsOnly, Category = "Display", meta = (DisplayPriority = 0, NodeBaseOnly))
	uint8 bDisplayCustomIcon: 1;
	
	/** Override editor preference colors. */
	UPROPERTY(EditDefaultsOnly, Category = "Color", meta = (DisplayPriority = 0))
	uint8 bUseCustomColors: 1;
	
#endif
public:
	void SetIsThreadSafe(bool bNewValue) { bIsThreadSafe = bNewValue; }
	
private:
	/** If this node can be created on a new thread with async initialization. Valid for game and editor sessions. */
	UPROPERTY(EditDefaultsOnly, Category = "Async Initialization", meta = (InstancedTemplate))
	uint8 bIsThreadSafe: 1;
	
#if WITH_EDITORONLY_DATA
public:
	void SetIsEditorThreadSafe(const bool bNewValue) { bIsEditorThreadSafe = bNewValue; }
	bool GetIsEditorThreadSafe() const { return bIsEditorThreadSafe; }
	
private:
	/**
	 * If this node can be created on a new thread with async initialization when playing in the editor.
	 * Nodes may contain editor only code that isn't always thread safe, such as slate styling found in
	 * TextGraph properties.
	 *
	 * If you experience crashes in the editor with async initialization consider turning this off.
	 */
	UPROPERTY(EditDefaultsOnly, AdvancedDisplay, Category = "Async Initialization", meta = (InstancedTemplate, EditCondition = "bIsThreadSafe"))
	uint8 bIsEditorThreadSafe: 1;
	
	friend class FSMEditorConstructionManager;
	/** Set from editor construction manager only. */
	uint8 bIsEditorExecution: 1;

#endif

	///////////////////////
	/// Input
	///////////////////////
protected:
	/** Allow input bindings if the owning state machine supports them. */
	void EnableInput();
	
	/** Disable input bindings. */
	void DisableInput();

protected:
	UFUNCTION()
	void OnContextPawnControllerChanged(APawn* Pawn, AController* NewController);
	
public:
	TEnumAsByte<ESMNodeInput::Type> GetInputType() const { return AutoReceiveInput; }
	int32 GetInputPriority() const { return InputPriority; }
	bool GetBlockInput() const { return bBlockInput; }

	/**
	 * Retrieve the input component this node created with #AutoReceiveInput.
	 * The input component will only be valid if AutoReceiveInput is not disabled
	 * and this node is initialized.
	 *
	 * @return The UInputComponent or nullptr.
	 */
	UFUNCTION(BlueprintCallable, Category = "Input (Node)")
	UInputComponent* GetInputComponent() const { return InputComponent; }
	
protected:
	UPROPERTY(Transient)
	UInputComponent* InputComponent;

	/**
	 * Automatically registers this node to receive input from a player.
	 * Input is valid only from when the node is initialized and until it is shutdown.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Input (Node)", meta = (InstancedTemplate))
	TEnumAsByte<ESMNodeInput::Type> AutoReceiveInput;
	
	/**
	 * The priority of this input component when pushed in to the stack.
	 * If AutoReceiveInput is set to UseOwningStateMachine this has no effect. */
	UPROPERTY(EditDefaultsOnly, Category = "Input (Node)", meta = (InstancedTemplate))
	int32 InputPriority = 3;

	/**
	 * Whether any components lower on the input stack should be allowed to receive input.
	 * If AutoReceiveInput is set to UseOwningStateMachine this has no effect. */
	UPROPERTY(EditDefaultsOnly, Category = "Input (Node)", meta = (InstancedTemplate))
	uint8 bBlockInput: 1;
	///////////////////////
	/// End Input
	///////////////////////
	
private:
	/** True from NativeInitialize. */
	uint8 bIsInitialized: 1;
	
	/** The owning node in the state machine instance. */
	FSMNode_Base* OwningNode;

	/** Assigned from the editor and used in tracking specific templates. */
	UPROPERTY()
	FGuid TemplateGuid;
};