// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMEditorStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Styling/CoreStyle.h"
#include "Interfaces/IPluginManager.h"
#include "ISMSystemModule.h"

#define LOCTEXT_NAMESPACE "SMEditorStyle"

// See SlateEditorStyle.cpp
#define DEFAULT_FONT(...) FCoreStyle::GetDefaultFontStyle(__VA_ARGS__)
#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( FSMEditorStyle::InResources( RelativePath, ".png" ), __VA_ARGS__ )

TSharedPtr<FSlateStyleSet> FSMEditorStyle::StyleSetInstance = nullptr;
FTextBlockStyle FSMEditorStyle::NormalText = FTextBlockStyle()
.SetFont(DEFAULT_FONT("Regular", FCoreStyle::RegularTextSize))
.SetColorAndOpacity(FSlateColor::UseForeground())
.SetShadowOffset(FVector2D::ZeroVector)
.SetShadowColorAndOpacity(FLinearColor::Black)
.SetHighlightColor(FLinearColor(0.02f, 0.3f, 0.0f));

static const FVector2D Icon16x16(16.0f, 16.0f);
static const FVector2D Icon40x40(40.0f, 40.0f);
static const FVector2D Icon128x128(128.0f, 128.0f);

void FSMEditorStyle::Initialize()
{
	// Only init once.
	if(StyleSetInstance.IsValid())
	{
		return;
	}

	StyleSetInstance = MakeShareable(new FSlateStyleSet(GetStyleSetName()));
	StyleSetInstance->SetContentRoot(FPaths::EngineContentDir() / TEXT("Editor/Slate"));
	StyleSetInstance->SetCoreContentRoot(FPaths::EngineContentDir() / TEXT("Slate"));

	SetGraphStyles();
	SetIcons();

	FSlateStyleRegistry::RegisterSlateStyle(*StyleSetInstance.Get());
}

void FSMEditorStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSetInstance.Get());
	ensure(StyleSetInstance.IsUnique());
	StyleSetInstance.Reset();
}

void FSMEditorStyle::SetGraphStyles()
{
	FTextBlockStyle GraphNodeTitle = FTextBlockStyle(NormalText)
		.SetFont(DEFAULT_FONT("Bold", 15))
		.SetColorAndOpacity(FLinearColor(177.0f / 255.0f, 192.0f / 255.0f, 204.0f / 255.0f))
		.SetShadowOffset(FVector2D(0.4f,0.4f))
		.SetShadowColorAndOpacity(FLinearColor(0.f, 0.f, 0.f, 0.8f));

	StyleSetInstance->Set("SMGraph.Tooltip.Title", GraphNodeTitle);

	FTextBlockStyle GraphNodeInformation = FTextBlockStyle(NormalText)
		.SetFont(DEFAULT_FONT("Regular", 12))
		.SetColorAndOpacity(FLinearColor(208.0f / 255.0f, 227.0f / 255.0f, 242.0f / 255.0f))
		.SetShadowOffset(FVector2D::ZeroVector)
		.SetShadowColorAndOpacity(FLinearColor(0.f, 0.f, 0.f, 0.7f));

	StyleSetInstance->Set("SMGraph.Tooltip.Info", GraphNodeInformation);

	FTextBlockStyle GraphNodeWarning = FTextBlockStyle(NormalText)
		.SetFont(DEFAULT_FONT("Regular", 12))
		.SetColorAndOpacity(FLinearColor(219.0f / 255.0f, 48.0f / 255.0f, 14.0f / 255.0f))
		.SetShadowOffset(FVector2D::ZeroVector)
		.SetShadowColorAndOpacity(FLinearColor(0.f, 0.f, 0.f, 0.7f));

	StyleSetInstance->Set("SMGraph.Tooltip.Warning", GraphNodeWarning);

	FTextBlockStyle GraphNodeError = FTextBlockStyle(NormalText)
		.SetFont(DEFAULT_FONT("Regular", 12))
		.SetColorAndOpacity(FLinearColor(250.0f / 255.0f, 48.0f / 255.0f, 14.0f / 255.0f))
		.SetShadowOffset(FVector2D::ZeroVector)
		.SetShadowColorAndOpacity(FLinearColor(0.f, 0.f, 0.f, 0.7f));

	StyleSetInstance->Set("SMGraph.Tooltip.Error", GraphNodeError);
}

void FSMEditorStyle::SetIcons()
{
	// Actual pixel size is 40x40, but letting the engine display it at 16x16 looks better.

	// Blueprint types.
	StyleSetInstance->Set("ClassIcon.SMBlueprint", new IMAGE_BRUSH(TEXT("Icons/StateMachineIcon_16"), Icon16x16));
	StyleSetInstance->Set("ClassThumbnail.SMBlueprint", new IMAGE_BRUSH(TEXT("Icons/StateMachineIcon_128"), Icon128x128));
	StyleSetInstance->Set("ClassIcon.SMNodeBlueprint", new IMAGE_BRUSH(TEXT("Icons/NodeInstanceIcon_40"), Icon16x16));
	StyleSetInstance->Set("ClassThumbnail.SMNodeBlueprint", new IMAGE_BRUSH(TEXT("Icons/NodeInstanceIcon_128"), Icon128x128));

	// State Machine Instances.
	StyleSetInstance->Set("ClassIcon.SMInstance", new IMAGE_BRUSH(TEXT("Icons/StateMachineIcon_16"), Icon16x16));
	StyleSetInstance->Set("ClassThumbnail.SMInstance", new IMAGE_BRUSH(TEXT("Icons/StateMachineIcon_128"), Icon128x128));

	// State Machine Components.
	StyleSetInstance->Set("ClassIcon.SMStateMachineComponent", new IMAGE_BRUSH(TEXT("Icons/StateMachineIcon_16"), Icon16x16));
	
	// Node Instances.
	StyleSetInstance->Set("ClassIcon.SMNodeInstance", new IMAGE_BRUSH(TEXT("Icons/NodeInstanceIcon_40"), Icon16x16));
	StyleSetInstance->Set("ClassThumbnail.SMNodeInstance", new IMAGE_BRUSH(TEXT("Icons/NodeInstanceIcon_128"), Icon128x128));
	
	StyleSetInstance->Set("ClassIcon.SMStateInstance", new IMAGE_BRUSH(TEXT("Icons/StateInstanceIcon_40"), Icon16x16));
	StyleSetInstance->Set("ClassThumbnail.SMStateInstance", new IMAGE_BRUSH(TEXT("Icons/StateInstanceIcon_128"), Icon128x128));

	StyleSetInstance->Set("ClassIcon.SMStateMachineInstance", new IMAGE_BRUSH(TEXT("Icons/StateMachineInstanceIcon_40"), Icon16x16));
	StyleSetInstance->Set("ClassThumbnail.SMStateMachineInstance", new IMAGE_BRUSH(TEXT("Icons/StateMachineInstanceIcon_128"), Icon128x128));
	
	StyleSetInstance->Set("ClassIcon.SMTransitionInstance", new IMAGE_BRUSH(TEXT("Icons/TransitionInstanceIcon_40"), Icon16x16));
	StyleSetInstance->Set("ClassThumbnail.SMTransitionInstance", new IMAGE_BRUSH(TEXT("Icons/TransitionInstanceIcon_128"), Icon128x128));

	StyleSetInstance->Set("ClassIcon.SMConduitInstance", new IMAGE_BRUSH(TEXT("Icons/ConduitInstanceIcon_40"), Icon16x16));
	StyleSetInstance->Set("ClassThumbnail.SMConduitInstance", new IMAGE_BRUSH(TEXT("Icons/ConduitInstanceIcon_128"), Icon128x128));
	
	// Graph Node Icons.
	StyleSetInstance->Set("SMGraph.StateMachineReference_16x", new IMAGE_BRUSH(TEXT("Icons/BlueprintStateMachineReferenceIcon_16"), Icon16x16));
	StyleSetInstance->Set("SMGraph.Clock", new IMAGE_BRUSH(TEXT("Icons/ClockIcon_16"), Icon16x16));
	StyleSetInstance->Set("SMGraph.StateModifier", new IMAGE_BRUSH(TEXT("Icons/StateModifier_16"), Icon16x16));

	// Mode Icons.
	StyleSetInstance->Set("SMGraphThumbnail", new IMAGE_BRUSH(TEXT("Icons/GraphModeIcon_40"), Icon40x40));
	
	// Preview Style
	StyleSetInstance->Set("SMPreviewEditor.Simulation.Start", new IMAGE_BRUSH("Icons/SimulateStartIcon_40", Icon40x40));
	StyleSetInstance->Set("SMPreviewEditor.Simulation.Stop", new IMAGE_BRUSH("Icons/SimulateStopIcon_40", Icon40x40));
	StyleSetInstance->Set("SMPreviewEditor.PreviewMode", new IMAGE_BRUSH("Icons/PreviewModeIcon_40", Icon40x40));
	
}

FString FSMEditorStyle::InResources(const FString& RelativePath, const ANSICHAR* Extension)
{
	static FString ContentDir = IPluginManager::Get().FindPlugin(TEXT(PLUGIN_NAME))->GetBaseDir() / TEXT("Resources");
	return (ContentDir / RelativePath) + Extension;
}

#undef DEFAULT_FONT
#undef IMAGE_BRUSH

#undef LOCTEXT_NAMESPACE
