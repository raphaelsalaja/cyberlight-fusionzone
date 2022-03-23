// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LockOnTarget/Public/Utilities/Enums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnums() {}
// Cross Module References
	LOCKONTARGET_API UEnum* Z_Construct_UEnum_LockOnTarget_EUnlockReasonBitmask();
	UPackage* Z_Construct_UPackage__Script_LockOnTarget();
	LOCKONTARGET_API UEnum* Z_Construct_UEnum_LockOnTarget_EOffsetType();
	LOCKONTARGET_API UEnum* Z_Construct_UEnum_LockOnTarget_ERot();
// End Cross Module References
	static UEnum* EUnlockReasonBitmask_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LockOnTarget_EUnlockReasonBitmask, Z_Construct_UPackage__Script_LockOnTarget(), TEXT("EUnlockReasonBitmask"));
		}
		return Singleton;
	}
	template<> LOCKONTARGET_API UEnum* StaticEnum<EUnlockReasonBitmask>()
	{
		return EUnlockReasonBitmask_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUnlockReasonBitmask(EUnlockReasonBitmask_StaticEnum, TEXT("/Script/LockOnTarget"), TEXT("EUnlockReasonBitmask"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LockOnTarget_EUnlockReasonBitmask_Hash() { return 3687285714U; }
	UEnum* Z_Construct_UEnum_LockOnTarget_EUnlockReasonBitmask()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LockOnTarget();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUnlockReasonBitmask"), 0, Get_Z_Construct_UEnum_LockOnTarget_EUnlockReasonBitmask_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUnlockReasonBitmask::E_TargetInvalidation", (int64)EUnlockReasonBitmask::E_TargetInvalidation },
				{ "EUnlockReasonBitmask::E_OutOfLostDistance", (int64)EUnlockReasonBitmask::E_OutOfLostDistance },
				{ "EUnlockReasonBitmask::E_LineOfSightFail", (int64)EUnlockReasonBitmask::E_LineOfSightFail },
				{ "EUnlockReasonBitmask::E_HelperComponentDiscard", (int64)EUnlockReasonBitmask::E_HelperComponentDiscard },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "E_HelperComponentDiscard.DisplayName", "Helper Component Discard" },
				{ "E_HelperComponentDiscard.Name", "EUnlockReasonBitmask::E_HelperComponentDiscard" },
				{ "E_HelperComponentDiscard.ToolTip", "Auto find new Target after negative method call CanBeTargeted() (Can be overridden) in HelperComponent." },
				{ "E_LineOfSightFail.DisplayName", "Line Of Sight Fail" },
				{ "E_LineOfSightFail.Name", "EUnlockReasonBitmask::E_LineOfSightFail" },
				{ "E_LineOfSightFail.ToolTip", "Auto find new Target after the end of Line of Sight Timer. If LineOfSight is enabled and LostTargetDelay >= 0.f." },
				{ "E_OutOfLostDistance.DisplayName", "Out Of Lost Distance" },
				{ "E_OutOfLostDistance.Name", "EUnlockReasonBitmask::E_OutOfLostDistance" },
				{ "E_OutOfLostDistance.ToolTip", "Auto find new Target after previous leaving Lost distance." },
				{ "E_TargetInvalidation.DisplayName", "Target Invalidation" },
				{ "E_TargetInvalidation.Name", "EUnlockReasonBitmask::E_TargetInvalidation" },
				{ "E_TargetInvalidation.ToolTip", "Auto find new Target after previous invalidation (e.g. destroying Target/HelperComponent)." },
				{ "ModuleRelativePath", "Public/Utilities/Enums.h" },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LockOnTarget,
				nullptr,
				"EUnlockReasonBitmask",
				"EUnlockReasonBitmask",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EOffsetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LockOnTarget_EOffsetType, Z_Construct_UPackage__Script_LockOnTarget(), TEXT("EOffsetType"));
		}
		return Singleton;
	}
	template<> LOCKONTARGET_API UEnum* StaticEnum<EOffsetType>()
	{
		return EOffsetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOffsetType(EOffsetType_StaticEnum, TEXT("/Script/LockOnTarget"), TEXT("EOffsetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LockOnTarget_EOffsetType_Hash() { return 3252184641U; }
	UEnum* Z_Construct_UEnum_LockOnTarget_EOffsetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LockOnTarget();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOffsetType"), 0, Get_Z_Construct_UEnum_LockOnTarget_EOffsetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOffsetType::ENone", (int64)EOffsetType::ENone },
				{ "EOffsetType::EConstant", (int64)EOffsetType::EConstant },
				{ "EOffsetType::EAdaptiveCurve", (int64)EOffsetType::EAdaptiveCurve },
				{ "EOffsetType::ECustomOffset", (int64)EOffsetType::ECustomOffset },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EAdaptiveCurve.DisplayName", "AdaptiveCurve" },
				{ "EAdaptiveCurve.Name", "EOffsetType::EAdaptiveCurve" },
				{ "EAdaptiveCurve.ToolTip", "Offset is estimated depending on the distance to the Target." },
				{ "EConstant.DisplayName", "Constant" },
				{ "EConstant.Name", "EOffsetType::EConstant" },
				{ "EConstant.ToolTip", "Constant offset applied." },
				{ "ECustomOffset.DisplayName", "CustomOffset" },
				{ "ECustomOffset.Name", "EOffsetType::ECustomOffset" },
				{ "ECustomOffset.ToolTip", "Custom offset applied via calling GetCustomTargetOffset(), which can be overriden." },
				{ "ENone.DisplayName", "None" },
				{ "ENone.Name", "EOffsetType::ENone" },
				{ "ENone.ToolTip", "Offset is not applied." },
				{ "ModuleRelativePath", "Public/Utilities/Enums.h" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LockOnTarget,
				nullptr,
				"EOffsetType",
				"EOffsetType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LockOnTarget_ERot, Z_Construct_UPackage__Script_LockOnTarget(), TEXT("ERot"));
		}
		return Singleton;
	}
	template<> LOCKONTARGET_API UEnum* StaticEnum<ERot>()
	{
		return ERot_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERot(ERot_StaticEnum, TEXT("/Script/LockOnTarget"), TEXT("ERot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LockOnTarget_ERot_Hash() { return 597501195U; }
	UEnum* Z_Construct_UEnum_LockOnTarget_ERot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LockOnTarget();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERot"), 0, Get_Z_Construct_UEnum_LockOnTarget_ERot_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERot::E_Roll", (int64)ERot::E_Roll },
				{ "ERot::E_Pitch", (int64)ERot::E_Pitch },
				{ "ERot::E_Yaw", (int64)ERot::E_Yaw },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "E_Pitch.DisplayName", "Pitch" },
				{ "E_Pitch.Name", "ERot::E_Pitch" },
				{ "E_Roll.DisplayName", "Roll" },
				{ "E_Roll.Name", "ERot::E_Roll" },
				{ "E_Yaw.DisplayName", "Yaw" },
				{ "E_Yaw.Name", "ERot::E_Yaw" },
				{ "ModuleRelativePath", "Public/Utilities/Enums.h" },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LockOnTarget,
				nullptr,
				"ERot",
				"ERot",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
