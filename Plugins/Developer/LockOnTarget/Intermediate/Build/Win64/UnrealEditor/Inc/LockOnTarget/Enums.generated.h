// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOCKONTARGET_Enums_generated_h
#error "Enums.generated.h already included, missing '#pragma once' in Enums.h"
#endif
#define LOCKONTARGET_Enums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_Utilities_Enums_h


#define FOREACH_ENUM_EUNLOCKREASONBITMASK(op) \
	op(EUnlockReasonBitmask::E_TargetInvalidation) \
	op(EUnlockReasonBitmask::E_OutOfLostDistance) \
	op(EUnlockReasonBitmask::E_LineOfSightFail) \
	op(EUnlockReasonBitmask::E_HelperComponentDiscard) 

enum class EUnlockReasonBitmask;
template<> LOCKONTARGET_API UEnum* StaticEnum<EUnlockReasonBitmask>();

#define FOREACH_ENUM_EOFFSETTYPE(op) \
	op(EOffsetType::ENone) \
	op(EOffsetType::EConstant) \
	op(EOffsetType::EAdaptiveCurve) \
	op(EOffsetType::ECustomOffset) 

enum class EOffsetType : uint8;
template<> LOCKONTARGET_API UEnum* StaticEnum<EOffsetType>();

#define FOREACH_ENUM_EROT(op) \
	op(ERot::E_Roll) \
	op(ERot::E_Pitch) \
	op(ERot::E_Yaw) 

enum class ERot;
template<> LOCKONTARGET_API UEnum* StaticEnum<ERot>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
