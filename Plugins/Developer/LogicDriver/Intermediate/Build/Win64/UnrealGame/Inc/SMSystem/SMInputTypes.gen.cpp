// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/SMInputTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMInputTypes() {}
// Cross Module References
	SMSYSTEM_API UEnum* Z_Construct_UEnum_SMSystem_ESMStateMachineInput();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UEnum* Z_Construct_UEnum_SMSystem_ESMNodeInput();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESMStateMachineInput;
	static UEnum* ESMStateMachineInput_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESMStateMachineInput.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESMStateMachineInput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SMSystem_ESMStateMachineInput, Z_Construct_UPackage__Script_SMSystem(), TEXT("ESMStateMachineInput"));
		}
		return Z_Registration_Info_UEnum_ESMStateMachineInput.OuterSingleton;
	}
	template<> SMSYSTEM_API UEnum* StaticEnum<ESMStateMachineInput::Type>()
	{
		return ESMStateMachineInput_StaticEnum();
	}
	struct Z_Construct_UEnum_SMSystem_ESMStateMachineInput_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SMSystem_ESMStateMachineInput_Statics::Enumerators[] = {
		{ "ESMStateMachineInput::Disabled", (int64)ESMStateMachineInput::Disabled },
		{ "ESMStateMachineInput::UseContextController", (int64)ESMStateMachineInput::UseContextController },
		{ "ESMStateMachineInput::Player0", (int64)ESMStateMachineInput::Player0 },
		{ "ESMStateMachineInput::Player1", (int64)ESMStateMachineInput::Player1 },
		{ "ESMStateMachineInput::Player2", (int64)ESMStateMachineInput::Player2 },
		{ "ESMStateMachineInput::Player3", (int64)ESMStateMachineInput::Player3 },
		{ "ESMStateMachineInput::Player4", (int64)ESMStateMachineInput::Player4 },
		{ "ESMStateMachineInput::Player5", (int64)ESMStateMachineInput::Player5 },
		{ "ESMStateMachineInput::Player6", (int64)ESMStateMachineInput::Player6 },
		{ "ESMStateMachineInput::Player7", (int64)ESMStateMachineInput::Player7 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SMSystem_ESMStateMachineInput_Statics::Enum_MetaDataParams[] = {
		{ "Disabled.Name", "ESMStateMachineInput::Disabled" },
		{ "ModuleRelativePath", "Public/SMInputTypes.h" },
		{ "Player0.Name", "ESMStateMachineInput::Player0" },
		{ "Player1.Name", "ESMStateMachineInput::Player1" },
		{ "Player2.Name", "ESMStateMachineInput::Player2" },
		{ "Player3.Name", "ESMStateMachineInput::Player3" },
		{ "Player4.Name", "ESMStateMachineInput::Player4" },
		{ "Player5.Name", "ESMStateMachineInput::Player5" },
		{ "Player6.Name", "ESMStateMachineInput::Player6" },
		{ "Player7.Name", "ESMStateMachineInput::Player7" },
		{ "UseContextController.Comment", "/** Use the controller assigned to the context if one is available. */" },
		{ "UseContextController.Name", "ESMStateMachineInput::UseContextController" },
		{ "UseContextController.ToolTip", "Use the controller assigned to the context if one is available." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SMSystem_ESMStateMachineInput_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		"ESMStateMachineInput",
		"ESMStateMachineInput::Type",
		Z_Construct_UEnum_SMSystem_ESMStateMachineInput_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SMSystem_ESMStateMachineInput_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SMSystem_ESMStateMachineInput_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SMSystem_ESMStateMachineInput_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SMSystem_ESMStateMachineInput()
	{
		if (!Z_Registration_Info_UEnum_ESMStateMachineInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESMStateMachineInput.InnerSingleton, Z_Construct_UEnum_SMSystem_ESMStateMachineInput_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESMStateMachineInput.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESMNodeInput;
	static UEnum* ESMNodeInput_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESMNodeInput.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESMNodeInput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SMSystem_ESMNodeInput, Z_Construct_UPackage__Script_SMSystem(), TEXT("ESMNodeInput"));
		}
		return Z_Registration_Info_UEnum_ESMNodeInput.OuterSingleton;
	}
	template<> SMSYSTEM_API UEnum* StaticEnum<ESMNodeInput::Type>()
	{
		return ESMNodeInput_StaticEnum();
	}
	struct Z_Construct_UEnum_SMSystem_ESMNodeInput_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SMSystem_ESMNodeInput_Statics::Enumerators[] = {
		{ "ESMNodeInput::Disabled", (int64)ESMNodeInput::Disabled },
		{ "ESMNodeInput::UseOwningStateMachine", (int64)ESMNodeInput::UseOwningStateMachine },
		{ "ESMNodeInput::UseContextController", (int64)ESMNodeInput::UseContextController },
		{ "ESMNodeInput::Player0", (int64)ESMNodeInput::Player0 },
		{ "ESMNodeInput::Player1", (int64)ESMNodeInput::Player1 },
		{ "ESMNodeInput::Player2", (int64)ESMNodeInput::Player2 },
		{ "ESMNodeInput::Player3", (int64)ESMNodeInput::Player3 },
		{ "ESMNodeInput::Player4", (int64)ESMNodeInput::Player4 },
		{ "ESMNodeInput::Player5", (int64)ESMNodeInput::Player5 },
		{ "ESMNodeInput::Player6", (int64)ESMNodeInput::Player6 },
		{ "ESMNodeInput::Player7", (int64)ESMNodeInput::Player7 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SMSystem_ESMNodeInput_Statics::Enum_MetaDataParams[] = {
		{ "Disabled.Name", "ESMNodeInput::Disabled" },
		{ "ModuleRelativePath", "Public/SMInputTypes.h" },
		{ "Player0.Name", "ESMNodeInput::Player0" },
		{ "Player1.Name", "ESMNodeInput::Player1" },
		{ "Player2.Name", "ESMNodeInput::Player2" },
		{ "Player3.Name", "ESMNodeInput::Player3" },
		{ "Player4.Name", "ESMNodeInput::Player4" },
		{ "Player5.Name", "ESMNodeInput::Player5" },
		{ "Player6.Name", "ESMNodeInput::Player6" },
		{ "Player7.Name", "ESMNodeInput::Player7" },
		{ "UseContextController.Comment", "/** Use the controller assigned to the context if one is available. */" },
		{ "UseContextController.Name", "ESMNodeInput::UseContextController" },
		{ "UseContextController.ToolTip", "Use the controller assigned to the context if one is available." },
		{ "UseOwningStateMachine.Comment", "/** All input values are determined by the owning state machine. */" },
		{ "UseOwningStateMachine.Name", "ESMNodeInput::UseOwningStateMachine" },
		{ "UseOwningStateMachine.ToolTip", "All input values are determined by the owning state machine." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SMSystem_ESMNodeInput_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		"ESMNodeInput",
		"ESMNodeInput::Type",
		Z_Construct_UEnum_SMSystem_ESMNodeInput_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SMSystem_ESMNodeInput_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SMSystem_ESMNodeInput_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SMSystem_ESMNodeInput_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SMSystem_ESMNodeInput()
	{
		if (!Z_Registration_Info_UEnum_ESMNodeInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESMNodeInput.InnerSingleton, Z_Construct_UEnum_SMSystem_ESMNodeInput_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESMNodeInput.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInputTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInputTypes_h_Statics::EnumInfo[] = {
		{ ESMStateMachineInput_StaticEnum, TEXT("ESMStateMachineInput"), &Z_Registration_Info_UEnum_ESMStateMachineInput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2860235921U) },
		{ ESMNodeInput_StaticEnum, TEXT("ESMNodeInput"), &Z_Registration_Info_UEnum_ESMNodeInput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 241645650U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInputTypes_h_2714132557(TEXT("/Script/SMSystem"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInputTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInputTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
