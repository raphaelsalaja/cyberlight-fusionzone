// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Nodes/SMGraphNode_Base.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphNode_Base() {}
// Cross Module References
	SMSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphNodeLog();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_Base_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_Base();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeInstance_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_PropertyNode_Base_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMGraphNodeLog;
class UScriptStruct* FSMGraphNodeLog::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMGraphNodeLog.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMGraphNodeLog.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMGraphNodeLog, Z_Construct_UPackage__Script_SMSystemEditor(), TEXT("SMGraphNodeLog"));
	}
	return Z_Registration_Info_UScriptStruct_SMGraphNodeLog.OuterSingleton;
}
template<> SMSYSTEMEDITOR_API UScriptStruct* StaticStruct<FSMGraphNodeLog>()
{
	return FSMGraphNodeLog::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConsoleMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferenceList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferenceList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMGraphNodeLog>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_ConsoleMessage_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_ConsoleMessage = { "ConsoleMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphNodeLog, ConsoleMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_ConsoleMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_ConsoleMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_NodeMessage_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_NodeMessage = { "NodeMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphNodeLog, NodeMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_NodeMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_NodeMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_LogType_MetaData[] = {
		{ "Comment", "/** EMessageSeverity::Type */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
		{ "ToolTip", "EMessageSeverity::Type" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_LogType = { "LogType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphNodeLog, LogType), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_LogType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_LogType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_ReferenceList_Inner = { "ReferenceList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_ReferenceList_MetaData[] = {
		{ "Comment", "/** Objects like nodes or pins to go to the log. */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
		{ "ToolTip", "Objects like nodes or pins to go to the log." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_ReferenceList = { "ReferenceList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphNodeLog, ReferenceList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_ReferenceList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_ReferenceList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_ConsoleMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_NodeMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_LogType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_ReferenceList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewProp_ReferenceList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
		nullptr,
		&NewStructOps,
		"SMGraphNodeLog",
		sizeof(FSMGraphNodeLog),
		alignof(FSMGraphNodeLog),
		Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMGraphNodeLog()
	{
		if (!Z_Registration_Info_UScriptStruct_SMGraphNodeLog.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMGraphNodeLog.InnerSingleton, Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SMGraphNodeLog.InnerSingleton;
	}
	void USMGraphNode_Base::StaticRegisterNativesUSMGraphNode_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMGraphNode_Base);
	UClass* Z_Construct_UClass_USMGraphNode_Base_NoRegister()
	{
		return USMGraphNode_Base::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphNode_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollectedLogs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectedLogs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollectedLogs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodePosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeInstanceTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeInstanceTemplate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphPropertyGraphs_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphPropertyGraphs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphPropertyGraphs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GraphPropertyGraphs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphPropertyNodes_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphPropertyNodes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphPropertyNodes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GraphPropertyNodes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphPropertyTemplates_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphPropertyTemplates_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphPropertyTemplates_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GraphPropertyTemplates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedTexture_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CachedTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedTextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedTextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedNodeTintColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedNodeTintColor;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PropertyCategoriesExpanded_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyCategoriesExpanded_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyCategoriesExpanded_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PropertyCategoriesExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LoadedVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphNode_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/SMGraphNode_Base.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CollectedLogs_Inner = { "CollectedLogs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMGraphNodeLog, METADATA_PARAMS(nullptr, 0) }; // 1936420697
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CollectedLogs_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CollectedLogs = { "CollectedLogs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_Base, CollectedLogs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CollectedLogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CollectedLogs_MetaData)) }; // 1936420697
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_BoundGraph_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_BoundGraph = { "BoundGraph", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_Base, BoundGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_BoundGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_BoundGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_NodePosition_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The node position on the graph. This is managed completely by the editor graph. */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
		{ "ToolTip", "The node position on the graph. This is managed completely by the editor graph." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_NodePosition = { "NodePosition", nullptr, (EPropertyFlags)0x00200c0000030001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_Base, NodePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_NodePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_NodePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_NodeInstanceTemplate_MetaData[] = {
		{ "Category", "Class" },
		{ "Comment", "/** The instanced template to use as an archetype. This node name is used in EditorCustomization directly! */" },
		{ "DisplayName", "Template" },
		{ "DisplayThumbnail", "TRUE" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
		{ "ToolTip", "The instanced template to use as an archetype. This node name is used in EditorCustomization directly!" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_NodeInstanceTemplate = { "NodeInstanceTemplate", nullptr, (EPropertyFlags)0x00220800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_Base, NodeInstanceTemplate), Z_Construct_UClass_USMNodeInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_NodeInstanceTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_NodeInstanceTemplate_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyGraphs_ValueProp = { "GraphPropertyGraphs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyGraphs_Key_KeyProp = { "GraphPropertyGraphs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyGraphs_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyGraphs = { "GraphPropertyGraphs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_Base, GraphPropertyGraphs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyGraphs_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyNodes_ValueProp = { "GraphPropertyNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USMGraphK2Node_PropertyNode_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyNodes_Key_KeyProp = { "GraphPropertyNodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyNodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyNodes = { "GraphPropertyNodes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_Base, GraphPropertyNodes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyNodes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyTemplates_ValueProp = { "GraphPropertyTemplates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USMNodeInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyTemplates_Key_KeyProp = { "GraphPropertyTemplates_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyTemplates_MetaData[] = {
		{ "Comment", "/** The template each graph property points to. Generally the NodeInstanceTemplate but if a state uses the state stack it will vary. */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
		{ "ToolTip", "The template each graph property points to. Generally the NodeInstanceTemplate but if a state uses the state stack it will vary." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyTemplates = { "GraphPropertyTemplates", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_Base, GraphPropertyTemplates), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyTemplates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyTemplates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedBrush_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedBrush = { "CachedBrush", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_Base, CachedBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedBrush_MetaData)) }; // 852902259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedTexture_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedTexture = { "CachedTexture", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_Base, CachedTexture), METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedTextureSize_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedTextureSize = { "CachedTextureSize", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_Base, CachedTextureSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedTextureSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedNodeTintColor_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedNodeTintColor = { "CachedNodeTintColor", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_Base, CachedNodeTintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedNodeTintColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedNodeTintColor_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_PropertyCategoriesExpanded_ValueProp = { "PropertyCategoriesExpanded", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_PropertyCategoriesExpanded_Key_KeyProp = { "PropertyCategoriesExpanded_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_PropertyCategoriesExpanded_MetaData[] = {
		{ "Comment", "/** Property category expansion state for slate node. */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
		{ "ToolTip", "Property category expansion state for slate node." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_PropertyCategoriesExpanded = { "PropertyCategoriesExpanded", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_Base, PropertyCategoriesExpanded), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_PropertyCategoriesExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_PropertyCategoriesExpanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_LoadedVersion_MetaData[] = {
		{ "Comment", "/** The current loaded version. Once saved it should be the highest version available. */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_Base.h" },
		{ "ToolTip", "The current loaded version. Once saved it should be the highest version available." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_LoadedVersion = { "LoadedVersion", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_Base, LoadedVersion), METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_LoadedVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_LoadedVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphNode_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CollectedLogs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CollectedLogs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_BoundGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_NodePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_NodeInstanceTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyGraphs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyGraphs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyGraphs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyNodes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyNodes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyTemplates_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyTemplates_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_GraphPropertyTemplates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedTextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_CachedNodeTintColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_PropertyCategoriesExpanded_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_PropertyCategoriesExpanded_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_PropertyCategoriesExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_Base_Statics::NewProp_LoadedVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphNode_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphNode_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphNode_Base_Statics::ClassParams = {
		&USMGraphNode_Base::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphNode_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_Base_Statics::PropPointers),
		0,
		0x009004A5u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphNode_Base()
	{
		if (!Z_Registration_Info_UClass_USMGraphNode_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMGraphNode_Base.OuterSingleton, Z_Construct_UClass_USMGraphNode_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMGraphNode_Base.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphNode_Base>()
	{
		return USMGraphNode_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphNode_Base);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USMGraphNode_Base)
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_Statics::ScriptStructInfo[] = {
		{ FSMGraphNodeLog::StaticStruct, Z_Construct_UScriptStruct_FSMGraphNodeLog_Statics::NewStructOps, TEXT("SMGraphNodeLog"), &Z_Registration_Info_UScriptStruct_SMGraphNodeLog, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMGraphNodeLog), 1936420697U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMGraphNode_Base, USMGraphNode_Base::StaticClass, TEXT("USMGraphNode_Base"), &Z_Registration_Info_UClass_USMGraphNode_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMGraphNode_Base), 3232379497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_2155869973(TEXT("/Script/SMSystemEditor"),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_Graph_Nodes_SMGraphNode_Base_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
