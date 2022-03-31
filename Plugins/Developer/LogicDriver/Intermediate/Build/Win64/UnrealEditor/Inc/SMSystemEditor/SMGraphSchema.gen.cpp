// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Schema/SMGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphSchema() {}
// Cross Module References
	SMSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	SMSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode();
	SMSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphSchema_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References

static_assert(std::is_polymorphic<FSMGraphSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FSMGraphSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewNode;
class UScriptStruct* FSMGraphSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode, Z_Construct_UPackage__Script_SMSystemEditor(), TEXT("SMGraphSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewNode.OuterSingleton;
}
template<> SMSYSTEMEDITOR_API UScriptStruct* StaticStruct<FSMGraphSchemaAction_NewNode>()
{
	return FSMGraphSchemaAction_NewNode::StaticStruct();
}
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
		if (!Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSMGraphSchemaAction_NewStateMachineReferenceNode>() == std::is_polymorphic<FSMGraphSchemaAction_NewNode>(), "USTRUCT FSMGraphSchemaAction_NewStateMachineReferenceNode cannot be polymorphic unless super FSMGraphSchemaAction_NewNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewStateMachineReferenceNode;
class UScriptStruct* FSMGraphSchemaAction_NewStateMachineReferenceNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewStateMachineReferenceNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewStateMachineReferenceNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode, Z_Construct_UPackage__Script_SMSystemEditor(), TEXT("SMGraphSchemaAction_NewStateMachineReferenceNode"));
	}
	return Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewStateMachineReferenceNode.OuterSingleton;
}
template<> SMSYSTEMEDITOR_API UScriptStruct* StaticStruct<FSMGraphSchemaAction_NewStateMachineReferenceNode>()
{
	return FSMGraphSchemaAction_NewStateMachineReferenceNode::StaticStruct();
}
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
		if (!Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewStateMachineReferenceNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewStateMachineReferenceNode.InnerSingleton, Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewStateMachineReferenceNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSMGraphSchemaAction_NewComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FSMGraphSchemaAction_NewComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewComment;
class UScriptStruct* FSMGraphSchemaAction_NewComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment, Z_Construct_UPackage__Script_SMSystemEditor(), TEXT("SMGraphSchemaAction_NewComment"));
	}
	return Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewComment.OuterSingleton;
}
template<> SMSYSTEMEDITOR_API UScriptStruct* StaticStruct<FSMGraphSchemaAction_NewComment>()
{
	return FSMGraphSchemaAction_NewComment::StaticStruct();
}
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
		if (!Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewComment.InnerSingleton, Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewComment.InnerSingleton;
	}
	void USMGraphSchema::StaticRegisterNativesUSMGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMGraphSchema);
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
		if (!Z_Registration_Info_UClass_USMGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMGraphSchema.OuterSingleton, Z_Construct_UClass_USMGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMGraphSchema.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphSchema>()
	{
		return USMGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphSchema);
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Schema_SMGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Schema_SMGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FSMGraphSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewNode_Statics::NewStructOps, TEXT("SMGraphSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMGraphSchemaAction_NewNode), 561578188U) },
		{ FSMGraphSchemaAction_NewStateMachineReferenceNode::StaticStruct, Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewStateMachineReferenceNode_Statics::NewStructOps, TEXT("SMGraphSchemaAction_NewStateMachineReferenceNode"), &Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewStateMachineReferenceNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMGraphSchemaAction_NewStateMachineReferenceNode), 1369869865U) },
		{ FSMGraphSchemaAction_NewComment::StaticStruct, Z_Construct_UScriptStruct_FSMGraphSchemaAction_NewComment_Statics::NewStructOps, TEXT("SMGraphSchemaAction_NewComment"), &Z_Registration_Info_UScriptStruct_SMGraphSchemaAction_NewComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMGraphSchemaAction_NewComment), 1467352279U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Schema_SMGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMGraphSchema, USMGraphSchema::StaticClass, TEXT("USMGraphSchema"), &Z_Registration_Info_UClass_USMGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMGraphSchema), 2930518952U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Schema_SMGraphSchema_h_4118017847(TEXT("/Script/SMSystemEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Schema_SMGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Schema_SMGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Schema_SMGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Schema_SMGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
