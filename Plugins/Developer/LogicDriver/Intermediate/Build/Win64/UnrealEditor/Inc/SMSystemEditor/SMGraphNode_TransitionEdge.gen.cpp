// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Nodes/SMGraphNode_TransitionEdge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphNode_TransitionEdge() {}
// Cross Module References
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_TransitionEdge_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_TransitionEdge();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	SMSYSTEMEDITOR_API UEnum* Z_Construct_UEnum_SMSystemEditor_ESMDelegateOwner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMTransitionInstance_NoRegister();
// End Cross Module References
	void USMGraphNode_TransitionEdge::StaticRegisterNativesUSMGraphNode_TransitionEdge()
	{
	}
	UClass* Z_Construct_UClass_USMGraphNode_TransitionEdge_NoRegister()
	{
		return USMGraphNode_TransitionEdge::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelegateOwnerInstance_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DelegateOwnerInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelegateOwnerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DelegateOwnerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelegatePropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DelegatePropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelegatePropertyGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DelegatePropertyGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PriorityOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEvaluate_MetaData[];
#endif
		static void NewProp_bCanEvaluate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEvaluate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEvaluateFromEvent_MetaData[];
#endif
		static void NewProp_bCanEvaluateFromEvent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEvaluateFromEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEvalWithStartState_MetaData[];
#endif
		static void NewProp_bCanEvalWithStartState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEvalWithStartState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TransitionClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerInstance_MetaData[] = {
		{ "Category", "Event Trigger" },
		{ "Comment", "/**\n\x09 * The instance which owns the delegate the transition should bind to.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "The instance which owns the delegate the transition should bind to." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerInstance = { "DelegateOwnerInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_TransitionEdge, DelegateOwnerInstance), Z_Construct_UEnum_SMSystemEditor_ESMDelegateOwner, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerClass_MetaData[] = {
		{ "Category", "Event Trigger" },
		{ "Comment", "/**\n\x09 * The class of the instance containing the delegate.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "The class of the instance containing the delegate." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerClass = { "DelegateOwnerClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_TransitionEdge, DelegateOwnerClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyName_MetaData[] = {
		{ "Category", "Event Trigger" },
		{ "Comment", "/**\n\x09 * Available delegates.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "Available delegates." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyName = { "DelegatePropertyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_TransitionEdge, DelegatePropertyName), METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyGuid_MetaData[] = {
		{ "Comment", "/**\n\x09 * The guid assigned to this property if one exists.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "The guid assigned to this property if one exists." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyGuid = { "DelegatePropertyGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_TransitionEdge, DelegatePropertyGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_PriorityOrder_MetaData[] = {
		{ "Comment", "/**\n\x09 * @deprecated Set on the node template instead.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "@deprecated Set on the node template instead." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_PriorityOrder = { "PriorityOrder", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_TransitionEdge, PriorityOrder_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_PriorityOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_PriorityOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluate_MetaData[] = {
		{ "Comment", "/**\n\x09 * @deprecated Set on the node template instead.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "@deprecated Set on the node template instead." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluate_SetBit(void* Obj)
	{
		((USMGraphNode_TransitionEdge*)Obj)->bCanEvaluate_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluate = { "bCanEvaluate", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMGraphNode_TransitionEdge), &Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluateFromEvent_MetaData[] = {
		{ "Comment", "/**\n\x09 * @deprecated Set on the node template instead.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "@deprecated Set on the node template instead." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluateFromEvent_SetBit(void* Obj)
	{
		((USMGraphNode_TransitionEdge*)Obj)->bCanEvaluateFromEvent_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluateFromEvent = { "bCanEvaluateFromEvent", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMGraphNode_TransitionEdge), &Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluateFromEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluateFromEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluateFromEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvalWithStartState_MetaData[] = {
		{ "Comment", "/**\n\x09 * @deprecated Set on the node template instead.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
		{ "ToolTip", "@deprecated Set on the node template instead." },
	};
#endif
	void Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvalWithStartState_SetBit(void* Obj)
	{
		((USMGraphNode_TransitionEdge*)Obj)->bCanEvalWithStartState_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvalWithStartState = { "bCanEvalWithStartState", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMGraphNode_TransitionEdge), &Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvalWithStartState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvalWithStartState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvalWithStartState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_TransitionClass_MetaData[] = {
		{ "BlueprintBaseOnly", "" },
		{ "Category", "Class" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/SMGraphNode_TransitionEdge.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_TransitionClass = { "TransitionClass", nullptr, (EPropertyFlags)0x0014000002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphNode_TransitionEdge, TransitionClass), Z_Construct_UClass_USMTransitionInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_TransitionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_TransitionClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegateOwnerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_DelegatePropertyGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_PriorityOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvaluateFromEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_bCanEvalWithStartState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::NewProp_TransitionClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphNode_TransitionEdge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::ClassParams = {
		&USMGraphNode_TransitionEdge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphNode_TransitionEdge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphNode_TransitionEdge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphNode_TransitionEdge, 335030148);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphNode_TransitionEdge>()
	{
		return USMGraphNode_TransitionEdge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphNode_TransitionEdge(Z_Construct_UClass_USMGraphNode_TransitionEdge, &USMGraphNode_TransitionEdge::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraphNode_TransitionEdge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphNode_TransitionEdge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
