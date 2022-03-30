// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProInstanceToolsPlugin/Private/ProInstanceToolsParent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProInstanceToolsParent() {}
// Cross Module References
	PROINSTANCETOOLSPLUGIN_API UEnum* Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceRotateToActorByAxes();
	UPackage* Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
	PROINSTANCETOOLSPLUGIN_API UEnum* Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceInstanceSelfOverlap();
	PROINSTANCETOOLSPLUGIN_API UEnum* Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceInstanceType();
	PROINSTANCETOOLSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProInstanceInstance();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	PROINSTANCETOOLSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProInstanceInstanceSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
	PROINSTANCETOOLSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProInstanceLocation();
	PROINSTANCETOOLSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProInstanceRotation();
	PROINSTANCETOOLSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProInstanceScale();
	PROINSTANCETOOLSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	PROINSTANCETOOLSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	PROINSTANCETOOLSPLUGIN_API UClass* Z_Construct_UClass_AProInstanceToolsParent_NoRegister();
	PROINSTANCETOOLSPLUGIN_API UClass* Z_Construct_UClass_AProInstanceToolsParent();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
// End Cross Module References
	static UEnum* EProInstanceRotateToActorByAxes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceRotateToActorByAxes, Z_Construct_UPackage__Script_ProInstanceToolsPlugin(), TEXT("EProInstanceRotateToActorByAxes"));
		}
		return Singleton;
	}
	template<> PROINSTANCETOOLSPLUGIN_API UEnum* StaticEnum<EProInstanceRotateToActorByAxes>()
	{
		return EProInstanceRotateToActorByAxes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProInstanceRotateToActorByAxes(EProInstanceRotateToActorByAxes_StaticEnum, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("EProInstanceRotateToActorByAxes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceRotateToActorByAxes_Hash() { return 2408806656U; }
	UEnum* Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceRotateToActorByAxes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProInstanceRotateToActorByAxes"), 0, Get_Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceRotateToActorByAxes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RotateToActorByAxes_XYZ", (int64)RotateToActorByAxes_XYZ },
				{ "RotateToActorByAxes_XY", (int64)RotateToActorByAxes_XY },
				{ "RotateToActorByAxes_Z", (int64)RotateToActorByAxes_Z },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
				{ "RotateToActorByAxes_XY.DisplayName", "XY" },
				{ "RotateToActorByAxes_XY.Name", "RotateToActorByAxes_XY" },
				{ "RotateToActorByAxes_XYZ.DisplayName", "XYZ" },
				{ "RotateToActorByAxes_XYZ.Name", "RotateToActorByAxes_XYZ" },
				{ "RotateToActorByAxes_Z.DisplayName", "Z" },
				{ "RotateToActorByAxes_Z.Name", "RotateToActorByAxes_Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
				nullptr,
				"EProInstanceRotateToActorByAxes",
				"EProInstanceRotateToActorByAxes",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EProInstanceInstanceSelfOverlap_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceInstanceSelfOverlap, Z_Construct_UPackage__Script_ProInstanceToolsPlugin(), TEXT("EProInstanceInstanceSelfOverlap"));
		}
		return Singleton;
	}
	template<> PROINSTANCETOOLSPLUGIN_API UEnum* StaticEnum<EProInstanceInstanceSelfOverlap>()
	{
		return EProInstanceInstanceSelfOverlap_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProInstanceInstanceSelfOverlap(EProInstanceInstanceSelfOverlap_StaticEnum, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("EProInstanceInstanceSelfOverlap"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceInstanceSelfOverlap_Hash() { return 3413770914U; }
	UEnum* Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceInstanceSelfOverlap()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProInstanceInstanceSelfOverlap"), 0, Get_Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceInstanceSelfOverlap_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "InstanceSelfOverlap_Ignore", (int64)InstanceSelfOverlap_Ignore },
				{ "InstanceSelfOverlap_Destroy", (int64)InstanceSelfOverlap_Destroy },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "InstanceSelfOverlap_Destroy.DisplayName", "Destroy" },
				{ "InstanceSelfOverlap_Destroy.Name", "InstanceSelfOverlap_Destroy" },
				{ "InstanceSelfOverlap_Ignore.DisplayName", "Ignore" },
				{ "InstanceSelfOverlap_Ignore.Name", "InstanceSelfOverlap_Ignore" },
				{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
				nullptr,
				"EProInstanceInstanceSelfOverlap",
				"EProInstanceInstanceSelfOverlap",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EProInstanceInstanceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceInstanceType, Z_Construct_UPackage__Script_ProInstanceToolsPlugin(), TEXT("EProInstanceInstanceType"));
		}
		return Singleton;
	}
	template<> PROINSTANCETOOLSPLUGIN_API UEnum* StaticEnum<EProInstanceInstanceType>()
	{
		return EProInstanceInstanceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProInstanceInstanceType(EProInstanceInstanceType_StaticEnum, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("EProInstanceInstanceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceInstanceType_Hash() { return 484002052U; }
	UEnum* Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceInstanceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProInstanceInstanceType"), 0, Get_Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceInstanceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "InstanceType_StaticMesh", (int64)InstanceType_StaticMesh },
				{ "InstanceType_ISM", (int64)InstanceType_ISM },
				{ "InstanceType_HISM", (int64)InstanceType_HISM },
				{ "InstanceType_ActorClass", (int64)InstanceType_ActorClass },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "InstanceType_ActorClass.DisplayName", "Actor Class" },
				{ "InstanceType_ActorClass.Name", "InstanceType_ActorClass" },
				{ "InstanceType_HISM.DisplayName", "Hierarchical Instanced Static Mesh" },
				{ "InstanceType_HISM.Name", "InstanceType_HISM" },
				{ "InstanceType_ISM.DisplayName", "Instanced Static Mesh" },
				{ "InstanceType_ISM.Name", "InstanceType_ISM" },
				{ "InstanceType_StaticMesh.DisplayName", "Static Mesh" },
				{ "InstanceType_StaticMesh.Name", "InstanceType_StaticMesh" },
				{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
				nullptr,
				"EProInstanceInstanceType",
				"EProInstanceInstanceType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FProInstanceInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROINSTANCETOOLSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FProInstanceInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProInstanceInstance, Z_Construct_UPackage__Script_ProInstanceToolsPlugin(), TEXT("ProInstanceInstance"), sizeof(FProInstanceInstance), Get_Z_Construct_UScriptStruct_FProInstanceInstance_Hash());
	}
	return Singleton;
}
template<> PROINSTANCETOOLSPLUGIN_API UScriptStruct* StaticStruct<FProInstanceInstance>()
{
	return FProInstanceInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProInstanceInstance(FProInstanceInstance::StaticStruct, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("ProInstanceInstance"), false, nullptr, nullptr);
static struct FScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceInstance
{
	FScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProInstanceInstance")),new UScriptStruct::TCppStructOps<FProInstanceInstance>);
	}
} ScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceInstance;
	struct Z_Construct_UScriptStruct_FProInstanceInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverwriteMaterials_MetaData[];
#endif
		static void NewProp_bOverwriteMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverwriteMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverwriteMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverwriteMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverwriteMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstanceSettings_MetaData[];
#endif
		static void NewProp_bInstanceSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstanceSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProInstanceInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** User-defined Static Mesh. */" },
		{ "DisplayName", "Mesh" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "User-defined Static Mesh." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceInstance, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** User-defined Actor Class. */" },
		{ "DisplayName", "Actor Class" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "User-defined Actor Class." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceInstance, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_bOverwriteMaterials_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Enable Overwriting Materials. */" },
		{ "DisplayName", "Overwrite Materials" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Enable Overwriting Materials." },
	};
#endif
	void Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_bOverwriteMaterials_SetBit(void* Obj)
	{
		((FProInstanceInstance*)Obj)->bOverwriteMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_bOverwriteMaterials = { "bOverwriteMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProInstanceInstance), &Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_bOverwriteMaterials_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_bOverwriteMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_bOverwriteMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_OverwriteMaterials_Inner = { "OverwriteMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_OverwriteMaterials_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/**\n\x09 * Can overwrite Static Mesh materials if enabled.\n\x09 * Each array element represents material slot of selected Static Mesh.\n\x09 */" },
		{ "DisplayName", "Overwrite Materials" },
		{ "EditCondition", "bOverwriteMaterials" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Can overwrite Static Mesh materials if enabled.\nEach array element represents material slot of selected Static Mesh." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_OverwriteMaterials = { "OverwriteMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceInstance, OverwriteMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_OverwriteMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_OverwriteMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_bInstanceSettings_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Instances" },
		{ "Comment", "/** Enable Local Instance Settings. */" },
		{ "DisplayName", "Use Local Instance Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Enable Local Instance Settings." },
	};
#endif
	void Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_bInstanceSettings_SetBit(void* Obj)
	{
		((FProInstanceInstance*)Obj)->bInstanceSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_bInstanceSettings = { "bInstanceSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProInstanceInstance), &Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_bInstanceSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_bInstanceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_bInstanceSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_InstanceSettings_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/**\n\x09 * Local instance tranform and randomization settings for current instance.\n\x09 * Can overwrite Instance Global Settings if enabled.\n\x09 */" },
		{ "DisplayName", "Instance Local Settings" },
		{ "EditCondition", "bInstanceSettings" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Local instance tranform and randomization settings for current instance.\nCan overwrite Instance Global Settings if enabled." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_InstanceSettings = { "InstanceSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceInstance, InstanceSettings), Z_Construct_UScriptStruct_FProInstanceInstanceSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_InstanceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_InstanceSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProInstanceInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_bOverwriteMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_OverwriteMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_OverwriteMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_bInstanceSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceInstance_Statics::NewProp_InstanceSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProInstanceInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
		nullptr,
		&NewStructOps,
		"ProInstanceInstance",
		sizeof(FProInstanceInstance),
		alignof(FProInstanceInstance),
		Z_Construct_UScriptStruct_FProInstanceInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProInstanceInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProInstanceInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProInstanceInstance"), sizeof(FProInstanceInstance), Get_Z_Construct_UScriptStruct_FProInstanceInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProInstanceInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProInstanceInstance_Hash() { return 2735566118U; }
class UScriptStruct* FProInstanceInstanceSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROINSTANCETOOLSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProInstanceInstanceSettings, Z_Construct_UPackage__Script_ProInstanceToolsPlugin(), TEXT("ProInstanceInstanceSettings"), sizeof(FProInstanceInstanceSettings), Get_Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Hash());
	}
	return Singleton;
}
template<> PROINSTANCETOOLSPLUGIN_API UScriptStruct* StaticStruct<FProInstanceInstanceSettings>()
{
	return FProInstanceInstanceSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProInstanceInstanceSettings(FProInstanceInstanceSettings::StaticStruct, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("ProInstanceInstanceSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceInstanceSettings
{
	FScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceInstanceSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProInstanceInstanceSettings")),new UScriptStruct::TCppStructOps<FProInstanceInstanceSettings>);
	}
} ScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceInstanceSettings;
	struct Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mobility_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mobility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadows_MetaData[];
#endif
		static void NewProp_bCastShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCustomCollision_MetaData[];
#endif
		static void NewProp_bEnableCustomCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCustomCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCollisionProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomCollisionProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstanceLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProInstanceInstanceSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Mobility_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Set the custom mobility for this instance(s). */" },
		{ "DisplayName", "Mobility" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Set the custom mobility for this instance(s)." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Mobility = { "Mobility", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceInstanceSettings, Mobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Mobility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Mobility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Location randomization settings. */" },
		{ "DisplayName", "Location" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Location randomization settings." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceInstanceSettings, Location), Z_Construct_UScriptStruct_FProInstanceLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Rotation randomization settings. */" },
		{ "DisplayName", "Rotation" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Rotation randomization settings." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceInstanceSettings, Rotation), Z_Construct_UScriptStruct_FProInstanceRotation, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Scale randomization settings. */" },
		{ "DisplayName", "Scale" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Scale randomization settings." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceInstanceSettings, Scale), Z_Construct_UScriptStruct_FProInstanceScale, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_bCastShadows_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Whether to cast shadows. */" },
		{ "DisplayName", "Cast Shadows" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Whether to cast shadows." },
	};
#endif
	void Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_bCastShadows_SetBit(void* Obj)
	{
		((FProInstanceInstanceSettings*)Obj)->bCastShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_bCastShadows = { "bCastShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProInstanceInstanceSettings), &Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_bCastShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_bCastShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_bCastShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_bEnableCustomCollision_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Enable Custom Collision Profile. */" },
		{ "DisplayName", "Enable Custom Collision" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Enable Custom Collision Profile." },
	};
#endif
	void Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_bEnableCustomCollision_SetBit(void* Obj)
	{
		((FProInstanceInstanceSettings*)Obj)->bEnableCustomCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_bEnableCustomCollision = { "bEnableCustomCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProInstanceInstanceSettings), &Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_bEnableCustomCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_bEnableCustomCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_bEnableCustomCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_CustomCollisionProfileName_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Custom Collision Profile Name. */" },
		{ "DisplayName", "Custom Collision Profile Name" },
		{ "EditCondition", "bEnableCustomCollision" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Custom Collision Profile Name." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_CustomCollisionProfileName = { "CustomCollisionProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceInstanceSettings, CustomCollisionProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_CustomCollisionProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_CustomCollisionProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_SpawnChance_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Chance to spawn this instance from 0% to 100%. */" },
		{ "DisplayName", "Spawn Chance" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Chance to spawn this instance from 0% to 100%." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_SpawnChance = { "SpawnChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceInstanceSettings, SpawnChance), METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_SpawnChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_SpawnChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_InstanceLength_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Arbitrary instance physical length which can be used by ProInstance Types with splines. */" },
		{ "DisplayName", "Instance Length" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Arbitrary instance physical length which can be used by ProInstance Types with splines." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_InstanceLength = { "InstanceLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceInstanceSettings, InstanceLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_InstanceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_InstanceLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Mobility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_bCastShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_bEnableCustomCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_CustomCollisionProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_SpawnChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::NewProp_InstanceLength,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
		nullptr,
		&NewStructOps,
		"ProInstanceInstanceSettings",
		sizeof(FProInstanceInstanceSettings),
		alignof(FProInstanceInstanceSettings),
		Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProInstanceInstanceSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProInstanceInstanceSettings"), sizeof(FProInstanceInstanceSettings), Get_Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProInstanceInstanceSettings_Hash() { return 720308882U; }
class UScriptStruct* FProInstanceCurrentInstanceArrayContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROINSTANCETOOLSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer, Z_Construct_UPackage__Script_ProInstanceToolsPlugin(), TEXT("ProInstanceCurrentInstanceArrayContainer"), sizeof(FProInstanceCurrentInstanceArrayContainer), Get_Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Hash());
	}
	return Singleton;
}
template<> PROINSTANCETOOLSPLUGIN_API UScriptStruct* StaticStruct<FProInstanceCurrentInstanceArrayContainer>()
{
	return FProInstanceCurrentInstanceArrayContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer(FProInstanceCurrentInstanceArrayContainer::StaticStruct, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("ProInstanceCurrentInstanceArrayContainer"), false, nullptr, nullptr);
static struct FScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceCurrentInstanceArrayContainer
{
	FScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceCurrentInstanceArrayContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProInstanceCurrentInstanceArrayContainer")),new UScriptStruct::TCppStructOps<FProInstanceCurrentInstanceArrayContainer>);
	}
} ScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceCurrentInstanceArrayContainer;
	struct Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticMeshArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ISMArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ISMArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ISMArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HISMArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HISMArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HISMArray;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClassArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClassArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorClassArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProInstanceCurrentInstanceArrayContainer>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_StaticMeshArray_Inner = { "StaticMeshArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_StaticMeshArray_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "DisplayName", "Static Mesh Array" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_StaticMeshArray = { "StaticMeshArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceCurrentInstanceArrayContainer, StaticMeshArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_StaticMeshArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_StaticMeshArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_ISMArray_Inner = { "ISMArray", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_ISMArray_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "DisplayName", "ISM Array" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_ISMArray = { "ISMArray", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceCurrentInstanceArrayContainer, ISMArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_ISMArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_ISMArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_HISMArray_Inner = { "HISMArray", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_HISMArray_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "DisplayName", "HISM Array" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_HISMArray = { "HISMArray", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceCurrentInstanceArrayContainer, HISMArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_HISMArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_HISMArray_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_ActorClassArray_Inner = { "ActorClassArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_ActorClassArray_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "DisplayName", "Actor Class Array" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_ActorClassArray = { "ActorClassArray", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceCurrentInstanceArrayContainer, ActorClassArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_ActorClassArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_ActorClassArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_StaticMeshArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_StaticMeshArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_ISMArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_ISMArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_HISMArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_HISMArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_ActorClassArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::NewProp_ActorClassArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
		nullptr,
		&NewStructOps,
		"ProInstanceCurrentInstanceArrayContainer",
		sizeof(FProInstanceCurrentInstanceArrayContainer),
		alignof(FProInstanceCurrentInstanceArrayContainer),
		Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProInstanceCurrentInstanceArrayContainer"), sizeof(FProInstanceCurrentInstanceArrayContainer), Get_Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer_Hash() { return 1543308127U; }
class UScriptStruct* FProInstanceCurrentInstanceContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROINSTANCETOOLSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer, Z_Construct_UPackage__Script_ProInstanceToolsPlugin(), TEXT("ProInstanceCurrentInstanceContainer"), sizeof(FProInstanceCurrentInstanceContainer), Get_Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Hash());
	}
	return Singleton;
}
template<> PROINSTANCETOOLSPLUGIN_API UScriptStruct* StaticStruct<FProInstanceCurrentInstanceContainer>()
{
	return FProInstanceCurrentInstanceContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProInstanceCurrentInstanceContainer(FProInstanceCurrentInstanceContainer::StaticStruct, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("ProInstanceCurrentInstanceContainer"), false, nullptr, nullptr);
static struct FScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceCurrentInstanceContainer
{
	FScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceCurrentInstanceContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProInstanceCurrentInstanceContainer")),new UScriptStruct::TCppStructOps<FProInstanceCurrentInstanceContainer>);
	}
} ScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceCurrentInstanceContainer;
	struct Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ISM_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ISM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HISM_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HISM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProInstanceCurrentInstanceContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "DisplayName", "Static Mesh" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceCurrentInstanceContainer, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_ISM_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "DisplayName", "ISM" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_ISM = { "ISM", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceCurrentInstanceContainer, ISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_ISM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_ISM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_HISM_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "DisplayName", "HISM" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_HISM = { "HISM", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceCurrentInstanceContainer, HISM), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_HISM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_HISM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "DisplayName", "Actor Class" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceCurrentInstanceContainer, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_ActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_ISM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_HISM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::NewProp_ActorClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
		nullptr,
		&NewStructOps,
		"ProInstanceCurrentInstanceContainer",
		sizeof(FProInstanceCurrentInstanceContainer),
		alignof(FProInstanceCurrentInstanceContainer),
		Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProInstanceCurrentInstanceContainer"), sizeof(FProInstanceCurrentInstanceContainer), Get_Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer_Hash() { return 2506431876U; }
class UScriptStruct* FProInstanceScale::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROINSTANCETOOLSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FProInstanceScale_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProInstanceScale, Z_Construct_UPackage__Script_ProInstanceToolsPlugin(), TEXT("ProInstanceScale"), sizeof(FProInstanceScale), Get_Z_Construct_UScriptStruct_FProInstanceScale_Hash());
	}
	return Singleton;
}
template<> PROINSTANCETOOLSPLUGIN_API UScriptStruct* StaticStruct<FProInstanceScale>()
{
	return FProInstanceScale::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProInstanceScale(FProInstanceScale::StaticStruct, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("ProInstanceScale"), false, nullptr, nullptr);
static struct FScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceScale
{
	FScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceScale()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProInstanceScale")),new UScriptStruct::TCppStructOps<FProInstanceScale>);
	}
} ScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceScale;
	struct Z_Construct_UScriptStruct_FProInstanceScale_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUniformScale_MetaData[];
#endif
		static void NewProp_bUniformScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUniformScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinUniformScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinUniformScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxUniformScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxUniformScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceScale_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProInstanceScale>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_bUniformScale_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Enable Uniform Scale . */" },
		{ "DisplayName", "Uniform Scale" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Enable Uniform Scale ." },
	};
#endif
	void Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_bUniformScale_SetBit(void* Obj)
	{
		((FProInstanceScale*)Obj)->bUniformScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_bUniformScale = { "bUniformScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProInstanceScale), &Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_bUniformScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_bUniformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_bUniformScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MinUniformScale_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Min random uniform scale. */" },
		{ "DisplayName", "Min Uniform Scale" },
		{ "EditCondition", "bUniformScale" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Min random uniform scale." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MinUniformScale = { "MinUniformScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceScale, MinUniformScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MinUniformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MinUniformScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MaxUniformScale_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Max random uniform scale. */" },
		{ "DisplayName", "Max Uniform Scale" },
		{ "EditCondition", "bUniformScale" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Max random uniform scale." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MaxUniformScale = { "MaxUniformScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceScale, MaxUniformScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MaxUniformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MaxUniformScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MinScale_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Min random scale. */" },
		{ "DisplayName", "Min Scale" },
		{ "EditCondition", "!bUniformScale" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Min random scale." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MinScale = { "MinScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceScale, MinScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MinScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MinScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MaxScale_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Max random scale. */" },
		{ "DisplayName", "Max Scale" },
		{ "EditCondition", "!bUniformScale" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Max random scale." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceScale, MaxScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MaxScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MaxScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProInstanceScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_bUniformScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MinUniformScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MaxUniformScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MinScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceScale_Statics::NewProp_MaxScale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProInstanceScale_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
		nullptr,
		&NewStructOps,
		"ProInstanceScale",
		sizeof(FProInstanceScale),
		alignof(FProInstanceScale),
		Z_Construct_UScriptStruct_FProInstanceScale_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceScale_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceScale_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceScale_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProInstanceScale()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProInstanceScale_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProInstanceScale"), sizeof(FProInstanceScale), Get_Z_Construct_UScriptStruct_FProInstanceScale_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProInstanceScale_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProInstanceScale_Hash() { return 2186312828U; }
class UScriptStruct* FProInstanceRotation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROINSTANCETOOLSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FProInstanceRotation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProInstanceRotation, Z_Construct_UPackage__Script_ProInstanceToolsPlugin(), TEXT("ProInstanceRotation"), sizeof(FProInstanceRotation), Get_Z_Construct_UScriptStruct_FProInstanceRotation_Hash());
	}
	return Singleton;
}
template<> PROINSTANCETOOLSPLUGIN_API UScriptStruct* StaticStruct<FProInstanceRotation>()
{
	return FProInstanceRotation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProInstanceRotation(FProInstanceRotation::StaticStruct, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("ProInstanceRotation"), false, nullptr, nullptr);
static struct FScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceRotation
{
	FScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceRotation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProInstanceRotation")),new UScriptStruct::TCppStructOps<FProInstanceRotation>);
	}
} ScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceRotation;
	struct Z_Construct_UScriptStruct_FProInstanceRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRangeMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationRangeMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRangeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationRangeMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateToActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RotateToActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateToActorByAxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotateToActorByAxes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceRotation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProInstanceRotation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Rotation offset of a initial instance rotation. */" },
		{ "DisplayName", "Rotation Offset" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Rotation offset of a initial instance rotation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceRotation, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotationRangeMin_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Min random rotation in range. */" },
		{ "DisplayName", "Rotation Range Min" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Min random rotation in range." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotationRangeMin = { "RotationRangeMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceRotation, RotationRangeMin), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotationRangeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotationRangeMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotationRangeMax_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Max random rotation in range. */" },
		{ "DisplayName", "Rotation Range Max" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Max random rotation in range." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotationRangeMax = { "RotationRangeMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceRotation, RotationRangeMax), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotationRangeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotationRangeMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotateToActor_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Rotate instance towards an user-defined Actor. */" },
		{ "DisplayName", "Rotate To Actor" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Rotate instance towards an user-defined Actor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotateToActor = { "RotateToActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceRotation, RotateToActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotateToActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotateToActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotateToActorByAxes_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** An axes by which instance will be rotated. */" },
		{ "DisplayName", "Rotate To Actor By Axes" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "An axes by which instance will be rotated." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotateToActorByAxes = { "RotateToActorByAxes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceRotation, RotateToActorByAxes), Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceRotateToActorByAxes, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotateToActorByAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotateToActorByAxes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProInstanceRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotationRangeMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotationRangeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotateToActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceRotation_Statics::NewProp_RotateToActorByAxes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProInstanceRotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
		nullptr,
		&NewStructOps,
		"ProInstanceRotation",
		sizeof(FProInstanceRotation),
		alignof(FProInstanceRotation),
		Z_Construct_UScriptStruct_FProInstanceRotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceRotation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceRotation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceRotation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProInstanceRotation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProInstanceRotation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProInstanceRotation"), sizeof(FProInstanceRotation), Get_Z_Construct_UScriptStruct_FProInstanceRotation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProInstanceRotation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProInstanceRotation_Hash() { return 1193725330U; }
class UScriptStruct* FProInstanceLocation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROINSTANCETOOLSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FProInstanceLocation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProInstanceLocation, Z_Construct_UPackage__Script_ProInstanceToolsPlugin(), TEXT("ProInstanceLocation"), sizeof(FProInstanceLocation), Get_Z_Construct_UScriptStruct_FProInstanceLocation_Hash());
	}
	return Singleton;
}
template<> PROINSTANCETOOLSPLUGIN_API UScriptStruct* StaticStruct<FProInstanceLocation>()
{
	return FProInstanceLocation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProInstanceLocation(FProInstanceLocation::StaticStruct, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("ProInstanceLocation"), false, nullptr, nullptr);
static struct FScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceLocation
{
	FScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceLocation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProInstanceLocation")),new UScriptStruct::TCppStructOps<FProInstanceLocation>);
	}
} ScriptStruct_ProInstanceToolsPlugin_StaticRegisterNativesFProInstanceLocation;
	struct Z_Construct_UScriptStruct_FProInstanceLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationRangeMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationRangeMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationRangeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationRangeMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceLocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProInstanceLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProInstanceLocation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceLocation_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Location offset of a initial instance location. */" },
		{ "DisplayName", "Location Offset" },
		{ "MakeStructureDefaultValue", "0, 0, 0" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Location offset of a initial instance location." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProInstanceLocation_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceLocation, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceLocation_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceLocation_Statics::NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceLocation_Statics::NewProp_LocationRangeMin_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Min random location in range. */" },
		{ "DisplayName", "Location Range Min" },
		{ "MakeStructureDefaultValue", "0, 0, 0" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Min random location in range." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProInstanceLocation_Statics::NewProp_LocationRangeMin = { "LocationRangeMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceLocation, LocationRangeMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceLocation_Statics::NewProp_LocationRangeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceLocation_Statics::NewProp_LocationRangeMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProInstanceLocation_Statics::NewProp_LocationRangeMax_MetaData[] = {
		{ "Category", "Pro Instance Tools" },
		{ "Comment", "/** Max random location in range. */" },
		{ "DisplayName", "Location Range Max" },
		{ "MakeStructureDefaultValue", "0, 0, 0" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Max random location in range." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProInstanceLocation_Statics::NewProp_LocationRangeMax = { "LocationRangeMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProInstanceLocation, LocationRangeMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceLocation_Statics::NewProp_LocationRangeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceLocation_Statics::NewProp_LocationRangeMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProInstanceLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceLocation_Statics::NewProp_LocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceLocation_Statics::NewProp_LocationRangeMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProInstanceLocation_Statics::NewProp_LocationRangeMax,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProInstanceLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
		nullptr,
		&NewStructOps,
		"ProInstanceLocation",
		sizeof(FProInstanceLocation),
		alignof(FProInstanceLocation),
		Z_Construct_UScriptStruct_FProInstanceLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProInstanceLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProInstanceLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProInstanceLocation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProInstanceLocation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProInstanceToolsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProInstanceLocation"), sizeof(FProInstanceLocation), Get_Z_Construct_UScriptStruct_FProInstanceLocation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProInstanceLocation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProInstanceLocation_Hash() { return 514583763U; }
	DEFINE_FUNCTION(AProInstanceToolsParent::execBakeInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BakeInstances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProInstanceToolsParent::execRandomizeSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RandomizeSeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProInstanceToolsParent::execUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProInstanceToolsParent::execCreateInstance)
	{
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateInstance(Z_Param_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProInstanceToolsParent::execSetupInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupInstances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProInstanceToolsParent::execDestroyComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyComponents();
		P_NATIVE_END;
	}
	void AProInstanceToolsParent::StaticRegisterNativesAProInstanceToolsParent()
	{
		UClass* Class = AProInstanceToolsParent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BakeInstances", &AProInstanceToolsParent::execBakeInstances },
			{ "CreateInstance", &AProInstanceToolsParent::execCreateInstance },
			{ "DestroyComponents", &AProInstanceToolsParent::execDestroyComponents },
			{ "RandomizeSeed", &AProInstanceToolsParent::execRandomizeSeed },
			{ "SetupInstances", &AProInstanceToolsParent::execSetupInstances },
			{ "Update", &AProInstanceToolsParent::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProInstanceToolsParent_BakeInstances_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProInstanceToolsParent_BakeInstances_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Pro Instance Functions" },
		{ "Comment", "// Bakes procedually placed Components to Actors\n" },
		{ "DisplayName", "Bake Instances" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Bakes procedually placed Components to Actors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProInstanceToolsParent_BakeInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProInstanceToolsParent, nullptr, "BakeInstances", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProInstanceToolsParent_BakeInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProInstanceToolsParent_BakeInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProInstanceToolsParent_BakeInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProInstanceToolsParent_BakeInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProInstanceToolsParent_CreateInstance_Statics
	{
		struct ProInstanceToolsParent_eventCreateInstance_Parms
		{
			FTransform Transform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProInstanceToolsParent_CreateInstance_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProInstanceToolsParent_eventCreateInstance_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProInstanceToolsParent_CreateInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProInstanceToolsParent_CreateInstance_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProInstanceToolsParent_CreateInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pro Instance Tools|Functions" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProInstanceToolsParent_CreateInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProInstanceToolsParent, nullptr, "CreateInstance", nullptr, nullptr, sizeof(ProInstanceToolsParent_eventCreateInstance_Parms), Z_Construct_UFunction_AProInstanceToolsParent_CreateInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProInstanceToolsParent_CreateInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProInstanceToolsParent_CreateInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProInstanceToolsParent_CreateInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProInstanceToolsParent_CreateInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProInstanceToolsParent_CreateInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProInstanceToolsParent_DestroyComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProInstanceToolsParent_DestroyComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pro Instance Tools|Functions" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProInstanceToolsParent_DestroyComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProInstanceToolsParent, nullptr, "DestroyComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProInstanceToolsParent_DestroyComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProInstanceToolsParent_DestroyComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProInstanceToolsParent_DestroyComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProInstanceToolsParent_DestroyComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProInstanceToolsParent_RandomizeSeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProInstanceToolsParent_RandomizeSeed_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Pro Instance Functions" },
		{ "Comment", "// Set random Seed value and re-run the Construction Script\n" },
		{ "DisplayName", "Randomize Seed" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Set random Seed value and re-run the Construction Script" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProInstanceToolsParent_RandomizeSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProInstanceToolsParent, nullptr, "RandomizeSeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProInstanceToolsParent_RandomizeSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProInstanceToolsParent_RandomizeSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProInstanceToolsParent_RandomizeSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProInstanceToolsParent_RandomizeSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProInstanceToolsParent_SetupInstances_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProInstanceToolsParent_SetupInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pro Instance Tools|Functions" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProInstanceToolsParent_SetupInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProInstanceToolsParent, nullptr, "SetupInstances", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProInstanceToolsParent_SetupInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProInstanceToolsParent_SetupInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProInstanceToolsParent_SetupInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProInstanceToolsParent_SetupInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProInstanceToolsParent_Update_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProInstanceToolsParent_Update_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Pro Instance Functions" },
		{ "Comment", "// Re-run the Construction Script\n" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Re-run the Construction Script" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProInstanceToolsParent_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProInstanceToolsParent, nullptr, "Update", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProInstanceToolsParent_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProInstanceToolsParent_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProInstanceToolsParent_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProInstanceToolsParent_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProInstanceToolsParent_NoRegister()
	{
		return AProInstanceToolsParent::StaticClass();
	}
	struct Z_Construct_UClass_AProInstanceToolsParent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Billboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInstanceContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentInstanceContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInstanceArrayContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentInstanceArrayContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstanceType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Instances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Instances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancesSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstancesSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceSelfOverlap_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstanceSelfOverlap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IndexVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartCullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartCullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndCullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndCullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomStream;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSurfaceSnapping_MetaData[];
#endif
		static void NewProp_bSurfaceSnapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSurfaceSnapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSurfaceAligning_MetaData[];
#endif
		static void NewProp_bSurfaceAligning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSurfaceAligning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelfCollision_MetaData[];
#endif
		static void NewProp_bIgnoreSelfCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelfCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineTracingDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineTracingDepth;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugLine_MetaData[];
#endif
		static void NewProp_bDrawDebugLine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProInstanceToolsParent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProInstanceToolsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProInstanceToolsParent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProInstanceToolsParent_BakeInstances, "BakeInstances" }, // 912247019
		{ &Z_Construct_UFunction_AProInstanceToolsParent_CreateInstance, "CreateInstance" }, // 16422651
		{ &Z_Construct_UFunction_AProInstanceToolsParent_DestroyComponents, "DestroyComponents" }, // 2713235334
		{ &Z_Construct_UFunction_AProInstanceToolsParent_RandomizeSeed, "RandomizeSeed" }, // 3521374607
		{ &Z_Construct_UFunction_AProInstanceToolsParent_SetupInstances, "SetupInstances" }, // 1751994316
		{ &Z_Construct_UFunction_AProInstanceToolsParent_Update, "Update" }, // 1240818457
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProInstanceToolsParent.h" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Pro Instance Main Settings" },
		{ "Comment", "//\x09""AProInstanceToolsParent(const FObjectInitializer& ObjectInitializer);\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "AProInstanceToolsParent(const FObjectInitializer& ObjectInitializer);" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsParent, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Billboard_MetaData[] = {
		{ "Category", "Pro Instance Main Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsParent, Billboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Billboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Billboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_CurrentInstanceContainer_MetaData[] = {
		{ "Category", "Pro Instance Main Settings" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_CurrentInstanceContainer = { "CurrentInstanceContainer", nullptr, (EPropertyFlags)0x0010008000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsParent, CurrentInstanceContainer), Z_Construct_UScriptStruct_FProInstanceCurrentInstanceContainer, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_CurrentInstanceContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_CurrentInstanceContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_CurrentInstanceArrayContainer_MetaData[] = {
		{ "Category", "Pro Instance Main Settings" },
		{ "Comment", "// Used for keeping current type of instance\n" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Used for keeping current type of instance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_CurrentInstanceArrayContainer = { "CurrentInstanceArrayContainer", nullptr, (EPropertyFlags)0x0010008000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsParent, CurrentInstanceArrayContainer), Z_Construct_UScriptStruct_FProInstanceCurrentInstanceArrayContainer, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_CurrentInstanceArrayContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_CurrentInstanceArrayContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_CurrentInstance_MetaData[] = {
		{ "Category", "Pro Instance Main Settings" },
		{ "Comment", "// Used for keeping current array type of instances to be able to spawn them\n" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Used for keeping current array type of instances to be able to spawn them" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_CurrentInstance = { "CurrentInstance", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsParent, CurrentInstance), Z_Construct_UScriptStruct_FProInstanceInstance, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_CurrentInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_CurrentInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_InstanceType_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Instances" },
		{ "Comment", "/** Sets a component type for instances. */" },
		{ "DisplayName", "Instance Type" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Sets a component type for instances." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_InstanceType = { "InstanceType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsParent, InstanceType), Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceInstanceType, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_InstanceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_InstanceType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProInstanceInstance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Instances_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Instances" },
		{ "Comment", "/** User-defined array of instances. */" },
		{ "DisplayName", "Instances" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "User-defined array of instances." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsParent, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Instances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Instances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_InstancesSettings_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Instances" },
		{ "Comment", "/**\n\x09 * Global Instance tranform and randomization settings.\n\x09 * Can be overwritten by Instance Local Settings.\n\x09 */" },
		{ "DisplayName", "Instances Global Settings" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Global Instance tranform and randomization settings.\nCan be overwritten by Instance Local Settings." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_InstancesSettings = { "InstancesSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsParent, InstancesSettings), Z_Construct_UScriptStruct_FProInstanceInstanceSettings, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_InstancesSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_InstancesSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Instances" },
		{ "Comment", "/** Whether to have an actor collision. */" },
		{ "DisplayName", "Enable Actor Collision" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Whether to have an actor collision." },
	};
#endif
	void Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((AProInstanceToolsParent*)Obj)->bEnableCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProInstanceToolsParent), &Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_InstanceSelfOverlap_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Instances" },
		{ "Comment", "/**\n\x09 * Defines what to do when spawned instance is overlapping neighbor instance.\n\x09 * Currently working only with Static Mesh instance type.\n\x09 */" },
		{ "DisplayName", "Instance Self Overlap" },
		{ "EditCondition", "InstanceType == EProInstanceInstanceType::InstanceType_StaticMesh" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Defines what to do when spawned instance is overlapping neighbor instance.\nCurrently working only with Static Mesh instance type." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_InstanceSelfOverlap = { "InstanceSelfOverlap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsParent, InstanceSelfOverlap), Z_Construct_UEnum_ProInstanceToolsPlugin_EProInstanceInstanceSelfOverlap, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_InstanceSelfOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_InstanceSelfOverlap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Instances" },
		{ "DisplayName", "Index" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsParent, Index), METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_IndexVector_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Instances" },
		{ "DisplayName", "Index Vector" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_IndexVector = { "IndexVector", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsParent, IndexVector), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_IndexVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_IndexVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_StartCullDistance_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Optimization" },
		{ "Comment", "/**\n\x09 * Start Cull Distance.\n\x09 * Works with Instanced Static Mesh or Hierarchical Instanced Static Mesh.\n\x09 */" },
		{ "DisplayName", "Start Cull Distance" },
		{ "EditCondition", "InstanceType == EProInstanceInstanceType::InstanceType_ISM || InstanceType == EProInstanceInstanceType::InstanceType_HISM" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Start Cull Distance.\nWorks with Instanced Static Mesh or Hierarchical Instanced Static Mesh." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_StartCullDistance = { "StartCullDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsParent, StartCullDistance), METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_StartCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_StartCullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_EndCullDistance_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Optimization" },
		{ "Comment", "/**\n\x09 * End Cull Distance.\n\x09 * Works with Instanced Static Mesh or Hierarchical Instanced Static Mesh.\n\x09 */" },
		{ "DisplayName", "End Cull Distance" },
		{ "EditCondition", "InstanceType == EProInstanceInstanceType::InstanceType_ISM || InstanceType == EProInstanceInstanceType::InstanceType_HISM" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "End Cull Distance.\nWorks with Instanced Static Mesh or Hierarchical Instanced Static Mesh." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_EndCullDistance = { "EndCullDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsParent, EndCullDistance), METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_EndCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_EndCullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Randomization" },
		{ "Comment", "/** Randomization seed. */" },
		{ "DisplayName", "Seed" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Randomization seed." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsParent, Seed), METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_RandomStream_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Randomization" },
		{ "DisplayName", "Random Stream" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsParent, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_RandomStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_RandomStream_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bSurfaceSnapping_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Snapping & Aligning" },
		{ "Comment", "/** Snaps instance's location to a surface below. */" },
		{ "DisplayName", "Surface Snapping" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Snaps instance's location to a surface below." },
	};
#endif
	void Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bSurfaceSnapping_SetBit(void* Obj)
	{
		((AProInstanceToolsParent*)Obj)->bSurfaceSnapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bSurfaceSnapping = { "bSurfaceSnapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProInstanceToolsParent), &Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bSurfaceSnapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bSurfaceSnapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bSurfaceSnapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bSurfaceAligning_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Snapping & Aligning" },
		{ "Comment", "/** Aligns instance's rotation to a surface angle below. */" },
		{ "DisplayName", "Surface Aligning" },
		{ "EditCondition", "bSurfaceSnapping" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Aligns instance's rotation to a surface angle below." },
	};
#endif
	void Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bSurfaceAligning_SetBit(void* Obj)
	{
		((AProInstanceToolsParent*)Obj)->bSurfaceAligning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bSurfaceAligning = { "bSurfaceAligning", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProInstanceToolsParent), &Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bSurfaceAligning_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bSurfaceAligning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bSurfaceAligning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bIgnoreSelfCollision_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Snapping & Aligning" },
		{ "Comment", "/** Ignores self collision of instances when casting line traces for Surface Snapping. */" },
		{ "DisplayName", "Ignore Self Collision" },
		{ "EditCondition", "bSurfaceSnapping" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Ignores self collision of instances when casting line traces for Surface Snapping." },
	};
#endif
	void Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bIgnoreSelfCollision_SetBit(void* Obj)
	{
		((AProInstanceToolsParent*)Obj)->bIgnoreSelfCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bIgnoreSelfCollision = { "bIgnoreSelfCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProInstanceToolsParent), &Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bIgnoreSelfCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bIgnoreSelfCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bIgnoreSelfCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_LineTracingDepth_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Snapping & Aligning" },
		{ "Comment", "/** Distance of line traces when casting them for Surface Snapping. */" },
		{ "DisplayName", "Line Tracing Depth" },
		{ "EditCondition", "bSurfaceSnapping" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Distance of line traces when casting them for Surface Snapping." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_LineTracingDepth = { "LineTracingDepth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsParent, LineTracingDepth), METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_LineTracingDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_LineTracingDepth_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Snapping & Aligning" },
		{ "Comment", "/** Ignore collision of user-defined actors when casting line traces for Surface Snapping. */" },
		{ "DisplayName", "Actors To Ignore" },
		{ "EditCondition", "bSurfaceSnapping" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Ignore collision of user-defined actors when casting line traces for Surface Snapping." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsParent, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_ActorsToIgnore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bDrawDebugLine_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Debug" },
		{ "Comment", "/** Whether to draw debug line traces. */" },
		{ "DisplayName", "Draw Debug Line" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Whether to draw debug line traces." },
	};
#endif
	void Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bDrawDebugLine_SetBit(void* Obj)
	{
		((AProInstanceToolsParent*)Obj)->bDrawDebugLine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bDrawDebugLine = { "bDrawDebugLine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProInstanceToolsParent), &Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bDrawDebugLine_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bDrawDebugLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bDrawDebugLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_DrawTime_MetaData[] = {
		{ "Category", "Pro Instance Main Settings|Debug" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Time to draw debug line traces. */" },
		{ "DisplayName", "Draw Time" },
		{ "ModuleRelativePath", "Private/ProInstanceToolsParent.h" },
		{ "ToolTip", "Time to draw debug line traces." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProInstanceToolsParent, DrawTime), METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_DrawTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_DrawTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProInstanceToolsParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Billboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_CurrentInstanceContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_CurrentInstanceArrayContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_CurrentInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_InstanceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Instances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Instances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_InstancesSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bEnableCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_InstanceSelfOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_IndexVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_StartCullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_EndCullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_RandomStream,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bSurfaceSnapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bSurfaceAligning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bIgnoreSelfCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_LineTracingDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_bDrawDebugLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProInstanceToolsParent_Statics::NewProp_DrawTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProInstanceToolsParent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProInstanceToolsParent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProInstanceToolsParent_Statics::ClassParams = {
		&AProInstanceToolsParent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProInstanceToolsParent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProInstanceToolsParent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProInstanceToolsParent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProInstanceToolsParent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProInstanceToolsParent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProInstanceToolsParent, 1878435480);
	template<> PROINSTANCETOOLSPLUGIN_API UClass* StaticClass<AProInstanceToolsParent>()
	{
		return AProInstanceToolsParent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProInstanceToolsParent(Z_Construct_UClass_AProInstanceToolsParent, &AProInstanceToolsParent::StaticClass, TEXT("/Script/ProInstanceToolsPlugin"), TEXT("AProInstanceToolsParent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProInstanceToolsParent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
