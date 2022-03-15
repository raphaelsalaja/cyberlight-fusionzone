// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class AController;
enum class ESMExecutionEnvironment : uint8;
struct FLinearColor;
struct FVector2D;
class UTexture2D;
struct FGuid;
class ISMStateMachineNetworkedInterface;
class USMStateMachineInstance;
class USMInstance;
class UObject;
#ifdef SMSYSTEM_SMNodeInstance_generated_h
#error "SMNodeInstance.generated.h already included, missing '#pragma once' in SMNodeInstance.h"
#endif
#define SMSYSTEM_SMNodeInstance_generated_h

#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMNodeDescription_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMSYSTEM_API UScriptStruct* StaticStruct<struct FSMNodeDescription>();

#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_SPARSE_DATA
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_RPC_WRAPPERS \
	virtual FLinearColor GetNodeIconTintColor_Implementation() const; \
	virtual FVector2D GetNodeIconSize_Implementation() const; \
	virtual UTexture2D* GetNodeIcon_Implementation() const; \
	virtual void ConstructionScript_Implementation(); \
 \
	DECLARE_FUNCTION(execOnContextPawnControllerChanged); \
	DECLARE_FUNCTION(execResetVariables); \
	DECLARE_FUNCTION(execWithExecutionEnvironment); \
	DECLARE_FUNCTION(execIsEditorExecution); \
	DECLARE_FUNCTION(execSetVariableHidden); \
	DECLARE_FUNCTION(execSetVariableReadOnly); \
	DECLARE_FUNCTION(execSetUseCustomIcon); \
	DECLARE_FUNCTION(execSetUseCustomColor); \
	DECLARE_FUNCTION(execSetNodeColor); \
	DECLARE_FUNCTION(execSetDisplayName); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execGetNodePosition); \
	DECLARE_FUNCTION(execEvaluateGraphProperties); \
	DECLARE_FUNCTION(execGetNodeIconTintColor); \
	DECLARE_FUNCTION(execGetNodeIconSize); \
	DECLARE_FUNCTION(execGetNodeIcon); \
	DECLARE_FUNCTION(execGetGuid); \
	DECLARE_FUNCTION(execGetNodeName); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execHasUpdated); \
	DECLARE_FUNCTION(execIsInEndState); \
	DECLARE_FUNCTION(execGetTimeInState); \
	DECLARE_FUNCTION(execGetNetworkInterface); \
	DECLARE_FUNCTION(execGetOwningStateMachineNodeInstance); \
	DECLARE_FUNCTION(execGetStateMachineInstance); \
	DECLARE_FUNCTION(execConstructionScript); \
	DECLARE_FUNCTION(execGetContext);


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnContextPawnControllerChanged); \
	DECLARE_FUNCTION(execResetVariables); \
	DECLARE_FUNCTION(execWithExecutionEnvironment); \
	DECLARE_FUNCTION(execIsEditorExecution); \
	DECLARE_FUNCTION(execSetVariableHidden); \
	DECLARE_FUNCTION(execSetVariableReadOnly); \
	DECLARE_FUNCTION(execSetUseCustomIcon); \
	DECLARE_FUNCTION(execSetUseCustomColor); \
	DECLARE_FUNCTION(execSetNodeColor); \
	DECLARE_FUNCTION(execSetDisplayName); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execGetNodePosition); \
	DECLARE_FUNCTION(execEvaluateGraphProperties); \
	DECLARE_FUNCTION(execGetNodeIconTintColor); \
	DECLARE_FUNCTION(execGetNodeIconSize); \
	DECLARE_FUNCTION(execGetNodeIcon); \
	DECLARE_FUNCTION(execGetGuid); \
	DECLARE_FUNCTION(execGetNodeName); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execHasUpdated); \
	DECLARE_FUNCTION(execIsInEndState); \
	DECLARE_FUNCTION(execGetTimeInState); \
	DECLARE_FUNCTION(execGetNetworkInterface); \
	DECLARE_FUNCTION(execGetOwningStateMachineNodeInstance); \
	DECLARE_FUNCTION(execGetStateMachineInstance); \
	DECLARE_FUNCTION(execConstructionScript); \
	DECLARE_FUNCTION(execGetContext);


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_EVENT_PARMS \
	struct SMNodeInstance_eventGetNodeIcon_Parms \
	{ \
		UTexture2D* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SMNodeInstance_eventGetNodeIcon_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SMNodeInstance_eventGetNodeIconSize_Parms \
	{ \
		FVector2D ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SMNodeInstance_eventGetNodeIconSize_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct SMNodeInstance_eventGetNodeIconTintColor_Parms \
	{ \
		FLinearColor ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SMNodeInstance_eventGetNodeIconTintColor_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_CALLBACK_WRAPPERS
#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMNodeInstance(); \
	friend struct Z_Construct_UClass_USMNodeInstance_Statics; \
public: \
	DECLARE_CLASS(USMNodeInstance, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMNodeInstance) \
	virtual UObject* _getUObject() const override { return const_cast<USMNodeInstance*>(this); }


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUSMNodeInstance(); \
	friend struct Z_Construct_UClass_USMNodeInstance_Statics; \
public: \
	DECLARE_CLASS(USMNodeInstance, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMNodeInstance) \
	virtual UObject* _getUObject() const override { return const_cast<USMNodeInstance*>(this); }


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMNodeInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMNodeInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMNodeInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMNodeInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMNodeInstance(USMNodeInstance&&); \
	NO_API USMNodeInstance(const USMNodeInstance&); \
public:


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMNodeInstance(USMNodeInstance&&); \
	NO_API USMNodeInstance(const USMNodeInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMNodeInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMNodeInstance); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USMNodeInstance)


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bHasGameConstructionScripts() { return STRUCT_OFFSET(USMNodeInstance, bHasGameConstructionScripts); } \
	FORCEINLINE static uint32 __PPO__NodeIcon() { return STRUCT_OFFSET(USMNodeInstance, NodeIcon); } \
	FORCEINLINE static uint32 __PPO__NodeIconSize() { return STRUCT_OFFSET(USMNodeInstance, NodeIconSize); } \
	FORCEINLINE static uint32 __PPO__NodeIconTintColor() { return STRUCT_OFFSET(USMNodeInstance, NodeIconTintColor); } \
	FORCEINLINE static uint32 __PPO__bResetVariablesOnInitialize() { return STRUCT_OFFSET(USMNodeInstance, bResetVariablesOnInitialize); } \
	FORCEINLINE static uint32 __PPO__InputComponent() { return STRUCT_OFFSET(USMNodeInstance, InputComponent); } \
	FORCEINLINE static uint32 __PPO__AutoReceiveInput() { return STRUCT_OFFSET(USMNodeInstance, AutoReceiveInput); } \
	FORCEINLINE static uint32 __PPO__InputPriority() { return STRUCT_OFFSET(USMNodeInstance, InputPriority); } \
	FORCEINLINE static uint32 __PPO__bBlockInput() { return STRUCT_OFFSET(USMNodeInstance, bBlockInput); } \
	FORCEINLINE static uint32 __PPO__TemplateGuid() { return STRUCT_OFFSET(USMNodeInstance, TemplateGuid); }


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_87_PROLOG \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_EVENT_PARMS


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_PRIVATE_PROPERTY_OFFSET \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_SPARSE_DATA \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_RPC_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_CALLBACK_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_INCLASS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_PRIVATE_PROPERTY_OFFSET \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_SPARSE_DATA \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_CALLBACK_WRAPPERS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_INCLASS_NO_PURE_DECLS \
	Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMNodeInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Revenant5_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h


#define FOREACH_ENUM_ESMEXECUTIONENVIRONMENT(op) \
	op(ESMExecutionEnvironment::EditorExecution) \
	op(ESMExecutionEnvironment::GameExecution) 

enum class ESMExecutionEnvironment : uint8;
template<> SMSYSTEM_API UEnum* StaticEnum<ESMExecutionEnvironment>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
