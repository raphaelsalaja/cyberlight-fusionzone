// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "SMNode_Info.h"
#include "SMStateInstance.h"
#include "SMConduitInstance.h"
#include "SMStateMachineComponent.h"
#include "Properties/SMTextGraphProperty.h"
#include "SMTestContext.generated.h"

class USMInstance;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTestDelegateSignature);

USTRUCT()
struct FSMTestData
{
	GENERATED_BODY()

	int32 Count = 0;
	double TimeStamp = 0.f;

	void Increase(bool bTakeTimeStamp = true)
	{
		Count++;
		if(bTakeTimeStamp)
		{
			TakeTimeStamp();
		}
	}

	void TakeTimeStamp()
	{
		TimeStamp = FPlatformTime::Seconds();
	}
};

UCLASS(Blueprintable)
class USMTestContext : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "State Machine Tests")
	void IncreaseEntryInt() { TestEntryInt++;}

	UFUNCTION(BlueprintCallable, Category = "State Machine Tests")
	void IncreaseUpdateInt(float Value) { TestUpdateInt += Value;}

	UFUNCTION(BlueprintCallable, Category = "State Machine Tests")
	void IncreaseEndInt() { TestEndInt++;}

	UFUNCTION(BlueprintCallable, Category = "State Machine Tests")
	int32 GetEntryInt() const { return TestEntryInt; }

	UFUNCTION(BlueprintCallable, Category = "State Machine Tests")
	int32 GetUpdateInt() const { return TestUpdateInt; }

	UFUNCTION(BlueprintCallable, Category = "State Machine Tests")
	int32 GetEndInt() const { return TestEndInt; }

	UFUNCTION(BlueprintCallable, Category = "State Machine Tests")
	bool CanTransition() const { return bCanTransition; }

	UFUNCTION(BlueprintCallable, Category = "State Machine Tests")
	void IncreaseTransitionInit() { TestTransitionInit.Increase(); }

	UFUNCTION(BlueprintCallable, Category = "State Machine Tests")
	void IncreaseTransitionShutdown() { TestTransitionShutdown.Increase(); }

	UFUNCTION(BlueprintCallable, Category = "State Machine Tests")
	void IncreaseTransitionPreEval() { TestTransitionPreEval.Increase(); }

	UFUNCTION(BlueprintCallable, Category = "State Machine Tests")
	void IncreaseTransitionPostEval() { TestTransitionPostEval.Increase(); }

	UFUNCTION(BlueprintCallable, Category = "State Machine Tests")
	void IncreaseTransitionTaken() { TestTransitionEntered.Increase(); }

	/** Quick test for feeding in float data. */
	UFUNCTION(BlueprintCallable, Category = "State Machine Tests")
	bool FloatGreaterThan(float Input) const
	{
		return Input > GreaterThanTest;
	}

	UFUNCTION(BlueprintCallable, Category = "State Machine Tests")
	void SetTestReference(USMInstance* Instance)
	{
		TestReference = Instance;
	}
	
	void Reset()
	{
		TestEntryInt = 0;
		TestTransitionsHit = 0;
		TestStatesHit = 0;
		bCanTransition = false;
	}

	UFUNCTION()
	void OnTransitionTaken(USMInstance* Instance, FSMTransitionInfo Transition)
	{
		TestTransitionsHit++;
	}

	UFUNCTION()
	void OnStateChanged(USMInstance* Instance, FSMStateInfo To, FSMStateInfo From)
	{
		TestStatesHit++;
	}

	UPROPERTY(BlueprintReadWrite, Category = "State Machine Tests")
	int32 TestEntryInt = 0;

	UPROPERTY(BlueprintReadWrite, Category = "State Machine Tests")
	int32 TestUpdateInt = 0;

	UPROPERTY(BlueprintReadWrite, Category = "State Machine Tests")
	int32 TestEndInt = 0;

	UPROPERTY(BlueprintReadWrite, Category = "State Machine Tests")
	int32 TestTransitionsHit = 0;

	UPROPERTY(BlueprintReadWrite, Category = "State Machine Tests")
	int32 TestStatesHit = 0;
	
	UPROPERTY(BlueprintReadWrite, Category = "State Machine Tests")
	bool bCanTransition = true;

	UPROPERTY()
	FSMTestData TestTransitionInit;

	UPROPERTY()
	FSMTestData TestTransitionShutdown;

	UPROPERTY()
	FSMTestData TestTransitionPreEval;

	UPROPERTY()
	FSMTestData TestTransitionPostEval;

	UPROPERTY()
	FSMTestData TestTransitionEntered;

	UPROPERTY()
	USMInstance* TestReference;

	UPROPERTY(BlueprintAssignable, Category = "State Machine Tests")
	FTestDelegateSignature TransitionEvent;
	
	static float GreaterThanTest;
};

UCLASS(Blueprintable)
class USMStateTestInstance : public USMStateInstance
{
public:
	GENERATED_BODY()
		
	UPROPERTY(BlueprintReadWrite, Category = "State Machine Tests")
	int32 ExposedInt;

	UPROPERTY()
	FSMTestData StateBeginHit;

	UPROPERTY()
	FSMTestData StateUpdateHit;

	UPROPERTY()
	FSMTestData StateEndHit;
	
	UPROPERTY()
	FSMTestData StateMachineStartHit;

	UPROPERTY()
	FSMTestData StateMachineStopHit;

	UPROPERTY()
	FSMTestData StateBeginEventHit;

	UPROPERTY()
	FSMTestData StateUpdateEventHit;

	UPROPERTY()
	FSMTestData StateEndEventHit;

	UPROPERTY()
	FSMTestData StateInitializedEventHit;

	UPROPERTY()
	FSMTestData StateShutdownEventHit;

	UPROPERTY()
	FSMTestData ConstructionScriptHit;
	
	UFUNCTION()
	void OnStateBeginEventFunc(USMStateInstance_Base* Instance);

	UFUNCTION()
	void OnStateUpdateEventFunc(USMStateInstance_Base* Instance, float DeltaSeconds);

	UFUNCTION()
	void OnStateEndEventFunc(USMStateInstance_Base* Instance);
	
protected:
	virtual void OnStateBegin_Implementation() override;
	virtual void OnStateUpdate_Implementation(float DeltaSeconds) override;
	virtual void OnStateEnd_Implementation() override;
	virtual void OnRootStateMachineStart_Implementation() override;
	virtual void OnRootStateMachineStop_Implementation() override;
	virtual void OnStateInitialized_Implementation() override;
	virtual void OnStateShutdown_Implementation() override;
	virtual void ConstructionScript_Implementation() override;

public:
	UPROPERTY(BlueprintAssignable, Category = "State Machine Tests")
	FTestDelegateSignature StateEvent;
};

UCLASS(Blueprintable)
class USMStateArrayTestInstance : public USMStateTestInstance
{
public:
	GENERATED_BODY()

	static int32 ExposedIntArrDefaultValue1;
	static int32 ExposedIntArrDefaultValue2;

	USMStateArrayTestInstance();
	
	UPROPERTY(BlueprintReadWrite, Category = "State Machine Tests")
	TArray<int32> ExposedIntArray;

};

UCLASS(Blueprintable)
class USMStateConstructionTestInstance : public USMStateTestInstance
{
public:
	GENERATED_BODY()

	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	
	UPROPERTY(BlueprintReadWrite, Category = "State Machine Tests")
	FString SetByConstructionScript;

	UPROPERTY(BlueprintReadWrite, Category = "State Machine Tests")
	int32 CanReadNextStates;

	UPROPERTY(BlueprintReadWrite, Category = "State Machine Tests")
	int32 CanReadPreviousStates;

	UPROPERTY()
	FSMTestData PostEditChangeHit;
protected:
	virtual void ConstructionScript_Implementation() override;

};

UCLASS(Blueprintable)
class USMStatePropertyResetTestInstance : public USMStateInstance
{
	GENERATED_BODY()

public:
	void SetResetVariables(bool bNewVal)
	{
		bResetVariablesOnInitialize = bNewVal;
	}

	UPROPERTY()
	int32 IntVar;

	UPROPERTY()
	FString StringVar;

	UPROPERTY()
	UObject* ObjectValue;
};

UCLASS(Blueprintable)
class USMTransitionConstructionTestInstance : public USMTransitionInstance
{
public:
	GENERATED_BODY()

	UPROPERTY()
	FSMTestData ConstructionScriptHit;
	
protected:
	virtual void ConstructionScript_Implementation() override;

};

UCLASS(Blueprintable)
class USMStateTestInstance2 : public USMStateTestInstance
{
public:
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "State Machine Tests")
	int32 AnotherExposedInt;
};

UCLASS(Blueprintable)
class USMStateReadOnlyTestInstance : public USMStateInstance
{
public:
	GENERATED_BODY()

	static int32 DefaultReadOnlyValue;
	
	USMStateReadOnlyTestInstance();
	
	UPROPERTY(BlueprintReadOnly, Category = "State Machine Tests")
	int32 ReadOnlyInt;
};

UCLASS(Blueprintable)
class USMStateManualTransitionTestInstance : public USMStateTestInstance
{
public:
	GENERATED_BODY()

protected:
	virtual void OnStateUpdate_Implementation(float DeltaSeconds) override;
};

UCLASS(Blueprintable)
class USMStateMachineTestInstance : public USMStateMachineInstance
{
public:
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "State Machine Tests")
	int32 ExposedInt;

	UPROPERTY()
	FSMTestData StateBeginHit;

	UPROPERTY()
	FSMTestData StateUpdateHit;

	UPROPERTY()
	FSMTestData StateEndHit;

	UPROPERTY()
	FSMTestData RootSMStartHit;

	UPROPERTY()
	FSMTestData RootSMStopHit;

	UPROPERTY()
	FSMTestData InitializeHit;

	UPROPERTY()
	FSMTestData ShutdownHit;

	UPROPERTY()
	FSMTestData EndStateReachedHit;

	UPROPERTY()
	FSMTestData StateMachineCompletedHit;
protected:
	virtual void OnStateBegin_Implementation() override;
	virtual void OnStateUpdate_Implementation(float DeltaSeconds) override;
	virtual void OnStateEnd_Implementation() override;
	virtual void OnRootStateMachineStart_Implementation() override;
	virtual void OnRootStateMachineStop_Implementation() override;
	virtual void OnStateInitialized_Implementation() override;
	virtual void OnStateShutdown_Implementation() override;

	virtual void OnEndStateReached_Implementation() override;
	virtual  void OnStateMachineCompleted_Implementation() override;
};

UCLASS(Blueprintable)
class USMConduitTestInstance : public USMConduitInstance
{
public:
	GENERATED_BODY()
	
	UPROPERTY()
	int32 IntValue;
};

UCLASS(Blueprintable)
class USMTransitionTestInstance : public USMTransitionInstance
{
public:
	GENERATED_BODY()

	UPROPERTY()
	int32 IntValue;

	UPROPERTY()
	FSMTestData TransitionEnteredEventHit;

	UPROPERTY()
	FSMTestData TransitionInitializedHit;

	UPROPERTY()
	FSMTestData TransitionShutdownHit;
	
	UFUNCTION()
	void OnTransitionEnteredEventFunc(USMTransitionInstance* TransitionInstance);

	bool bCanTransition = false;
protected:
	virtual void OnTransitionInitialized_Implementation() override;
	virtual void OnTransitionShutdown_Implementation() override;
	virtual bool CanEnterTransition_Implementation() const override { return bCanTransition; }
};

UCLASS(Blueprintable)
class USMTextGraphState : public USMStateInstance
{
public:
	GENERATED_BODY()

	/** TextGraph default text from ctor. */
	static FText DefaultText;
	
	USMTextGraphState();
	
	UPROPERTY(EditDefaultsOnly, Category = "Test")
	FSMTextGraphProperty TextGraph;

	UPROPERTY(BlueprintReadWrite, meta = (HideOnNode))
	FText EvaluatedText;

protected:
	virtual void OnStateBegin_Implementation() override;
};

UCLASS(Blueprintable)
class USMTextGraphStateExtra : public USMTextGraphState
{
public:
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Test", meta = (DisplayOrder = 1))
	FString StringVar;
};

UCLASS()
class USMTestObject : public UObject
{
public:
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Test")
	FText CustomToText() const { return FText::FromString("Test serializer"); }

};

UCLASS()
class USMStateMachineTestComponent : public USMStateMachineComponent
{
	GENERATED_UCLASS_BODY()

public:
	void SetStateMachineClass(UClass* NewClass);
	void ClearTemplateInstance();
	
	void SetAllowTick(bool bAllowOverride, bool bCanEverTick);
	void SetTickInterval(bool bAllowOverride, float TickInterval);

	void ImportDeprecatedProperties_Public();
};