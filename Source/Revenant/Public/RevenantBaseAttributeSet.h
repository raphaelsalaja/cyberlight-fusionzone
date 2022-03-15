

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "RevenantBaseAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class REVENANT_API URevenantBaseAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	URevenantBaseAttributeSet();

	//Attributes for Health
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
		FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(URevenantBaseAttributeSet, Health);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
		FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(URevenantBaseAttributeSet, MaxHealth);

	//Attributes for Stamina
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
		FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(URevenantBaseAttributeSet, Stamina);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
		FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS(URevenantBaseAttributeSet, MaxStamina);

	void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

};
