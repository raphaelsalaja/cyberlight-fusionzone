
#include "RevenantBaseAttributeSet.h"

#include "ExtendedCharacter.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"

URevenantBaseAttributeSet::URevenantBaseAttributeSet()
{

}

void URevenantBaseAttributeSet::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.0f, GetMaxHealth()));
	}
	if (Data.EvaluatedData.Attribute == GetStaminaAttribute())
	{
		SetStamina(FMath::Clamp(GetStamina(), 0.0f, GetMaxStamina()));
	}
}

