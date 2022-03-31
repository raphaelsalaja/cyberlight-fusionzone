// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystemEditor/Private/NodeStack/NodeStackContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeStackContainer() {}
// Cross Module References
	SMSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNodeStackContainer();
	UPackage* Z_Construct_UPackage__Script_SMSystemEditor();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeInstance_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SMSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStateStackContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_NoRegister();
	SMSYSTEMEDITOR_API UEnum* Z_Construct_UEnum_SMSystemEditor_ESMExpressionMode();
	SMSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTransitionStackContainer();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMTransitionInstance_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeStackContainer;
class UScriptStruct* FNodeStackContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeStackContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeStackContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeStackContainer, Z_Construct_UPackage__Script_SMSystemEditor(), TEXT("NodeStackContainer"));
	}
	return Z_Registration_Info_UScriptStruct_NodeStackContainer.OuterSingleton;
}
template<> SMSYSTEMEDITOR_API UScriptStruct* StaticStruct<FNodeStackContainer>()
{
	return FNodeStackContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodeStackContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeStackContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/NodeStack/NodeStackContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeStackContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeStackContainer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeStackContainer_Statics::NewProp_NodeStackInstanceTemplate_MetaData[] = {
		{ "Category", "Class" },
		{ "Comment", "/** The instanced template to use as an archetype. */" },
		{ "DisplayName", "Template" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NodeStack/NodeStackContainer.h" },
		{ "ToolTip", "The instanced template to use as an archetype." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNodeStackContainer_Statics::NewProp_NodeStackInstanceTemplate = { "NodeStackInstanceTemplate", nullptr, (EPropertyFlags)0x00120000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeStackContainer, NodeStackInstanceTemplate), Z_Construct_UClass_USMNodeInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeStackContainer_Statics::NewProp_NodeStackInstanceTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeStackContainer_Statics::NewProp_NodeStackInstanceTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeStackContainer_Statics::NewProp_TemplateGuid_MetaData[] = {
		{ "ModuleRelativePath", "Private/NodeStack/NodeStackContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodeStackContainer_Statics::NewProp_TemplateGuid = { "TemplateGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeStackContainer, TemplateGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeStackContainer_Statics::NewProp_TemplateGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeStackContainer_Statics::NewProp_TemplateGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeStackContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeStackContainer_Statics::NewProp_NodeStackInstanceTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeStackContainer_Statics::NewProp_TemplateGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeStackContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
		nullptr,
		&NewStructOps,
		"NodeStackContainer",
		sizeof(FNodeStackContainer),
		alignof(FNodeStackContainer),
		Z_Construct_UScriptStruct_FNodeStackContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeStackContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeStackContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeStackContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeStackContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_NodeStackContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeStackContainer.InnerSingleton, Z_Construct_UScriptStruct_FNodeStackContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodeStackContainer.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStateStackContainer>() == std::is_polymorphic<FNodeStackContainer>(), "USTRUCT FStateStackContainer cannot be polymorphic unless super FNodeStackContainer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateStackContainer;
class UScriptStruct* FStateStackContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateStackContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateStackContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateStackContainer, Z_Construct_UPackage__Script_SMSystemEditor(), TEXT("StateStackContainer"));
	}
	return Z_Registration_Info_UScriptStruct_StateStackContainer.OuterSingleton;
}
template<> SMSYSTEMEDITOR_API UScriptStruct* StaticStruct<FStateStackContainer>()
{
	return FStateStackContainer::StaticStruct();
}
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateStackContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/NodeStack/NodeStackContainer.h" },
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
		{ "ModuleRelativePath", "Private/NodeStack/NodeStackContainer.h" },
		{ "ToolTip", "The class to assign the template for this state stack." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_StateStackClass = { "StateStackClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStateStackContainer, StateStackClass), Z_Construct_UClass_USMStateInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_StateStackClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_StateStackClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateStackContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewProp_StateStackClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateStackContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
		Z_Construct_UScriptStruct_FNodeStackContainer,
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
		if (!Z_Registration_Info_UScriptStruct_StateStackContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateStackContainer.InnerSingleton, Z_Construct_UScriptStruct_FStateStackContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateStackContainer.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESMExpressionMode;
	static UEnum* ESMExpressionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESMExpressionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESMExpressionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SMSystemEditor_ESMExpressionMode, Z_Construct_UPackage__Script_SMSystemEditor(), TEXT("ESMExpressionMode"));
		}
		return Z_Registration_Info_UEnum_ESMExpressionMode.OuterSingleton;
	}
	template<> SMSYSTEMEDITOR_API UEnum* StaticEnum<ESMExpressionMode>()
	{
		return ESMExpressionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SMSystemEditor_ESMExpressionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SMSystemEditor_ESMExpressionMode_Statics::Enumerators[] = {
		{ "ESMExpressionMode::AND", (int64)ESMExpressionMode::AND },
		{ "ESMExpressionMode::OR", (int64)ESMExpressionMode::OR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SMSystemEditor_ESMExpressionMode_Statics::Enum_MetaDataParams[] = {
		{ "AND.Name", "ESMExpressionMode::AND" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/NodeStack/NodeStackContainer.h" },
		{ "OR.Name", "ESMExpressionMode::OR" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SMSystemEditor_ESMExpressionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SMSystemEditor,
		nullptr,
		"ESMExpressionMode",
		"ESMExpressionMode",
		Z_Construct_UEnum_SMSystemEditor_ESMExpressionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SMSystemEditor_ESMExpressionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SMSystemEditor_ESMExpressionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SMSystemEditor_ESMExpressionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SMSystemEditor_ESMExpressionMode()
	{
		if (!Z_Registration_Info_UEnum_ESMExpressionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESMExpressionMode.InnerSingleton, Z_Construct_UEnum_SMSystemEditor_ESMExpressionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESMExpressionMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTransitionStackContainer>() == std::is_polymorphic<FNodeStackContainer>(), "USTRUCT FTransitionStackContainer cannot be polymorphic unless super FNodeStackContainer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransitionStackContainer;
class UScriptStruct* FTransitionStackContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransitionStackContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransitionStackContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransitionStackContainer, Z_Construct_UPackage__Script_SMSystemEditor(), TEXT("TransitionStackContainer"));
	}
	return Z_Registration_Info_UScriptStruct_TransitionStackContainer.OuterSingleton;
}
template<> SMSYSTEMEDITOR_API UScriptStruct* StaticStruct<FTransitionStackContainer>()
{
	return FTransitionStackContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransitionStackContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNOT_MetaData[];
#endif
		static void NewProp_bNOT_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNOT;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionStackClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TransitionStackClass;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/NodeStack/NodeStackContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransitionStackContainer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_bNOT_MetaData[] = {
		{ "Category", "Transitions" },
		{ "Comment", "/** NOT the result when auto formatting the graph. */" },
		{ "ModuleRelativePath", "Private/NodeStack/NodeStackContainer.h" },
		{ "ToolTip", "NOT the result when auto formatting the graph." },
	};
#endif
	void Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_bNOT_SetBit(void* Obj)
	{
		((FTransitionStackContainer*)Obj)->bNOT = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_bNOT = { "bNOT", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTransitionStackContainer), &Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_bNOT_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_bNOT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_bNOT_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Transitions" },
		{ "Comment", "/** The operation to auto format the graph to. */" },
		{ "ModuleRelativePath", "Private/NodeStack/NodeStackContainer.h" },
		{ "ToolTip", "The operation to auto format the graph to." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransitionStackContainer, Mode), Z_Construct_UEnum_SMSystemEditor_ESMExpressionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_Mode_MetaData)) }; // 36053912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_TransitionStackClass_MetaData[] = {
		{ "BlueprintBaseOnly", "" },
		{ "Category", "Class" },
		{ "Comment", "/** The class to assign the template for this transition stack. */" },
		{ "ModuleRelativePath", "Private/NodeStack/NodeStackContainer.h" },
		{ "ToolTip", "The class to assign the template for this transition stack." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_TransitionStackClass = { "TransitionStackClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransitionStackContainer, TransitionStackClass), Z_Construct_UClass_USMTransitionInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_TransitionStackClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_TransitionStackClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedBrush_MetaData[] = {
		{ "ModuleRelativePath", "Private/NodeStack/NodeStackContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedBrush = { "CachedBrush", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransitionStackContainer, CachedBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedBrush_MetaData)) }; // 852902259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedTexture_MetaData[] = {
		{ "ModuleRelativePath", "Private/NodeStack/NodeStackContainer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedTexture = { "CachedTexture", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransitionStackContainer, CachedTexture), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedTextureSize_MetaData[] = {
		{ "ModuleRelativePath", "Private/NodeStack/NodeStackContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedTextureSize = { "CachedTextureSize", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransitionStackContainer, CachedTextureSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedTextureSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedNodeTintColor_MetaData[] = {
		{ "ModuleRelativePath", "Private/NodeStack/NodeStackContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedNodeTintColor = { "CachedNodeTintColor", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransitionStackContainer, CachedNodeTintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedNodeTintColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedNodeTintColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_bNOT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_TransitionStackClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedTextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewProp_CachedNodeTintColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystemEditor,
		Z_Construct_UScriptStruct_FNodeStackContainer,
		&NewStructOps,
		"TransitionStackContainer",
		sizeof(FTransitionStackContainer),
		alignof(FTransitionStackContainer),
		Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransitionStackContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_TransitionStackContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransitionStackContainer.InnerSingleton, Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransitionStackContainer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_NodeStack_NodeStackContainer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_NodeStack_NodeStackContainer_h_Statics::EnumInfo[] = {
		{ ESMExpressionMode_StaticEnum, TEXT("ESMExpressionMode"), &Z_Registration_Info_UEnum_ESMExpressionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 36053912U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_NodeStack_NodeStackContainer_h_Statics::ScriptStructInfo[] = {
		{ FNodeStackContainer::StaticStruct, Z_Construct_UScriptStruct_FNodeStackContainer_Statics::NewStructOps, TEXT("NodeStackContainer"), &Z_Registration_Info_UScriptStruct_NodeStackContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeStackContainer), 1131906065U) },
		{ FStateStackContainer::StaticStruct, Z_Construct_UScriptStruct_FStateStackContainer_Statics::NewStructOps, TEXT("StateStackContainer"), &Z_Registration_Info_UScriptStruct_StateStackContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateStackContainer), 922945272U) },
		{ FTransitionStackContainer::StaticStruct, Z_Construct_UScriptStruct_FTransitionStackContainer_Statics::NewStructOps, TEXT("TransitionStackContainer"), &Z_Registration_Info_UScriptStruct_TransitionStackContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransitionStackContainer), 498468803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_NodeStack_NodeStackContainer_h_2483505491(TEXT("/Script/SMSystemEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_NodeStack_NodeStackContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_NodeStack_NodeStackContainer_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_NodeStack_NodeStackContainer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_revenant_5_00_ea_Plugins_Developer_LogicDriver_Source_SMSystemEditor_Private_NodeStack_NodeStackContainer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
