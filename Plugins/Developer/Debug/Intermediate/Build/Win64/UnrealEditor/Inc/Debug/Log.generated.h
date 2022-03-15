// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FDateTime;
struct FColor;
struct FTransform;
struct FQuat;
struct FRotator;
struct FVector2D;
struct FVector;
class AActor;
struct FLinearColor;
struct FMatrix;
#ifdef DEBUG_Log_generated_h
#error "Log.generated.h already included, missing '#pragma once' in Log.h"
#endif
#define DEBUG_Log_generated_h

#define Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_SPARSE_DATA
#define Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnImplemented); \
	DECLARE_FUNCTION(execCheckNoRecursion); \
	DECLARE_FUNCTION(execCheckNoReEntry); \
	DECLARE_FUNCTION(execCheckNoEntry); \
	DECLARE_FUNCTION(execCheckCondition); \
	DECLARE_FUNCTION(execCheckObject); \
	DECLARE_FUNCTION(execEnsureCondition); \
	DECLARE_FUNCTION(execEnsureObject); \
	DECLARE_FUNCTION(execInBrackets_Text_Blueprint); \
	DECLARE_FUNCTION(execInBrackets_Name_Blueprint); \
	DECLARE_FUNCTION(execInBrackets_String_Blueprint); \
	DECLARE_FUNCTION(execNumber_Float_Blueprint); \
	DECLARE_FUNCTION(execNumber_Int_Blueprint); \
	DECLARE_FUNCTION(execAssert_IsValid); \
	DECLARE_FUNCTION(execAssert_False); \
	DECLARE_FUNCTION(execAssert_True); \
	DECLARE_FUNCTION(execAssertValue_DateTime); \
	DECLARE_FUNCTION(execAssertEqual_DateTime); \
	DECLARE_FUNCTION(execAssertNotEqual_Color); \
	DECLARE_FUNCTION(execAssertEqual_Color); \
	DECLARE_FUNCTION(execAssertNotEqual_Transform); \
	DECLARE_FUNCTION(execAssertEqual_Transform); \
	DECLARE_FUNCTION(execAssertNotEqual_Quat); \
	DECLARE_FUNCTION(execAssertEqual_Quat); \
	DECLARE_FUNCTION(execAssertNotEqual_Rotator); \
	DECLARE_FUNCTION(execAssertEqual_Rotator); \
	DECLARE_FUNCTION(execAssertNotEqual_Vector2D); \
	DECLARE_FUNCTION(execAssertNotEqual_Vector); \
	DECLARE_FUNCTION(execAssertEqual_Vector2D); \
	DECLARE_FUNCTION(execAssertEqual_Vector); \
	DECLARE_FUNCTION(execAssertNotEqual_Object); \
	DECLARE_FUNCTION(execAssertEqual_Object); \
	DECLARE_FUNCTION(execAssertNotEqual_Name); \
	DECLARE_FUNCTION(execAssertEqual_Name); \
	DECLARE_FUNCTION(execAssertNotEqual_String); \
	DECLARE_FUNCTION(execAssertEqual_String); \
	DECLARE_FUNCTION(execAssertValue_Float); \
	DECLARE_FUNCTION(execAssertEqual_Float); \
	DECLARE_FUNCTION(execAssertValue_Integer); \
	DECLARE_FUNCTION(execAssertEqual_Integer); \
	DECLARE_FUNCTION(execAssertEqual_Bool); \
	DECLARE_FUNCTION(execNetRole); \
	DECLARE_FUNCTION(execDollar); \
	DECLARE_FUNCTION(execLight); \
	DECLARE_FUNCTION(execFrequency); \
	DECLARE_FUNCTION(execForce); \
	DECLARE_FUNCTION(execAngle); \
	DECLARE_FUNCTION(execTime); \
	DECLARE_FUNCTION(execSpeed); \
	DECLARE_FUNCTION(execMass); \
	DECLARE_FUNCTION(execLength); \
	DECLARE_FUNCTION(execData); \
	DECLARE_FUNCTION(execVolume); \
	DECLARE_FUNCTION(execTemperature); \
	DECLARE_FUNCTION(execMessageInWorld); \
	DECLARE_FUNCTION(execDateTime); \
	DECLARE_FUNCTION(execColor); \
	DECLARE_FUNCTION(execMatrix); \
	DECLARE_FUNCTION(execQuat); \
	DECLARE_FUNCTION(execTransform); \
	DECLARE_FUNCTION(execRotator); \
	DECLARE_FUNCTION(execVector2D); \
	DECLARE_FUNCTION(execVector); \
	DECLARE_FUNCTION(execBool); \
	DECLARE_FUNCTION(execPercent); \
	DECLARE_FUNCTION(execArray_Color); \
	DECLARE_FUNCTION(execArray_DateTime); \
	DECLARE_FUNCTION(execArray_Text); \
	DECLARE_FUNCTION(execArray_Name); \
	DECLARE_FUNCTION(execArray_String); \
	DECLARE_FUNCTION(execArray_Matrix); \
	DECLARE_FUNCTION(execArray_Quat); \
	DECLARE_FUNCTION(execArray_Transform); \
	DECLARE_FUNCTION(execArray_Rotator); \
	DECLARE_FUNCTION(execArray_Vector2D); \
	DECLARE_FUNCTION(execArray_Vector); \
	DECLARE_FUNCTION(execArray_Bool); \
	DECLARE_FUNCTION(execArray_Float); \
	DECLARE_FUNCTION(execArray_Int64); \
	DECLARE_FUNCTION(execArray_Int32); \
	DECLARE_FUNCTION(execStopDebugTimer); \
	DECLARE_FUNCTION(execStartDebugTimer); \
	DECLARE_FUNCTION(execLineBreak_Symbol); \
	DECLARE_FUNCTION(execLineBreak); \
	DECLARE_FUNCTION(execNo); \
	DECLARE_FUNCTION(execYes); \
	DECLARE_FUNCTION(execInvalid); \
	DECLARE_FUNCTION(execValid); \
	DECLARE_FUNCTION(execYo); \
	DECLARE_FUNCTION(execWassup); \
	DECLARE_FUNCTION(execCya); \
	DECLARE_FUNCTION(execGoodbye); \
	DECLARE_FUNCTION(execBye); \
	DECLARE_FUNCTION(execHey); \
	DECLARE_FUNCTION(execHello); \
	DECLARE_FUNCTION(execInfo_WithCondition); \
	DECLARE_FUNCTION(execInfo); \
	DECLARE_FUNCTION(execWarning_WithCondition); \
	DECLARE_FUNCTION(execWarning); \
	DECLARE_FUNCTION(execSuccess_WithCondition); \
	DECLARE_FUNCTION(execSuccess); \
	DECLARE_FUNCTION(execError_WithCondition); \
	DECLARE_FUNCTION(execError); \
	DECLARE_FUNCTION(execFatal_WithCondition); \
	DECLARE_FUNCTION(execFatal); \
	DECLARE_FUNCTION(execCrash); \
	DECLARE_FUNCTION(execDebugMessage_WithCondition); \
	DECLARE_FUNCTION(execDebugMessage); \
	DECLARE_FUNCTION(execObjectName); \
	DECLARE_FUNCTION(execObjectValidity);


#define Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnImplemented); \
	DECLARE_FUNCTION(execCheckNoRecursion); \
	DECLARE_FUNCTION(execCheckNoReEntry); \
	DECLARE_FUNCTION(execCheckNoEntry); \
	DECLARE_FUNCTION(execCheckCondition); \
	DECLARE_FUNCTION(execCheckObject); \
	DECLARE_FUNCTION(execEnsureCondition); \
	DECLARE_FUNCTION(execEnsureObject); \
	DECLARE_FUNCTION(execInBrackets_Text_Blueprint); \
	DECLARE_FUNCTION(execInBrackets_Name_Blueprint); \
	DECLARE_FUNCTION(execInBrackets_String_Blueprint); \
	DECLARE_FUNCTION(execNumber_Float_Blueprint); \
	DECLARE_FUNCTION(execNumber_Int_Blueprint); \
	DECLARE_FUNCTION(execAssert_IsValid); \
	DECLARE_FUNCTION(execAssert_False); \
	DECLARE_FUNCTION(execAssert_True); \
	DECLARE_FUNCTION(execAssertValue_DateTime); \
	DECLARE_FUNCTION(execAssertEqual_DateTime); \
	DECLARE_FUNCTION(execAssertNotEqual_Color); \
	DECLARE_FUNCTION(execAssertEqual_Color); \
	DECLARE_FUNCTION(execAssertNotEqual_Transform); \
	DECLARE_FUNCTION(execAssertEqual_Transform); \
	DECLARE_FUNCTION(execAssertNotEqual_Quat); \
	DECLARE_FUNCTION(execAssertEqual_Quat); \
	DECLARE_FUNCTION(execAssertNotEqual_Rotator); \
	DECLARE_FUNCTION(execAssertEqual_Rotator); \
	DECLARE_FUNCTION(execAssertNotEqual_Vector2D); \
	DECLARE_FUNCTION(execAssertNotEqual_Vector); \
	DECLARE_FUNCTION(execAssertEqual_Vector2D); \
	DECLARE_FUNCTION(execAssertEqual_Vector); \
	DECLARE_FUNCTION(execAssertNotEqual_Object); \
	DECLARE_FUNCTION(execAssertEqual_Object); \
	DECLARE_FUNCTION(execAssertNotEqual_Name); \
	DECLARE_FUNCTION(execAssertEqual_Name); \
	DECLARE_FUNCTION(execAssertNotEqual_String); \
	DECLARE_FUNCTION(execAssertEqual_String); \
	DECLARE_FUNCTION(execAssertValue_Float); \
	DECLARE_FUNCTION(execAssertEqual_Float); \
	DECLARE_FUNCTION(execAssertValue_Integer); \
	DECLARE_FUNCTION(execAssertEqual_Integer); \
	DECLARE_FUNCTION(execAssertEqual_Bool); \
	DECLARE_FUNCTION(execNetRole); \
	DECLARE_FUNCTION(execDollar); \
	DECLARE_FUNCTION(execLight); \
	DECLARE_FUNCTION(execFrequency); \
	DECLARE_FUNCTION(execForce); \
	DECLARE_FUNCTION(execAngle); \
	DECLARE_FUNCTION(execTime); \
	DECLARE_FUNCTION(execSpeed); \
	DECLARE_FUNCTION(execMass); \
	DECLARE_FUNCTION(execLength); \
	DECLARE_FUNCTION(execData); \
	DECLARE_FUNCTION(execVolume); \
	DECLARE_FUNCTION(execTemperature); \
	DECLARE_FUNCTION(execMessageInWorld); \
	DECLARE_FUNCTION(execDateTime); \
	DECLARE_FUNCTION(execColor); \
	DECLARE_FUNCTION(execMatrix); \
	DECLARE_FUNCTION(execQuat); \
	DECLARE_FUNCTION(execTransform); \
	DECLARE_FUNCTION(execRotator); \
	DECLARE_FUNCTION(execVector2D); \
	DECLARE_FUNCTION(execVector); \
	DECLARE_FUNCTION(execBool); \
	DECLARE_FUNCTION(execPercent); \
	DECLARE_FUNCTION(execArray_Color); \
	DECLARE_FUNCTION(execArray_DateTime); \
	DECLARE_FUNCTION(execArray_Text); \
	DECLARE_FUNCTION(execArray_Name); \
	DECLARE_FUNCTION(execArray_String); \
	DECLARE_FUNCTION(execArray_Matrix); \
	DECLARE_FUNCTION(execArray_Quat); \
	DECLARE_FUNCTION(execArray_Transform); \
	DECLARE_FUNCTION(execArray_Rotator); \
	DECLARE_FUNCTION(execArray_Vector2D); \
	DECLARE_FUNCTION(execArray_Vector); \
	DECLARE_FUNCTION(execArray_Bool); \
	DECLARE_FUNCTION(execArray_Float); \
	DECLARE_FUNCTION(execArray_Int64); \
	DECLARE_FUNCTION(execArray_Int32); \
	DECLARE_FUNCTION(execStopDebugTimer); \
	DECLARE_FUNCTION(execStartDebugTimer); \
	DECLARE_FUNCTION(execLineBreak_Symbol); \
	DECLARE_FUNCTION(execLineBreak); \
	DECLARE_FUNCTION(execNo); \
	DECLARE_FUNCTION(execYes); \
	DECLARE_FUNCTION(execInvalid); \
	DECLARE_FUNCTION(execValid); \
	DECLARE_FUNCTION(execYo); \
	DECLARE_FUNCTION(execWassup); \
	DECLARE_FUNCTION(execCya); \
	DECLARE_FUNCTION(execGoodbye); \
	DECLARE_FUNCTION(execBye); \
	DECLARE_FUNCTION(execHey); \
	DECLARE_FUNCTION(execHello); \
	DECLARE_FUNCTION(execInfo_WithCondition); \
	DECLARE_FUNCTION(execInfo); \
	DECLARE_FUNCTION(execWarning_WithCondition); \
	DECLARE_FUNCTION(execWarning); \
	DECLARE_FUNCTION(execSuccess_WithCondition); \
	DECLARE_FUNCTION(execSuccess); \
	DECLARE_FUNCTION(execError_WithCondition); \
	DECLARE_FUNCTION(execError); \
	DECLARE_FUNCTION(execFatal_WithCondition); \
	DECLARE_FUNCTION(execFatal); \
	DECLARE_FUNCTION(execCrash); \
	DECLARE_FUNCTION(execDebugMessage_WithCondition); \
	DECLARE_FUNCTION(execDebugMessage); \
	DECLARE_FUNCTION(execObjectName); \
	DECLARE_FUNCTION(execObjectValidity);


#define Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULog(); \
	friend struct Z_Construct_UClass_ULog_Statics; \
public: \
	DECLARE_CLASS(ULog, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Debug"), NO_API) \
	DECLARE_SERIALIZER(ULog)


#define Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_INCLASS \
private: \
	static void StaticRegisterNativesULog(); \
	friend struct Z_Construct_UClass_ULog_Statics; \
public: \
	DECLARE_CLASS(ULog, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Debug"), NO_API) \
	DECLARE_SERIALIZER(ULog)


#define Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULog) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULog); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULog(ULog&&); \
	NO_API ULog(const ULog&); \
public:


#define Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULog(ULog&&); \
	NO_API ULog(const ULog&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULog); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULog)


#define Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_PRIVATE_PROPERTY_OFFSET
#define Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_377_PROLOG
#define Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_PRIVATE_PROPERTY_OFFSET \
	Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_SPARSE_DATA \
	Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_RPC_WRAPPERS \
	Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_INCLASS \
	Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_PRIVATE_PROPERTY_OFFSET \
	Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_SPARSE_DATA \
	Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_RPC_WRAPPERS_NO_PURE_DECLS \
	Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_INCLASS_NO_PURE_DECLS \
	Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h_380_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEBUG_API UClass* StaticClass<class ULog>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Revenant5_Plugins_Developer_Debug_Source_Debug_Public_Log_h


#define FOREACH_ENUM_EDEBUGLOGCOMPARISONMETHOD(op) \
	op(CM_Equal_To) \
	op(CM_Not_Equal_To) \
	op(CM_Greater_Than_Or_Equal_To) \
	op(CM_Less_Than_Or_Equal_To) \
	op(CM_Greater_Than) \
	op(CM_Less_Than) 
#define FOREACH_ENUM_EDEBUGLOGTIMEUNIT(op) \
	op(DLTU_Nanoseconds) \
	op(DLTU_Microseconds) \
	op(DLTU_Milliseconds) \
	op(DLTU_Seconds) \
	op(DLTU_Minutes) \
	op(DLTU_Hours) \
	op(DLTU_Days) \
	op(DLTU_Weeks) \
	op(DLTU_Months) \
	op(DLTU_Years) \
	op(DLTU_Decades) \
	op(DLTU_Centuries) \
	op(DLTU_Millennium) 
#define FOREACH_ENUM_EDEBUGLOGLIGHTUNIT(op) \
	op(DLLU_Lumens) \
	op(DLLU_Candela) \
	op(DLLU_Lux) \
	op(DLLU_CandelaPerMeter2) 
#define FOREACH_ENUM_EDEBUGLOGFREQUENCYUNIT(op) \
	op(DLFU_Hertz) \
	op(DLFU_Kilohertz) \
	op(DLFU_Megahertz) \
	op(DLFU_Gigahertz) \
	op(DLFU_RevolutionsPerMinute) 
#define FOREACH_ENUM_EDEBUGLOGFORCEUNIT(op) \
	op(DLFU_Newtons) \
	op(DLFU_PoundsForce) \
	op(DLFU_KilogramsForce) 
#define FOREACH_ENUM_EDEBUGLOGANGULARUNIT(op) \
	op(DLAU_Degrees) \
	op(DLAU_Radians) 
#define FOREACH_ENUM_EDEBUGLOGSPEEDUNIT(op) \
	op(DLSU_CentimetersPerSec) \
	op(DLSU_CentimetersPerHour) \
	op(DLSU_MicrometersPerSec) \
	op(DLSU_MicrometersPerHour) \
	op(DLSU_MillimetersPerSec) \
	op(DLSU_MillimetersPerHour) \
	op(DLSU_MetersPerSec) \
	op(DLSU_MetersPerHour) \
	op(DLSU_KilometersPerSec) \
	op(DLSU_KilometersPerHour) \
	op(DLSU_InchesPerSec) \
	op(DLSU_InchesPerHour) \
	op(DLSU_FeetPerSec) \
	op(DLSU_FeetPerHour) \
	op(DLSU_MilesPerSec) \
	op(DLSU_MilesPerHour) \
	op(DLSU_YardsPerSec) \
	op(DLSU_YardsPerHour) \
	op(DLSU_Knots) 
#define FOREACH_ENUM_EDEBUGLOGMASSUNIT(op) \
	op(DLMU_Microgram) \
	op(DLMU_Milligram) \
	op(DLMU_Gram) \
	op(DLMU_Kilogram) \
	op(DLMU_Tonne) \
	op(DLMU_Ounce) \
	op(DLMU_Pound) \
	op(DLMU_Stone) 
#define FOREACH_ENUM_EDEBUGLOGLENGTHUNIT(op) \
	op(DLLU_Centimeter) \
	op(DLLU_Micrometer) \
	op(DLLU_Millimeter) \
	op(DLLU_Meter) \
	op(DLLU_Kilometer) \
	op(DLLU_Inch) \
	op(DLLU_Feet) \
	op(DLLU_Mile) \
	op(DLLU_NauticalMile) \
	op(DLLU_Yard) \
	op(DLLU_Lightyears) 
#define FOREACH_ENUM_EDEBUGLOGDATAUNIT(op) \
	op(DLDU_Bit) \
	op(DLDU_Byte) \
	op(DLDU_Kilobyte) \
	op(DLDU_Megabyte) \
	op(DLDU_Gigabyte) \
	op(DLDU_Terabyte) \
	op(DLDU_Petabyte) 
#define FOREACH_ENUM_EDEBUGLOGVOLUMEUNIT(op) \
	op(DLVU_Litre) \
	op(DLVU_Millilitre) \
	op(DLVU_Gallon) \
	op(DLVU_Pint) \
	op(DLVU_Quart) 
#define FOREACH_ENUM_EDEBUGLOGTEMPERATUREUNIT(op) \
	op(DLTU_Celsius) \
	op(DLTU_Fahrenheit) \
	op(DLTU_Kelvin) 
#define FOREACH_ENUM_EDEBUGLOGNUMBERSYSTEMS(op) \
	op(DLNS_Decimal) \
	op(DLNS_Binary) \
	op(DLNS_Hex) \
	op(DLNS_Octal) \
	op(DLNS_Roman) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
