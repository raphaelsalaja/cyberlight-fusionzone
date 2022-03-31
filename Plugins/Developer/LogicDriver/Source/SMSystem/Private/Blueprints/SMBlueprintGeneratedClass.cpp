// Copyright Recursoft LLC 2019-2022. All Rights Reserved.

#include "Blueprints/SMBlueprintGeneratedClass.h"
#include "SMInstance.h"

USMBlueprintGeneratedClass::USMBlueprintGeneratedClass(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void USMBlueprintGeneratedClass::PurgeClass(bool bRecompilingOnLoad)
{
#if WITH_EDITORONLY_DATA
	UObject* FoundCDO = nullptr;
	
	if (ClassDefaultObject != nullptr)
	{
		FoundCDO = ClassDefaultObject;
	}
	else if (UBlueprint* Blueprint = Cast<UBlueprint>(ClassGeneratedBy))
	{
		if (Blueprint->GeneratedClass)
		{
			FoundCDO = Blueprint->GeneratedClass->ClassDefaultObject;
		}
	}

	// Store the CDO in case it is needed during compile.
	OldCDO = Cast<USMInstance>(FoundCDO);
#endif
	
	Super::PurgeClass(bRecompilingOnLoad);

	RootGuid.Invalidate();
}

void USMBlueprintGeneratedClass::SetRootGuid(const FGuid& Guid)
{
	RootGuid = Guid;
}


USMNodeBlueprintGeneratedClass::USMNodeBlueprintGeneratedClass(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}