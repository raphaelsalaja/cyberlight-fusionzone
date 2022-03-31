// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LockOnTarget/Public/Utilities/Enums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnums() {}
// Cross Module References
	LOCKONTARGET_API UEnum* Z_Construct_UEnum_LockOnTarget_ERot();
	UPackage* Z_Construct_UPackage__Script_LockOnTarget();
	LOCKONTARGET_API UEnum* Z_Construct_UEnum_LockOnTarget_EOffsetType();
	LOCKONTARGET_API UEnum* Z_Construct_UEnum_LockOnTarget_EUnlockReasonBitmask();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERot;
	static UEnum* ERot_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERot.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LockOnTarget_ERot, Z_Construct_UPackage__Script_LockOnTarget(), TEXT("ERot"));
		}
		return Z_Registration_Info_UEnum_ERot.OuterSingleton;
	}
	template<> LOCKONTARGET_API UEnum* StaticEnum<ERot>()
	{
		return ERot_StaticEnum();
	}
	struct Z_Construct_UEnum_LockOnTarget_ERot_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LockOnTarget_ERot_Statics::Enumerators[] = {
		{ "ERot::E_Roll", (int64)ERot::E_Roll },
		{ "ERot::E_Pitch", (int64)ERot::E_Pitch },
		{ "ERot::E_Yaw", (int64)ERot::E_Yaw },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LockOnTarget_ERot_Statics::Enum_MetaDataParams[] = {
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
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LockOnTarget_ERot_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LockOnTarget,
		nullptr,
		"ERot",
		"ERot",
		Z_Construct_UEnum_LockOnTarget_ERot_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LockOnTarget_ERot_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LockOnTarget_ERot_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LockOnTarget_ERot_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LockOnTarget_ERot()
	{
		if (!Z_Registration_Info_UEnum_ERot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERot.InnerSingleton, Z_Construct_UEnum_LockOnTarget_ERot_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERot.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOffsetType;
	static UEnum* EOffsetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOffsetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOffsetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LockOnTarget_EOffsetType, Z_Construct_UPackage__Script_LockOnTarget(), TEXT("EOffsetType"));
		}
		return Z_Registration_Info_UEnum_EOffsetType.OuterSingleton;
	}
	template<> LOCKONTARGET_API UEnum* StaticEnum<EOffsetType>()
	{
		return EOffsetType_StaticEnum();
	}
	struct Z_Construct_UEnum_LockOnTarget_EOffsetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LockOnTarget_EOffsetType_Statics::Enumerators[] = {
		{ "EOffsetType::ENone", (int64)EOffsetType::ENone },
		{ "EOffsetType::EConstant", (int64)EOffsetType::EConstant },
		{ "EOffsetType::EAdaptiveCurve", (int64)EOffsetType::EAdaptiveCurve },
		{ "EOffsetType::ECustomOffset", (int64)EOffsetType::ECustomOffset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LockOnTarget_EOffsetType_Statics::Enum_MetaDataParams[] = {
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
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LockOnTarget_EOffsetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LockOnTarget,
		nullptr,
		"EOffsetType",
		"EOffsetType",
		Z_Construct_UEnum_LockOnTarget_EOffsetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LockOnTarget_EOffsetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LockOnTarget_EOffsetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LockOnTarget_EOffsetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LockOnTarget_EOffsetType()
	{
		if (!Z_Registration_Info_UEnum_EOffsetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOffsetType.InnerSingleton, Z_Construct_UEnum_LockOnTarget_EOffsetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOffsetType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUnlockReasonBitmask;
	static UEnum* EUnlockReasonBitmask_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUnlockReasonBitmask.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUnlockReasonBitmask.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LockOnTarget_EUnlockReasonBitmask, Z_Construct_UPackage__Script_LockOnTarget(), TEXT("EUnlockReasonBitmask"));
		}
		return Z_Registration_Info_UEnum_EUnlockReasonBitmask.OuterSingleton;
	}
	template<> LOCKONTARGET_API UEnum* StaticEnum<EUnlockReasonBitmask>()
	{
		return EUnlockReasonBitmask_StaticEnum();
	}
	struct Z_Construct_UEnum_LockOnTarget_EUnlockReasonBitmask_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LockOnTarget_EUnlockReasonBitmask_Statics::Enumerators[] = {
		{ "EUnlockReasonBitmask::E_TargetInvalidation", (int64)EUnlockReasonBitmask::E_TargetInvalidation },
		{ "EUnlockReasonBitmask::E_OutOfLostDistance", (int64)EUnlockReasonBitmask::E_OutOfLostDistance },
		{ "EUnlockReasonBitmask::E_LineOfSightFail", (int64)EUnlockReasonBitmask::E_LineOfSightFail },
		{ "EUnlockReasonBitmask::E_HelperComponentDiscard", (int64)EUnlockReasonBitmask::E_HelperComponentDiscard },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LockOnTarget_EUnlockReasonBitmask_Statics::Enum_MetaDataParams[] = {
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
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LockOnTarget_EUnlockReasonBitmask_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LockOnTarget,
		nullptr,
		"EUnlockReasonBitmask",
		"EUnlockReasonBitmask",
		Z_Construct_UEnum_LockOnTarget_EUnlockReasonBitmask_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LockOnTarget_EUnlockReasonBitmask_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LockOnTarget_EUnlockReasonBitmask_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LockOnTarget_EUnlockReasonBitmask_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LockOnTarget_EUnlockReasonBitmask()
	{
		if (!Z_Registration_Info_UEnum_EUnlockReasonBitmask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUnlockReasonBitmask.InnerSingleton, Z_Construct_UEnum_LockOnTarget_EUnlockReasonBitmask_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUnlockReasonBitmask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_Utilities_Enums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_Utilities_Enums_h_Statics::EnumInfo[] = {
		{ ERot_StaticEnum, TEXT("ERot"), &Z_Registration_Info_UEnum_ERot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3107243483U) },
		{ EOffsetType_StaticEnum, TEXT("EOffsetType"), &Z_Registration_Info_UEnum_EOffsetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4262757804U) },
		{ EUnlockReasonBitmask_StaticEnum, TEXT("EUnlockReasonBitmask"), &Z_Registration_Info_UEnum_EUnlockReasonBitmask, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3913480029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_Utilities_Enums_h_599488623(TEXT("/Script/LockOnTarget"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_Utilities_Enums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_Utilities_Enums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
