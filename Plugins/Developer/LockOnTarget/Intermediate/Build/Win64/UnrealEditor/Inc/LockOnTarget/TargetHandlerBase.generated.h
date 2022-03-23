// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTargetInfo;
#ifdef LOCKONTARGET_TargetHandlerBase_generated_h
#error "TargetHandlerBase.generated.h already included, missing '#pragma once' in TargetHandlerBase.h"
#endif
#define LOCKONTARGET_TargetHandlerBase_generated_h

#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_SPARSE_DATA
#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_RPC_WRAPPERS \
	virtual bool CanContinueTargeting_Implementation(); \
	virtual bool SwitchTarget_Implementation(FTargetInfo& TargetInfo, float PlayerInput); \
	virtual FTargetInfo FindTarget_Implementation(); \
 \
	DECLARE_FUNCTION(execCanContinueTargeting); \
	DECLARE_FUNCTION(execSwitchTarget); \
	DECLARE_FUNCTION(execFindTarget);


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanContinueTargeting_Implementation(); \
	virtual bool SwitchTarget_Implementation(FTargetInfo& TargetInfo, float PlayerInput); \
	virtual FTargetInfo FindTarget_Implementation(); \
 \
	DECLARE_FUNCTION(execCanContinueTargeting); \
	DECLARE_FUNCTION(execSwitchTarget); \
	DECLARE_FUNCTION(execFindTarget);


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_EVENT_PARMS \
	struct TargetHandlerBase_eventCanContinueTargeting_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TargetHandlerBase_eventCanContinueTargeting_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TargetHandlerBase_eventFindTarget_Parms \
	{ \
		FTargetInfo ReturnValue; \
	}; \
	struct TargetHandlerBase_eventSwitchTarget_Parms \
	{ \
		FTargetInfo TargetInfo; \
		float PlayerInput; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TargetHandlerBase_eventSwitchTarget_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_CALLBACK_WRAPPERS
#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetHandlerBase(); \
	friend struct Z_Construct_UClass_UTargetHandlerBase_Statics; \
public: \
	DECLARE_CLASS(UTargetHandlerBase, ULockOnSubobjectBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LockOnTarget"), NO_API) \
	DECLARE_SERIALIZER(UTargetHandlerBase)


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUTargetHandlerBase(); \
	friend struct Z_Construct_UClass_UTargetHandlerBase_Statics; \
public: \
	DECLARE_CLASS(UTargetHandlerBase, ULockOnSubobjectBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LockOnTarget"), NO_API) \
	DECLARE_SERIALIZER(UTargetHandlerBase)


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetHandlerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetHandlerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetHandlerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetHandlerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetHandlerBase(UTargetHandlerBase&&); \
	NO_API UTargetHandlerBase(const UTargetHandlerBase&); \
public:


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetHandlerBase(UTargetHandlerBase&&); \
	NO_API UTargetHandlerBase(const UTargetHandlerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetHandlerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetHandlerBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UTargetHandlerBase)


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_PRIVATE_PROPERTY_OFFSET
#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_16_PROLOG \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_EVENT_PARMS


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_PRIVATE_PROPERTY_OFFSET \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_RPC_WRAPPERS \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_CALLBACK_WRAPPERS \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_INCLASS \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_PRIVATE_PROPERTY_OFFSET \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_CALLBACK_WRAPPERS \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_INCLASS_NO_PURE_DECLS \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOCKONTARGET_API UClass* StaticClass<class UTargetHandlerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
