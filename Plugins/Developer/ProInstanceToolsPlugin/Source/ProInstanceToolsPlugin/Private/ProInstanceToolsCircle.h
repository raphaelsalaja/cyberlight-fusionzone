// Copyright 2021 Dmitry Karpukhin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ProInstanceToolsParent.h"
#include "ProInstanceToolsCircle.generated.h"

UENUM(BlueprintType)
enum EProInstanceToolsCircleInstanceRotationType
{
	CircleInstanceRotationType_Default UMETA(DisplayName = "Default"),
	CircleInstanceRotationType_ToCenter UMETA(DisplayName = "To Center"),
	CircleInstanceRotationType_FromCenter UMETA(DisplayName = "From Center")
};

UCLASS()
class PROINSTANCETOOLSPLUGIN_API AProInstanceToolsCircle : public AProInstanceToolsParent
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AProInstanceToolsCircle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Number of instances to spawn. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Circle", DisplayName = "Num Instances")
	int32 NumInstances = 10;

	/** Angle of a circle pattern. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Circle", DisplayName = "Angle")
	float Angle = 360.0f;

	/** Radius of a circle pattern. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Circle", DisplayName = "Radius")
	float Radius = 100.0f;

	// Deprecated, replaced with Rotate to Actor
	UPROPERTY(BlueprintReadWrite, Category = "Pro Instance Circle", DisplayName = "Rotation Type")
	TEnumAsByte<EProInstanceToolsCircleInstanceRotationType> RotationType;
};
