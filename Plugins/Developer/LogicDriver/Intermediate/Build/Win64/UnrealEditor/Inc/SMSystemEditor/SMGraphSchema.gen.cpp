// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Schema/SMGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphSchema() {}
// Cross Module References
	SMSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	SMSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode();
	SMSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphSchema_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References

static_assert(std::is_polymorphic<FSMGraphSchemaAction_NewComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FSMGraphSchemaAction_NewComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

class UScriptStruct* FSMGraphSchemaAction_NewComment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEMEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment, Z_Construct_UPackage__Script_SMSystemEditor(), TEXT("SMGraphSchemaAction_NewComment"), sizeof(FSMGraphSchemaAction_NewComment), Get_Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment_Hash());
	}
	return Singleton;
}
template<> SMSYSTEMEDITOR_API UScriptStruct* StaticStruct<FSMGraphSchemaAction_NewComment>()
{
	return FSMGraphSchemaAction_NewComment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMGraphSchemaAction_NewComment(FSMGraphSchemaAction_NewComment::StaticStruct, TEXT("/Script/SMSystemEditor"), TEXT("SMGraphSchemaAction_NewComment"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystemEditor_StaticRegisterNativesFSMGraphSchemaAction_NewComment
{
	FScriptStruct_SMSystemEditor_StaticRegisterNativesFSMGraphSchemaAction_NewComment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMGraphSchemaAction_NewComment")),new UScriptStruct::TCppStructOps<FSMGraphSchemaAction_NewComment>);
	}
} ScriptStruct_SMSystemEditor_StaticRegisterNativesFSMGraphSchemaAction_NewComment;
	struct Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to create new comment */" },
		{ "ModuleRelativePath", "Private/Graph/Schema/SMGraphSchema.h" },
		{ "ToolTip", "Action to create new comment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMGraphSchemaAction_NewComment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"SMGraphSchemaAction_NewComment",
		sizeof(FSMGraphSchemaAction_NewComment),
		alignof(FSMGraphSchemaAction_NewComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystemEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMGraphSchemaAction_NewComment"), sizeof(FSMGraphSchemaAction_NewComment), Get_Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment_Hash() { return 4010356199U; }

static_assert(std::is_polymorphic<FSMGraphSchemaAction_NewStateMachineReferenceNode>() == std::is_polymorphic<FSMGraphSchemaAction_NewNode>(), "USTRUCT FSMGraphSchemaAction_NewStateMachineReferenceNode cannot be polymorphic unless super FSMGraphSchemaAction_NewNode is polymorphic");

class UScriptStruct* FSMGraphSchemaAction_NewStateMachineReferenceNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEMEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode, Z_Construct_UPackage__Script_SMSystemEditor(), TEXT("SMGraphSchemaAction_NewStateMachineReferenceNode"), sizeof(FSMGraphSchemaAction_NewStateMachineReferenceNode), Get_Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode_Hash());
	}
	return Singleton;
}
template<> SMSYSTEMEDITOR_API UScriptStruct* StaticStruct<FSMGraphSchemaAction_NewStateMachineReferenceNode>()
{
	return FSMGraphSchemaAction_NewStateMachineReferenceNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode(FSMGraphSchemaAction_NewStateMachineReferenceNode::StaticStruct, TEXT("/Script/SMSystemEditor"), TEXT("SMGraphSchemaAction_NewStateMachineReferenceNode"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystemEditor_StaticRegisterNativesFSMGraphSchemaAction_NewStateMachineReferenceNode
{
	FScriptStruct_SMSystemEditor_StaticRegisterNativesFSMGraphSchemaAction_NewStateMachineReferenceNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMGraphSchemaAction_NewStateMachineReferenceNode")),new UScriptStruct::TCppStructOps<FSMGraphSchemaAction_NewStateMachineReferenceNode>);
	}
} ScriptStruct_SMSystemEditor_StaticRegisterNativesFSMGraphSchemaAction_NewStateMachineReferenceNode;
	struct Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to reference a state machine */" },
		{ "ModuleRelativePath", "Private/Graph/Schema/SMGraphSchema.h" },
		{ "ToolTip", "Action to reference a state machine" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMGraphSchemaAction_NewStateMachineReferenceNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
		Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode,
		&NewStructOps,
		"SMGraphSchemaAction_NewStateMachineReferenceNode",
		sizeof(FSMGraphSchemaAction_NewStateMachineReferenceNode),
		alignof(FSMGraphSchemaAction_NewStateMachineReferenceNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystemEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMGraphSchemaAction_NewStateMachineReferenceNode"), sizeof(FSMGraphSchemaAction_NewStateMachineReferenceNode), Get_Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode_Hash() { return 1651060801U; }

static_assert(std::is_polymorphic<FSMGraphSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FSMGraphSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

class UScriptStruct* FSMGraphSchemaAction_NewNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEMEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode, Z_Construct_UPackage__Script_SMSystemEditor(), TEXT("SMGraphSchemaAction_NewNode"), sizeof(FSMGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode_Hash());
	}
	return Singleton;
}
template<> SMSYSTEMEDITOR_API UScriptStruct* StaticStruct<FSMGraphSchemaAction_NewNode>()
{
	return FSMGraphSchemaAction_NewNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMGraphSchemaAction_NewNode(FSMGraphSchemaAction_NewNode::StaticStruct, TEXT("/Script/SMSystemEditor"), TEXT("SMGraphSchemaAction_NewNode"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystemEditor_StaticRegisterNativesFSMGraphSchemaAction_NewNode
{
	FScriptStruct_SMSystemEditor_StaticRegisterNativesFSMGraphSchemaAction_NewNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMGraphSchemaAction_NewNode")),new UScriptStruct::TCppStructOps<FSMGraphSchemaAction_NewNode>);
	}
} ScriptStruct_SMSystemEditor_StaticRegisterNativesFSMGraphSchemaAction_NewNode;
	struct Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Private/Graph/Schema/SMGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMGraphSchemaAction_NewNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"SMGraphSchemaAction_NewNode",
		sizeof(FSMGraphSchemaAction_NewNode),
		alignof(FSMGraphSchemaAction_NewNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystemEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMGraphSchemaAction_NewNode"), sizeof(FSMGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode_Hash() { return 1240329134U; }
	void USMGraphSchema::StaticRegisterNativesUSMGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_USMGraphSchema_NoRegister()
	{
		return USMGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Schema/SMGraphSchema.h" },
		{ "ModuleRelativePath", "Private/Graph/Schema/SMGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphSchema_Statics::ClassParams = {
		&USMGraphSchema::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphSchema, 2015684406);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphSchema>()
	{
		return USMGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphSchema(Z_Construct_UClass_USMGraphSchema, &USMGraphSchema::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
