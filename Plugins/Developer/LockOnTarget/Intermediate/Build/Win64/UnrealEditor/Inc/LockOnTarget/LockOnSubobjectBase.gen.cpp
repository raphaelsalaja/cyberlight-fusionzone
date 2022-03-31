// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LockOnTarget/Public/LockOnSubobjects/LockOnSubobjectBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockOnSubobjectBase() {}
// Cross Module References
	LOCKONTARGET_API UClass* Z_Construct_UClass_ULockOnSubobjectBase_NoRegister();
	LOCKONTARGET_API UClass* Z_Construct_UClass_ULockOnSubobjectBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LockOnTarget();
	LOCKONTARGET_API UClass* Z_Construct_UClass_ULockOnTargetComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULockOnSubobjectBase::execGetLockOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULockOnTargetComponent**)Z_Param__Result=P_THIS->GetLockOn();
		P_NATIVE_END;
	}
	void ULockOnSubobjectBase::StaticRegisterNativesULockOnSubobjectBase()
	{
		UClass* Class = ULockOnSubobjectBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLockOn", &ULockOnSubobjectBase::execGetLockOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics
	{
		struct LockOnSubobjectBase_eventGetLockOn_Parms
		{
			ULockOnTargetComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LockOnSubobjectBase_eventGetLockOn_Parms, ReturnValue), Z_Construct_UClass_ULockOnTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "LockOnTarget" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/LockOnSubobjectBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnSubobjectBase, nullptr, "GetLockOn", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::LockOnSubobjectBase_eventGetLockOn_Parms), Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULockOnSubobjectBase);
	UClass* Z_Construct_UClass_ULockOnSubobjectBase_NoRegister()
	{
		return ULockOnSubobjectBase::StaticClass();
	}
	struct Z_Construct_UClass_ULockOnSubobjectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULockOnSubobjectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LockOnTarget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULockOnSubobjectBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn, "GetLockOn" }, // 3054047379
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnSubobjectBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base LockOnTargetComponent subobject class.\n */" },
		{ "IncludePath", "LockOnSubobjects/LockOnSubobjectBase.h" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/LockOnSubobjectBase.h" },
		{ "ToolTip", "Base LockOnTargetComponent subobject class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULockOnSubobjectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULockOnSubobjectBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULockOnSubobjectBase_Statics::ClassParams = {
		&ULockOnSubobjectBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULockOnSubobjectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnSubobjectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULockOnSubobjectBase()
	{
		if (!Z_Registration_Info_UClass_ULockOnSubobjectBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULockOnSubobjectBase.OuterSingleton, Z_Construct_UClass_ULockOnSubobjectBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULockOnSubobjectBase.OuterSingleton;
	}
	template<> LOCKONTARGET_API UClass* StaticClass<ULockOnSubobjectBase>()
	{
		return ULockOnSubobjectBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULockOnSubobjectBase);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_LockOnSubobjectBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_LockOnSubobjectBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULockOnSubobjectBase, ULockOnSubobjectBase::StaticClass, TEXT("ULockOnSubobjectBase"), &Z_Registration_Info_UClass_ULockOnSubobjectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULockOnSubobjectBase), 4268145246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_LockOnSubobjectBase_h_3854476674(TEXT("/Script/LockOnTarget"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_LockOnSubobjectBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_LockOnSubobjectBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
