// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMSYSTEMEDITOR_SMGraphNode_Base_generated_h
#error "SMGraphNode_Base.generated.h already included, missing '#pragma once' in SMGraphNode_Base.h"
#endif
#define SMSYSTEMEDITOR_SMGraphNode_Base_generated_h

#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics; \
	SMSYSTEMEDITOR_API static class UScriptStruct* StaticStruct();


template<> SMSYSTEMEDITOR_API UScriptStruct* StaticStruct<struct FSMGraphNodeLog>();

#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_SPARSE_DATA
#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_RPC_WRAPPERS
#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_RPC_WRAPPERS_NO_PURE_DECLS
#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMGraphNode_Base(); \
	friend struct Z_Construct_UClass_USMGraphNode_Base_Statics; \
public: \
	DECLARE_CLASS(USMGraphNode_Base, UEdGraphNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SMSystemEditor"), NO_API) \
	DECLARE_SERIALIZER(USMGraphNode_Base)


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUSMGraphNode_Base(); \
	friend struct Z_Construct_UClass_USMGraphNode_Base_Statics; \
public: \
	DECLARE_CLASS(USMGraphNode_Base, UEdGraphNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SMSystemEditor"), NO_API) \
	DECLARE_SERIALIZER(USMGraphNode_Base)


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMGraphNode_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMGraphNode_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMGraphNode_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMGraphNode_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMGraphNode_Base(USMGraphNode_Base&&); \
	NO_API USMGraphNode_Base(const USMGraphNode_Base&); \
public:


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMGraphNode_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMGraphNode_Base(USMGraphNode_Base&&); \
	NO_API USMGraphNode_Base(const USMGraphNode_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMGraphNode_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMGraphNode_Base); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMGraphNode_Base)


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollectedLogs() { return STRUCT_OFFSET(USMGraphNode_Base, CollectedLogs); } \
	FORCEINLINE static uint32 __PPO__BoundGraph() { return STRUCT_OFFSET(USMGraphNode_Base, BoundGraph); } \
	FORCEINLINE static uint32 __PPO__NodePosition() { return STRUCT_OFFSET(USMGraphNode_Base, NodePosition); } \
	FORCEINLINE static uint32 __PPO__NodeInstanceTemplate() { return STRUCT_OFFSET(USMGraphNode_Base, NodeInstanceTemplate); } \
	FORCEINLINE static uint32 __PPO__GraphPropertyGraphs() { return STRUCT_OFFSET(USMGraphNode_Base, GraphPropertyGraphs); } \
	FORCEINLINE static uint32 __PPO__GraphPropertyNodes() { return STRUCT_OFFSET(USMGraphNode_Base, GraphPropertyNodes); } \
	FORCEINLINE static uint32 __PPO__GraphPropertyTemplates() { return STRUCT_OFFSET(USMGraphNode_Base, GraphPropertyTemplates); } \
	FORCEINLINE static uint32 __PPO__CachedBrush() { return STRUCT_OFFSET(USMGraphNode_Base, CachedBrush); } \
	FORCEINLINE static uint32 __PPO__CachedTexture() { return STRUCT_OFFSET(USMGraphNode_Base, CachedTexture); } \
	FORCEINLINE static uint32 __PPO__CachedTextureSize() { return STRUCT_OFFSET(USMGraphNode_Base, CachedTextureSize); } \
	FORCEINLINE static uint32 __PPO__CachedNodeTintColor() { return STRUCT_OFFSET(USMGraphNode_Base, CachedNodeTintColor); } \
	FORCEINLINE static uint32 __PPO__LoadedVersion() { return STRUCT_OFFSET(USMGraphNode_Base, LoadedVersion); }


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_52_PROLOG
#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_PRIVATE_PROPERTY_OFFSET \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_RPC_WRAPPERS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_INCLASS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_PRIVATE_PROPERTY_OFFSET \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_INCLASS_NO_PURE_DECLS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_55_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SMGraphNode_Base."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEMEDITOR_API UClass* StaticClass<class USMGraphNode_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
