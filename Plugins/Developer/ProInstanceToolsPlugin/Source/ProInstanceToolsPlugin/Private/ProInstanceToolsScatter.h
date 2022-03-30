// Copyright 2021 Dmitry Karpukhin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ProInstanceToolsParent.h"
//#include "Components/BoxComponent.h"
//#include "Components/SphereComponent.h"
#include "ProInstanceToolsScatter.generated.h"

UENUM(BlueprintType)
enum EProInstanceScatterPlacementType
{
	ScatterPlacementType_Box UMETA(DisplayName = "Box"),
	ScatterPlacementType_Sphere UMETA(DisplayName = "Sphere")
};

UENUM(BlueprintType)
enum EProInstanceScatterBoxPivotPoint
{
	ScatterBoxPivotPoint_AtCenter UMETA(DisplayName = "At Center"),
	ScatterBoxPivotPoint_AtCorner UMETA(DisplayName = "At Corner")
};

UCLASS()
class PROINSTANCETOOLSPLUGIN_API AProInstanceToolsScatter : public AProInstanceToolsParent
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AProInstanceToolsScatter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Number of instances to spawn. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Scatter", DisplayName = "Num Instances")
	int32 NumInstances = 10;

	/** Whether to use Box or Sphere as a spawn container. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Scatter", DisplayName = "Placement Type")
	TEnumAsByte<EProInstanceScatterPlacementType> PlacementType = ScatterPlacementType_Box;

	/** Box Size. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Scatter", DisplayName = "Box Size", meta = (EditCondition = "PlacementType == EProInstanceScatterPlacementType::ScatterPlacementType_Box"))
	FVector BoxSize = FVector(200, 200, 200);

	/** Box Extent. */
	UPROPERTY(BlueprintReadWrite, Category = "Pro Instance Scatter", DisplayName = "Box Extent")
	FVector BoxExtent = FVector(0, 0, 0);

	/** Box Pivot Point. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Scatter", DisplayName = "Box Pivot Point", meta = (EditCondition = "PlacementType == EProInstanceScatterPlacementType::ScatterPlacementType_Box"))
	TEnumAsByte<EProInstanceScatterBoxPivotPoint> BoxPivotPoint;

	/** Sphere Radius. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Scatter", DisplayName = "Sphere Radius", meta = (EditCondition = "PlacementType == EProInstanceScatterPlacementType::ScatterPlacementType_Sphere"))
	float SphereRadius = 200.0f;

private:

};
