// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/ISMStateMachineInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISMStateMachineInterface() {}
// Cross Module References
	SMSYSTEM_API UEnum* Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstanceInterface_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstanceInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineInterface_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineInterface();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineNetworkedInterface_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineNetworkedInterface();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESMNetworkConfigurationType;
	static UEnum* ESMNetworkConfigurationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESMNetworkConfigurationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESMNetworkConfigurationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType, Z_Construct_UPackage__Script_SMSystem(), TEXT("ESMNetworkConfigurationType"));
		}
		return Z_Registration_Info_UEnum_ESMNetworkConfigurationType.OuterSingleton;
	}
	template<> SMSYSTEM_API UEnum* StaticEnum<ESMNetworkConfigurationType>()
	{
		return ESMNetworkConfigurationType_StaticEnum();
	}
	struct Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType_Statics::Enumerators[] = {
		{ "SM_Client", (int64)SM_Client },
		{ "SM_Server", (int64)SM_Server },
		{ "SM_ClientAndServer", (int64)SM_ClientAndServer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ISMStateMachineInterface.h" },
		{ "SM_Client.DisplayName", "Client" },
		{ "SM_Client.Name", "SM_Client" },
		{ "SM_ClientAndServer.DisplayName", "ClientAndServer" },
		{ "SM_ClientAndServer.Name", "SM_ClientAndServer" },
		{ "SM_Server.DisplayName", "Server" },
		{ "SM_Server.Name", "SM_Server" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		"ESMNetworkConfigurationType",
		"ESMNetworkConfigurationType",
		Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType()
	{
		if (!Z_Registration_Info_UEnum_ESMNetworkConfigurationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESMNetworkConfigurationType.InnerSingleton, Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESMNetworkConfigurationType.InnerSingleton;
	}
	void USMInstanceInterface::StaticRegisterNativesUSMInstanceInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMInstanceInterface);
	UClass* Z_Construct_UClass_USMInstanceInterface_NoRegister()
	{
		return USMInstanceInterface::StaticClass();
	}
	struct Z_Construct_UClass_USMInstanceInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMInstanceInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstanceInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ISMStateMachineInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMInstanceInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISMInstanceInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMInstanceInterface_Statics::ClassParams = {
		&USMInstanceInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USMInstanceInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMInstanceInterface()
	{
		if (!Z_Registration_Info_UClass_USMInstanceInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMInstanceInterface.OuterSingleton, Z_Construct_UClass_USMInstanceInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMInstanceInterface.OuterSingleton;
	}
	template<> SMSYSTEM_API UClass* StaticClass<USMInstanceInterface>()
	{
		return USMInstanceInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMInstanceInterface);
	void USMStateMachineInterface::StaticRegisterNativesUSMStateMachineInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMStateMachineInterface);
	UClass* Z_Construct_UClass_USMStateMachineInterface_NoRegister()
	{
		return USMStateMachineInterface::StaticClass();
	}
	struct Z_Construct_UClass_USMStateMachineInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMStateMachineInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ISMStateMachineInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMStateMachineInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISMStateMachineInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMStateMachineInterface_Statics::ClassParams = {
		&USMStateMachineInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USMStateMachineInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMStateMachineInterface()
	{
		if (!Z_Registration_Info_UClass_USMStateMachineInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMStateMachineInterface.OuterSingleton, Z_Construct_UClass_USMStateMachineInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMStateMachineInterface.OuterSingleton;
	}
	template<> SMSYSTEM_API UClass* StaticClass<USMStateMachineInterface>()
	{
		return USMStateMachineInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMStateMachineInterface);
	DEFINE_FUNCTION(ISMStateMachineNetworkedInterface::execIsSimulatedProxy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSimulatedProxy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISMStateMachineNetworkedInterface::execHasAuthority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAuthority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISMStateMachineNetworkedInterface::execIsConfiguredForNetworking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConfiguredForNetworking();
		P_NATIVE_END;
	}
	void USMStateMachineNetworkedInterface::StaticRegisterNativesUSMStateMachineNetworkedInterface()
	{
		UClass* Class = USMStateMachineNetworkedInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasAuthority", &ISMStateMachineNetworkedInterface::execHasAuthority },
			{ "IsConfiguredForNetworking", &ISMStateMachineNetworkedInterface::execIsConfiguredForNetworking },
			{ "IsSimulatedProxy", &ISMStateMachineNetworkedInterface::execIsSimulatedProxy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMStateMachineNetworkedInterface_HasAuthority_Statics
	{
		struct SMStateMachineNetworkedInterface_eventHasAuthority_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMStateMachineNetworkedInterface_HasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateMachineNetworkedInterface_eventHasAuthority_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateMachineNetworkedInterface_HasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateMachineNetworkedInterface_eventHasAuthority_Parms), &Z_Construct_UFunction_USMStateMachineNetworkedInterface_HasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineNetworkedInterface_HasAuthority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineNetworkedInterface_HasAuthority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineNetworkedInterface_HasAuthority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "Comment", "/**\n\x09 * If the interface is considered to have authority for Logic Driver. (Such as an instance running on a server)\n\x09 * This is not necessarily the same as UE's native HasAuthority.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ISMStateMachineInterface.h" },
		{ "ToolTip", "If the interface is considered to have authority for Logic Driver. (Such as an instance running on a server)\nThis is not necessarily the same as UE's native HasAuthority." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineNetworkedInterface_HasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineNetworkedInterface, nullptr, "HasAuthority", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMStateMachineNetworkedInterface_HasAuthority_Statics::SMStateMachineNetworkedInterface_eventHasAuthority_Parms), Z_Construct_UFunction_USMStateMachineNetworkedInterface_HasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineNetworkedInterface_HasAuthority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineNetworkedInterface_HasAuthority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineNetworkedInterface_HasAuthority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineNetworkedInterface_HasAuthority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMStateMachineNetworkedInterface_HasAuthority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsConfiguredForNetworking_Statics
	{
		struct SMStateMachineNetworkedInterface_eventIsConfiguredForNetworking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsConfiguredForNetworking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateMachineNetworkedInterface_eventIsConfiguredForNetworking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsConfiguredForNetworking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateMachineNetworkedInterface_eventIsConfiguredForNetworking_Parms), &Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsConfiguredForNetworking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsConfiguredForNetworking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsConfiguredForNetworking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsConfiguredForNetworking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "Comment", "/** Checks if this interface is networked and replicated. */" },
		{ "ModuleRelativePath", "Public/ISMStateMachineInterface.h" },
		{ "ToolTip", "Checks if this interface is networked and replicated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsConfiguredForNetworking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineNetworkedInterface, nullptr, "IsConfiguredForNetworking", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsConfiguredForNetworking_Statics::SMStateMachineNetworkedInterface_eventIsConfiguredForNetworking_Parms), Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsConfiguredForNetworking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsConfiguredForNetworking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsConfiguredForNetworking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsConfiguredForNetworking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsConfiguredForNetworking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsConfiguredForNetworking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsSimulatedProxy_Statics
	{
		struct SMStateMachineNetworkedInterface_eventIsSimulatedProxy_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsSimulatedProxy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateMachineNetworkedInterface_eventIsSimulatedProxy_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsSimulatedProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateMachineNetworkedInterface_eventIsSimulatedProxy_Parms), &Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsSimulatedProxy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsSimulatedProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsSimulatedProxy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsSimulatedProxy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "Comment", "/** If this interface is only a simulated proxy. */" },
		{ "ModuleRelativePath", "Public/ISMStateMachineInterface.h" },
		{ "ToolTip", "If this interface is only a simulated proxy." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsSimulatedProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineNetworkedInterface, nullptr, "IsSimulatedProxy", nullptr, nullptr, sizeof(Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsSimulatedProxy_Statics::SMStateMachineNetworkedInterface_eventIsSimulatedProxy_Parms), Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsSimulatedProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsSimulatedProxy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsSimulatedProxy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsSimulatedProxy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsSimulatedProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsSimulatedProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMStateMachineNetworkedInterface);
	UClass* Z_Construct_UClass_USMStateMachineNetworkedInterface_NoRegister()
	{
		return USMStateMachineNetworkedInterface::StaticClass();
	}
	struct Z_Construct_UClass_USMStateMachineNetworkedInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMStateMachineNetworkedInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMStateMachineNetworkedInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMStateMachineNetworkedInterface_HasAuthority, "HasAuthority" }, // 1623881793
		{ &Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsConfiguredForNetworking, "IsConfiguredForNetworking" }, // 2759549847
		{ &Z_Construct_UFunction_USMStateMachineNetworkedInterface_IsSimulatedProxy, "IsSimulatedProxy" }, // 2422309047
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineNetworkedInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/ISMStateMachineInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMStateMachineNetworkedInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISMStateMachineNetworkedInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMStateMachineNetworkedInterface_Statics::ClassParams = {
		&USMStateMachineNetworkedInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USMStateMachineNetworkedInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineNetworkedInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMStateMachineNetworkedInterface()
	{
		if (!Z_Registration_Info_UClass_USMStateMachineNetworkedInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMStateMachineNetworkedInterface.OuterSingleton, Z_Construct_UClass_USMStateMachineNetworkedInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMStateMachineNetworkedInterface.OuterSingleton;
	}
	template<> SMSYSTEM_API UClass* StaticClass<USMStateMachineNetworkedInterface>()
	{
		return USMStateMachineNetworkedInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMStateMachineNetworkedInterface);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_Statics::EnumInfo[] = {
		{ ESMNetworkConfigurationType_StaticEnum, TEXT("ESMNetworkConfigurationType"), &Z_Registration_Info_UEnum_ESMNetworkConfigurationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2828619378U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMInstanceInterface, USMInstanceInterface::StaticClass, TEXT("USMInstanceInterface"), &Z_Registration_Info_UClass_USMInstanceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMInstanceInterface), 2982852812U) },
		{ Z_Construct_UClass_USMStateMachineInterface, USMStateMachineInterface::StaticClass, TEXT("USMStateMachineInterface"), &Z_Registration_Info_UClass_USMStateMachineInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMStateMachineInterface), 686355116U) },
		{ Z_Construct_UClass_USMStateMachineNetworkedInterface, USMStateMachineNetworkedInterface::StaticClass, TEXT("USMStateMachineNetworkedInterface"), &Z_Registration_Info_UClass_USMStateMachineNetworkedInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMStateMachineNetworkedInterface), 3685559354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_3720716763(TEXT("/Script/SMSystem"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystem_Public_ISMStateMachineInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
