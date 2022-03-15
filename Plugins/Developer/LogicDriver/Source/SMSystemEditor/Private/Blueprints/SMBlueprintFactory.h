// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"
#include "Engine/Blueprint.h"
#include "Factories/Factory.h"

#include "SMBlueprintFactory.generated.h"

class USMNodeBlueprint;
class USMBlueprint;
class USMInstance;
class USMNodeInstance;

UCLASS(HideCategories = Object, MinimalAPI)
class USMBlueprintFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

	// UFactory
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context,
	                                  FFeedbackContext* Warn, FName CallingContext) override;
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context,
	                                  FFeedbackContext* Warn) override;
	virtual bool DoesSupportClass(UClass* Class) override;
	virtual FString GetDefaultNewAssetName() const override;
	// ~UFactory

	static void CreateGraphsForBlueprintIfMissing(USMBlueprint* Blueprint);
	static void CreateGraphsForNewBlueprint(USMBlueprint* Blueprint);

private:
	// The type of blueprint that will be created
	UPROPERTY(EditAnywhere, Category=StateMachineBlueprintFactory)
	TEnumAsByte<EBlueprintType> BlueprintType;

	// The parent class of the created blueprint
	UPROPERTY(EditAnywhere, Category= StateMachineBlueprintFactory, meta=(AllowAbstract = ""))
	TSubclassOf<USMInstance> ParentClass;

};

UCLASS(HideCategories = Object, MinimalAPI)
class USMNodeBlueprintFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

	// UFactory
	virtual bool ConfigureProperties() override;
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context,
	                                  FFeedbackContext* Warn, FName CallingContext) override;
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context,
	                                  FFeedbackContext* Warn) override;
	virtual bool DoesSupportClass(UClass* Class) override;
	virtual FString GetDefaultNewAssetName() const override;
	// ~UFactory

	static SMSYSTEMEDITOR_API void SetupNewBlueprint(USMNodeBlueprint* Blueprint);

	void SMSYSTEMEDITOR_API SetParentClass(TSubclassOf<class USMNodeInstance> Class);
private:
	// The type of blueprint that will be created
	UPROPERTY(EditAnywhere, Category=StateMachineBlueprintFactory)
	TEnumAsByte<EBlueprintType> BlueprintType;

	// The parent class of the created blueprint
	UPROPERTY(EditAnywhere, Category= StateMachineBlueprintFactory, meta=(AllowAbstract = ""))
	TSubclassOf<USMNodeInstance> ParentClass;

};
