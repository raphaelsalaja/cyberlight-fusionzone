// Copyright 2021 Dmitry Karpukhin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ProInstanceToolsParent.h"
#include "Components/SplineComponent.h"
#include "ProInstanceToolsPathScatter.generated.h"

UCLASS()
class AProInstanceToolsPathScatter : public AProInstanceToolsParent
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProInstanceToolsPathScatter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly, Category = "Pro Instance Path Scatter")
	USplineComponent* SplineComponent;

	/** Number of instances to spawn. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Path Scatter", DisplayName = "Num Instances")
	int32 NumInstances = 10;

	/** Whether to use spline scale for instance placement. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Path Scatter", DisplayName = "Use Spline Scale")
	bool bUseSplineScale = true;

	/** Whether to have initial instance rotation by a spline rotation. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Path Scatter", DisplayName = "Follow Spline Rotation")
	bool bFollowSplineRotation = true;

	/** Closed Spline. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Path Scatter", DisplayName = "Closed Spline")
	bool bClosedSpline = false;

	UPROPERTY(BlueprintReadWrite, Category = "Pro Instance Path Scatter", DisplayName = "Current Distance")
	float CurrentDistance;
};
