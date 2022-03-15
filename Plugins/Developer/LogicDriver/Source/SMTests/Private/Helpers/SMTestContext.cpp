// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMTestContext.h"

float USMTestContext::GreaterThanTest = 5;

void USMStateTestInstance::OnStateBeginEventFunc(USMStateInstance_Base* Instance)
{
	check(Instance == this);
	StateBeginEventHit.Increase();
}

void USMStateTestInstance::OnStateUpdateEventFunc(USMStateInstance_Base* Instance, float DeltaSeconds)
{
	check(Instance == this);
	StateUpdateEventHit.Increase();
}

void USMStateTestInstance::OnStateEndEventFunc(USMStateInstance_Base* Instance)
{
	check(Instance == this);
	StateEndEventHit.Increase();
}

void USMStateTestInstance::OnStateBegin_Implementation()
{
	ExposedInt++;
	StateBeginHit.Increase();
}

void USMStateTestInstance::OnStateUpdate_Implementation(float DeltaSeconds)
{
	StateUpdateHit.Increase();
}

void USMStateTestInstance::OnStateEnd_Implementation()
{
	StateEndHit.Increase();
}

void USMStateTestInstance::OnRootStateMachineStart_Implementation()
{
	StateMachineStartHit.Increase();
	OnStateBeginEvent.AddDynamic(this, &USMStateTestInstance::OnStateBeginEventFunc);
	OnStateUpdateEvent.AddDynamic(this, &USMStateTestInstance::OnStateUpdateEventFunc);
	OnStateEndEvent.AddDynamic(this, &USMStateTestInstance::OnStateEndEventFunc);
}

void USMStateTestInstance::OnRootStateMachineStop_Implementation()
{
	OnStateBeginEvent.RemoveDynamic(this, &USMStateTestInstance::OnStateBeginEventFunc);
	OnStateUpdateEvent.RemoveDynamic(this, &USMStateTestInstance::OnStateUpdateEventFunc);
	OnStateEndEvent.RemoveDynamic(this, &USMStateTestInstance::OnStateEndEventFunc);
	StateMachineStopHit.Increase();
}

void USMStateTestInstance::OnStateInitialized_Implementation()
{
	StateInitializedEventHit.Increase();
}

void USMStateTestInstance::OnStateShutdown_Implementation()
{
	StateShutdownEventHit.Increase();
}

void USMStateTestInstance::ConstructionScript_Implementation()
{
	Super::ConstructionScript_Implementation();
	ConstructionScriptHit.Increase();
}

int32 USMStateArrayTestInstance::ExposedIntArrDefaultValue1 = 152;
int32 USMStateArrayTestInstance::ExposedIntArrDefaultValue2 = 273;

USMStateArrayTestInstance::USMStateArrayTestInstance()
{
	ExposedIntArray.Add(ExposedIntArrDefaultValue1);
	ExposedIntArray.Add(ExposedIntArrDefaultValue2);
}

void USMStateConstructionTestInstance::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (IsNodePinChanging())
	{
		PostEditChangeHit.Increase(false);
	}
}

void USMStateConstructionTestInstance::ConstructionScript_Implementation()
{
	Super::ConstructionScript_Implementation();
	SetByConstructionScript = "Test_" + FString::FromInt(ExposedInt);

	{
		TArray<USMTransitionInstance*> Transitions;
		GetOutgoingTransitions(Transitions);

		CanReadNextStates = Transitions.Num();
	}

	{
		TArray<USMTransitionInstance*> Transitions;
		GetIncomingTransitions(Transitions);

		CanReadPreviousStates = Transitions.Num();
	}
}

void USMTransitionConstructionTestInstance::ConstructionScript_Implementation()
{
	ConstructionScriptHit.Increase();
	SetPriorityOrder(5);
}

int32 USMStateReadOnlyTestInstance::DefaultReadOnlyValue = 15132;

USMStateReadOnlyTestInstance::USMStateReadOnlyTestInstance()
{
	ReadOnlyInt = DefaultReadOnlyValue;
}

void USMStateManualTransitionTestInstance::OnStateUpdate_Implementation(float DeltaSeconds)
{
	if (GetTimeInState() > 0.1f)
	{
		EvaluateTransitions();
	}
}

void USMStateMachineTestInstance::OnStateBegin_Implementation()
{
	StateBeginHit.Increase();
}

void USMStateMachineTestInstance::OnStateUpdate_Implementation(float DeltaSeconds)
{
	StateUpdateHit.Increase();
}

void USMStateMachineTestInstance::OnStateEnd_Implementation()
{
	StateEndHit.Increase();
}

void USMStateMachineTestInstance::OnRootStateMachineStart_Implementation()
{
	RootSMStartHit.Increase();
}

void USMStateMachineTestInstance::OnRootStateMachineStop_Implementation()
{
	RootSMStopHit.Increase();
}

void USMStateMachineTestInstance::OnStateInitialized_Implementation()
{
	InitializeHit.Increase();
}

void USMStateMachineTestInstance::OnStateShutdown_Implementation()
{
	ShutdownHit.Increase();
}

void USMStateMachineTestInstance::OnEndStateReached_Implementation()
{
	EndStateReachedHit.Increase();
}

void USMStateMachineTestInstance::OnStateMachineCompleted_Implementation()
{
	StateMachineCompletedHit.Increase();
}

void USMTransitionTestInstance::OnTransitionEnteredEventFunc(USMTransitionInstance* TransitionInstance)
{
	check(TransitionInstance);
	TransitionEnteredEventHit.Increase();

	// Should always be set at this point.
	ensure(GetSourceStateForActiveTransition());
	ensure(GetDestinationStateForActiveTransition());
}

void USMTransitionTestInstance::OnTransitionInitialized_Implementation()
{
	TransitionInitializedHit.Increase();
	OnTransitionEnteredEvent.AddUniqueDynamic(this, &USMTransitionTestInstance::OnTransitionEnteredEventFunc);
}

void USMTransitionTestInstance::OnTransitionShutdown_Implementation()
{
	TransitionShutdownHit.Increase();
	//OnTransitionEnteredEvent.RemoveDynamic(this, &USMTransitionTestInstance::OnTransitionEnteredEventFunc); Can't remove because this will fire before TransitionEntered.
}

FText USMTextGraphState::DefaultText = FText::FromString("ctor default");

USMTextGraphState::USMTextGraphState()
{
	TextGraph.Result = DefaultText;
}

USMStateMachineTestComponent::USMStateMachineTestComponent(class FObjectInitializer const& ObjectInitializer) : Super(ObjectInitializer)
{
}

void USMTextGraphState::OnStateBegin_Implementation()
{
	TextGraph.Execute();
	EvaluatedText = TextGraph.Result;
}

void USMStateMachineTestComponent::SetStateMachineClass(UClass* NewClass)
{
	StateMachineClass = NewClass;
}

void USMStateMachineTestComponent::ClearTemplateInstance()
{
	InstanceTemplate = nullptr;
}

void USMStateMachineTestComponent::SetAllowTick(bool bAllowOverride, bool bCanEverTick)
{
	bOverrideTick_DEPRECATED = bAllowOverride;
	bCanEverTick_DEPRECATED = bCanEverTick;
}

void USMStateMachineTestComponent::SetTickInterval(bool bAllowOverride, float TickInterval)
{
	bOverrideTickInterval_DEPRECATED = bAllowOverride;
	TickInterval_DEPRECATED = TickInterval;
}

void USMStateMachineTestComponent::ImportDeprecatedProperties_Public()
{
	ImportDeprecatedProperties();
}
