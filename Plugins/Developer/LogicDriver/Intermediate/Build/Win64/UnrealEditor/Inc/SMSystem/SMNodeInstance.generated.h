// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputComponent;
class APawn;
class AController;
enum class ESMExecutionEnvironment : uint8;
struct FLinearColor;
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

#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMNodeDescription_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMSYSTEM_API UScriptStruct* StaticStruct<struct FSMNodeDescription>();

#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_SPARSE_DATA
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_RPC_WRAPPERS \
	virtual FLinearColor GetNodeIconTintColor_Implementation() const; \
	virtual FVector2D GetNodeIconSize_Implementation() const; \
	virtual UTexture2D* GetNodeIcon_Implementation() const; \
	virtual void ConstructionScript_Implementation(); \
	virtual void OnRootStateMachineStop_Implementation(); \
	virtual void OnRootStateMachineStart_Implementation(); \
 \
	DECLARE_FUNCTION(execGetInputComponent); \
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
	DECLARE_FUNCTION(execOnRootStateMachineStop); \
	DECLARE_FUNCTION(execOnRootStateMachineStart); \
	DECLARE_FUNCTION(execGetContext);


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInputComponent); \
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
	DECLARE_FUNCTION(execOnRootStateMachineStop); \
	DECLARE_FUNCTION(execOnRootStateMachineStart); \
	DECLARE_FUNCTION(execGetContext);


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_EVENT_PARMS \
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


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_CALLBACK_WRAPPERS
#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMNodeInstance(); \
	friend struct Z_Construct_UClass_USMNodeInstance_Statics; \
public: \
	DECLARE_CLASS(USMNodeInstance, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMNodeInstance) \
	virtual UObject* _getUObject() const override { return const_cast<USMNodeInstance*>(this); }


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_INCLASS \
private: \
	static void StaticRegisterNativesUSMNodeInstance(); \
	friend struct Z_Construct_UClass_USMNodeInstance_Statics; \
public: \
	DECLARE_CLASS(USMNodeInstance, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMNodeInstance) \
	virtual UObject* _getUObject() const override { return const_cast<USMNodeInstance*>(this); }


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_STANDARD_CONSTRUCTORS \
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


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMNodeInstance(USMNodeInstance&&); \
	NO_API USMNodeInstance(const USMNodeInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMNodeInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMNodeInstance); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USMNodeInstance)


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_101_PROLOG \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_EVENT_PARMS


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_RPC_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_CALLBACK_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_INCLASS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_SPARSE_DATA \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_CALLBACK_WRAPPERS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_INCLASS_NO_PURE_DECLS \
	FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMNodeInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_Nodes_SMNodeInstance_h


#define FOREACH_ENUM_ESMEXECUTIONENVIRONMENT(op) \
	op(ESMExecutionEnvironment::EditorExecution) \
	op(ESMExecutionEnvironment::GameExecution) 

enum class ESMExecutionEnvironment : uint8;
template<> SMSYSTEM_API UEnum* StaticEnum<ESMExecutionEnvironment>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
