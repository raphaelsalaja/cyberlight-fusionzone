// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMSYSTEM_ISMStateMachineInterface_generated_h
#error "ISMStateMachineInterface.generated.h already included, missing '#pragma once' in ISMStateMachineInterface.h"
#endif
#define SMSYSTEM_ISMStateMachineInterface_generated_h

#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_SPARSE_DATA
#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_RPC_WRAPPERS
#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMInstanceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstanceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMInstanceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstanceInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMInstanceInterface(USMInstanceInterface&&); \
	NO_API USMInstanceInterface(const USMInstanceInterface&); \
public:


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMInstanceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMInstanceInterface(USMInstanceInterface&&); \
	NO_API USMInstanceInterface(const USMInstanceInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMInstanceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstanceInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstanceInterface)


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSMInstanceInterface(); \
	friend struct Z_Construct_UClass_USMInstanceInterface_Statics; \
public: \
	DECLARE_CLASS(USMInstanceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMInstanceInterface)


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_GENERATED_UINTERFACE_BODY() \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_GENERATED_UINTERFACE_BODY() \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISMInstanceInterface() {} \
public: \
	typedef USMInstanceInterface UClassType; \
	typedef ISMInstanceInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_INCLASS_IINTERFACE \
protected: \
	virtual ~ISMInstanceInterface() {} \
public: \
	typedef USMInstanceInterface UClassType; \
	typedef ISMInstanceInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_18_PROLOG
#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_RPC_WRAPPERS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMInstanceInterface>();

#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_SPARSE_DATA
#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_RPC_WRAPPERS
#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMStateMachineInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMStateMachineInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateMachineInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateMachineInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateMachineInterface(USMStateMachineInterface&&); \
	NO_API USMStateMachineInterface(const USMStateMachineInterface&); \
public:


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMStateMachineInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateMachineInterface(USMStateMachineInterface&&); \
	NO_API USMStateMachineInterface(const USMStateMachineInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateMachineInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateMachineInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMStateMachineInterface)


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSMStateMachineInterface(); \
	friend struct Z_Construct_UClass_USMStateMachineInterface_Statics; \
public: \
	DECLARE_CLASS(USMStateMachineInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateMachineInterface)


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_GENERATED_UINTERFACE_BODY() \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_GENERATED_UINTERFACE_BODY() \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISMStateMachineInterface() {} \
public: \
	typedef USMStateMachineInterface UClassType; \
	typedef ISMStateMachineInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_INCLASS_IINTERFACE \
protected: \
	virtual ~ISMStateMachineInterface() {} \
public: \
	typedef USMStateMachineInterface UClassType; \
	typedef ISMStateMachineInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_32_PROLOG
#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_RPC_WRAPPERS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_35_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMStateMachineInterface>();

#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_SPARSE_DATA
#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsSimulatedProxy); \
	DECLARE_FUNCTION(execHasAuthority); \
	DECLARE_FUNCTION(execIsConfiguredForNetworking);


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsSimulatedProxy); \
	DECLARE_FUNCTION(execHasAuthority); \
	DECLARE_FUNCTION(execIsConfiguredForNetworking);


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMStateMachineNetworkedInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMStateMachineNetworkedInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateMachineNetworkedInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateMachineNetworkedInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateMachineNetworkedInterface(USMStateMachineNetworkedInterface&&); \
	NO_API USMStateMachineNetworkedInterface(const USMStateMachineNetworkedInterface&); \
public:


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMStateMachineNetworkedInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateMachineNetworkedInterface(USMStateMachineNetworkedInterface&&); \
	NO_API USMStateMachineNetworkedInterface(const USMStateMachineNetworkedInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateMachineNetworkedInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateMachineNetworkedInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMStateMachineNetworkedInterface)


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSMStateMachineNetworkedInterface(); \
	friend struct Z_Construct_UClass_USMStateMachineNetworkedInterface_Statics; \
public: \
	DECLARE_CLASS(USMStateMachineNetworkedInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateMachineNetworkedInterface)


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_GENERATED_UINTERFACE_BODY() \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_GENERATED_UINTERFACE_BODY() \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISMStateMachineNetworkedInterface() {} \
public: \
	typedef USMStateMachineNetworkedInterface UClassType; \
	typedef ISMStateMachineNetworkedInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_INCLASS_IINTERFACE \
protected: \
	virtual ~ISMStateMachineNetworkedInterface() {} \
public: \
	typedef USMStateMachineNetworkedInterface UClassType; \
	typedef ISMStateMachineNetworkedInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_62_PROLOG
#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_RPC_WRAPPERS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_SPARSE_DATA \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_65_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMStateMachineNetworkedInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h


#define FOREACH_ENUM_ESMNETWORKCONFIGURATIONTYPE(op) \
	op(SM_Client) \
	op(SM_Server) \
	op(SM_ClientAndServer) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
