// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOCKONTARGET_RotationModeBase_generated_h
#error "RotationModeBase.generated.h already included, missing '#pragma once' in RotationModeBase.h"
#endif
#define LOCKONTARGET_RotationModeBase_generated_h

#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_SPARSE_DATA
#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_RPC_WRAPPERS \
	virtual FRotator GetRotation_Implementation(FRotator const& CurrentRotation, FVector const& InstigatorLocation, FVector const& TargetLocation, float DeltaTime); \
 \
	DECLARE_FUNCTION(execAddOffsetToRotation); \
	DECLARE_FUNCTION(execGetClampedRotationToTarget); \
	DECLARE_FUNCTION(execGetRotationToTarget); \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execGetRotation);


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FRotator GetRotation_Implementation(FRotator const& CurrentRotation, FVector const& InstigatorLocation, FVector const& TargetLocation, float DeltaTime); \
 \
	DECLARE_FUNCTION(execAddOffsetToRotation); \
	DECLARE_FUNCTION(execGetClampedRotationToTarget); \
	DECLARE_FUNCTION(execGetRotationToTarget); \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execGetRotation);


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_EVENT_PARMS \
	struct RotationModeBase_eventGetRotation_Parms \
	{ \
		FRotator CurrentRotation; \
		FVector InstigatorLocation; \
		FVector TargetLocation; \
		float DeltaTime; \
		FRotator ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		RotationModeBase_eventGetRotation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_CALLBACK_WRAPPERS
#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURotationModeBase(); \
	friend struct Z_Construct_UClass_URotationModeBase_Statics; \
public: \
	DECLARE_CLASS(URotationModeBase, ULockOnSubobjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LockOnTarget"), NO_API) \
	DECLARE_SERIALIZER(URotationModeBase)


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesURotationModeBase(); \
	friend struct Z_Construct_UClass_URotationModeBase_Statics; \
public: \
	DECLARE_CLASS(URotationModeBase, ULockOnSubobjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LockOnTarget"), NO_API) \
	DECLARE_SERIALIZER(URotationModeBase)


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URotationModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URotationModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URotationModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URotationModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URotationModeBase(URotationModeBase&&); \
	NO_API URotationModeBase(const URotationModeBase&); \
public:


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URotationModeBase(URotationModeBase&&); \
	NO_API URotationModeBase(const URotationModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URotationModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URotationModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URotationModeBase)


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_13_PROLOG \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_EVENT_PARMS


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_RPC_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_CALLBACK_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_INCLASS \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_CALLBACK_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOCKONTARGET_API UClass* StaticClass<class URotationModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_RotationModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
