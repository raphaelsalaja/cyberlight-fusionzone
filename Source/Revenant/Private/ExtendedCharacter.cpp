#include "ExtendedCharacter.h"
#include "RevenantBaseAttributeSet.h"

// Sets default values
AExtendedCharacter::AExtendedCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComponent");
}

// Called when the game starts or when spawned`
void AExtendedCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (AbilitySystemComponent)
	{
		RevenantBaseAttributeSetComponent = AbilitySystemComponent->GetSet<URevenantBaseAttributeSet>();

		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(RevenantBaseAttributeSetComponent->GetHealthAttribute()).AddUObject(this, &AExtendedCharacter::OnHealthChangedNative);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(RevenantBaseAttributeSetComponent->GetStaminaAttribute()).AddUObject(this, &AExtendedCharacter::OnStaminaChangedNative);
	}
}

// Called every frame
void AExtendedCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AExtendedCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AExtendedCharacter::InitializeAbility(TSubclassOf<UGameplayAbility> AbilityToGet, int32 AbilityLevel)
{
	if (AbilitySystemComponent)
	{
		if (HasAuthority() && AbilityToGet)
		{
			AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(AbilityToGet, AbilityLevel, 0));
		}
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
	}
}

UAbilitySystemComponent* AExtendedCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AExtendedCharacter::GetHealthValues(float& Health, float& MaxHealth)
{
	if (RevenantBaseAttributeSetComponent)
	{
		Health = RevenantBaseAttributeSetComponent->GetHealth();
		MaxHealth = RevenantBaseAttributeSetComponent->GetMaxHealth();
	}
}

void AExtendedCharacter::GetStaminaValues(float& Stamina, float& MaxStamina)
{
	if (RevenantBaseAttributeSetComponent)
	{
		Stamina = RevenantBaseAttributeSetComponent->GetStamina();
		MaxStamina = RevenantBaseAttributeSetComponent->GetMaxStamina();
	}
}

void AExtendedCharacter::OnHealthChangedNative(const FOnAttributeChangeData& Data)
{
	OnHealthChanged(Data.OldValue, Data.NewValue);
}

void AExtendedCharacter::OnStaminaChangedNative(const FOnAttributeChangeData& Data)
{
	OnStaminaChanged(Data.OldValue, Data.NewValue);
}

void AExtendedCharacter::InitializeAbilityMulti(TArray<TSubclassOf<UGameplayAbility>> AbilitiesToAcquire, int32 AbilityLevel)
{
	for (TSubclassOf<UGameplayAbility> AbilitItem : AbilitiesToAcquire)
	{
		InitializeAbility(AbilitItem, AbilityLevel);
	}
}

void AExtendedCharacter::RemoveAbilityWithTags(FGameplayTagContainer TagContainer)
{
	TArray<FGameplayAbilitySpec*> MatchingAbilities;
	AbilitySystemComponent->GetActivatableGameplayAbilitySpecsByAllMatchingTags(TagContainer, MatchingAbilities, true);
	for (FGameplayAbilitySpec* Spec : MatchingAbilities)
	{
		AbilitySystemComponent->ClearAbility(Spec->Handle);
	}
}

void AExtendedCharacter::ChangeAbilityLevelWithTags(FGameplayTagContainer TagContainer, int32 NewLevel)
{
	TArray<FGameplayAbilitySpec*> MatchingAbility;
	AbilitySystemComponent->GetActivatableGameplayAbilitySpecsByAllMatchingTags(TagContainer, MatchingAbility, true);
	for (FGameplayAbilitySpec* Spec : MatchingAbility)
	{
		Spec->Level = NewLevel;
	}
}

void AExtendedCharacter::CancelAbilityWithTags(FGameplayTagContainer WithTags, FGameplayTagContainer WithoutTags)
{
	AbilitySystemComponent->CancelAbilities(&WithTags, &WithoutTags, nullptr);
}

void AExtendedCharacter::AddLooseGameplayTag(FGameplayTag TagToAdd)
{
	GetAbilitySystemComponent()->AddLooseGameplayTag(TagToAdd);
	GetAbilitySystemComponent()->SetTagMapCount(TagToAdd, 1);
}

void AExtendedCharacter::RemoveLooseGameplayTags(FGameplayTag TagsToRemove)
{
	GetAbilitySystemComponent()->RemoveLooseGameplayTag(TagsToRemove);
}

void AExtendedCharacter::ApplyGEToTargetData(const FGameplayEffectSpecHandle& GESpec, const FGameplayAbilityTargetDataHandle& TargetData)
{
	for (TSharedPtr<FGameplayAbilityTargetData> Data : TargetData.Data)
	{
		Data->ApplyGameplayEffectSpec(*GESpec.Data.Get());
	}
}

void AExtendedCharacter::SetHealthValues(float NewHealth, float NewMaxHealth)
{
	AbilitySystemComponent->ApplyModToAttribute(RevenantBaseAttributeSetComponent->GetHealthAttribute(), EGameplayModOp::Override, NewHealth);
	AbilitySystemComponent->ApplyModToAttribute(RevenantBaseAttributeSetComponent->GetMaxHealthAttribute(), EGameplayModOp::Override, NewMaxHealth);
}

void AExtendedCharacter::SetStaminaValues(float NewStamina, float NewMaxStamina)
{
	AbilitySystemComponent->ApplyModToAttribute(RevenantBaseAttributeSetComponent->GetStaminaAttribute(), EGameplayModOp::Override, NewStamina);
	AbilitySystemComponent->ApplyModToAttribute(RevenantBaseAttributeSetComponent->GetMaxStaminaAttribute(), EGameplayModOp::Override, NewMaxStamina);
}
