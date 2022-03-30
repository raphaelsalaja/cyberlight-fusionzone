// Copyright 2021 Dmitry Karpukhin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Components/InstancedStaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/HierarchicalInstancedStaticMeshComponent.h"
//#include "Runtime/Engine/Classes/Components/ActorComponent.h"

#include "ProInstanceToolsParent.generated.h"

UENUM(BlueprintType)
enum EProInstanceInstanceType
{
	InstanceType_StaticMesh UMETA(DisplayName = "Static Mesh"),
	InstanceType_ISM UMETA(DisplayName = "Instanced Static Mesh"),
	InstanceType_HISM UMETA(DisplayName = "Hierarchical Instanced Static Mesh"),
	InstanceType_ActorClass UMETA(DisplayName = "Actor Class")
};

UENUM(BlueprintType)
enum EProInstanceInstanceSelfOverlap
{
	InstanceSelfOverlap_Ignore UMETA(DisplayName = "Ignore"),
	InstanceSelfOverlap_Destroy UMETA(DisplayName = "Destroy")

};

UENUM(BlueprintType)
enum EProInstanceRotateToActorByAxes
{
	RotateToActorByAxes_XYZ UMETA(DisplayName = "XYZ"),
	RotateToActorByAxes_XY UMETA(DisplayName = "XY"),
	RotateToActorByAxes_Z UMETA(DisplayName = "Z")

};

USTRUCT(BlueprintType)
struct FProInstanceLocation
{
	GENERATED_BODY()

	/** Location offset of a initial instance location. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Location Offset", meta = (MakeStructureDefaultValue = "0, 0, 0"))
	FVector LocationOffset = FVector(0, 0, 0);

	/** Min random location in range. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Location Range Min", meta = (MakeStructureDefaultValue = "0, 0, 0"))
	FVector LocationRangeMin = FVector(0, 0, 0);

	/** Max random location in range. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Location Range Max", meta = (MakeStructureDefaultValue = "0, 0, 0"))
	FVector LocationRangeMax = FVector(0, 0, 0);
};

USTRUCT(BlueprintType)
struct FProInstanceRotation
{
	GENERATED_BODY()

	/** Rotation offset of a initial instance rotation. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Rotation Offset")
	FRotator RotationOffset = FRotator(0, 0, 0);

	/** Min random rotation in range. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Rotation Range Min")
	FRotator RotationRangeMin = FRotator(0, 0, 0);

	/** Max random rotation in range. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Rotation Range Max")
	FRotator RotationRangeMax = FRotator(0, 0, 0);

	/** Rotate instance towards an user-defined Actor. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Rotate To Actor")
	AActor* RotateToActor = nullptr;

	/** An axes by which instance will be rotated. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Rotate To Actor By Axes")
	TEnumAsByte<EProInstanceRotateToActorByAxes> RotateToActorByAxes;
};

USTRUCT(BlueprintType)
struct FProInstanceScale
{
	GENERATED_BODY()

	/** Enable Uniform Scale . */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Uniform Scale")
	bool bUniformScale = true;

	/** Min random uniform scale. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Min Uniform Scale", meta = (EditCondition = "bUniformScale"))
	float MinUniformScale = 1.0f;

	/** Max random uniform scale. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Max Uniform Scale", meta = (EditCondition = "bUniformScale"))
	float MaxUniformScale = 1.0f;

	/** Min random scale. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Min Scale", meta = (EditCondition = "!bUniformScale"))
	FVector MinScale = FVector(1, 1, 1);

	/** Max random scale. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Max Scale", meta = (EditCondition = "!bUniformScale"))
	FVector MaxScale = FVector(1, 1, 1);
};

USTRUCT(BlueprintType)
struct FProInstanceCurrentInstanceContainer
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Static Mesh")
	UStaticMesh* StaticMesh = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "ISM")
	UInstancedStaticMeshComponent* ISM = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "HISM")
	UHierarchicalInstancedStaticMeshComponent* HISM = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Actor Class")
	TSubclassOf<AActor> ActorClass;
};

USTRUCT(BlueprintType)
struct FProInstanceCurrentInstanceArrayContainer
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Static Mesh Array")
	TArray<UStaticMesh*> StaticMeshArray;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "ISM Array")
	TArray<UInstancedStaticMeshComponent*> ISMArray;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "HISM Array")
	TArray<UHierarchicalInstancedStaticMeshComponent*> HISMArray;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Actor Class Array")
	TArray<TSubclassOf<AActor>> ActorClassArray;
};

USTRUCT(BlueprintType)
struct FProInstanceInstanceSettings
{
	GENERATED_BODY()

	/** Set the custom mobility for this instance(s). */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pro Instance Tools", DisplayName = "Mobility")
	TEnumAsByte<EComponentMobility::Type> Mobility = EComponentMobility::Type::Static;

	/** Location randomization settings. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Location")
	FProInstanceLocation Location;

	/** Rotation randomization settings. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Rotation")
	FProInstanceRotation Rotation;

	/** Scale randomization settings. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Scale")
	FProInstanceScale Scale;

	/** Whether to cast shadows. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Cast Shadows")
	bool bCastShadows = true;

	/** Enable Custom Collision Profile. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Enable Custom Collision")
	bool bEnableCustomCollision = false;

	/** Custom Collision Profile Name. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Custom Collision Profile Name", meta = (EditCondition = "bEnableCustomCollision"))
	FName CustomCollisionProfileName;

	/** Chance to spawn this instance from 0% to 100%. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Spawn Chance", meta = (ClampMin = "0.0", ClampMax = "100.0", UIMin = "0.0", UIMax = "100.0"))
	int32 SpawnChance = 100;

//	UPROPERTY(BlueprintReadOnly, Category = "Pro Instance Tools", DisplayName = "Instance Length Editable")
//	bool bInstanceLengthEditable = false;

	/** Arbitrary instance physical length which can be used by ProInstance Types with splines. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Instance Length", meta = (ClampMin = "0.0", UIMin = "0.0"))
	float InstanceLength = 100.0f;
};

USTRUCT(BlueprintType)
struct FProInstanceInstance
{
	GENERATED_BODY()

	/** User-defined Static Mesh. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Mesh")
	UStaticMesh* Mesh = nullptr;

	/** User-defined Actor Class. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Actor Class")
	TSubclassOf<AActor> ActorClass;

	/** Enable Overwriting Materials. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Overwrite Materials", meta = (InlineEditConditionToggle))
	bool bOverwriteMaterials = false;

	/**
	 * Can overwrite Static Mesh materials if enabled.
	 * Each array element represents material slot of selected Static Mesh.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Overwrite Materials", meta = (EditCondition = "bOverwriteMaterials"))
	TArray<UMaterialInterface*> OverwriteMaterials;

	/** Enable Local Instance Settings. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Main Settings|Instances", DisplayName = "Use Local Instance Settings", meta = (InlineEditConditionToggle))
	bool bInstanceSettings = true;

	/**
	 * Local instance tranform and randomization settings for current instance.
	 * Can overwrite Instance Global Settings if enabled.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Tools", DisplayName = "Instance Local Settings", meta = (EditCondition = "bInstanceSettings"))
	FProInstanceInstanceSettings InstanceSettings;
};

UCLASS()
class PROINSTANCETOOLSPLUGIN_API AProInstanceToolsParent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProInstanceToolsParent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnConstruction(const FTransform& Transform) override;

//	AProInstanceToolsParent(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(BlueprintReadOnly, Category = "Pro Instance Main Settings")
	USceneComponent* Root;

	UPROPERTY(BlueprintReadOnly, Category = "Pro Instance Main Settings")
	UBillboardComponent* Billboard;

	UPROPERTY(BlueprintReadWrite, Category = "Pro Instance Main Settings")
	FProInstanceCurrentInstanceContainer CurrentInstanceContainer; // Used for keeping current type of instance

	UPROPERTY(BlueprintReadWrite, Category = "Pro Instance Main Settings")
	FProInstanceCurrentInstanceArrayContainer CurrentInstanceArrayContainer; // Used for keeping current array type of instances to be able to spawn them

	UPROPERTY(BlueprintReadWrite, Category = "Pro Instance Main Settings")
	FProInstanceInstance CurrentInstance;

	/** Sets a component type for instances. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Main Settings|Instances", DisplayName = "Instance Type")
	TEnumAsByte<EProInstanceInstanceType> InstanceType = InstanceType_StaticMesh;

	/** User-defined array of instances. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Main Settings|Instances", DisplayName = "Instances")
	TArray<FProInstanceInstance> Instances;

	/**
	 * Global Instance tranform and randomization settings.
	 * Can be overwritten by Instance Local Settings.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Main Settings|Instances", DisplayName = "Instances Global Settings")
	FProInstanceInstanceSettings InstancesSettings;

	/** Whether to have an actor collision. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Main Settings|Instances", DisplayName = "Enable Actor Collision")
	bool bEnableCollision = true;

	/**
	 * Defines what to do when spawned instance is overlapping neighbor instance.
	 * Currently working only with Static Mesh instance type.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Main Settings|Instances", DisplayName = "Instance Self Overlap", meta = (EditCondition = "InstanceType == EProInstanceInstanceType::InstanceType_StaticMesh"))
	TEnumAsByte<EProInstanceInstanceSelfOverlap> InstanceSelfOverlap = InstanceSelfOverlap_Ignore;


	UPROPERTY(BlueprintReadWrite, Category = "Pro Instance Main Settings|Instances", DisplayName = "Index")
	int32 Index;

	UPROPERTY(BlueprintReadWrite, Category = "Pro Instance Main Settings|Instances", DisplayName = "Index Vector")
	FIntVector IndexVector;

	/**
	 * Start Cull Distance.
	 * Works with Instanced Static Mesh or Hierarchical Instanced Static Mesh.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Main Settings|Optimization", DisplayName = "Start Cull Distance", meta = (EditCondition = "InstanceType == EProInstanceInstanceType::InstanceType_ISM || InstanceType == EProInstanceInstanceType::InstanceType_HISM"))
	int32 StartCullDistance;

	/**
	 * End Cull Distance.
	 * Works with Instanced Static Mesh or Hierarchical Instanced Static Mesh.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Main Settings|Optimization", DisplayName = "End Cull Distance", meta = (EditCondition = "InstanceType == EProInstanceInstanceType::InstanceType_ISM || InstanceType == EProInstanceInstanceType::InstanceType_HISM"))
	int32 EndCullDistance;

	/** Randomization seed. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Main Settings|Randomization", DisplayName = "Seed")
	int32 Seed = 0;

	UPROPERTY(BlueprintReadOnly, Category = "Pro Instance Main Settings|Randomization", DisplayName = "Random Stream")
	FRandomStream RandomStream;

	/** Snaps instance's location to a surface below. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Main Settings|Snapping & Aligning", DisplayName = "Surface Snapping")
	bool bSurfaceSnapping = false;

	/** Aligns instance's rotation to a surface angle below. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Main Settings|Snapping & Aligning", DisplayName = "Surface Aligning", meta = (EditCondition = "bSurfaceSnapping"))
	bool bSurfaceAligning = false;

	/** Ignores self collision of instances when casting line traces for Surface Snapping. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Main Settings|Snapping & Aligning", DisplayName = "Ignore Self Collision", meta = (EditCondition = "bSurfaceSnapping"))
	bool bIgnoreSelfCollision = false;

	/** Distance of line traces when casting them for Surface Snapping. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Main Settings|Snapping & Aligning", DisplayName = "Line Tracing Depth", meta = (EditCondition = "bSurfaceSnapping"))
	float LineTracingDepth = 500.0f;

	/** Ignore collision of user-defined actors when casting line traces for Surface Snapping. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Main Settings|Snapping & Aligning", DisplayName = "Actors To Ignore", meta = (EditCondition = "bSurfaceSnapping"))
	TArray<AActor*> ActorsToIgnore;

	/** Whether to draw debug line traces. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Main Settings|Debug", DisplayName = "Draw Debug Line")
	bool bDrawDebugLine = false;

	/** Time to draw debug line traces. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pro Instance Main Settings|Debug", DisplayName = "Draw Time", meta = (ClampMin = "0.0", UIMin = "0.0"))
	float DrawTime = 1.0f;

private:

	UFUNCTION(BlueprintCallable, Category = "Pro Instance Tools|Functions")
	void DestroyComponents();

	UFUNCTION(BlueprintCallable, Category = "Pro Instance Tools|Functions")
	void SetupInstances();

	UFUNCTION(BlueprintCallable, Category = "Pro Instance Tools|Functions")
	void CreateInstance(FTransform Transform);

	// Re-run the Construction Script
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Pro Instance Functions", DisplayName = "Update")
	void Update();

	// Set random Seed value and re-run the Construction Script
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Pro Instance Functions", DisplayName = "Randomize Seed")
	void RandomizeSeed();

	// Bakes procedually placed Components to Actors
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Pro Instance Functions", DisplayName = "Bake Instances")
	void BakeInstances();

};
