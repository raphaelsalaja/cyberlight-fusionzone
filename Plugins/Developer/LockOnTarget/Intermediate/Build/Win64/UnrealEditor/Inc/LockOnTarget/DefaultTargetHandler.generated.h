// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTargetingHelperComponent;
#ifdef LOCKONTARGET_DefaultTargetHandler_generated_h
#error "DefaultTargetHandler.generated.h already included, missing '#pragma once' in DefaultTargetHandler.h"
#endif
#define LOCKONTARGET_DefaultTargetHandler_generated_h

#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_SPARSE_DATA
#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_RPC_WRAPPERS \
	virtual float CalculateTargetModifier_Implementation(FVector const& Location, UTargetingHelperComponent* TargetHelperComponent, float PlayerInput) const; \
 \
	DECLARE_FUNCTION(execCalculateTargetModifier);


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float CalculateTargetModifier_Implementation(FVector const& Location, UTargetingHelperComponent* TargetHelperComponent, float PlayerInput) const; \
 \
	DECLARE_FUNCTION(execCalculateTargetModifier);


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_EVENT_PARMS \
	struct DefaultTargetHandler_eventCalculateTargetModifier_Parms \
	{ \
		FVector Location; \
		UTargetingHelperComponent* TargetHelperComponent; \
		float PlayerInput; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DefaultTargetHandler_eventCalculateTargetModifier_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_CALLBACK_WRAPPERS
#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDefaultTargetHandler(); \
	friend struct Z_Construct_UClass_UDefaultTargetHandler_Statics; \
public: \
	DECLARE_CLASS(UDefaultTargetHandler, UTargetHandlerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LockOnTarget"), NO_API) \
	DECLARE_SERIALIZER(UDefaultTargetHandler)


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUDefaultTargetHandler(); \
	friend struct Z_Construct_UClass_UDefaultTargetHandler_Statics; \
public: \
	DECLARE_CLASS(UDefaultTargetHandler, UTargetHandlerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LockOnTarget"), NO_API) \
	DECLARE_SERIALIZER(UDefaultTargetHandler)


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDefaultTargetHandler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefaultTargetHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDefaultTargetHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultTargetHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDefaultTargetHandler(UDefaultTargetHandler&&); \
	NO_API UDefaultTargetHandler(const UDefaultTargetHandler&); \
public:


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDefaultTargetHandler(UDefaultTargetHandler&&); \
	NO_API UDefaultTargetHandler(const UDefaultTargetHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDefaultTargetHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultTargetHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDefaultTargetHandler)


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_20_PROLOG \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_EVENT_PARMS


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_RPC_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_CALLBACK_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_INCLASS \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_CALLBACK_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_INCLASS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOCKONTARGET_API UClass* StaticClass<class UDefaultTargetHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_DefaultTargetHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
