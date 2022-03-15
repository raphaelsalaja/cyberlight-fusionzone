// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMPreviewEditor/Public/SMPreviewObject.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMPreviewObject() {}
// Cross Module References
	SMPREVIEWEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSMPreviewObjectSpawner();
	UPackage* Z_Construct_UPackage__Script_SMPreviewEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SMPREVIEWEDITOR_API UClass* Z_Construct_UClass_USMPreviewGameInstance_NoRegister();
	SMPREVIEWEDITOR_API UClass* Z_Construct_UClass_USMPreviewGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	SMPREVIEWEDITOR_API UClass* Z_Construct_UClass_ASMPreviewStateMachineActor_NoRegister();
	SMPREVIEWEDITOR_API UClass* Z_Construct_UClass_ASMPreviewStateMachineActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstance_NoRegister();
	SMPREVIEWEDITOR_API UClass* Z_Construct_UClass_USMPreviewObject_NoRegister();
	SMPREVIEWEDITOR_API UClass* Z_Construct_UClass_USMPreviewObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
class UScriptStruct* FSMPreviewObjectSpawner::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMPREVIEWEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner, Z_Construct_UPackage__Script_SMPreviewEditor(), TEXT("SMPreviewObjectSpawner"), sizeof(FSMPreviewObjectSpawner), Get_Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Hash());
	}
	return Singleton;
}
template<> SMPREVIEWEDITOR_API UScriptStruct* StaticStruct<FSMPreviewObjectSpawner>()
{
	return FSMPreviewObjectSpawner::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMPreviewObjectSpawner(FSMPreviewObjectSpawner::StaticStruct, TEXT("/Script/SMPreviewEditor"), TEXT("SMPreviewObjectSpawner"), false, nullptr, nullptr);
static struct FScriptStruct_SMPreviewEditor_StaticRegisterNativesFSMPreviewObjectSpawner
{
	FScriptStruct_SMPreviewEditor_StaticRegisterNativesFSMPreviewObjectSpawner()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMPreviewObjectSpawner")),new UScriptStruct::TCppStructOps<FSMPreviewObjectSpawner>);
	}
} ScriptStruct_SMPreviewEditor_StaticRegisterNativesFSMPreviewObjectSpawner;
	struct Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsContext_MetaData[];
#endif
		static void NewProp_bIsContext_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorTemplate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SavedActorProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedActorProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedActorProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains spawn data and an exported template.\n */" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "Contains spawn data and an exported template." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMPreviewObjectSpawner>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMPreviewObjectSpawner, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Preview | Transform" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMPreviewObjectSpawner, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Preview | Transform" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMPreviewObjectSpawner, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Preview | Transform" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMPreviewObjectSpawner, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_bIsContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_bIsContext_SetBit(void* Obj)
	{
		((FSMPreviewObjectSpawner*)Obj)->bIsContext = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_bIsContext = { "bIsContext", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSMPreviewObjectSpawner), &Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_bIsContext_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_bIsContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_bIsContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_ObjectLabel_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Set by world outliner. */" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "Set by world outliner." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_ObjectLabel = { "ObjectLabel", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMPreviewObjectSpawner, ObjectLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_ObjectLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_ObjectLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_SpawnedActor_MetaData[] = {
		{ "Comment", "/** A reference to an actor spawned from the ActorTemplate. */" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "A reference to an actor spawned from the ActorTemplate." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMPreviewObjectSpawner, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_SpawnedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_SpawnedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_ActorTemplate_MetaData[] = {
		{ "Comment", "/** Loaded from serialized actor properties, used for instantiating the SpawnedActor. */" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "Loaded from serialized actor properties, used for instantiating the SpawnedActor." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_ActorTemplate = { "ActorTemplate", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMPreviewObjectSpawner, ActorTemplate), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_ActorTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_ActorTemplate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_SavedActorProperties_Inner = { "SavedActorProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_SavedActorProperties_MetaData[] = {
		{ "Comment", "/** Properties for the actor template, serialized separately to prevent circular dependency load issues. */" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "Properties for the actor template, serialized separately to prevent circular dependency load issues." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_SavedActorProperties = { "SavedActorProperties", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMPreviewObjectSpawner, SavedActorProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_SavedActorProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_SavedActorProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_bIsContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_ObjectLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_SpawnedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_ActorTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_SavedActorProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::NewProp_SavedActorProperties,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMPreviewEditor,
		nullptr,
		&NewStructOps,
		"SMPreviewObjectSpawner",
		sizeof(FSMPreviewObjectSpawner),
		alignof(FSMPreviewObjectSpawner),
		Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMPreviewObjectSpawner()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMPreviewEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMPreviewObjectSpawner"), sizeof(FSMPreviewObjectSpawner), Get_Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMPreviewObjectSpawner_Hash() { return 1199778268U; }
	void USMPreviewGameInstance::StaticRegisterNativesUSMPreviewGameInstance()
	{
	}
	UClass* Z_Construct_UClass_USMPreviewGameInstance_NoRegister()
	{
		return USMPreviewGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USMPreviewGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMPreviewGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SMPreviewEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPreviewGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Logic Driver custom game instance to use when running a preview simulation.\n */" },
		{ "IncludePath", "SMPreviewObject.h" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "Logic Driver custom game instance to use when running a preview simulation." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMPreviewGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMPreviewGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMPreviewGameInstance_Statics::ClassParams = {
		&USMPreviewGameInstance::StaticClass,
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
		0x008800A8u,
		METADATA_PARAMS(Z_Construct_UClass_USMPreviewGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMPreviewGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMPreviewGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMPreviewGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMPreviewGameInstance, 3710909177);
	template<> SMPREVIEWEDITOR_API UClass* StaticClass<USMPreviewGameInstance>()
	{
		return USMPreviewGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMPreviewGameInstance(Z_Construct_UClass_USMPreviewGameInstance, &USMPreviewGameInstance::StaticClass, TEXT("/Script/SMPreviewEditor"), TEXT("USMPreviewGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMPreviewGameInstance);
	void ASMPreviewStateMachineActor::StaticRegisterNativesASMPreviewStateMachineActor()
	{
	}
	UClass* Z_Construct_UClass_ASMPreviewStateMachineActor_NoRegister()
	{
		return ASMPreviewStateMachineActor::StaticClass();
	}
	struct Z_Construct_UClass_ASMPreviewStateMachineActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateMachineInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASMPreviewStateMachineActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SMPreviewEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMPreviewStateMachineActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Hosts the State Machine during a preview so the state machine will be copied over properly\n * in the simulated world and any actor references updated.\n */" },
		{ "IncludePath", "SMPreviewObject.h" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "Hosts the State Machine during a preview so the state machine will be copied over properly\nin the simulated world and any actor references updated." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMPreviewStateMachineActor_Statics::NewProp_StateMachineInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASMPreviewStateMachineActor_Statics::NewProp_StateMachineInstance = { "StateMachineInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASMPreviewStateMachineActor, StateMachineInstance), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASMPreviewStateMachineActor_Statics::NewProp_StateMachineInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASMPreviewStateMachineActor_Statics::NewProp_StateMachineInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASMPreviewStateMachineActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMPreviewStateMachineActor_Statics::NewProp_StateMachineInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASMPreviewStateMachineActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMPreviewStateMachineActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASMPreviewStateMachineActor_Statics::ClassParams = {
		&ASMPreviewStateMachineActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASMPreviewStateMachineActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASMPreviewStateMachineActor_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASMPreviewStateMachineActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASMPreviewStateMachineActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASMPreviewStateMachineActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASMPreviewStateMachineActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASMPreviewStateMachineActor, 3502968547);
	template<> SMPREVIEWEDITOR_API UClass* StaticClass<ASMPreviewStateMachineActor>()
	{
		return ASMPreviewStateMachineActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASMPreviewStateMachineActor(Z_Construct_UClass_ASMPreviewStateMachineActor, &ASMPreviewStateMachineActor::StaticClass, TEXT("/Script/SMPreviewEditor"), TEXT("ASMPreviewStateMachineActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASMPreviewStateMachineActor);
	void USMPreviewObject::StaticRegisterNativesUSMPreviewObject()
	{
	}
	UClass* Z_Construct_UClass_USMPreviewObject_NoRegister()
	{
		return USMPreviewObject::StaticClass();
	}
	struct Z_Construct_UClass_USMPreviewObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewObjects;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActorNameToPreviewIndex_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorNameToPreviewIndex_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorNameToPreviewIndex_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActorNameToPreviewIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ContextName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedContextActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedContextActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPossessPawnContext_MetaData[];
#endif
		static void NewProp_bPossessPawnContext_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPossessPawnContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateMachineTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulatedStateMachineInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SimulatedStateMachineInstance;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorPropertyToActorName_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorPropertyToActorName_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorPropertyToActorName_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActorPropertyToActorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewStateMachineInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewStateMachineInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewStateMachineActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewStateMachineActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWorld;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMPreviewObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SMPreviewEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPreviewObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Single object per blueprint to manage simulation data.\n */" },
		{ "IncludePath", "SMPreviewObject.h" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "Single object per blueprint to manage simulation data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewObjects_Inner = { "PreviewObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMPreviewObjectSpawner, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewObjects_MetaData[] = {
		{ "Comment", "/** All objects to spawn into the preview world. */" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "All objects to spawn into the preview world." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewObjects = { "PreviewObjects", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMPreviewObject, PreviewObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewObjects_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ActorNameToPreviewIndex_ValueProp = { "ActorNameToPreviewIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ActorNameToPreviewIndex_Key_KeyProp = { "ActorNameToPreviewIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ActorNameToPreviewIndex_MetaData[] = {
		{ "Comment", "/** Actor name to the index of the PreviewObjects array. */" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "Actor name to the index of the PreviewObjects array." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ActorNameToPreviewIndex = { "ActorNameToPreviewIndex", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMPreviewObject, ActorNameToPreviewIndex), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ActorNameToPreviewIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ActorNameToPreviewIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ContextName_MetaData[] = {
		{ "Comment", "/** Actor name to use as the context. */" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "Actor name to use as the context." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ContextName = { "ContextName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMPreviewObject, ContextName), METADATA_PARAMS(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ContextName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ContextName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPreviewObject_Statics::NewProp_CachedContextActor_MetaData[] = {
		{ "Comment", "/** Current context actor for this session. */" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "Current context actor for this session." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_CachedContextActor = { "CachedContextActor", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMPreviewObject, CachedContextActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_CachedContextActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_CachedContextActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPreviewObject_Statics::NewProp_GameMode_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** The game mode to use when simulating. */" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "The game mode to use when simulating." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMPreviewObject, GameMode), Z_Construct_UClass_AGameModeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPreviewObject_Statics::NewProp_bPossessPawnContext_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Possess a pawn context with the default player controller when simulating. */" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "Possess a pawn context with the default player controller when simulating." },
	};
#endif
	void Z_Construct_UClass_USMPreviewObject_Statics::NewProp_bPossessPawnContext_SetBit(void* Obj)
	{
		((USMPreviewObject*)Obj)->bPossessPawnContext = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_bPossessPawnContext = { "bPossessPawnContext", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMPreviewObject), &Z_Construct_UClass_USMPreviewObject_Statics::NewProp_bPossessPawnContext_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_bPossessPawnContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_bPossessPawnContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPreviewObject_Statics::NewProp_StateMachineTemplate_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** The state machine to spawn into the simulation world. */" },
		{ "DisplayName", "State Machine" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ShowInnerProperties", "" },
		{ "ToolTip", "The state machine to spawn into the simulation world." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_StateMachineTemplate = { "StateMachineTemplate", nullptr, (EPropertyFlags)0x0040000000020009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMPreviewObject, StateMachineTemplate), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_StateMachineTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_StateMachineTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPreviewObject_Statics::NewProp_SimulatedStateMachineInstance_MetaData[] = {
		{ "Comment", "/**\n\x09 * The SIMULATED state machine that is running. Hosted under a PreviewStateMachineActor if there is a valid world.\n\x09 * This is set externally when a user starts simulation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "The SIMULATED state machine that is running. Hosted under a PreviewStateMachineActor if there is a valid world.\nThis is set externally when a user starts simulation." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_SimulatedStateMachineInstance = { "SimulatedStateMachineInstance", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMPreviewObject, SimulatedStateMachineInstance), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_SimulatedStateMachineInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_SimulatedStateMachineInstance_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ActorPropertyToActorName_ValueProp = { "ActorPropertyToActorName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ActorPropertyToActorName_Key_KeyProp = { "ActorPropertyToActorName_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ActorPropertyToActorName_MetaData[] = {
		{ "Comment", "/** Full property names mapped to actor names. */" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "Full property names mapped to actor names." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ActorPropertyToActorName = { "ActorPropertyToActorName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMPreviewObject, ActorPropertyToActorName), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ActorPropertyToActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ActorPropertyToActorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewStateMachineInstance_MetaData[] = {
		{ "Comment", "/** The state machine instance in the PREVIEW world. */" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "The state machine instance in the PREVIEW world." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewStateMachineInstance = { "PreviewStateMachineInstance", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMPreviewObject, PreviewStateMachineInstance), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewStateMachineInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewStateMachineInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewStateMachineActor_MetaData[] = {
		{ "Comment", "/** An actor to host a PREVIEW state machine. */" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "An actor to host a PREVIEW state machine." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewStateMachineActor = { "PreviewStateMachineActor", nullptr, (EPropertyFlags)0x0040000400002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMPreviewObject, PreviewStateMachineActor), Z_Construct_UClass_ASMPreviewStateMachineActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewStateMachineActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewStateMachineActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewWorld_MetaData[] = {
		{ "Comment", "/** The PREVIEW world if one exists. */" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "The PREVIEW world if one exists." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewWorld = { "PreviewWorld", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMPreviewObject, PreviewWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPreviewObject_Statics::NewProp_CurrentWorld_MetaData[] = {
		{ "Comment", "/** Either preview or simulation. */" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "Either preview or simulation." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_CurrentWorld = { "CurrentWorld", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMPreviewObject, CurrentWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_CurrentWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_CurrentWorld_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_SpawnedActors_Inner = { "SpawnedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMPreviewObject_Statics::NewProp_SpawnedActors_MetaData[] = {
		{ "Comment", "/** Actors currently spawned in the world. */" },
		{ "ModuleRelativePath", "Public/SMPreviewObject.h" },
		{ "ToolTip", "Actors currently spawned in the world." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USMPreviewObject_Statics::NewProp_SpawnedActors = { "SpawnedActors", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMPreviewObject, SpawnedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_SpawnedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMPreviewObject_Statics::NewProp_SpawnedActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMPreviewObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ActorNameToPreviewIndex_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ActorNameToPreviewIndex_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ActorNameToPreviewIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ContextName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_CachedContextActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_GameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_bPossessPawnContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_StateMachineTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_SimulatedStateMachineInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ActorPropertyToActorName_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ActorPropertyToActorName_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_ActorPropertyToActorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewStateMachineInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewStateMachineActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_PreviewWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_CurrentWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_SpawnedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMPreviewObject_Statics::NewProp_SpawnedActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMPreviewObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMPreviewObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMPreviewObject_Statics::ClassParams = {
		&USMPreviewObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMPreviewObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMPreviewObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMPreviewObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMPreviewObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMPreviewObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMPreviewObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMPreviewObject, 1123501471);
	template<> SMPREVIEWEDITOR_API UClass* StaticClass<USMPreviewObject>()
	{
		return USMPreviewObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMPreviewObject(Z_Construct_UClass_USMPreviewObject, &USMPreviewObject::StaticClass, TEXT("/Script/SMPreviewEditor"), TEXT("USMPreviewObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMPreviewObject);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USMPreviewObject)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
