// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LockOnTarget/Public/Utilities/Structs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructs() {}
// Cross Module References
	LOCKONTARGET_API UScriptStruct* Z_Construct_UScriptStruct_FTargetInfo();
	UPackage* Z_Construct_UPackage__Script_LockOnTarget();
	LOCKONTARGET_API UClass* Z_Construct_UClass_UTargetingHelperComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FTargetInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCKONTARGET_API uint32 Get_Z_Construct_UScriptStruct_FTargetInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetInfo, Z_Construct_UPackage__Script_LockOnTarget(), TEXT("TargetInfo"), sizeof(FTargetInfo), Get_Z_Construct_UScriptStruct_FTargetInfo_Hash());
	}
	return Singleton;
}
template<> LOCKONTARGET_API UScriptStruct* StaticStruct<FTargetInfo>()
{
	return FTargetInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetInfo(FTargetInfo::StaticStruct, TEXT("/Script/LockOnTarget"), TEXT("TargetInfo"), false, nullptr, nullptr);
static struct FScriptStruct_LockOnTarget_StaticRegisterNativesFTargetInfo
{
	FScriptStruct_LockOnTarget_StaticRegisterNativesFTargetInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetInfo")),new UScriptStruct::TCppStructOps<FTargetInfo>);
	}
} ScriptStruct_LockOnTarget_StaticRegisterNativesFTargetInfo;
	struct Z_Construct_UScriptStruct_FTargetInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HelperComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HelperComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketForCapturing_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketForCapturing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utilities/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetInfo_Statics::NewProp_HelperComponent_MetaData[] = {
		{ "Category", "LOT_TargetInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utilities/Structs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTargetInfo_Statics::NewProp_HelperComponent = { "HelperComponent", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetInfo, HelperComponent), Z_Construct_UClass_UTargetingHelperComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetInfo_Statics::NewProp_HelperComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetInfo_Statics::NewProp_HelperComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetInfo_Statics::NewProp_SocketForCapturing_MetaData[] = {
		{ "Category", "LOT_TargetInfo" },
		{ "ModuleRelativePath", "Public/Utilities/Structs.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetInfo_Statics::NewProp_SocketForCapturing = { "SocketForCapturing", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetInfo, SocketForCapturing), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetInfo_Statics::NewProp_SocketForCapturing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetInfo_Statics::NewProp_SocketForCapturing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetInfo_Statics::NewProp_HelperComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetInfo_Statics::NewProp_SocketForCapturing,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LockOnTarget,
		nullptr,
		&NewStructOps,
		"TargetInfo",
		sizeof(FTargetInfo),
		alignof(FTargetInfo),
		Z_Construct_UScriptStruct_FTargetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LockOnTarget();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetInfo"), sizeof(FTargetInfo), Get_Z_Construct_UScriptStruct_FTargetInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetInfo_Hash() { return 1198669891U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
