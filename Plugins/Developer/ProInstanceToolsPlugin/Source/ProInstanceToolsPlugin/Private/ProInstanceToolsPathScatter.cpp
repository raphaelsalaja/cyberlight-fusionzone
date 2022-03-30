// Copyright 2021 Dmitry Karpukhin. All Rights Reserved.

#include "ProInstanceToolsPathScatter.h"

AProInstanceToolsPathScatter::AProInstanceToolsPathScatter()
{
	//Set SplineComponent
	SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
	if (SplineComponent)
	{
		SplineComponent->SetMobility(EComponentMobility::Type::Static);
		SplineComponent->SetupAttachment(RootComponent);
//		SplineComponent->bShouldVisualizeScale = true;
	}
}

// Called when the game starts or when spawned
void AProInstanceToolsPathScatter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AProInstanceToolsPathScatter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
