// Copyright Recursoft LLC 2019-2022. All Rights Reserved.

#include "SMNode_Base.h"
#include "SMUtils.h"
#include "SMLogging.h"
#include "SMNodeInstance.h"
#include "SMRuntimeSettings.h"


FSMNode_Base::FSMNode_Base() : TimeInState(0), bIsInEndState(false), bHasUpdated(false), DuplicateId(0),
                               NodePosition(ForceInitToZero), OwnerNode(nullptr),
                               OwningInstance(nullptr), NodeInstance(nullptr), NodeInstanceClass(nullptr),
                               ServerTimeInState(SM_ACTIVE_TIME_NOT_SET), bHaveGraphFunctionsInitialized(false), bIsInitializedForRun(0),
                               bIsActive(false)
{
	/*
	 * Originally the Guid was initialized here. This caused warnings to show up during packaging because
	 * Unreal does safety checks on struct native constructors by comparing multiple initializations with different
	 * addresses and verifying each property matches. That doesn't work with a Guid because it is guaranteed to
	 * be unique each time.
	 */
}

void FSMNode_Base::Initialize(UObject* Instance)
{
	OwningInstance = Cast<USMInstance>(Instance);
	CreateNodeInstance();
}

void FSMNode_Base::InitializeGraphFunctions()
{
	check(IsInGameThread());

	USMUtils::InitializeGraphFunctions(OnRootStateMachineStartedGraphEvaluator, OwningInstance, GetNodeInstance());
	USMUtils::InitializeGraphFunctions(OnRootStateMachineStoppedGraphEvaluator, OwningInstance, GetNodeInstance());
	
	USMUtils::InitializeGraphFunctions(TransitionInitializedGraphEvaluators, OwningInstance, GetNodeInstance());
	USMUtils::InitializeGraphFunctions(TransitionShutdownGraphEvaluators, OwningInstance, GetNodeInstance());

	// Graph properties have been extracted but not initialized.
	for (FSMGraphProperty_Base_Runtime* GraphProperty : GraphProperties)
	{
		GraphProperty->Initialize(OwningInstance);
	}

	// Variable properties already have everything they need and just need to be initialized.
	for (auto& TemplateGraphProperty : TemplateVariableGraphProperties)
	{
		for (FSMGraphProperty_Base_Runtime& GraphProperty : TemplateGraphProperty.Value.VariableGraphProperties)
		{
			GraphProperty.Initialize(OwningInstance);
		}
	}
	
	bHaveGraphFunctionsInitialized = true;
}

void FSMNode_Base::Reset()
{
	USMUtils::ResetGraphFunctions(OnRootStateMachineStartedGraphEvaluator);
	USMUtils::ResetGraphFunctions(OnRootStateMachineStoppedGraphEvaluator);

	USMUtils::ResetGraphFunctions(TransitionInitializedGraphEvaluators);
	USMUtils::ResetGraphFunctions(TransitionShutdownGraphEvaluators);
	
	ResetGraphProperties();
}

void FSMNode_Base::OnStartedByInstance(USMInstance* Instance)
{
	USMUtils::ExecuteGraphFunctions(OnRootStateMachineStartedGraphEvaluator);
}

void FSMNode_Base::OnStoppedByInstance(USMInstance* Instance)
{
	USMUtils::ExecuteGraphFunctions(OnRootStateMachineStoppedGraphEvaluator);
}

const FGuid& FSMNode_Base::GetNodeGuid() const
{
	return Guid;
}

void FSMNode_Base::GenerateNewNodeGuid()
{
	SetNodeGuid(FGuid::NewGuid());
}

const FGuid& FSMNode_Base::GetGuid() const
{
	return PathGuid;
}

void FSMNode_Base::CalculatePathGuid(TMap<FString, int32>& InOutMappedPaths)
{
	USMUtils::PathToGuid(GetGuidPath(InOutMappedPaths), &PathGuid);
}

FString FSMNode_Base::GetGuidPath(TMap<FString, int32>& InOutMappedPaths) const
{
	TArray<const FSMNode_Base*> Owners;
	USMUtils::TryGetAllOwners(this, Owners);
	return USMUtils::BuildGuidPathFromNodes(Owners, &InOutMappedPaths);
}

FGuid FSMNode_Base::CalculatePathGuidConst() const
{
	TMap<FString, int32> PathToStateMachine;
	const FString Path = GetGuidPath(PathToStateMachine);
	return USMUtils::PathToGuid(Path);
}

void FSMNode_Base::GenerateNewNodeGuidIfNotSet()
{
	if (Guid.IsValid())
	{
		return;
	}

	GenerateNewNodeGuid();
}

void FSMNode_Base::SetNodeGuid(const FGuid& NewGuid)
{
	Guid = NewGuid;
}

void FSMNode_Base::SetOwnerNodeGuid(const FGuid& NewGuid)
{
	OwnerGuid = NewGuid;
}

void FSMNode_Base::SetOwnerNode(FSMNode_Base* Owner)
{
	OwnerNode = Owner;
}

void FSMNode_Base::CreateNodeInstance()
{
	GraphProperties.Reset();
	
	if (!NodeInstanceClass)
	{
		SetNodeInstanceClass(GetDefaultNodeInstanceClass());

		check(NodeInstanceClass);
	}

	UObject* TemplateInstance = nullptr;
	if (TemplateName != NAME_None && OwningInstance)
	{
		TemplateInstance = USMUtils::FindTemplateFromInstance(OwningInstance, TemplateName);
		if (TemplateInstance == nullptr)
		{
			LD_LOG_ERROR(TEXT("Could not find node template %s for use on node %s from package %s. Loading defaults."), *TemplateName.ToString(), *GetNodeName(), *OwningInstance->GetName());
		}
	}

	if (TemplateInstance && OwningInstance && TemplateInstance->GetClass() != NodeInstanceClass && TemplateInstance->GetClass()->GetName().StartsWith("REINST_"))
	{
		LD_LOG_ERROR(TEXT("Node class mismatch. Node %s has template class %s but is expecting %s. Try recompiling the blueprint %s."),
			*GetNodeName(), *TemplateInstance->GetClass()->GetName(), *NodeInstanceClass->GetName(), *OwningInstance->GetName());
		return;
	}

	if (!CanEverCreateNodeInstance() ||
		(IsUsingDefaultNodeClass() && !GetDefault<USMRuntimeSettings>()->bPreloadDefaultNodes && StackTemplateNames.Num() == 0))
	{
		// Default node instances are created on demand. If part of a stack they should still be created.
		return;
	}
	
	if (!IsInGameThread())
	{
		if (const USMNodeInstance* TemplateNode = Cast<USMNodeInstance>(TemplateInstance))
		{
			if (!TemplateNode->IsInitializationThreadSafe())
			{
				LD_LOG_INFO(TEXT("CreateNodeInstance called asynchronously for node %s that isn't marked thread safe. Queuing to initialize on the game thread."), *GetNodeName());
				if (USMInstance* Instance = GetOwningInstance())
				{
					Instance->GetPrimaryReferenceOwner()->AddNonThreadSafeNode(this);
				}

				return;
			}
		}
	}

	NodeInstance = NewObject<USMNodeInstance>(OwningInstance, NodeInstanceClass, NAME_None, RF_NoFlags, TemplateInstance);
	NodeInstance->SetOwningNode(this);

	CreateStackInstances();
	CreateGraphProperties();
}

void FSMNode_Base::CreateStackInstances()
{
	for (const FName& StackTemplateName : StackTemplateNames)
	{
		UObject* TemplateInstance = USMUtils::FindTemplateFromInstance(OwningInstance, StackTemplateName);
		if (TemplateInstance == nullptr)
		{
			LD_LOG_ERROR(TEXT("Could not find node stack template %s for use on node %s from package %s."), *StackTemplateName.ToString(), *GetNodeName(), *OwningInstance->GetName());
			continue;
		}

		USMNodeInstance* NewInstance = NewObject<USMNodeInstance>(OwningInstance, TemplateInstance->GetClass(), NAME_None, RF_NoFlags, TemplateInstance);
		NewInstance->SetOwningNode(this);

		StackNodeInstances.Add(NewInstance);
	}
}

void FSMNode_Base::RunConstructionScripts()
{
	if (NodeInstance)
	{
		USMNodeInstance* NodeInstanceCDO = CastChecked<USMNodeInstance>(NodeInstance->GetClass()->GetDefaultObject());
		if (NodeInstanceCDO->bHasGameConstructionScripts)
		{
			NodeInstance->RunConstructionScript();
		}
	}
	
	for (USMNodeInstance* StackInstance : StackNodeInstances)
	{
		if (StackInstance)
		{
			USMNodeInstance* StackInstanceCDO = CastChecked<USMNodeInstance>(StackInstance->GetClass()->GetDefaultObject());
			if (StackInstanceCDO->bHasGameConstructionScripts)
			{
				StackInstance->RunConstructionScript();
			}
		}
	}
}

void FSMNode_Base::SetNodeInstanceClass(UClass* NewNodeInstanceClass)
{
	if (NewNodeInstanceClass && !IsNodeInstanceClassCompatible(NewNodeInstanceClass))
	{
		LD_LOG_ERROR(TEXT("Could not set node instance class %s on node %s. The types are not compatible."), *NewNodeInstanceClass->GetName(), *GetNodeName());
		return;
	}

	NodeInstanceClass = NewNodeInstanceClass;
}

bool FSMNode_Base::IsNodeInstanceClassCompatible(UClass* NewNodeInstanceClass) const
{
	ensureMsgf(false, TEXT("FSMNode_Base IsNodeInstanceClassCompatible hit for node %s and instance class %s. This should always be overidden in child classes."),
		*GetNodeName(), NewNodeInstanceClass ? *NewNodeInstanceClass->GetName() : TEXT("None"));
	return false;
}

USMNodeInstance* FSMNode_Base::GetOrCreateNodeInstance()
{
	if (!NodeInstance && CanEverCreateNodeInstance())
	{
		if (!HaveGraphFunctionsInitialized())
		{
			LD_LOG_ERROR(TEXT("GetOrCreateNodeInstance called on node %s before it has initialized."), *GetNodeName());
			return nullptr;
		}

		if (!NodeInstanceClass)
		{
			LD_LOG_ERROR(TEXT("GetOrCreateNodeInstance called on node %s with null NodeInstanceClass."), *GetNodeName());
			return nullptr;
		}
	
		NodeInstance = NewObject<USMNodeInstance>(OwningInstance, NodeInstanceClass, NAME_None, RF_NoFlags);
		NodeInstance->SetOwningNode(this);
		if (IsInitializedForRun())
		{
			NodeInstance->NativeInitialize();
		}
	}
	
	return NodeInstance;
}

USMNodeInstance* FSMNode_Base::GetNodeInStack(int32 Index) const
{
	if (Index >= 0 && Index < StackNodeInstances.Num())
	{
		return StackNodeInstances[Index];
	}

	return nullptr;
}

void FSMNode_Base::AddVariableGraphProperty(const FSMGraphProperty_Base_Runtime& GraphProperty, const FGuid& OwningTemplateGuid)
{
	FSMGraphPropertyTemplateOwner& TemplateGraphOwner = TemplateVariableGraphProperties.FindOrAdd(OwningTemplateGuid);
	TemplateGraphOwner.VariableGraphProperties.Add(GraphProperty);
}

void FSMNode_Base::SetNodeName(const FString& Name)
{
	NodeName = Name;
}

void FSMNode_Base::SetTemplateName(const FName& Name)
{
	TemplateName = Name;
}

void FSMNode_Base::AddStackTemplateName(const FName& Name, UClass* TemplateClass)
{
	StackTemplateNames.Add(Name);
	NodeStackClasses.AddUnique(TemplateClass);
}

void FSMNode_Base::ExecuteInitializeNodes()
{
	if (IsInitializedForRun())
	{
		return;
	}
	
	USMUtils::ExecuteGraphFunctions(TransitionInitializedGraphEvaluators);
	bIsInitializedForRun = true;
}

void FSMNode_Base::ExecuteShutdownNodes()
{
	USMUtils::ExecuteGraphFunctions(TransitionShutdownGraphEvaluators);
	bIsInitializedForRun = false;
}

void FSMNode_Base::SetServerTimeInState(float InTime)
{
	ServerTimeInState = InTime;
}

#if WITH_EDITOR

void FSMNode_Base::EditorShutdown()
{
	// Graph properties are pointers to addresses on the BP itself. If the BP was recompiled they won't be valid.
	GraphProperties.Reset();
	Reset();
}

#endif

void FSMNode_Base::PrepareGraphExecution()
{
	if (!HaveGraphFunctionsInitialized())
	{
		return;
	}

	UpdateReadStates();
}

void FSMNode_Base::SetActive(bool bValue)
{
#if WITH_EDITORONLY_DATA
	bWasActive = bIsActive;
#endif
	bIsActive = bValue;
}

bool FSMNode_Base::TryExecuteGraphProperties(uint32 OnEvent)
{
	if (USMStateInstance_Base* StateInstance = Cast<USMStateInstance_Base>(GetNodeInstance()))
	{
		if (CanExecuteGraphProperties(OnEvent, StateInstance))
		{
			ExecuteGraphProperties(StateInstance, &StateInstance->GetTemplateGuid());
			return true;
		}
	}

	return false;
}

void FSMNode_Base::ExecuteGraphProperties(USMNodeInstance* ForNodeInstance, const FGuid* ForTemplateGuid)
{
	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("SMNode_Base::ExecuteGraphProperties"), STAT_SMNode_Base_ExecuteGraphProperties, STATGROUP_LogicDriver);
	
	bool bCanEvalDefaultProperties = ForNodeInstance ? ForNodeInstance->bEvalDefaultProperties : true;
	
	auto EvaluateProperties = [bCanEvalDefaultProperties](FSMGraphPropertyTemplateOwner* TemplateOwner)
	{
		for (FSMGraphProperty_Base_Runtime& GraphProperty : TemplateOwner->VariableGraphProperties)
		{
			if (bCanEvalDefaultProperties || !GraphProperty.GetIsDefaultValueOnly())
			{
				GraphProperty.Execute();
			}
		}
	};
	
	if (ForTemplateGuid)
	{
		if (FSMGraphPropertyTemplateOwner* TemplateOwner = TemplateVariableGraphProperties.Find(*ForTemplateGuid))
		{
			EvaluateProperties(TemplateOwner);
		}
	}
	else
	{
		for (auto& TemplateGraphProperty : TemplateVariableGraphProperties)
		{
			EvaluateProperties(&TemplateGraphProperty.Value);
		}
	}
}

void FSMNode_Base::TryResetVariables()
{
	if (NodeInstance && NodeInstance->GetResetVariablesOnInitialize())
	{
		NodeInstance->ResetVariables();
	}
	
	for (USMNodeInstance* StackInstance : StackNodeInstances)
	{
		if (StackInstance->GetResetVariablesOnInitialize())
		{
			StackInstance->ResetVariables();
		}
	}
}

void FSMNode_Base::ResetGraphProperties()
{
	for (auto& TemplateGraphProperty : TemplateVariableGraphProperties)
	{
		for (FSMGraphProperty_Base_Runtime& GraphProperty : TemplateGraphProperty.Value.VariableGraphProperties)
		{
			GraphProperty.Reset();
		}
	}

	for (FSMGraphProperty_Base_Runtime* GraphProperty : GraphProperties)
	{
		GraphProperty->Reset();
	}
}

void FSMNode_Base::CreateGraphProperties()
{
	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("SMNode_Base::CreateGraphProperties"), STAT_SMNode_Base_CreateGraphProperties, STATGROUP_LogicDriver);
	
	TSet<FProperty*> GraphStructPropertiesForStateMachine;
	USMUtils::TryGetGraphPropertiesForClass(OwningInstance->GetClass(), GraphStructPropertiesForStateMachine);

	CreateGraphPropertiesForTemplate(NodeInstance, GraphStructPropertiesForStateMachine);

	for (USMNodeInstance* Template : StackNodeInstances)
	{
		CreateGraphPropertiesForTemplate(Template, GraphStructPropertiesForStateMachine);
	}
}

void FSMNode_Base::CreateGraphPropertiesForTemplate(USMNodeInstance* Template, const TSet<FProperty*>& GraphStructPropertiesForStateMachine)
{
	/* Looks for the real property stored on the owning instance. */
	auto GetRealProperty = [&](const TSet<FProperty*>& Properties, const FSMGraphProperty_Base_Runtime* GraphProperty) -> FSMGraphProperty_Base_Runtime*
	{
		for (FProperty* Prop : Properties)
		{
			TArray<FSMGraphProperty_Base_Runtime*> GraphPropertyInstances;
			USMUtils::BlueprintPropertyToNativeProperty(Prop, OwningInstance, GraphPropertyInstances);

			for (FSMGraphProperty_Base_Runtime* FoundInstance : GraphPropertyInstances)
			{
				// The real property is the owner guid of the instanced property.
				if (FoundInstance->GetGuid() == GraphProperty->GetOwnerGuid())
				{
					return FoundInstance;
				}
			}
		}
		return nullptr;
	};
	TSet<FProperty*> GraphStructProperties;
	if (USMUtils::TryGetGraphPropertiesForClass(Template->GetClass(), GraphStructProperties))
	{
		for (FProperty* GraphStructProperty : GraphStructProperties)
		{
			TArray<FSMGraphProperty_Base_Runtime*> GraphPropertyInstances;
			USMUtils::BlueprintPropertyToNativeProperty(GraphStructProperty, Template, GraphPropertyInstances);

			for (FSMGraphProperty_Base_Runtime* GraphProperty : GraphPropertyInstances)
			{
				// The graph property being executed is actually in the template, but the graph has a duplicate created on the owning instance,
				// so we need to link them to get the owning instance result properly to template.
				GraphProperty->LinkedProperty = GetRealProperty(GraphStructPropertiesForStateMachine, GraphProperty);
				GraphProperties.AddUnique(GraphProperty);
			}
		}
	}
}
