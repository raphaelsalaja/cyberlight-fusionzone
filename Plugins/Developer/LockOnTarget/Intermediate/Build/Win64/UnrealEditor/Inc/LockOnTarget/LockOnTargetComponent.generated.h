// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
class UTargetingHelperComponent;
#ifdef LOCKONTARGET_LockOnTargetComponent_generated_h
#error "LockOnTargetComponent.generated.h already included, missing '#pragma once' in LockOnTargetComponent.h"
#endif
#define LOCKONTARGET_LockOnTargetComponent_generated_h

#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_17_DELEGATE \
struct _Script_LockOnTarget_eventOnTargetUnlocked_Parms \
{ \
	AActor* UnlockedActor; \
}; \
static inline void FOnTargetUnlocked_DelegateWrapper(const FMulticastScriptDelegate& OnTargetUnlocked, AActor* UnlockedActor) \
{ \
	_Script_LockOnTarget_eventOnTargetUnlocked_Parms Parms; \
	Parms.UnlockedActor=UnlockedActor; \
	OnTargetUnlocked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_16_DELEGATE \
static inline void FOnTargetNotFound_DelegateWrapper(const FMulticastScriptDelegate& OnTargetNotFound) \
{ \
	OnTargetNotFound.ProcessMulticastDelegate<UObject>(NULL); \
}


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_15_DELEGATE \
struct _Script_LockOnTarget_eventOnTargetLocked_Parms \
{ \
	AActor* LockedActor; \
}; \
static inline void FOnTargetLocked_DelegateWrapper(const FMulticastScriptDelegate& OnTargetLocked, AActor* LockedActor) \
{ \
	_Script_LockOnTarget_eventOnTargetLocked_Parms Parms; \
	Parms.LockedActor=LockedActor; \
	OnTargetLocked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_SPARSE_DATA
#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_RPC_WRAPPERS \
	virtual float GetInputBufferThreshold_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetInputBufferThreshold); \
	DECLARE_FUNCTION(execGetCapturedSocket); \
	DECLARE_FUNCTION(execGetCapturedLocation); \
	DECLARE_FUNCTION(execGetTargetingDuration); \
	DECLARE_FUNCTION(execGetHelperComponent); \
	DECLARE_FUNCTION(execGetTarget); \
	DECLARE_FUNCTION(execIsTargetLocked); \
	DECLARE_FUNCTION(execClearTarget); \
	DECLARE_FUNCTION(execSetLockOnTarget); \
	DECLARE_FUNCTION(execSwitchTargetManual); \
	DECLARE_FUNCTION(execSwitchTargetPitch); \
	DECLARE_FUNCTION(execSwitchTargetYaw); \
	DECLARE_FUNCTION(execEnableTargeting);


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetInputBufferThreshold_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetInputBufferThreshold); \
	DECLARE_FUNCTION(execGetCapturedSocket); \
	DECLARE_FUNCTION(execGetCapturedLocation); \
	DECLARE_FUNCTION(execGetTargetingDuration); \
	DECLARE_FUNCTION(execGetHelperComponent); \
	DECLARE_FUNCTION(execGetTarget); \
	DECLARE_FUNCTION(execIsTargetLocked); \
	DECLARE_FUNCTION(execClearTarget); \
	DECLARE_FUNCTION(execSetLockOnTarget); \
	DECLARE_FUNCTION(execSwitchTargetManual); \
	DECLARE_FUNCTION(execSwitchTargetPitch); \
	DECLARE_FUNCTION(execSwitchTargetYaw); \
	DECLARE_FUNCTION(execEnableTargeting);


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_EVENT_PARMS \
	struct LockOnTargetComponent_eventGetInputBufferThreshold_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		LockOnTargetComponent_eventGetInputBufferThreshold_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_CALLBACK_WRAPPERS
#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULockOnTargetComponent(); \
	friend struct Z_Construct_UClass_ULockOnTargetComponent_Statics; \
public: \
	DECLARE_CLASS(ULockOnTargetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LockOnTarget"), NO_API) \
	DECLARE_SERIALIZER(ULockOnTargetComponent)


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_INCLASS \
private: \
	static void StaticRegisterNativesULockOnTargetComponent(); \
	friend struct Z_Construct_UClass_ULockOnTargetComponent_Statics; \
public: \
	DECLARE_CLASS(ULockOnTargetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LockOnTarget"), NO_API) \
	DECLARE_SERIALIZER(ULockOnTargetComponent)


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULockOnTargetComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULockOnTargetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULockOnTargetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULockOnTargetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULockOnTargetComponent(ULockOnTargetComponent&&); \
	NO_API ULockOnTargetComponent(const ULockOnTargetComponent&); \
public:


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULockOnTargetComponent(ULockOnTargetComponent&&); \
	NO_API ULockOnTargetComponent(const ULockOnTargetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULockOnTargetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULockOnTargetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULockOnTargetComponent)


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PrivateTargetInfo() { return STRUCT_OFFSET(ULockOnTargetComponent, PrivateTargetInfo); } \
	FORCEINLINE static uint32 __PPO__TargetingDuration() { return STRUCT_OFFSET(ULockOnTargetComponent, TargetingDuration); }


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_41_PROLOG \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_EVENT_PARMS


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_PRIVATE_PROPERTY_OFFSET \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_RPC_WRAPPERS \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_CALLBACK_WRAPPERS \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_INCLASS \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_PRIVATE_PROPERTY_OFFSET \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_CALLBACK_WRAPPERS \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_INCLASS_NO_PURE_DECLS \
	revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOCKONTARGET_API UClass* StaticClass<class ULockOnTargetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnTargetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
