// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULockOnTargetComponent;
class UWidgetComponent;
class UMeshComponent;
#ifdef LOCKONTARGET_TargetingHelperComponent_generated_h
#error "TargetingHelperComponent.generated.h already included, missing '#pragma once' in TargetingHelperComponent.h"
#endif
#define LOCKONTARGET_TargetingHelperComponent_generated_h

#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_17_DELEGATE \
struct _Script_LockOnTarget_eventOnOwnerCaptured_Parms \
{ \
	ULockOnTargetComponent* Invader; \
}; \
static inline void FOnOwnerCaptured_DelegateWrapper(const FMulticastScriptDelegate& OnOwnerCaptured, ULockOnTargetComponent* Invader) \
{ \
	_Script_LockOnTarget_eventOnOwnerCaptured_Parms Parms; \
	Parms.Invader=Invader; \
	OnOwnerCaptured.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_18_DELEGATE \
struct _Script_LockOnTarget_eventOnOwnerReleased_Parms \
{ \
	ULockOnTargetComponent* OldInvader; \
}; \
static inline void FOnOwnerReleased_DelegateWrapper(const FMulticastScriptDelegate& OnOwnerReleased, ULockOnTargetComponent* OldInvader) \
{ \
	_Script_LockOnTarget_eventOnOwnerReleased_Parms Parms; \
	Parms.OldInvader=OldInvader; \
	OnOwnerReleased.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_SPARSE_DATA
#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_RPC_WRAPPERS \
	virtual bool CanBeTargeted_Implementation(ULockOnTargetComponent* Instigator) const; \
 \
	DECLARE_FUNCTION(execChangeRadius); \
	DECLARE_FUNCTION(execGetSockets); \
	DECLARE_FUNCTION(execGetWidgetComponent); \
	DECLARE_FUNCTION(execUpdateMeshComponent); \
	DECLARE_FUNCTION(execUnlockAllInvaders); \
	DECLARE_FUNCTION(execUnlockInvader); \
	DECLARE_FUNCTION(execRemoveSocket); \
	DECLARE_FUNCTION(execAddSocket); \
	DECLARE_FUNCTION(execIsTargeted); \
	DECLARE_FUNCTION(execGetInvaders); \
	DECLARE_FUNCTION(execCanBeTargeted);


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanBeTargeted_Implementation(ULockOnTargetComponent* Instigator) const; \
 \
	DECLARE_FUNCTION(execChangeRadius); \
	DECLARE_FUNCTION(execGetSockets); \
	DECLARE_FUNCTION(execGetWidgetComponent); \
	DECLARE_FUNCTION(execUpdateMeshComponent); \
	DECLARE_FUNCTION(execUnlockAllInvaders); \
	DECLARE_FUNCTION(execUnlockInvader); \
	DECLARE_FUNCTION(execRemoveSocket); \
	DECLARE_FUNCTION(execAddSocket); \
	DECLARE_FUNCTION(execIsTargeted); \
	DECLARE_FUNCTION(execGetInvaders); \
	DECLARE_FUNCTION(execCanBeTargeted);


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_EVENT_PARMS \
	struct TargetingHelperComponent_eventCanBeTargeted_Parms \
	{ \
		ULockOnTargetComponent* Instigator; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TargetingHelperComponent_eventCanBeTargeted_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TargetingHelperComponent_eventGetCustomTargetOffset_Parms \
	{ \
		ULockOnTargetComponent* Instigator; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TargetingHelperComponent_eventGetCustomTargetOffset_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_CALLBACK_WRAPPERS
#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetingHelperComponent(); \
	friend struct Z_Construct_UClass_UTargetingHelperComponent_Statics; \
public: \
	DECLARE_CLASS(UTargetingHelperComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LockOnTarget"), NO_API) \
	DECLARE_SERIALIZER(UTargetingHelperComponent)


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUTargetingHelperComponent(); \
	friend struct Z_Construct_UClass_UTargetingHelperComponent_Statics; \
public: \
	DECLARE_CLASS(UTargetingHelperComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LockOnTarget"), NO_API) \
	DECLARE_SERIALIZER(UTargetingHelperComponent)


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetingHelperComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetingHelperComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetingHelperComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetingHelperComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetingHelperComponent(UTargetingHelperComponent&&); \
	NO_API UTargetingHelperComponent(const UTargetingHelperComponent&); \
public:


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetingHelperComponent(UTargetingHelperComponent&&); \
	NO_API UTargetingHelperComponent(const UTargetingHelperComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetingHelperComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetingHelperComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTargetingHelperComponent)


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_39_PROLOG \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_EVENT_PARMS


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_RPC_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_CALLBACK_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_INCLASS \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_CALLBACK_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_INCLASS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOCKONTARGET_API UClass* StaticClass<class UTargetingHelperComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_TargetingHelperComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
