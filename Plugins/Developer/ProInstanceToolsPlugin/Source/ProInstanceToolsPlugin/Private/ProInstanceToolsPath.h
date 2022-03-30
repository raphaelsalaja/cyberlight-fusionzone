// Copyright 2021 Dmitry Karpukhin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ProInstanceToolsParent.h"
#include "Components/SplineComponent.h"
#include "ProInstanceToolsPath.generated.h"

UENUM(BlueprintType)
enum EProInstanceToolsPathPlacementType
{
	PathPlacementType_Distance UMETA(DisplayName = "Spacing"),
	PathPlacementType_SplinePoint UMETA(DisplayName = "Spline Point")
};

UCLASS()
class PROINSTANCETOOLSPLUGIN_API AProInstanceToolsPath : public AProInstanceToolsParent
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProInstanceToolsPath();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly, Category = "Pro Instance Path")
	USplineComponent* SplineComponent;

	/** Whether to set instance location by arbitrary Spacing or by a Spline Point. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Path", DisplayName = "Placement Type")
	TEnumAsByte<EProInstanceToolsPathPlacementType> PlacementType;

	/** Distance between instances by a spline. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Path", DisplayName = "Spacing", meta = (EditCondition = "PlacementType == EProInstanceToolsPathPlacementType::PathPlacementType_Distance"))
	float Spacing = 100.0f;

	/** Maximum number of instances to spawn. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Path", DisplayName = "Max Instances", meta = (EditCondition = "PlacementType == EProInstanceToolsPathPlacementType::PathPlacementType_Distance"))
	int32 MaxInstances = 250;

	/** Whether to use length of an instance summed up with Spacing. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Path", DisplayName = "Use Instance Length", meta = (EditCondition = "PlacementType == EProInstanceToolsPathPlacementType::PathPlacementType_Distance"))
	bool bUseInstanceLength = true;

	/** Whether to have initial instance rotation by a spline rotation. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Path", DisplayName = "Follow Spline Rotation")
	bool bFollowSplineRotation = true;

	/** Closed Spline. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Path", DisplayName = "Closed Spline")
	bool bClosedSpline = false;

	UPROPERTY(BlueprintReadWrite, Category = "Pro Instance Path", DisplayName = "Current Distance")
	float CurrentDistance;

	UPROPERTY(BlueprintReadWrite, Category = "Pro Instance Path", DisplayName = "Current Instance Length")
	float CurrentInstanceLength;

private:
};
