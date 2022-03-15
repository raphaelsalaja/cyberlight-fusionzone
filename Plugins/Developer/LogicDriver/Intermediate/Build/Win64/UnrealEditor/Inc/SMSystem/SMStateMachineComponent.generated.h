// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSMNetworkedTransaction;
class UObject;
class USMInstance;
struct FSMStateInfo;
struct FSMTransitionInfo;
class AActor;
#ifdef SMSYSTEM_SMStateMachineComponent_generated_h
#error "SMStateMachineComponent.generated.h already included, missing '#pragma once' in SMStateMachineComponent.h"
#endif
#define SMSYSTEM_SMStateMachineComponent_generated_h

#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_SPARSE_DATA
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_RPC_WRAPPERS \
	virtual bool SERVER_ProcessTransaction_Validate(TArray<FSMNetworkedTransaction> const& ); \
	virtual void SERVER_ProcessTransaction_Implementation(TArray<FSMNetworkedTransaction> const& Transactions); \
	virtual bool SERVER_Shutdown_Validate(); \
	virtual void SERVER_Shutdown_Implementation(); \
	virtual bool SERVER_Stop_Validate(); \
	virtual void SERVER_Stop_Implementation(); \
	virtual bool SERVER_Update_Validate(float ); \
	virtual void SERVER_Update_Implementation(float DeltaTime); \
	virtual bool SERVER_Start_Validate(); \
	virtual void SERVER_Start_Implementation(); \
	virtual bool SERVER_Initialize_Validate(UObject* ); \
	virtual void SERVER_Initialize_Implementation(UObject* Context); \
	virtual UObject* GetContextForInitialization_Implementation() const; \
 \
	DECLARE_FUNCTION(execREP_ShuttingDown); \
	DECLARE_FUNCTION(execREP_NetworkedTransactions); \
	DECLARE_FUNCTION(execREP_OnInstanceLoaded); \
	DECLARE_FUNCTION(execSERVER_ProcessTransaction); \
	DECLARE_FUNCTION(execSERVER_Shutdown); \
	DECLARE_FUNCTION(execSERVER_Stop); \
	DECLARE_FUNCTION(execSERVER_Update); \
	DECLARE_FUNCTION(execSERVER_Start); \
	DECLARE_FUNCTION(execSERVER_Initialize); \
	DECLARE_FUNCTION(execInternal_OnStateMachineStateChanged); \
	DECLARE_FUNCTION(execInternal_OnStateMachineTransitionTaken); \
	DECLARE_FUNCTION(execInternal_OnStateMachineStopped); \
	DECLARE_FUNCTION(execInternal_OnStateMachineUpdated); \
	DECLARE_FUNCTION(execInternal_OnStateMachineStarted); \
	DECLARE_FUNCTION(execGetContextForInitialization); \
	DECLARE_FUNCTION(execGetInstance); \
	DECLARE_FUNCTION(execGetTopMostParentActor); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execRestart); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execInitialize);


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SERVER_ProcessTransaction_Validate(TArray<FSMNetworkedTransaction> const& ); \
	virtual void SERVER_ProcessTransaction_Implementation(TArray<FSMNetworkedTransaction> const& Transactions); \
	virtual bool SERVER_Shutdown_Validate(); \
	virtual void SERVER_Shutdown_Implementation(); \
	virtual bool SERVER_Stop_Validate(); \
	virtual void SERVER_Stop_Implementation(); \
	virtual bool SERVER_Update_Validate(float ); \
	virtual void SERVER_Update_Implementation(float DeltaTime); \
	virtual bool SERVER_Start_Validate(); \
	virtual void SERVER_Start_Implementation(); \
	virtual bool SERVER_Initialize_Validate(UObject* ); \
	virtual void SERVER_Initialize_Implementation(UObject* Context); \
 \
	DECLARE_FUNCTION(execREP_ShuttingDown); \
	DECLARE_FUNCTION(execREP_NetworkedTransactions); \
	DECLARE_FUNCTION(execREP_OnInstanceLoaded); \
	DECLARE_FUNCTION(execSERVER_ProcessTransaction); \
	DECLARE_FUNCTION(execSERVER_Shutdown); \
	DECLARE_FUNCTION(execSERVER_Stop); \
	DECLARE_FUNCTION(execSERVER_Update); \
	DECLARE_FUNCTION(execSERVER_Start); \
	DECLARE_FUNCTION(execSERVER_Initialize); \
	DECLARE_FUNCTION(execInternal_OnStateMachineStateChanged); \
	DECLARE_FUNCTION(execInternal_OnStateMachineTransitionTaken); \
	DECLARE_FUNCTION(execInternal_OnStateMachineStopped); \
	DECLARE_FUNCTION(execInternal_OnStateMachineUpdated); \
	DECLARE_FUNCTION(execInternal_OnStateMachineStarted); \
	DECLARE_FUNCTION(execGetContextForInitialization); \
	DECLARE_FUNCTION(execGetInstance); \
	DECLARE_FUNCTION(execGetTopMostParentActor); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execRestart); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execInitialize);


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_EVENT_PARMS \
	struct SMStateMachineComponent_eventGetContextForInitialization_Parms \
	{ \
		UObject* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SMStateMachineComponent_eventGetContextForInitialization_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SMStateMachineComponent_eventSERVER_Initialize_Parms \
	{ \
		UObject* Context; \
	}; \
	struct SMStateMachineComponent_eventSERVER_ProcessTransaction_Parms \
	{ \
		TArray<FSMNetworkedTransaction> Transactions; \
	}; \
	struct SMStateMachineComponent_eventSERVER_Update_Parms \
	{ \
		float DeltaTime; \
	};


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_CALLBACK_WRAPPERS
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USMStateMachineComponent, NO_API)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMStateMachineComponent(); \
	friend struct Z_Construct_UClass_USMStateMachineComponent_Statics; \
public: \
	DECLARE_CLASS(USMStateMachineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateMachineComponent) \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USMStateMachineComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		R_NetworkedTransactions=NETFIELD_REP_START, \
		R_Instance, \
		R_bShuttingDown, \
		NETFIELD_REP_END=R_bShuttingDown	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSMStateMachineComponent(); \
	friend struct Z_Construct_UClass_USMStateMachineComponent_Statics; \
public: \
	DECLARE_CLASS(USMStateMachineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateMachineComponent) \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USMStateMachineComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		R_NetworkedTransactions=NETFIELD_REP_START, \
		R_Instance, \
		R_bShuttingDown, \
		NETFIELD_REP_END=R_bShuttingDown	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMStateMachineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMStateMachineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateMachineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateMachineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateMachineComponent(USMStateMachineComponent&&); \
	NO_API USMStateMachineComponent(const USMStateMachineComponent&); \
public:


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMStateMachineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateMachineComponent(USMStateMachineComponent&&); \
	NO_API USMStateMachineComponent(const USMStateMachineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateMachineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateMachineComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMStateMachineComponent)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__R_NetworkedTransactions() { return STRUCT_OFFSET(USMStateMachineComponent, R_NetworkedTransactions); } \
	FORCEINLINE static uint32 __PPO__PendingTransactions() { return STRUCT_OFFSET(USMStateMachineComponent, PendingTransactions); } \
	FORCEINLINE static uint32 __PPO__R_Instance() { return STRUCT_OFFSET(USMStateMachineComponent, R_Instance); } \
	FORCEINLINE static uint32 __PPO__InstanceTemplate() { return STRUCT_OFFSET(USMStateMachineComponent, InstanceTemplate); } \
	FORCEINLINE static uint32 __PPO__bOverrideTick_DEPRECATED() { return STRUCT_OFFSET(USMStateMachineComponent, bOverrideTick_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__bCanEverTick_DEPRECATED() { return STRUCT_OFFSET(USMStateMachineComponent, bCanEverTick_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__bOverrideTickInterval_DEPRECATED() { return STRUCT_OFFSET(USMStateMachineComponent, bOverrideTickInterval_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__TickInterval_DEPRECATED() { return STRUCT_OFFSET(USMStateMachineComponent, TickInterval_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__R_bShuttingDown() { return STRUCT_OFFSET(USMStateMachineComponent, R_bShuttingDown); } \
	FORCEINLINE static uint32 __PPO__bCanInstanceNetworkTick() { return STRUCT_OFFSET(USMStateMachineComponent, bCanInstanceNetworkTick); }


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_18_PROLOG \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_EVENT_PARMS


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_SPARSE_DATA \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_RPC_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_CALLBACK_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_INCLASS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_SPARSE_DATA \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_CALLBACK_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_INCLASS_NO_PURE_DECLS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SMStateMachineComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMStateMachineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_SMStateMachineComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
