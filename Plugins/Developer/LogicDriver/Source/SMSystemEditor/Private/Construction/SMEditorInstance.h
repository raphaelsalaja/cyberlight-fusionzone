// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SMInstance.h"
#include "SMEditorInstance.generated.h"

UCLASS(MinimalAPI)
class USMEditorContext : public UObject
{
	GENERATED_BODY()

};

UCLASS(NotBlueprintable, Transient, HideDropdown)
class SMSYSTEMEDITOR_API USMEditorInstance : public USMInstance
{
	GENERATED_BODY()

public:
	//USMInstance 
	virtual void Initialize(UObject* Context) override;
	virtual void Shutdown() override;
	// ~USMInstance
};
