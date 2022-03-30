// Copyright 2021 Dmitry Karpukhin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ProInstanceToolsParent.h"

#include "ProInstanceToolsGrid.generated.h"

UCLASS()
class PROINSTANCETOOLSPLUGIN_API AProInstanceToolsGrid : public AProInstanceToolsParent
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProInstanceToolsGrid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Number of instances to spawn in a 3D grid pattern. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Grid", DisplayName = "Num Instances")
	FIntVector NumInstances = FIntVector(2, 2, 1);
	
	/** Distance between instances in a 3D grid pattern. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Grid", DisplayName = "Spacing")
	FVector Spacing = FVector(100, 100, 100);

private:

};
