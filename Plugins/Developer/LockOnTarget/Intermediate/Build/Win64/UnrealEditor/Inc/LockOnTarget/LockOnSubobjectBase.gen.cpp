// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LockOnTarget/Public/LockOnSubobjects/LockOnSubobjectBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnSubobjectBase, nullptr, "GetLockOn", nullptr, nullptr, sizeof(LockOnSubobjectBase_eventGetLockOn_Parms), Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		{ &Z_Construct_UFunction_ULockOnSubobjectBase_GetLockOn, "GetLockOn" }, // 3679231737
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULockOnSubobjectBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULockOnSubobjectBase, 2037941787);
	template<> LOCKONTARGET_API UClass* StaticClass<ULockOnSubobjectBase>()
	{
		return ULockOnSubobjectBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULockOnSubobjectBase(Z_Construct_UClass_ULockOnSubobjectBase, &ULockOnSubobjectBase::StaticClass, TEXT("/Script/LockOnTarget"), TEXT("ULockOnSubobjectBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULockOnSubobjectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
