// Copyright 2021 Dmitry Karpukhin. All Rights Reserved.

#include "ProInstanceToolsPath.h"

AProInstanceToolsPath::AProInstanceToolsPath()
{
	//Set SplineComponent
	SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
	if (SplineComponent)
	{
		SplineComponent->SetMobility(EComponentMobility::Type::Static);
		SplineComponent->SetupAttachment(RootComponent);
	}
}

// Called when the game starts or when spawned
void AProInstanceToolsPath::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AProInstanceToolsPath::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
