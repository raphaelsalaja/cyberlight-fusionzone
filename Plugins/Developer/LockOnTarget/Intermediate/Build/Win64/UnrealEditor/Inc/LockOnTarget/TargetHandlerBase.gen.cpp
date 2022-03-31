// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LockOnTarget/Public/LockOnSubobjects/TargetHandlers/TargetHandlerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetHandlerBase() {}
// Cross Module References
	LOCKONTARGET_API UClass* Z_Construct_UClass_UTargetHandlerBase_NoRegister();
	LOCKONTARGET_API UClass* Z_Construct_UClass_UTargetHandlerBase();
	LOCKONTARGET_API UClass* Z_Construct_UClass_ULockOnSubobjectBase();
	UPackage* Z_Construct_UPackage__Script_LockOnTarget();
	LOCKONTARGET_API UScriptStruct* Z_Construct_UScriptStruct_FTargetInfo();
// End Cross Module References
	DEFINE_FUNCTION(UTargetHandlerBase::execCanContinueTargeting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanContinueTargeting_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetHandlerBase::execSwitchTarget)
	{
		P_GET_STRUCT_REF(FTargetInfo,Z_Param_Out_TargetInfo);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayerInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwitchTarget_Implementation(Z_Param_Out_TargetInfo,Z_Param_PlayerInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetHandlerBase::execFindTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetInfo*)Z_Param__Result=P_THIS->FindTarget_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UTargetHandlerBase_CanContinueTargeting = FName(TEXT("CanContinueTargeting"));
	bool UTargetHandlerBase::CanContinueTargeting()
	{
		TargetHandlerBase_eventCanContinueTargeting_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UTargetHandlerBase_CanContinueTargeting),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTargetHandlerBase_FindTarget = FName(TEXT("FindTarget"));
	FTargetInfo UTargetHandlerBase::FindTarget()
	{
		TargetHandlerBase_eventFindTarget_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UTargetHandlerBase_FindTarget),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTargetHandlerBase_OnTargetLocked = FName(TEXT("OnTargetLocked"));
	void UTargetHandlerBase::OnTargetLocked()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTargetHandlerBase_OnTargetLocked),NULL);
	}
	static FName NAME_UTargetHandlerBase_OnTargetUnlocked = FName(TEXT("OnTargetUnlocked"));
	void UTargetHandlerBase::OnTargetUnlocked()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTargetHandlerBase_OnTargetUnlocked),NULL);
	}
	static FName NAME_UTargetHandlerBase_SwitchTarget = FName(TEXT("SwitchTarget"));
	bool UTargetHandlerBase::SwitchTarget(FTargetInfo& TargetInfo, float PlayerInput)
	{
		TargetHandlerBase_eventSwitchTarget_Parms Parms;
		Parms.TargetInfo=TargetInfo;
		Parms.PlayerInput=PlayerInput;
		ProcessEvent(FindFunctionChecked(NAME_UTargetHandlerBase_SwitchTarget),&Parms);
		TargetInfo=Parms.TargetInfo;
		return !!Parms.ReturnValue;
	}
	void UTargetHandlerBase::StaticRegisterNativesUTargetHandlerBase()
	{
		UClass* Class = UTargetHandlerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanContinueTargeting", &UTargetHandlerBase::execCanContinueTargeting },
			{ "FindTarget", &UTargetHandlerBase::execFindTarget },
			{ "SwitchTarget", &UTargetHandlerBase::execSwitchTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTargetHandlerBase_CanContinueTargeting_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTargetHandlerBase_CanContinueTargeting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TargetHandlerBase_eventCanContinueTargeting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetHandlerBase_CanContinueTargeting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TargetHandlerBase_eventCanContinueTargeting_Parms), &Z_Construct_UFunction_UTargetHandlerBase_CanContinueTargeting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetHandlerBase_CanContinueTargeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetHandlerBase_CanContinueTargeting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetHandlerBase_CanContinueTargeting_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Is Target can be locked until next update. */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/TargetHandlerBase.h" },
		{ "ToolTip", "Is Target can be locked until next update." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetHandlerBase_CanContinueTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetHandlerBase, nullptr, "CanContinueTargeting", nullptr, nullptr, sizeof(TargetHandlerBase_eventCanContinueTargeting_Parms), Z_Construct_UFunction_UTargetHandlerBase_CanContinueTargeting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetHandlerBase_CanContinueTargeting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetHandlerBase_CanContinueTargeting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetHandlerBase_CanContinueTargeting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetHandlerBase_CanContinueTargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetHandlerBase_CanContinueTargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetHandlerBase_FindTarget_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetHandlerBase_FindTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetHandlerBase_eventFindTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetInfo, METADATA_PARAMS(nullptr, 0) }; // 2314130026
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetHandlerBase_FindTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetHandlerBase_FindTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetHandlerBase_FindTarget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Find new Target for Capturing.\n\x09 * Should return valid HelperComponent with Socket.\n\x09 *\n\x09 * @return - New Target information(HelperComponent and Socket).\n\x09 */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/TargetHandlerBase.h" },
		{ "ToolTip", "Find new Target for Capturing.\nShould return valid HelperComponent with Socket.\n\n@return - New Target information(HelperComponent and Socket)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetHandlerBase_FindTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetHandlerBase, nullptr, "FindTarget", nullptr, nullptr, sizeof(TargetHandlerBase_eventFindTarget_Parms), Z_Construct_UFunction_UTargetHandlerBase_FindTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetHandlerBase_FindTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetHandlerBase_FindTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetHandlerBase_FindTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetHandlerBase_FindTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetHandlerBase_FindTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetHandlerBase_OnTargetLocked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetHandlerBase_OnTargetLocked_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Comment", "/** Called when Lock On Component successfully locked Target. */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/TargetHandlerBase.h" },
		{ "ToolTip", "Called when Lock On Component successfully locked Target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetHandlerBase_OnTargetLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetHandlerBase, nullptr, "OnTargetLocked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetHandlerBase_OnTargetLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetHandlerBase_OnTargetLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetHandlerBase_OnTargetLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetHandlerBase_OnTargetLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetHandlerBase_OnTargetUnlocked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetHandlerBase_OnTargetUnlocked_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Comment", "/** Called when Lock On Component successfully unlocked Target. */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/TargetHandlerBase.h" },
		{ "ToolTip", "Called when Lock On Component successfully unlocked Target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetHandlerBase_OnTargetUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetHandlerBase, nullptr, "OnTargetUnlocked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetHandlerBase_OnTargetUnlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetHandlerBase_OnTargetUnlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetHandlerBase_OnTargetUnlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetHandlerBase_OnTargetUnlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetInfo;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerInput;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget_Statics::NewProp_TargetInfo = { "TargetInfo", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetHandlerBase_eventSwitchTarget_Parms, TargetInfo), Z_Construct_UScriptStruct_FTargetInfo, METADATA_PARAMS(nullptr, 0) }; // 2314130026
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget_Statics::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetHandlerBase_eventSwitchTarget_Parms, PlayerInput), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TargetHandlerBase_eventSwitchTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TargetHandlerBase_eventSwitchTarget_Parms), &Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget_Statics::NewProp_TargetInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget_Statics::NewProp_PlayerInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Perform switch Target.\n\x09 * For switching to new Target use new HelperComponent and Socket.\n\x09 * For switching Socket in current Target, set current HelperComponent and new Socket.\n\x09 * \n\x09 * (You can get HelperComponent via GetLockOn()->GetHelperComponent()).\n\x09 * \n\x09 * @param TargetInfo - out\x09New Target info(New Target with socket or new socket for current Target).\n\x09 * @param PlayerInput - Player input in trigonometric deg(0.f, 160.f).\n\x09 * @return - is switching successful(Target found or new socket) otherwise should be false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/TargetHandlerBase.h" },
		{ "ToolTip", "Perform switch Target.\nFor switching to new Target use new HelperComponent and Socket.\nFor switching Socket in current Target, set current HelperComponent and new Socket.\n\n(You can get HelperComponent via GetLockOn()->GetHelperComponent()).\n\n@param TargetInfo - out      New Target info(New Target with socket or new socket for current Target).\n@param PlayerInput - Player input in trigonometric deg(0.f, 160.f).\n@return - is switching successful(Target found or new socket) otherwise should be false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetHandlerBase, nullptr, "SwitchTarget", nullptr, nullptr, sizeof(TargetHandlerBase_eventSwitchTarget_Parms), Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetHandlerBase);
	UClass* Z_Construct_UClass_UTargetHandlerBase_NoRegister()
	{
		return UTargetHandlerBase::StaticClass();
	}
	struct Z_Construct_UClass_UTargetHandlerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetHandlerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULockOnSubobjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LockOnTarget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTargetHandlerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetHandlerBase_CanContinueTargeting, "CanContinueTargeting" }, // 2246394311
		{ &Z_Construct_UFunction_UTargetHandlerBase_FindTarget, "FindTarget" }, // 2134937209
		{ &Z_Construct_UFunction_UTargetHandlerBase_OnTargetLocked, "OnTargetLocked" }, // 4071152321
		{ &Z_Construct_UFunction_UTargetHandlerBase_OnTargetUnlocked, "OnTargetUnlocked" }, // 3830700755
		{ &Z_Construct_UFunction_UTargetHandlerBase_SwitchTarget, "SwitchTarget" }, // 2015239335
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetHandlerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LockOnTarget" },
		{ "Comment", "/**\n * LockOnTargetComponent' subobject abstract class which handle Target.\n * Responsible for finding, switching and maintaining Target.\n * \n * Should override FindTarget(), SwitchTarget(), CanContinueTargeting().\n */" },
		{ "IncludePath", "LockOnSubobjects/TargetHandlers/TargetHandlerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LockOnSubobjects/TargetHandlers/TargetHandlerBase.h" },
		{ "ToolTip", "LockOnTargetComponent' subobject abstract class which handle Target.\nResponsible for finding, switching and maintaining Target.\n\nShould override FindTarget(), SwitchTarget(), CanContinueTargeting()." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetHandlerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetHandlerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetHandlerBase_Statics::ClassParams = {
		&UTargetHandlerBase::StaticClass,
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
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetHandlerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetHandlerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetHandlerBase()
	{
		if (!Z_Registration_Info_UClass_UTargetHandlerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetHandlerBase.OuterSingleton, Z_Construct_UClass_UTargetHandlerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetHandlerBase.OuterSingleton;
	}
	template<> LOCKONTARGET_API UClass* StaticClass<UTargetHandlerBase>()
	{
		return UTargetHandlerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetHandlerBase);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetHandlerBase, UTargetHandlerBase::StaticClass, TEXT("UTargetHandlerBase"), &Z_Registration_Info_UClass_UTargetHandlerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetHandlerBase), 1665983970U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_2484948831(TEXT("/Script/LockOnTarget"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LockOnTarget_Source_LockOnTarget_Public_LockOnSubobjects_TargetHandlers_TargetHandlerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
