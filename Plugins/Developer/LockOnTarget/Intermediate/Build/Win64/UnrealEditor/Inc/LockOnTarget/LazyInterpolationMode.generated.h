// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
#ifdef LOCKONTARGET_LazyInterpolationMode_generated_h
#error "LazyInterpolationMode.generated.h already included, missing '#pragma once' in LazyInterpolationMode.h"
#endif
#define LOCKONTARGET_LazyInterpolationMode_generated_h

#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_SPARSE_DATA
#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_RPC_WRAPPERS \
	virtual bool CanLazyInterpolate_Implementation(FRotator const& NewRotation, FRotator const& CurrentRotation, float& InterpSpeed); \
 \
	DECLARE_FUNCTION(execCanLazyInterpolate);


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanLazyInterpolate_Implementation(FRotator const& NewRotation, FRotator const& CurrentRotation, float& InterpSpeed); \
 \
	DECLARE_FUNCTION(execCanLazyInterpolate);


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_EVENT_PARMS \
	struct LazyInterpolationMode_eventCanLazyInterpolate_Parms \
	{ \
		FRotator NewRotation; \
		FRotator CurrentRotation; \
		float InterpSpeed; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		LazyInterpolationMode_eventCanLazyInterpolate_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_CALLBACK_WRAPPERS
#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULazyInterpolationMode(); \
	friend struct Z_Construct_UClass_ULazyInterpolationMode_Statics; \
public: \
	DECLARE_CLASS(ULazyInterpolationMode, UInterpolationMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LockOnTarget"), NO_API) \
	DECLARE_SERIALIZER(ULazyInterpolationMode)


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_INCLASS \
private: \
	static void StaticRegisterNativesULazyInterpolationMode(); \
	friend struct Z_Construct_UClass_ULazyInterpolationMode_Statics; \
public: \
	DECLARE_CLASS(ULazyInterpolationMode, UInterpolationMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LockOnTarget"), NO_API) \
	DECLARE_SERIALIZER(ULazyInterpolationMode)


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULazyInterpolationMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULazyInterpolationMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULazyInterpolationMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULazyInterpolationMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULazyInterpolationMode(ULazyInterpolationMode&&); \
	NO_API ULazyInterpolationMode(const ULazyInterpolationMode&); \
public:


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULazyInterpolationMode(ULazyInterpolationMode&&); \
	NO_API ULazyInterpolationMode(const ULazyInterpolationMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULazyInterpolationMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULazyInterpolationMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULazyInterpolationMode)


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_PRIVATE_PROPERTY_OFFSET
#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_16_PROLOG \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_EVENT_PARMS


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_PRIVATE_PROPERTY_OFFSET \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_RPC_WRAPPERS \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_CALLBACK_WRAPPERS \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_INCLASS \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_PRIVATE_PROPERTY_OFFSET \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_CALLBACK_WRAPPERS \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_INCLASS_NO_PURE_DECLS \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOCKONTARGET_API UClass* StaticClass<class ULazyInterpolationMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_RotationModes_LazyInterpolationMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
