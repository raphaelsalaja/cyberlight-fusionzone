// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProInstanceToolsPlugin/Private/ProInstanceToolsCircle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProInstanceToolsCircle() {}
// Cross Module References
	PROINSTANCETOOLSPLUGIN_API UEnum* Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceToolsCircleInstanceRotationType();
	UPackage* Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
	PROINSTANCETOOLSPLUGIN_API UClass* Z_Construct_UClass_AProInstanceToolsCircle_NoRegister();
	PROINSTANCETOOLSPLUGIN_API UClass* Z_Construct_UClass_AProInstanceToolsCircle();
	PROINSTANCETOOLSPLUGIN_API UClass* Z_Construct_UClass_AProInstanceToolsParent();
// End Cross Module References
	static UEnum* EProInstanceToolsCircleInstanceRotationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceToolsCircleInstanceRotationType, Z_Construct_UPackage__Script_ProInstanceToolsPlugin(), TEXT("EProInstanceToolsCircleInstanceRotationType"));
		}
		return Singleton;
	}
	template<> PROINSTANCETOOLSPLUGIN_API UEnum* StaticEnum<EProInstanceToolsCircleInstanceRotationType>()
	{
		return EProInstanceToolsCircleInstanceRotationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProInstanceToolsCircleInstanceRotationType(EProInstanceToolsCircleInstanceRotationType_StaticEnum, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("EProInstanceToolsCircleInstanceRotationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceToolsCircleInstanceRotationType_Hash() { return 1511060233U; }
	UEnum* Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceToolsCircleInstanceRotationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProInstanceToolsCircleInstanceRotationType"), 0, Get_Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceToolsCircleInstanceRotationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CircleInstanceRotationType_Default", (int64)CircleInstanceRotationType_Default },
				{ "CircleInstanceRotationType_ToCenter", (int64)CircleInstanceRotationType_ToCenter },
				{ "CircleInstanceRotationType_FromCenter", (int64)CircleInstanceRotationType_FromCenter },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CircleInstanceRotationType_Default.DisplayName", "Default" },
				{ "CircleInstanceRotationType_Default.Name", "CircleInstanceRotationType_Default" },
				{ "CircleInstanceRotationType_FromCenter.DisplayName", "From Center" },
				{ "CircleInstanceRotationType_FromCenter.Name", "CircleInstanceRotationType_FromCenter" },
				{ "CircleInstanceRotationType_ToCenter.DisplayName", "To Center" },
				{ "CircleInstanceRotationType_ToCenter.Name", "CircleInstanceRotationType_ToCenter" },
				{ "ModuleRelativePath", "Private/ProInstanceToolsCircle.h" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
				nullptr,
				"EProInstanceToolsCircleInstanceRotationType",
				"EProInstanceToolsCircleInstanceRotationType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AProInstanceToolsCircle::StaticRegisterNativesAProInstanceToolsCircle()
	{
	}
	UClass* Z_Construct_UClass_AProInstanceToolsCircle_NoRegister()
	{
		return AProInstanceToolsCircle::StaticClass();
	}
	struct Z_Construct_UClass_AProInstanceToolsCircle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInstances_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProInstanceToolsCircle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProInstanceToolsParent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsCircle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProInstanceToolsCircle.h" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsCircle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_NumInstances_MetaData[] = {
		{ "Category", "Pro Instance Circle" },
		{ "Comment", "/** Number of instances to spawn. */" },
		{ "DisplayName", "Num Instances" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsCircle.h" },
		{ "ToolTip", "Number of instances to spawn." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_NumInstances = { "NumInstances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsCircle, NumInstances), METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_NumInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_NumInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "Pro Instance Circle" },
		{ "Comment", "/** Angle of a circle pattern. */" },
		{ "DisplayName", "Angle" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsCircle.h" },
		{ "ToolTip", "Angle of a circle pattern." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsCircle, Angle), METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_Angle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Pro Instance Circle" },
		{ "Comment", "/** Radius of a circle pattern. */" },
		{ "DisplayName", "Radius" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsCircle.h" },
		{ "ToolTip", "Radius of a circle pattern." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsCircle, Radius), METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_RotationType_MetaData[] = {
		{ "Category", "Pro Instance Circle" },
		{ "Comment", "// Deprecated, replaced with Rotate to Actor\n" },
		{ "DisplayName", "Rotation Type" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsCircle.h" },
		{ "ToolTip", "Deprecated, replaced with Rotate to Actor" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_RotationType = { "RotationType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsCircle, RotationType), Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceToolsCircleInstanceRotationType, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_RotationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_RotationType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProInstanceToolsCircle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_NumInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsCircle_Statics::NewProp_RotationType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProInstanceToolsCircle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProInstanceToolsCircle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProInstanceToolsCircle_Statics::ClassParams = {
		&AProInstanceToolsCircle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProInstanceToolsCircle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsCircle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsCircle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsCircle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProInstanceToolsCircle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProInstanceToolsCircle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProInstanceToolsCircle, 2875303761);
	template<> PROINSTANCETOOLSPLUGIN_API UClass* StaticClass<AProInstanceToolsCircle>()
	{
		return AProInstanceToolsCircle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProInstanceToolsCircle(Z_Construct_UClass_AProInstanceToolsCircle, &AProInstanceToolsCircle::StaticClass, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("AProInstanceToolsCircle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProInstanceToolsCircle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
