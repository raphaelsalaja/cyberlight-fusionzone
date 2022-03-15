#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "Abilities/GameplayAbility.h"
#include "GameplayTags.h"
#include "RevenantBaseAttributeSet.h"
#include "ExtendedCharacter.generated.h"

class URevenantBaseAttributeSet;

UCLASS()
class REVENANT_API AExtendedCharacter : public ACharacter, public IGameplayTagAssetInterface, public IAbilitySystemInterface
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	AExtendedCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Need to store the GameplayTags somewhere. EditAnywhere and BlueprintReadWrite is so that you can add tags in BP.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer GameplayTagContainer;

	// Gameplay Tag Interface implementation

	virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = GameplayTagContainer; }

	virtual bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override { return GameplayTagContainer.HasTag(TagToCheck); }

	virtual bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override { return GameplayTagContainer.HasAll(TagContainer); }

	virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override { return GameplayTagContainer.HasAny(TagContainer); }

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ExtendedCharacter")
	UAbilitySystemComponent* AbilitySystemComponent;

	UFUNCTION(BlueprintCallable, Category = "ExtendedCharacter")
	void InitializeAbility(TSubclassOf<UGameplayAbility> AbilityToGet, int32 AbilityLevel);

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ExtendedCharacter")
	const class URevenantBaseAttributeSet* RevenantBaseAttributeSetComponent;

	UFUNCTION(BlueprintPure, Category = "ExtendedCharacter")
	void GetHealthValues(float& Health, float& MaxHealth);
	UFUNCTION(BlueprintPure, Category = "ExtendedCharacter")
	void GetStaminaValues(float& Stamina, float& MaxStamina);

	void OnHealthChangedNative(const FOnAttributeChangeData& Data);
	void OnStaminaChangedNative(const FOnAttributeChangeData& Data);

	UFUNCTION(BlueprintImplementableEvent, Category = "ExtendedCharacter")
	void OnHealthChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "ExtendedCharacter")
	void OnStaminaChanged(float OldValue, float NewValue);

	//Initialize Abilities Multi
	UFUNCTION(BlueprintCallable, Category = "ExtendedCharacter")
	void InitializeAbilityMulti(TArray<TSubclassOf<UGameplayAbility>> AbilitiesToAcquire, int32 AbilityLevel);

	//Remove Abilities with Tag
	UFUNCTION(BlueprintCallable, Category = "ExtendedCharacter")
	void RemoveAbilityWithTags(FGameplayTagContainer TagContainer);

	//Change Ability Level with Tag
	UFUNCTION(BlueprintCallable, Category = "ExtendedCharacter")
	void ChangeAbilityLevelWithTags(FGameplayTagContainer TagContainer, int32 NewLevel);

	//Cancel Ability With Tag
	UFUNCTION(BlueprintCallable, Category = "ExtendedCharacter")
	void CancelAbilityWithTags(FGameplayTagContainer WithTags, FGameplayTagContainer WithoutTags);

	//Add Loose Gameplay Tag
	UFUNCTION(BlueprintCallable, Category = "ExtendedCharacter")
	void AddLooseGameplayTag(FGameplayTag TagToAdd);

	//Remove Loose Gameplay Tag
	UFUNCTION(BlueprintCallable, Category = "ExtendedCharacter")
	void RemoveLooseGameplayTags(FGameplayTag TagsToRemove);

	//Apply GE to Target Data
	UFUNCTION(BlueprintCallable, Category = "ExtendedCharacter")
	void ApplyGEToTargetData(const FGameplayEffectSpecHandle& GESpec, const FGameplayAbilityTargetDataHandle& TargetData);

	//Modify Health Attributes
	UFUNCTION(BlueprintCallable, Category = "ExtendedCharacter")
	void SetHealthValues(float NewHealth, float NewMaxHealth);

	//Modify Stamina Attributes
	UFUNCTION(BlueprintCallable, Category = "ExtendedCharacter")
	void SetStaminaValues(float NewStamina, float NewMaxStamina);
};
