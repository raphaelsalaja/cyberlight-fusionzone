// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Nodes/Rules/SMNodeRules.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMNodeRules() {}
// Cross Module References
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMConnectionValidator();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMStateClassRule();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineInstance_NoRegister();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMStateConnectionValidator();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMStateMachineClassRule();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMTransitionConnectionValidator();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMNodeConnectionRule();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMNodeClassRule();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_Base_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSMStateMachineNodePlacementValidator>() == std::is_polymorphic<FSMConnectionValidator>(), "USTRUCT FSMStateMachineNodePlacementValidator cannot be polymorphic unless super FSMConnectionValidator is polymorphic");

class UScriptStruct* FSMStateMachineNodePlacementValidator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMStateMachineNodePlacementValidator"), sizeof(FSMStateMachineNodePlacementValidator), Get_Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMStateMachineNodePlacementValidator>()
{
	return FSMStateMachineNodePlacementValidator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMStateMachineNodePlacementValidator(FSMStateMachineNodePlacementValidator::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMStateMachineNodePlacementValidator"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMStateMachineNodePlacementValidator
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMStateMachineNodePlacementValidator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMStateMachineNodePlacementValidator")),new UScriptStruct::TCppStructOps<FSMStateMachineNodePlacementValidator>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMStateMachineNodePlacementValidator;
	struct Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllowedStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowReferences_MetaData[];
#endif
		static void NewProp_bAllowReferences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowReferences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowParents_MetaData[];
#endif
		static void NewProp_bAllowParents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowParents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSubStateMachines_MetaData[];
#endif
		static void NewProp_bAllowSubStateMachines_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSubStateMachines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSubStateMachineClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultSubStateMachineClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describe under what conditions nodes are allowed to be placed.\n */" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "ToolTip", "Describe under what conditions nodes are allowed to be placed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMStateMachineNodePlacementValidator>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_AllowedStates_Inner = { "AllowedStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMStateClassRule, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_AllowedStates_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/**\n\x09 * States that can be placed in this state machine. This restricts which items show up on the graph context menu. None implies all.\n\x09 */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "ToolTip", "States that can be placed in this state machine. This restricts which items show up on the graph context menu. None implies all." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_AllowedStates = { "AllowedStates", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMStateMachineNodePlacementValidator, AllowedStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_AllowedStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_AllowedStates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowReferences_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/**\n\x09 * Restricts the placement of state machine references within this state machine.\n\x09 */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "ToolTip", "Restricts the placement of state machine references within this state machine." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowReferences_SetBit(void* Obj)
	{
		((FSMStateMachineNodePlacementValidator*)Obj)->bAllowReferences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowReferences = { "bAllowReferences", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSMStateMachineNodePlacementValidator), &Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowReferences_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowReferences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowParents_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/**\n\x09 * Restricts the placement of state machine parents within this state machine.\n\x09 */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "ToolTip", "Restricts the placement of state machine parents within this state machine." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowParents_SetBit(void* Obj)
	{
		((FSMStateMachineNodePlacementValidator*)Obj)->bAllowParents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowParents = { "bAllowParents", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSMStateMachineNodePlacementValidator), &Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowParents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowParents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowParents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowSubStateMachines_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/**\n\x09 * Allow sub state machines to be added or collapsed.\n\x09 */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "ToolTip", "Allow sub state machines to be added or collapsed." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowSubStateMachines_SetBit(void* Obj)
	{
		((FSMStateMachineNodePlacementValidator*)Obj)->bAllowSubStateMachines = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowSubStateMachines = { "bAllowSubStateMachines", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSMStateMachineNodePlacementValidator), &Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowSubStateMachines_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowSubStateMachines_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowSubStateMachines_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_DefaultSubStateMachineClass_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/**\n\x09 * The default state machine class to assign when adding or collapsing a state machine.\n\x09 */" },
		{ "EditCondition", "bAllowSubStateMachines" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "ToolTip", "The default state machine class to assign when adding or collapsing a state machine." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_DefaultSubStateMachineClass = { "DefaultSubStateMachineClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMStateMachineNodePlacementValidator, DefaultSubStateMachineClass), Z_Construct_UClass_USMStateMachineInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_DefaultSubStateMachineClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_DefaultSubStateMachineClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_AllowedStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_AllowedStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowParents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_bAllowSubStateMachines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::NewProp_DefaultSubStateMachineClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMConnectionValidator,
		&NewStructOps,
		"SMStateMachineNodePlacementValidator",
		sizeof(FSMStateMachineNodePlacementValidator),
		alignof(FSMStateMachineNodePlacementValidator),
		Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMStateMachineNodePlacementValidator"), sizeof(FSMStateMachineNodePlacementValidator), Get_Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator_Hash() { return 3337973810U; }

static_assert(std::is_polymorphic<FSMStateConnectionValidator>() == std::is_polymorphic<FSMConnectionValidator>(), "USTRUCT FSMStateConnectionValidator cannot be polymorphic unless super FSMConnectionValidator is polymorphic");

class UScriptStruct* FSMStateConnectionValidator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMStateConnectionValidator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMStateConnectionValidator, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMStateConnectionValidator"), sizeof(FSMStateConnectionValidator), Get_Z_Construct_UScriptStruct_FSMStateConnectionValidator_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMStateConnectionValidator>()
{
	return FSMStateConnectionValidator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMStateConnectionValidator(FSMStateConnectionValidator::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMStateConnectionValidator"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMStateConnectionValidator
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMStateConnectionValidator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMStateConnectionValidator")),new UScriptStruct::TCppStructOps<FSMStateConnectionValidator>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMStateConnectionValidator;
	struct Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllowedInboundStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedInboundStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedInboundStates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllowedOutboundStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedOutboundStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedOutboundStates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllowedInStateMachines_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedInStateMachines_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedInStateMachines;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describe under what conditions nodes are allowed to be connected.\n */" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "ToolTip", "Describe under what conditions nodes are allowed to be connected." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMStateConnectionValidator>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedInboundStates_Inner = { "AllowedInboundStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMStateClassRule, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedInboundStates_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/**\n\x09 * States that can connect to this state.\n\x09 */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "ToolTip", "States that can connect to this state." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedInboundStates = { "AllowedInboundStates", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMStateConnectionValidator, AllowedInboundStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedInboundStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedInboundStates_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedOutboundStates_Inner = { "AllowedOutboundStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMStateClassRule, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedOutboundStates_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/**\n\x09 * States that this state can connect to.\n\x09 */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "ToolTip", "States that this state can connect to." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedOutboundStates = { "AllowedOutboundStates", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMStateConnectionValidator, AllowedOutboundStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedOutboundStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedOutboundStates_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedInStateMachines_Inner = { "AllowedInStateMachines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMStateMachineClassRule, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedInStateMachines_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/**\n\x09* State machines that this state can be placed in.\n\x09*/" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "ToolTip", "State machines that this state can be placed in." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedInStateMachines = { "AllowedInStateMachines", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMStateConnectionValidator, AllowedInStateMachines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedInStateMachines_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedInStateMachines_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedInboundStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedInboundStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedOutboundStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedOutboundStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedInStateMachines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::NewProp_AllowedInStateMachines,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMConnectionValidator,
		&NewStructOps,
		"SMStateConnectionValidator",
		sizeof(FSMStateConnectionValidator),
		alignof(FSMStateConnectionValidator),
		Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMStateConnectionValidator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMStateConnectionValidator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMStateConnectionValidator"), sizeof(FSMStateConnectionValidator), Get_Z_Construct_UScriptStruct_FSMStateConnectionValidator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMStateConnectionValidator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMStateConnectionValidator_Hash() { return 2407966084U; }

static_assert(std::is_polymorphic<FSMTransitionConnectionValidator>() == std::is_polymorphic<FSMConnectionValidator>(), "USTRUCT FSMTransitionConnectionValidator cannot be polymorphic unless super FSMConnectionValidator is polymorphic");

class UScriptStruct* FSMTransitionConnectionValidator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMTransitionConnectionValidator, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMTransitionConnectionValidator"), sizeof(FSMTransitionConnectionValidator), Get_Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMTransitionConnectionValidator>()
{
	return FSMTransitionConnectionValidator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMTransitionConnectionValidator(FSMTransitionConnectionValidator::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMTransitionConnectionValidator"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMTransitionConnectionValidator
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMTransitionConnectionValidator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMTransitionConnectionValidator")),new UScriptStruct::TCppStructOps<FSMTransitionConnectionValidator>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMTransitionConnectionValidator;
	struct Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllowedConnections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedConnections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedConnections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describe under what conditions transitions should be allowed.\n */" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "ToolTip", "Describe under what conditions transitions should be allowed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMTransitionConnectionValidator>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Statics::NewProp_AllowedConnections_Inner = { "AllowedConnections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMNodeConnectionRule, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Statics::NewProp_AllowedConnections_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/**\n\x09 * If any connection rules are present at least one must be valid for this connection be allowed.\n\x09 */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "ToolTip", "If any connection rules are present at least one must be valid for this connection be allowed." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Statics::NewProp_AllowedConnections = { "AllowedConnections", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransitionConnectionValidator, AllowedConnections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Statics::NewProp_AllowedConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Statics::NewProp_AllowedConnections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Statics::NewProp_AllowedConnections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Statics::NewProp_AllowedConnections,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMConnectionValidator,
		&NewStructOps,
		"SMTransitionConnectionValidator",
		sizeof(FSMTransitionConnectionValidator),
		alignof(FSMTransitionConnectionValidator),
		Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMTransitionConnectionValidator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMTransitionConnectionValidator"), sizeof(FSMTransitionConnectionValidator), Get_Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMTransitionConnectionValidator_Hash() { return 4231653012U; }
class UScriptStruct* FSMConnectionValidator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMConnectionValidator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMConnectionValidator, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMConnectionValidator"), sizeof(FSMConnectionValidator), Get_Z_Construct_UScriptStruct_FSMConnectionValidator_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMConnectionValidator>()
{
	return FSMConnectionValidator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMConnectionValidator(FSMConnectionValidator::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMConnectionValidator"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMConnectionValidator
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMConnectionValidator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMConnectionValidator")),new UScriptStruct::TCppStructOps<FSMConnectionValidator>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMConnectionValidator;
	struct Z_Construct_UScriptStruct_FSMConnectionValidator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMConnectionValidator_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMConnectionValidator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMConnectionValidator>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMConnectionValidator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		&NewStructOps,
		"SMConnectionValidator",
		sizeof(FSMConnectionValidator),
		alignof(FSMConnectionValidator),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMConnectionValidator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMConnectionValidator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMConnectionValidator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMConnectionValidator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMConnectionValidator"), sizeof(FSMConnectionValidator), Get_Z_Construct_UScriptStruct_FSMConnectionValidator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMConnectionValidator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMConnectionValidator_Hash() { return 3636093287U; }
class UScriptStruct* FSMNodeConnectionRule::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMNodeConnectionRule_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMNodeConnectionRule, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMNodeConnectionRule"), sizeof(FSMNodeConnectionRule), Get_Z_Construct_UScriptStruct_FSMNodeConnectionRule_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMNodeConnectionRule>()
{
	return FSMNodeConnectionRule::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMNodeConnectionRule(FSMNodeConnectionRule::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMNodeConnectionRule"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMNodeConnectionRule
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMNodeConnectionRule()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMNodeConnectionRule")),new UScriptStruct::TCppStructOps<FSMNodeConnectionRule>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMNodeConnectionRule;
	struct Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FromState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStateMachine_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStateMachine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMNodeConnectionRule>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::NewProp_FromState_MetaData[] = {
		{ "Category", "Rule" },
		{ "Comment", "/** The start of a connection. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "ToolTip", "The start of a connection." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::NewProp_FromState = { "FromState", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNodeConnectionRule, FromState), Z_Construct_UScriptStruct_FSMStateClassRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::NewProp_FromState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::NewProp_FromState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::NewProp_ToState_MetaData[] = {
		{ "Category", "Rule" },
		{ "Comment", "/** The end of a connection. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "ToolTip", "The end of a connection." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::NewProp_ToState = { "ToState", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNodeConnectionRule, ToState), Z_Construct_UScriptStruct_FSMStateClassRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::NewProp_ToState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::NewProp_ToState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::NewProp_InStateMachine_MetaData[] = {
		{ "Category", "Rule" },
		{ "Comment", "/** The state machine this connection exists in. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "ToolTip", "The state machine this connection exists in." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::NewProp_InStateMachine = { "InStateMachine", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNodeConnectionRule, InStateMachine), Z_Construct_UScriptStruct_FSMStateMachineClassRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::NewProp_InStateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::NewProp_InStateMachine_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::NewProp_FromState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::NewProp_ToState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::NewProp_InStateMachine,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		&NewStructOps,
		"SMNodeConnectionRule",
		sizeof(FSMNodeConnectionRule),
		alignof(FSMNodeConnectionRule),
		Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMNodeConnectionRule()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMNodeConnectionRule_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMNodeConnectionRule"), sizeof(FSMNodeConnectionRule), Get_Z_Construct_UScriptStruct_FSMNodeConnectionRule_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMNodeConnectionRule_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMNodeConnectionRule_Hash() { return 2499434472U; }

static_assert(std::is_polymorphic<FSMStateMachineClassRule>() == std::is_polymorphic<FSMNodeClassRule>(), "USTRUCT FSMStateMachineClassRule cannot be polymorphic unless super FSMNodeClassRule is polymorphic");

class UScriptStruct* FSMStateMachineClassRule::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMStateMachineClassRule_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMStateMachineClassRule, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMStateMachineClassRule"), sizeof(FSMStateMachineClassRule), Get_Z_Construct_UScriptStruct_FSMStateMachineClassRule_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMStateMachineClassRule>()
{
	return FSMStateMachineClassRule::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMStateMachineClassRule(FSMStateMachineClassRule::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMStateMachineClassRule"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMStateMachineClassRule
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMStateMachineClassRule()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMStateMachineClassRule")),new UScriptStruct::TCppStructOps<FSMStateMachineClassRule>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMStateMachineClassRule;
	struct Z_Construct_UScriptStruct_FSMStateMachineClassRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_StateMachineClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMStateMachineClassRule_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMStateMachineClassRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMStateMachineClassRule>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMStateMachineClassRule_Statics::NewProp_StateMachineClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "Rule" },
		{ "Comment", "/** The state machine class to look for. */" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "The state machine class to look for." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSMStateMachineClassRule_Statics::NewProp_StateMachineClass = { "StateMachineClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMStateMachineClassRule, StateMachineClass), Z_Construct_UClass_USMStateMachineInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMStateMachineClassRule_Statics::NewProp_StateMachineClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateMachineClassRule_Statics::NewProp_StateMachineClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMStateMachineClassRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMStateMachineClassRule_Statics::NewProp_StateMachineClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMStateMachineClassRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMNodeClassRule,
		&NewStructOps,
		"SMStateMachineClassRule",
		sizeof(FSMStateMachineClassRule),
		alignof(FSMStateMachineClassRule),
		Z_Construct_UScriptStruct_FSMStateMachineClassRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateMachineClassRule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMStateMachineClassRule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateMachineClassRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMStateMachineClassRule()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMStateMachineClassRule_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMStateMachineClassRule"), sizeof(FSMStateMachineClassRule), Get_Z_Construct_UScriptStruct_FSMStateMachineClassRule_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMStateMachineClassRule_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMStateMachineClassRule_Hash() { return 3475590234U; }

static_assert(std::is_polymorphic<FSMStateClassRule>() == std::is_polymorphic<FSMNodeClassRule>(), "USTRUCT FSMStateClassRule cannot be polymorphic unless super FSMNodeClassRule is polymorphic");

class UScriptStruct* FSMStateClassRule::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMStateClassRule_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMStateClassRule, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMStateClassRule"), sizeof(FSMStateClassRule), Get_Z_Construct_UScriptStruct_FSMStateClassRule_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMStateClassRule>()
{
	return FSMStateClassRule::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMStateClassRule(FSMStateClassRule::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMStateClassRule"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMStateClassRule
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMStateClassRule()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMStateClassRule")),new UScriptStruct::TCppStructOps<FSMStateClassRule>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMStateClassRule;
	struct Z_Construct_UScriptStruct_FSMStateClassRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_StateClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMStateClassRule_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMStateClassRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMStateClassRule>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMStateClassRule_Statics::NewProp_StateClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "Rule" },
		{ "Comment", "/** The state class to look for. */" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "The state class to look for." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSMStateClassRule_Statics::NewProp_StateClass = { "StateClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMStateClassRule, StateClass), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMStateClassRule_Statics::NewProp_StateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateClassRule_Statics::NewProp_StateClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMStateClassRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMStateClassRule_Statics::NewProp_StateClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMStateClassRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMNodeClassRule,
		&NewStructOps,
		"SMStateClassRule",
		sizeof(FSMStateClassRule),
		alignof(FSMStateClassRule),
		Z_Construct_UScriptStruct_FSMStateClassRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateClassRule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMStateClassRule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateClassRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMStateClassRule()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMStateClassRule_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMStateClassRule"), sizeof(FSMStateClassRule), Get_Z_Construct_UScriptStruct_FSMStateClassRule_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMStateClassRule_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMStateClassRule_Hash() { return 66641165U; }
class UScriptStruct* FSMNodeClassRule::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMNodeClassRule_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMNodeClassRule, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMNodeClassRule"), sizeof(FSMNodeClassRule), Get_Z_Construct_UScriptStruct_FSMNodeClassRule_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMNodeClassRule>()
{
	return FSMNodeClassRule::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMNodeClassRule(FSMNodeClassRule::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMNodeClassRule"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMNodeClassRule
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMNodeClassRule()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMNodeClassRule")),new UScriptStruct::TCppStructOps<FSMNodeClassRule>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMNodeClassRule;
	struct Z_Construct_UScriptStruct_FSMNodeClassRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeChildren_MetaData[];
#endif
		static void NewProp_bIncludeChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNOT_MetaData[];
#endif
		static void NewProp_bNOT_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNOT;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMNodeClassRule>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::NewProp_bIncludeChildren_MetaData[] = {
		{ "Category", "Rule" },
		{ "Comment", "/** If all children of this class should be considered. */" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "If all children of this class should be considered." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::NewProp_bIncludeChildren_SetBit(void* Obj)
	{
		((FSMNodeClassRule*)Obj)->bIncludeChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::NewProp_bIncludeChildren = { "bIncludeChildren", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSMNodeClassRule), &Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::NewProp_bIncludeChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::NewProp_bIncludeChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::NewProp_bIncludeChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::NewProp_bNOT_MetaData[] = {
		{ "Category", "Rule" },
		{ "Comment", "/** Invert the rule. */" },
		{ "ModuleRelativePath", "Public/Nodes/Rules/SMNodeRules.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Invert the rule." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::NewProp_bNOT_SetBit(void* Obj)
	{
		((FSMNodeClassRule*)Obj)->bNOT = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::NewProp_bNOT = { "bNOT", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSMNodeClassRule), &Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::NewProp_bNOT_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::NewProp_bNOT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::NewProp_bNOT_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::NewProp_bIncludeChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::NewProp_bNOT,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		&NewStructOps,
		"SMNodeClassRule",
		sizeof(FSMNodeClassRule),
		alignof(FSMNodeClassRule),
		Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMNodeClassRule()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMNodeClassRule_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMNodeClassRule"), sizeof(FSMNodeClassRule), Get_Z_Construct_UScriptStruct_FSMNodeClassRule_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMNodeClassRule_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMNodeClassRule_Hash() { return 695338722U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
