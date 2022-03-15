// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/SMInputTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMInputTypes() {}
// Cross Module References
	SMSYSTEM_API UEnum* Z_Construct_UEnum_SMSystem_ESMNodeInput();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UEnum* Z_Construct_UEnum_SMSystem_ESMStateMachineInput();
// End Cross Module References
	static UEnum* ESMNodeInput_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SMSystem_ESMNodeInput, Z_Construct_UPackage__Script_SMSystem(), TEXT("ESMNodeInput"));
		}
		return Singleton;
	}
	template<> SMSYSTEM_API UEnum* StaticEnum<ESMNodeInput::Type>()
	{
		return ESMNodeInput_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESMNodeInput(ESMNodeInput_StaticEnum, TEXT("/Script/SMSystem"), TEXT("ESMNodeInput"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SMSystem_ESMNodeInput_Hash() { return 2404736172U; }
	UEnum* Z_Construct_UEnum_SMSystem_ESMNodeInput()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESMNodeInput"), 0, Get_Z_Construct_UEnum_SMSystem_ESMNodeInput_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
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
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SMSystem,
				nullptr,
				"ESMNodeInput",
				"ESMNodeInput::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESMStateMachineInput_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SMSystem_ESMStateMachineInput, Z_Construct_UPackage__Script_SMSystem(), TEXT("ESMStateMachineInput"));
		}
		return Singleton;
	}
	template<> SMSYSTEM_API UEnum* StaticEnum<ESMStateMachineInput::Type>()
	{
		return ESMStateMachineInput_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESMStateMachineInput(ESMStateMachineInput_StaticEnum, TEXT("/Script/SMSystem"), TEXT("ESMStateMachineInput"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SMSystem_ESMStateMachineInput_Hash() { return 3637872419U; }
	UEnum* Z_Construct_UEnum_SMSystem_ESMStateMachineInput()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESMStateMachineInput"), 0, Get_Z_Construct_UEnum_SMSystem_ESMStateMachineInput_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
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
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SMSystem,
				nullptr,
				"ESMStateMachineInput",
				"ESMStateMachineInput::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
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
