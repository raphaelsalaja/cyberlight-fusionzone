// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Nodes/SMGraphNode_StateNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphNode_StateNode() {}
// Cross Module References
	SMSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStateStackContainer();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeInstance_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_StateNodeBase_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_StateNodeBase();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_Base();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_StateNode_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_StateNode();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_AnyStateNode_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_AnyStateNode();
// End Cross Module References
class UScriptStruct* FStateStackContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEMEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FStateStackContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateStackContainer, Z_Construct_UPackage__Script_SMSystemEditor(), TEXT("StateStackContainer"), sizeof(FStateStackContainer), Get_Z_Construct_UScriptStruct_FStateStackContainer_Hash());
	}
	return Singleton;
}
template<> SMSYSTEMEDITOR_API UScriptStruct* StaticStruct<FStateStackContainer>()
{
	return FStateStackContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStateStackContainer(FStateStackContainer::StaticStruct, TEXT("/Script/SMSystemEditor"), TEXT("StateStackContainer"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystemEditor_StaticRegisterNativesFStateStackContainer
{
	FScriptStruct_SMSystemEditor_StaticRegisterNativesFStateStackContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StateStackContainer")),new UScriptStruct::TCppStructOps<FStateStackContainer>);
	}
} ScriptStruct_SMSystemEditor_StaticRegisterNativesFStateStackContainer;
	struct Z_Construct_UScriptStruct_FStateStackContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateStackClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StateStackClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeStackInstanceTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeStackInstanceTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateStackContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateStackContainer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_StateStackClass_MetaData[] = {
		{ "BlueprintBaseOnly", "" },
		{ "Category", "Class" },
		{ "Comment", "/** The class to assign the template for this state stack. */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateNode.h" },
		{ "ToolTip", "The class to assign the template for this state stack." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_StateStackClass = { "StateStackClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStateStackContainer, StateStackClass), Z_Construct_UClass_USMStateInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_StateStackClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_StateStackClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_NodeStackInstanceTemplate_MetaData[] = {
		{ "Category", "Class" },
		{ "Comment", "/** The instanced template to use as an archetype. */" },
		{ "DisplayName", "Template" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateNode.h" },
		{ "ToolTip", "The instanced template to use as an archetype." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_NodeStackInstanceTemplate = { "NodeStackInstanceTemplate", nullptr, (EPropertyFlags)0x00120000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStateStackContainer, NodeStackInstanceTemplate), Z_Construct_UClass_USMNodeInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_NodeStackInstanceTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_NodeStackInstanceTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_TemplateGuid_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_TemplateGuid = { "TemplateGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStateStackContainer, TemplateGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_TemplateGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_TemplateGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateStackContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_StateStackClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_NodeStackInstanceTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_TemplateGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateStackContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
		nullptr,
		&NewStructOps,
		"StateStackContainer",
		sizeof(FStateStackContainer),
		alignof(FStateStackContainer),
		Z_Construct_UScriptStruct_FStateStackContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateStackContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateStackContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateStackContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateStackContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStateStackContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystemEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StateStackContainer"), sizeof(FStateStackContainer), Get_Z_Construct_UScriptStruct_FStateStackContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStateStackContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStateStackContainer_Hash() { return 615033366U; }
	void USMGraphNode_StateNodeBase::StaticRegisterNativesUSMGraphNode_StateNodeBase()
	{
	}
	UClass* Z_Construct_UClass_USMGraphNode_StateNodeBase_NoRegister()
	{
		return USMGraphNode_StateNodeBase::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysUpdate_MetaData[];
#endif
		static void NewProp_bAlwaysUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableTickTransitionEvaluation_MetaData[];
#endif
		static void NewProp_bDisableTickTransitionEvaluation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableTickTransitionEvaluation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvalTransitionsOnStart_MetaData[];
#endif
		static void NewProp_bEvalTransitionsOnStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvalTransitionsOnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeFromAnyState_MetaData[];
#endif
		static void NewProp_bExcludeFromAnyState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeFromAnyState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class required as states and conduits branch separately from a common source. */" },
		{ "IncludePath", "Graph/Nodes/SMGraphNode_StateNode.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateNode.h" },
		{ "ToolTip", "Base class required as states and conduits branch separately from a common source." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bAlwaysUpdate_MetaData[] = {
		{ "Comment", "/**\n\x09 * @deprecated Set on the node template instead.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateNode.h" },
		{ "ToolTip", "@deprecated Set on the node template instead." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bAlwaysUpdate_SetBit(void* Obj)
	{
		((USMGraphNode_StateNodeBase*)Obj)->bAlwaysUpdate_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bAlwaysUpdate = { "bAlwaysUpdate", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMGraphNode_StateNodeBase), &Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bAlwaysUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bAlwaysUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bAlwaysUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bDisableTickTransitionEvaluation_MetaData[] = {
		{ "Comment", "/**\n\x09 * @deprecated Set on the node template instead.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateNode.h" },
		{ "ToolTip", "@deprecated Set on the node template instead." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bDisableTickTransitionEvaluation_SetBit(void* Obj)
	{
		((USMGraphNode_StateNodeBase*)Obj)->bDisableTickTransitionEvaluation_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bDisableTickTransitionEvaluation = { "bDisableTickTransitionEvaluation", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMGraphNode_StateNodeBase), &Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bDisableTickTransitionEvaluation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bDisableTickTransitionEvaluation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bDisableTickTransitionEvaluation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bEvalTransitionsOnStart_MetaData[] = {
		{ "Comment", "/**\n\x09 * @deprecated Set on the node template instead.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateNode.h" },
		{ "ToolTip", "@deprecated Set on the node template instead." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bEvalTransitionsOnStart_SetBit(void* Obj)
	{
		((USMGraphNode_StateNodeBase*)Obj)->bEvalTransitionsOnStart_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bEvalTransitionsOnStart = { "bEvalTransitionsOnStart", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMGraphNode_StateNodeBase), &Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bEvalTransitionsOnStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bEvalTransitionsOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bEvalTransitionsOnStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bExcludeFromAnyState_MetaData[] = {
		{ "Comment", "/**\n\x09 * @deprecated Set on the node template instead.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateNode.h" },
		{ "ToolTip", "@deprecated Set on the node template instead." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bExcludeFromAnyState_SetBit(void* Obj)
	{
		((USMGraphNode_StateNodeBase*)Obj)->bExcludeFromAnyState_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bExcludeFromAnyState = { "bExcludeFromAnyState", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMGraphNode_StateNodeBase), &Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bExcludeFromAnyState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bExcludeFromAnyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bExcludeFromAnyState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bAlwaysUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bDisableTickTransitionEvaluation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bEvalTransitionsOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::NewProp_bExcludeFromAnyState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphNode_StateNodeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::ClassParams = {
		&USMGraphNode_StateNodeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphNode_StateNodeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphNode_StateNodeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphNode_StateNodeBase, 1992782823);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphNode_StateNodeBase>()
	{
		return USMGraphNode_StateNodeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphNode_StateNodeBase(Z_Construct_UClass_USMGraphNode_StateNodeBase, &USMGraphNode_StateNodeBase::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraphNode_StateNodeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphNode_StateNodeBase);
	void USMGraphNode_StateNode::StaticRegisterNativesUSMGraphNode_StateNode()
	{
	}
	UClass* Z_Construct_UClass_USMGraphNode_StateNode_NoRegister()
	{
		return USMGraphNode_StateNode::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphNode_StateNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StateClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StateStack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphNode_StateNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphNode_StateNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_StateNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Regular state nodes which have K2 graphs.\n */" },
		{ "IncludePath", "Graph/Nodes/SMGraphNode_StateNode.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateNode.h" },
		{ "ToolTip", "Regular state nodes which have K2 graphs." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_StateNode_Statics::NewProp_StateClass_MetaData[] = {
		{ "BlueprintBaseOnly", "" },
		{ "Category", "Class" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateNode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USMGraphNode_StateNode_Statics::NewProp_StateClass = { "StateClass", nullptr, (EPropertyFlags)0x0014000002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_StateNode, StateClass), Z_Construct_UClass_USMStateInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_StateNode_Statics::NewProp_StateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_StateNode_Statics::NewProp_StateClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphNode_StateNode_Statics::NewProp_StateStack_Inner = { "StateStack", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStateStackContainer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_StateNode_Statics::NewProp_StateStack_MetaData[] = {
		{ "Category", "Class" },
		{ "Comment", "/** Augment the state by adding additional state classes to perform logic processing. */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateNode.h" },
		{ "ToolTip", "Augment the state by adding additional state classes to perform logic processing." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USMGraphNode_StateNode_Statics::NewProp_StateStack = { "StateStack", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_StateNode, StateStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_StateNode_Statics::NewProp_StateStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_StateNode_Statics::NewProp_StateStack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphNode_StateNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_StateNode_Statics::NewProp_StateClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_StateNode_Statics::NewProp_StateStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_StateNode_Statics::NewProp_StateStack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphNode_StateNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphNode_StateNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphNode_StateNode_Statics::ClassParams = {
		&USMGraphNode_StateNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphNode_StateNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_StateNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_StateNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_StateNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphNode_StateNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphNode_StateNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphNode_StateNode, 1024001670);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphNode_StateNode>()
	{
		return USMGraphNode_StateNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphNode_StateNode(Z_Construct_UClass_USMGraphNode_StateNode, &USMGraphNode_StateNode::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraphNode_StateNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphNode_StateNode);
	void USMGraphNode_AnyStateNode::StaticRegisterNativesUSMGraphNode_AnyStateNode()
	{
	}
	UClass* Z_Construct_UClass_USMGraphNode_AnyStateNode_NoRegister()
	{
		return USMGraphNode_AnyStateNode::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInitialReentry_MetaData[];
#endif
		static void NewProp_bAllowInitialReentry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInitialReentry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NodeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphNode_StateNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Nodes without a graph that just serve to transfer their transitions to all other USMGraphNode_StateNodeBase in a single SMGraph.\n */" },
		{ "IncludePath", "Graph/Nodes/SMGraphNode_StateNode.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateNode.h" },
		{ "ToolTip", "Nodes without a graph that just serve to transfer their transitions to all other USMGraphNode_StateNodeBase in a single SMGraph." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bAllowInitialReentry_MetaData[] = {
		{ "Category", "Any State" },
		{ "Comment", "/** Allows the initial transitions to evaluate even when the active state is an initial state of this node.\n\x09 * Default behavior prevents this. */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateNode.h" },
		{ "ToolTip", "Allows the initial transitions to evaluate even when the active state is an initial state of this node.\nDefault behavior prevents this." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bAllowInitialReentry_SetBit(void* Obj)
	{
		((USMGraphNode_AnyStateNode*)Obj)->bAllowInitialReentry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bAllowInitialReentry = { "bAllowInitialReentry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMGraphNode_AnyStateNode), &Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bAllowInitialReentry_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bAllowInitialReentry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bAllowInitialReentry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_NodeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_StateNode.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_AnyStateNode, NodeName), METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_NodeName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_bAllowInitialReentry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::NewProp_NodeName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphNode_AnyStateNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::ClassParams = {
		&USMGraphNode_AnyStateNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphNode_AnyStateNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphNode_AnyStateNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphNode_AnyStateNode, 3960992802);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphNode_AnyStateNode>()
	{
		return USMGraphNode_AnyStateNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphNode_AnyStateNode(Z_Construct_UClass_USMGraphNode_AnyStateNode, &USMGraphNode_AnyStateNode::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraphNode_AnyStateNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphNode_AnyStateNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
