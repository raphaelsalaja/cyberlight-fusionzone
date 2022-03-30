// Copyright 2021 Dmitry Karpukhin. All Rights Reserved.

#include "ProInstanceToolsParent.h"
#include "Components/SceneComponent.h"
#include "Engine/StaticMeshActor.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AProInstanceToolsParent::AProInstanceToolsParent()
{

	//Structure to hold one-time initialization
	struct FConstructorStatics
	{
		//Find billboard icon texture
		ConstructorHelpers::FObjectFinderOptional<UTexture2D> ProInstanceIcon;

		FConstructorStatics()
			: ProInstanceIcon(TEXT("Texture2D'/ProInstanceToolsPlugin/Textures/T_ProInstance_Actor_Icon'"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	//Set default values
	PrimaryActorTick.bStartWithTickEnabled = false;
	PrimaryActorTick.bAllowTickOnDedicatedServer = false;

//	bNetUseOwnerRelevancy = true;

	//Set root
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	Root->SetMobility(EComponentMobility::Type::Static);
	RootComponent = Root;

#if WITH_EDITOR
	//Set billboard
	Billboard = CreateEditorOnlyDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
	if (Billboard)
	{
		Billboard->SetMobility(EComponentMobility::Type::Static);
		Billboard->SetupAttachment(RootComponent);
		Billboard->Sprite = ConstructorStatics.ProInstanceIcon.Get();
		Billboard->bIsScreenSizeScaled = true;
		Billboard->ScreenSize = 0.001f;
	}
#endif
}

// Called when the game starts or when spawned
void AProInstanceToolsParent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProInstanceToolsParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProInstanceToolsParent::DestroyComponents()
{
	TArray<UStaticMeshComponent*> SMComponents;
	TArray<UInstancedStaticMeshComponent*> ISMComponents;
	TArray<UHierarchicalInstancedStaticMeshComponent*> HISMComponents;
	TArray<UChildActorComponent*> ClassComponents;

	this->GetComponents(SMComponents);
	for (auto StaticMeshComponent : SMComponents)
	{
		StaticMeshComponent->DestroyComponent();
	}
	this->GetComponents(ISMComponents);
	for (auto InstancedStaticMeshComponent : ISMComponents)
	{
		InstancedStaticMeshComponent->DestroyComponent();
	}
	this->GetComponents(HISMComponents);
	for (auto HierarchicalInstancedStaticMeshComponent : HISMComponents)
	{
		HierarchicalInstancedStaticMeshComponent->DestroyComponent();
	}
	this->GetComponents(ClassComponents);
	for (auto ChildActorComponent : ClassComponents)
	{
		ChildActorComponent->DestroyComponent();
	}
}

void AProInstanceToolsParent::SetupInstances()
{

	DestroyComponents();
	RandomStream = Seed;
	SetActorEnableCollision(bEnableCollision);

	if (CurrentInstanceArrayContainer.StaticMeshArray.Num() != 0)
	{
		CurrentInstanceArrayContainer.StaticMeshArray.Empty();
	}

	if (CurrentInstanceArrayContainer.ISMArray.Num() != 0)
	{
		CurrentInstanceArrayContainer.ISMArray.Empty();
	}

	if (CurrentInstanceArrayContainer.HISMArray.Num() != 0)
	{
		CurrentInstanceArrayContainer.HISMArray.Empty();
	}
	
	if (CurrentInstanceArrayContainer.ActorClassArray.Num() != 0)
	{
		CurrentInstanceArrayContainer.ActorClassArray.Empty();
	}

	int ObjectsCount = Instances.Num();

	for (int i = 0; i < ObjectsCount; i++)
	{

		switch (InstanceType)
		{
		case 0:
			// If Static Mesh
			CurrentInstanceArrayContainer.StaticMeshArray.Add(Instances[i].Mesh);
			break;

		case 1:
			// If Instanced Static Mesh
			UInstancedStaticMeshComponent* ISMComponent;
			ISMComponent = NewObject<UInstancedStaticMeshComponent>(this);
			ISMComponent->CreationMethod = EComponentCreationMethod::UserConstructionScript;
//			ISMComponent->SetMobility(EComponentMobility::Type::Static);
			ISMComponent->SetupAttachment(RootComponent);
//			ISMComponent->SetIsReplicated(true);
			ISMComponent->SetNetAddressable();
			ISMComponent->SetStaticMesh(Instances[i].Mesh);
			ISMComponent->SetCullDistances(StartCullDistance, EndCullDistance);
			if (Instances[i].bInstanceSettings) {
				ISMComponent->SetMobility(Instances[i].InstanceSettings.Mobility);
				ISMComponent->SetCastShadow(Instances[i].InstanceSettings.bCastShadows);
				if (Instances[i].InstanceSettings.bEnableCustomCollision) {
					ISMComponent->SetCollisionProfileName(Instances[i].InstanceSettings.CustomCollisionProfileName);
				}
			}
			else {
				ISMComponent->SetMobility(InstancesSettings.Mobility);
				ISMComponent->SetCastShadow(InstancesSettings.bCastShadows);
				if (InstancesSettings.bEnableCustomCollision) {
					ISMComponent->SetCollisionProfileName(InstancesSettings.CustomCollisionProfileName);
				}
			}

			// Overwrite Materials
			if (Instances[i].bOverwriteMaterials)
			{
				if (Instances[i].OverwriteMaterials.Num() != 0) {
					for (int j = 0; j < Instances[i].OverwriteMaterials.Num(); j++) {
						if (Instances[i].OverwriteMaterials[j]) {
							ISMComponent->SetMaterial(j, Instances[i].OverwriteMaterials[j]);
						}
					}
				}
			}

			FinishAndRegisterComponent(ISMComponent);
			CurrentInstanceArrayContainer.ISMArray.Add(ISMComponent);
			break;

		case 2:
			// If Hierarchical Instanced Static Mesh
			UHierarchicalInstancedStaticMeshComponent* HISMComponent;
			HISMComponent = NewObject<UHierarchicalInstancedStaticMeshComponent>(this);
			HISMComponent->CreationMethod = EComponentCreationMethod::UserConstructionScript;
//			HISMComponent->SetMobility(EComponentMobility::Type::Static);
			HISMComponent->SetupAttachment(RootComponent);
//			HISMComponent->SetIsReplicated(true);
			HISMComponent->SetNetAddressable();
			HISMComponent->SetStaticMesh(Instances[i].Mesh);
			HISMComponent->SetCullDistances(StartCullDistance, EndCullDistance);
			if (Instances[i].bInstanceSettings) {
				HISMComponent->SetMobility(Instances[i].InstanceSettings.Mobility);
				HISMComponent->SetCastShadow(Instances[i].InstanceSettings.bCastShadows);
				if (Instances[i].InstanceSettings.bEnableCustomCollision) {
					HISMComponent->SetCollisionProfileName(Instances[i].InstanceSettings.CustomCollisionProfileName);
				}
			}
			else {
				HISMComponent->SetMobility(InstancesSettings.Mobility);
				HISMComponent->SetCastShadow(InstancesSettings.bCastShadows);
				if (InstancesSettings.bEnableCustomCollision) {
					HISMComponent->SetCollisionProfileName(InstancesSettings.CustomCollisionProfileName);
				}
			}

			// Overwrite Materials
			if (Instances[i].bOverwriteMaterials)
			{
				if (Instances[i].OverwriteMaterials.Num() != 0) {
					for (int j = 0; j < Instances[i].OverwriteMaterials.Num(); j++) {
						if (Instances[i].OverwriteMaterials[j]) {
							HISMComponent->SetMaterial(j, Instances[i].OverwriteMaterials[j]);
						}
					}
				}
			}

			FinishAndRegisterComponent(HISMComponent);
			CurrentInstanceArrayContainer.HISMArray.Add(HISMComponent);
			break;

		case 3:
			// If Actor Class
			CurrentInstanceArrayContainer.ActorClassArray.Add(Instances[i].ActorClass);
			break;

		}

//		return;
	}
}

void AProInstanceToolsParent::CreateInstance(FTransform Transform)
{
//	UE_LOG(LogTemp, Log, TEXT("Creating instance..."));

//	bool bOverlappingSelf = false;

	UPrimitiveComponent* PrimitiveComponent;

	// Set what actors to seek out from it's collision channel
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldStatic));
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldDynamic));

	// Ignore any specific actors
	TArray<AActor*> IgnoreActors;

	// Array of actors that are inside the radius of the sphere
	TArray<AActor*> OutActors;
	TArray<UPrimitiveComponent*> OutComponents;

	switch (InstanceType)
	{
	case 0:
		// If Static Mesh
		UStaticMeshComponent * SMComponent;
		SMComponent = NewObject<UStaticMeshComponent>(this);
		SMComponent->CreationMethod = EComponentCreationMethod::UserConstructionScript;
		//		SMComponent->SetMobility(EComponentMobility::Type::Static);
		SMComponent->SetStaticMesh(CurrentInstanceContainer.StaticMesh);
		SMComponent->SetupAttachment(RootComponent);
		//		SMComponent->SetIsReplicated(true);
		SMComponent->SetNetAddressable();
		if (CurrentInstance.bInstanceSettings) {
			SMComponent->SetMobility(CurrentInstance.InstanceSettings.Mobility);
			SMComponent->SetCastShadow(CurrentInstance.InstanceSettings.bCastShadows);
			if (CurrentInstance.InstanceSettings.bEnableCustomCollision) {
				SMComponent->SetCollisionProfileName(CurrentInstance.InstanceSettings.CustomCollisionProfileName);
			}
		}
		else {
			SMComponent->SetMobility(InstancesSettings.Mobility);
			SMComponent->SetCastShadow(InstancesSettings.bCastShadows);
			if (InstancesSettings.bEnableCustomCollision) {
				SMComponent->SetCollisionProfileName(InstancesSettings.CustomCollisionProfileName);
			}
		}
		SMComponent->SetRelativeTransform(Transform);

		// Overwrite Materials
		if (CurrentInstance.bOverwriteMaterials) {
			if (CurrentInstance.OverwriteMaterials.Num() != 0) {
				for (int j = 0; j < CurrentInstance.OverwriteMaterials.Num(); j++) {
					if (CurrentInstance.OverwriteMaterials[j]) {
						SMComponent->SetMaterial(j, CurrentInstance.OverwriteMaterials[j]);
					}
				}
			}
		}

		FinishAndRegisterComponent(SMComponent);

		// Overlapping Check
		if (InstanceSelfOverlap == InstanceSelfOverlap_Destroy) {
			PrimitiveComponent = SMComponent;
			if (UKismetSystemLibrary::ComponentOverlapActors(PrimitiveComponent, PrimitiveComponent->GetComponentTransform(), ObjectTypes, AProInstanceToolsParent::StaticClass(), IgnoreActors, OutActors)) {
				for (int i = 0; i < OutActors.Num(); i++) {
					if (OutActors[i] == this) {
						if (UKismetSystemLibrary::ComponentOverlapComponents(PrimitiveComponent, PrimitiveComponent->GetComponentTransform(), ObjectTypes, UStaticMeshComponent::StaticClass(), IgnoreActors, OutComponents)) {
							SMComponent->DestroyComponent();
						}
					}
				}
			}
		}

		break;

	case 1:
		// If Instanced Static Mesh
		if (CurrentInstanceContainer.ISM != NULL) {
			CurrentInstanceContainer.ISM->AddInstance(Transform);
		}
		break;

	case 2:
		// If Hierarchical Instanced Static Mesh
		if (CurrentInstanceContainer.HISM != NULL) {
			CurrentInstanceContainer.HISM->AddInstance(Transform);
		}
		break;

	case 3:
		// If Actor Class
		UChildActorComponent* ClassComponent;
		ClassComponent = NewObject<UChildActorComponent>(this);
		ClassComponent->CreationMethod = EComponentCreationMethod::UserConstructionScript;
//		ClassComponent->SetMobility(EComponentMobility::Type::Static);
		ClassComponent->SetupAttachment(RootComponent);
		ClassComponent->SetNetAddressable();
		ClassComponent->CreateChildActor();
		ClassComponent->SetChildActorClass(CurrentInstanceContainer.ActorClass);
		if (CurrentInstance.bInstanceSettings) {
			ClassComponent->SetMobility(CurrentInstance.InstanceSettings.Mobility);
		}
		else {
			ClassComponent->SetMobility(InstancesSettings.Mobility);
		}
		ClassComponent->SetRelativeTransform(Transform);
		FinishAndRegisterComponent(ClassComponent);
		break;

	}
}

void AProInstanceToolsParent::OnConstruction(const FTransform& Transform)
{
	//	UE_LOG(LogTemp, Log, TEXT("C++ OnConstruction"));
	RegisterAllComponents();
}

void AProInstanceToolsParent::Update()
{
	RerunConstructionScripts();
}

void AProInstanceToolsParent::RandomizeSeed()
{
	RandomStream.GenerateNewSeed();
	Seed = RandomStream.GetCurrentSeed();
	Update();
}

void AProInstanceToolsParent::BakeInstances()
{
#if WITH_EDITOR

	UWorld* World = GetWorld();
	check(World != nullptr);

	// This only needs to be usable in Editor and never in Runtime
	if (!World->HasBegunPlay()) {

		TArray<USceneComponent*> ChildComponents;
		ChildComponents.Empty();
		RootComponent->GetChildrenComponents(false, ChildComponents);

		int32 NumActors = 0;
		FTransform ActorTransform;
		FActorSpawnParameters SpawnParams;

		AStaticMeshActor* StaticMeshActor = nullptr;
		AActor* ActorClass = nullptr;

		switch (InstanceType)
		{
		case 0:
			// If Static Mesh
			for (auto Component : ChildComponents) {
				if (auto StaticMeshComponent = Cast<UStaticMeshComponent>(Component)) {
					ActorTransform = Component->GetComponentTransform();
					StaticMeshActor = World->SpawnActor<AStaticMeshActor>(StaticMeshActor->StaticClass(), ActorTransform, SpawnParams);
					StaticMeshActor->GetStaticMeshComponent()->SetStaticMesh(StaticMeshComponent->GetStaticMesh());
					StaticMeshActor->SetMobility(StaticMeshComponent->Mobility);
					StaticMeshActor->GetStaticMeshComponent()->SetCastShadow(StaticMeshComponent->CastShadow);
					if (bEnableCollision) {
						StaticMeshActor->GetStaticMeshComponent()->SetCollisionProfileName(StaticMeshComponent->GetCollisionProfileName());
					}
					else {
						StaticMeshActor->GetStaticMeshComponent()->SetCollisionProfileName("NoCollision");
					}
					NumActors++;
				}
			}
			UE_LOG(LogClass, Log, TEXT("%s: Succesfully baked %d Static Mesh Actors."), *GetName(), NumActors);
			break;

		case 1:
			// If Instanced Static Mesh
			for (auto Component : ChildComponents) {
				if (auto InstancedStaticMeshComponent = Cast<UInstancedStaticMeshComponent>(Component)) {
					for (int i = 0; i < InstancedStaticMeshComponent->GetInstanceCount(); i++) {
						InstancedStaticMeshComponent->GetInstanceTransform(i, ActorTransform, true);
						StaticMeshActor = World->SpawnActor<AStaticMeshActor>(StaticMeshActor->StaticClass(), ActorTransform, SpawnParams);
						StaticMeshActor->GetStaticMeshComponent()->SetStaticMesh(InstancedStaticMeshComponent->GetStaticMesh());
						StaticMeshActor->SetMobility(InstancedStaticMeshComponent->Mobility);
						StaticMeshActor->GetStaticMeshComponent()->SetCastShadow(InstancedStaticMeshComponent->CastShadow);
						if (bEnableCollision) {
							StaticMeshActor->GetStaticMeshComponent()->SetCollisionProfileName(InstancedStaticMeshComponent->GetCollisionProfileName());
						}
						else {
							StaticMeshActor->GetStaticMeshComponent()->SetCollisionProfileName("NoCollision");
						}
						NumActors++;
					}
				}
			}
			UE_LOG(LogClass, Log, TEXT("%s: Succesfully baked %d Static Mesh Actors."), *GetName(), NumActors);
			break;

		case 2:
			// If Hierarchical Instanced Static Mesh
			for (auto Component : ChildComponents) {
				if (auto HierarchicalInstancedStaticMeshComponent = Cast<UHierarchicalInstancedStaticMeshComponent>(Component)) {
					for (int i = 0; i < HierarchicalInstancedStaticMeshComponent->GetInstanceCount(); i++) {
						HierarchicalInstancedStaticMeshComponent->GetInstanceTransform(i, ActorTransform, true);
						StaticMeshActor = World->SpawnActor<AStaticMeshActor>(StaticMeshActor->StaticClass(), ActorTransform, SpawnParams);
						StaticMeshActor->GetStaticMeshComponent()->SetStaticMesh(HierarchicalInstancedStaticMeshComponent->GetStaticMesh());
						StaticMeshActor->SetMobility(HierarchicalInstancedStaticMeshComponent->Mobility);
						StaticMeshActor->GetStaticMeshComponent()->SetCastShadow(HierarchicalInstancedStaticMeshComponent->CastShadow);
						if (bEnableCollision) {
							StaticMeshActor->GetStaticMeshComponent()->SetCollisionProfileName(HierarchicalInstancedStaticMeshComponent->GetCollisionProfileName());
						}
						else {
							StaticMeshActor->GetStaticMeshComponent()->SetCollisionProfileName("NoCollision");
						}
						NumActors++;
					}
				}
			}
			UE_LOG(LogClass, Log, TEXT("%s: Succesfully baked %d Static Mesh Actors."), *GetName(), NumActors);
			break;

		case 3:
			// If Actor Class
			for (auto Component : ChildComponents) {
				if (auto ChildActorComponent = Cast<UChildActorComponent>(Component)) {
					ActorTransform = Component->GetComponentTransform();
					ActorClass = World->SpawnActor<AActor>(ChildActorComponent->GetChildActorClass(), ActorTransform, SpawnParams);
					NumActors++;
				}
			}
			UE_LOG(LogClass, Log, TEXT("%s: Succesfully baked %d Actors."), *GetName(), NumActors);
			break;
		}
	}
#endif // WITH_EDITOR
}
