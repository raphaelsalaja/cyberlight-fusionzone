// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphK2Node_FunctionNodes() {}
// Cross Module References
	SMSYSTEMEDITOR_API UEnum* Z_Construct_UEnum_SMSystemEditor_ESMDelegateOwner();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_FunctionNode_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_FunctionNode();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_FunctionNode_StateMachineRef_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_FunctionNode_StateMachineRef();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Start_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Start();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Update_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Update();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Stop_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Stop();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_NoRegister();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMTransitionInstance_NoRegister();
// End Cross Module References
	static UEnum* ESMDelegateOwner_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SMSystemEditor_ESMDelegateOwner, Z_Construct_UPackage__Script_SMSystemEditor(), TEXT("ESMDelegateOwner"));
		}
		return Singleton;
	}
	template<> SMSYSTEMEDITOR_API UEnum* StaticEnum<ESMDelegateOwner>()
	{
		return ESMDelegateOwner_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESMDelegateOwner(ESMDelegateOwner_StaticEnum, TEXT("/Script/SMSystemEditor"), TEXT("ESMDelegateOwner"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SMSystemEditor_ESMDelegateOwner_Hash() { return 929732945U; }
	UEnum* Z_Construct_UEnum_SMSystemEditor_ESMDelegateOwner()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystemEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESMDelegateOwner"), 0, Get_Z_Construct_UEnum_SMSystemEditor_ESMDelegateOwner_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SMDO_This", (int64)SMDO_This },
				{ "SMDO_Context", (int64)SMDO_Context },
				{ "SMDO_PreviousState", (int64)SMDO_PreviousState },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h" },
				{ "SMDO_Context.Comment", "/**\n\x09 * The context object for this state machine.\n\x09 * The class is not known until run-time and needs to be chosen manually. */" },
				{ "SMDO_Context.DisplayName", "Context" },
				{ "SMDO_Context.Name", "SMDO_Context" },
				{ "SMDO_Context.ToolTip", "The context object for this state machine.\nThe class is not known until run-time and needs to be chosen manually." },
				{ "SMDO_PreviousState.Comment", "/** The previous state instance. The class is determined by the state. */" },
				{ "SMDO_PreviousState.DisplayName", "Previous State" },
				{ "SMDO_PreviousState.Name", "SMDO_PreviousState" },
				{ "SMDO_PreviousState.ToolTip", "The previous state instance. The class is determined by the state." },
				{ "SMDO_This.Comment", "/** This state machine instance. */" },
				{ "SMDO_This.DisplayName", "This" },
				{ "SMDO_This.Name", "SMDO_This" },
				{ "SMDO_This.ToolTip", "This state machine instance." },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SMSystemEditor,
				nullptr,
				"ESMDelegateOwner",
				"ESMDelegateOwner",
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
	void USMGraphK2Node_FunctionNode::StaticRegisterNativesUSMGraphK2Node_FunctionNode()
	{
	}
	UClass* Z_Construct_UClass_USMGraphK2Node_FunctionNode_NoRegister()
	{
		return USMGraphK2Node_FunctionNode::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphK2Node_FunctionNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphK2Node_FunctionNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2Node_RuntimeNodeReference,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_FunctionNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphK2Node_FunctionNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphK2Node_FunctionNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphK2Node_FunctionNode_Statics::ClassParams = {
		&USMGraphK2Node_FunctionNode::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_FunctionNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_FunctionNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphK2Node_FunctionNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphK2Node_FunctionNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphK2Node_FunctionNode, 2811629453);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphK2Node_FunctionNode>()
	{
		return USMGraphK2Node_FunctionNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphK2Node_FunctionNode(Z_Construct_UClass_USMGraphK2Node_FunctionNode, &USMGraphK2Node_FunctionNode::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraphK2Node_FunctionNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphK2Node_FunctionNode);
	void USMGraphK2Node_FunctionNode_StateMachineRef::StaticRegisterNativesUSMGraphK2Node_FunctionNode_StateMachineRef()
	{
	}
	UClass* Z_Construct_UClass_USMGraphK2Node_FunctionNode_StateMachineRef_NoRegister()
	{
		return USMGraphK2Node_FunctionNode_StateMachineRef::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphK2Node_FunctionNode_StateMachineRef_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphK2Node_FunctionNode_StateMachineRef_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2Node_FunctionNode,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_FunctionNode_StateMachineRef_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphK2Node_FunctionNode_StateMachineRef_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphK2Node_FunctionNode_StateMachineRef>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphK2Node_FunctionNode_StateMachineRef_Statics::ClassParams = {
		&USMGraphK2Node_FunctionNode_StateMachineRef::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_FunctionNode_StateMachineRef_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_FunctionNode_StateMachineRef_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphK2Node_FunctionNode_StateMachineRef()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphK2Node_FunctionNode_StateMachineRef_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphK2Node_FunctionNode_StateMachineRef, 651333265);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphK2Node_FunctionNode_StateMachineRef>()
	{
		return USMGraphK2Node_FunctionNode_StateMachineRef::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphK2Node_FunctionNode_StateMachineRef(Z_Construct_UClass_USMGraphK2Node_FunctionNode_StateMachineRef, &USMGraphK2Node_FunctionNode_StateMachineRef::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraphK2Node_FunctionNode_StateMachineRef"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphK2Node_FunctionNode_StateMachineRef);
	void USMGraphK2Node_StateMachineRef_Start::StaticRegisterNativesUSMGraphK2Node_StateMachineRef_Start()
	{
	}
	UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Start_NoRegister()
	{
		return USMGraphK2Node_StateMachineRef_Start::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Start_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Start_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2Node_FunctionNode_StateMachineRef,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Start_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Start_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphK2Node_StateMachineRef_Start>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Start_Statics::ClassParams = {
		&USMGraphK2Node_StateMachineRef_Start::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Start_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Start_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Start()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Start_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphK2Node_StateMachineRef_Start, 1751099756);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphK2Node_StateMachineRef_Start>()
	{
		return USMGraphK2Node_StateMachineRef_Start::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphK2Node_StateMachineRef_Start(Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Start, &USMGraphK2Node_StateMachineRef_Start::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraphK2Node_StateMachineRef_Start"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphK2Node_StateMachineRef_Start);
	void USMGraphK2Node_StateMachineRef_Update::StaticRegisterNativesUSMGraphK2Node_StateMachineRef_Update()
	{
	}
	UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Update_NoRegister()
	{
		return USMGraphK2Node_StateMachineRef_Update::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Update_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Update_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2Node_FunctionNode_StateMachineRef,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Update_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Update_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphK2Node_StateMachineRef_Update>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Update_Statics::ClassParams = {
		&USMGraphK2Node_StateMachineRef_Update::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Update_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Update_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Update()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Update_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphK2Node_StateMachineRef_Update, 3790022472);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphK2Node_StateMachineRef_Update>()
	{
		return USMGraphK2Node_StateMachineRef_Update::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphK2Node_StateMachineRef_Update(Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Update, &USMGraphK2Node_StateMachineRef_Update::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraphK2Node_StateMachineRef_Update"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphK2Node_StateMachineRef_Update);
	void USMGraphK2Node_StateMachineRef_Stop::StaticRegisterNativesUSMGraphK2Node_StateMachineRef_Stop()
	{
	}
	UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Stop_NoRegister()
	{
		return USMGraphK2Node_StateMachineRef_Stop::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Stop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Stop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2Node_FunctionNode_StateMachineRef,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Stop_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Stop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphK2Node_StateMachineRef_Stop>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Stop_Statics::ClassParams = {
		&USMGraphK2Node_StateMachineRef_Stop::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Stop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Stop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Stop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Stop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphK2Node_StateMachineRef_Stop, 4183735283);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphK2Node_StateMachineRef_Stop>()
	{
		return USMGraphK2Node_StateMachineRef_Stop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphK2Node_StateMachineRef_Stop(Z_Construct_UClass_USMGraphK2Node_StateMachineRef_Stop, &USMGraphK2Node_StateMachineRef_Stop::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraphK2Node_StateMachineRef_Stop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphK2Node_StateMachineRef_Stop);
	void USMGraphK2Node_FunctionNode_TransitionEvent::StaticRegisterNativesUSMGraphK2Node_FunctionNode_TransitionEvent()
	{
	}
	UClass* Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_NoRegister()
	{
		return USMGraphK2Node_FunctionNode_TransitionEvent::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelegatePropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DelegatePropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelegateOwnerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DelegateOwnerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelegateOwnerInstance_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DelegateOwnerInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TransitionClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2Node_FunctionNode,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_DelegatePropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_DelegatePropertyName = { "DelegatePropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphK2Node_FunctionNode_TransitionEvent, DelegatePropertyName), METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_DelegatePropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_DelegatePropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_DelegateOwnerClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_DelegateOwnerClass = { "DelegateOwnerClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphK2Node_FunctionNode_TransitionEvent, DelegateOwnerClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_DelegateOwnerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_DelegateOwnerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_DelegateOwnerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_DelegateOwnerInstance = { "DelegateOwnerInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphK2Node_FunctionNode_TransitionEvent, DelegateOwnerInstance), Z_Construct_UEnum_SMSystemEditor_ESMDelegateOwner, METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_DelegateOwnerInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_DelegateOwnerInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_EventReference_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphK2Node_FunctionNode_TransitionEvent, EventReference), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_EventReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_EventReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_TransitionClass_MetaData[] = {
		{ "Comment", "/** Transition class of the transition edge. */" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/Helpers/SMGraphK2Node_FunctionNodes.h" },
		{ "ToolTip", "Transition class of the transition edge." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_TransitionClass = { "TransitionClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphK2Node_FunctionNode_TransitionEvent, TransitionClass), Z_Construct_UClass_USMTransitionInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_TransitionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_TransitionClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_DelegatePropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_DelegateOwnerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_DelegateOwnerInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_EventReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::NewProp_TransitionClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphK2Node_FunctionNode_TransitionEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::ClassParams = {
		&USMGraphK2Node_FunctionNode_TransitionEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphK2Node_FunctionNode_TransitionEvent, 404103865);
	template<> SMSYSTEMEDITOR_API UClass* StaticClass<USMGraphK2Node_FunctionNode_TransitionEvent>()
	{
		return USMGraphK2Node_FunctionNode_TransitionEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphK2Node_FunctionNode_TransitionEvent(Z_Construct_UClass_USMGraphK2Node_FunctionNode_TransitionEvent, &USMGraphK2Node_FunctionNode_TransitionEvent::StaticClass, TEXT("/Script/SMSystemEditor"), TEXT("USMGraphK2Node_FunctionNode_TransitionEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphK2Node_FunctionNode_TransitionEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
