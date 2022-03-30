// Copyright 2021 Dmitry Karpukhin. All Rights Reserved.

#include "ProInstanceToolsEditorPlugin.h"
#include "PlacementMode/Public/IPlacementModeModule.h"
#include "Interfaces/IPluginManager.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Styling/SlateStyleRegistry.h"
#include "Styling/SlateTypes.h"

#define LOCTEXT_NAMESPACE "FProInstanceToolsEditorPluginModule"

void FProInstanceToolsEditorPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	// Register editor category
	int Priority = 42;
	FPlacementCategoryInfo ProInstanceTools( LOCTEXT("ProInstanceTools", "ProInstance Tools"), "ProInstanceTools", TEXT("PMProInstanceTools"), Priority);
	IPlacementModeModule::Get().RegisterPlacementCategory(ProInstanceTools);

	// Find and register actors to category
	UBlueprint* ProInstance_Circle = Cast<UBlueprint>(FSoftObjectPath(TEXT("/ProInstanceToolsPlugin/Blueprints/ProInstance_Circle.ProInstance_Circle")).TryLoad());
	if (ProInstance_Circle) {
		IPlacementModeModule::Get().RegisterPlaceableItem(ProInstanceTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(ProInstance_Circle, true),
			FName("ProInstance_Circle.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("ProInstance_Circle.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "ProInstance Circle", "ProInstance Circle")
		)));
	}

	UBlueprint* ProInstance_Grid = Cast<UBlueprint>(FSoftObjectPath(TEXT("/ProInstanceToolsPlugin/Blueprints/ProInstance_Grid.ProInstance_Grid")).TryLoad());
	if (ProInstance_Grid) {
		IPlacementModeModule::Get().RegisterPlaceableItem(ProInstanceTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(ProInstance_Grid, true),
			FName("ProInstance_Grid.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("ProInstance_Grid.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "ProInstance Grid", "ProInstance Grid")
		)));
	}

	UBlueprint* ProInstance_Path = Cast<UBlueprint>(FSoftObjectPath(TEXT("/ProInstanceToolsPlugin/Blueprints/ProInstance_Path.ProInstance_Path")).TryLoad());
	if (ProInstance_Path) {
		IPlacementModeModule::Get().RegisterPlaceableItem(ProInstanceTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(ProInstance_Path, true),
			FName("ProInstance_Path.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("ProInstance_Path.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "ProInstance Path", "ProInstance Path")
		)));
	}

	UBlueprint* ProInstance_PathScatter = Cast<UBlueprint>(FSoftObjectPath(TEXT("/ProInstanceToolsPlugin/Blueprints/ProInstance_PathScatter.ProInstance_PathScatter")).TryLoad());
	if (ProInstance_PathScatter) {
		IPlacementModeModule::Get().RegisterPlaceableItem(ProInstanceTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(ProInstance_PathScatter, true),
			FName("ProInstance_PathScatter.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("ProInstance_PathScatter.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "ProInstance Path Scatter", "ProInstance Path Scatter")
		)));
	}

	UBlueprint* ProInstance_Scatter = Cast<UBlueprint>(FSoftObjectPath(TEXT("/ProInstanceToolsPlugin/Blueprints/ProInstance_Scatter.ProInstance_Scatter")).TryLoad());
	if (ProInstance_Scatter) {
		IPlacementModeModule::Get().RegisterPlaceableItem(ProInstanceTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(ProInstance_Scatter, true),
			FName("ProInstance_Scatter.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("ProInstance_Scatter.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "ProInstance Scatter", "ProInstance Scatter")
		)));
	}

	// Set Brush Image and register style
	StyleSet = MakeShareable(new FSlateStyleSet("ProInstanceToolsStyle"));

	FString ProInstanceIconPath = IPluginManager::Get().FindPlugin(TEXT("ProInstanceToolsPlugin"))->GetBaseDir() + TEXT("/Resources/");

	StyleSet->Set("ProInstance_Circle.Thumbnail", new FSlateImageBrush(ProInstanceIconPath + TEXT("ProInstance_Circle64.png"), FVector2D(64.f, 64.f)));
	StyleSet->Set("ProInstance_Grid.Thumbnail", new FSlateImageBrush(ProInstanceIconPath + TEXT("ProInstance_Grid64.png"), FVector2D(64.f, 64.f)));
	StyleSet->Set("ProInstance_Path.Thumbnail", new FSlateImageBrush(ProInstanceIconPath + TEXT("ProInstance_Path64.png"), FVector2D(64.f, 64.f)));
	StyleSet->Set("ProInstance_PathScatter.Thumbnail", new FSlateImageBrush(ProInstanceIconPath + TEXT("ProInstance_PathScatter64.png"), FVector2D(64.f, 64.f)));
	StyleSet->Set("ProInstance_Scatter.Thumbnail", new FSlateImageBrush(ProInstanceIconPath + TEXT("ProInstance_Scatter64.png"), FVector2D(64.f, 64.f)));

	FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());
}

void FProInstanceToolsEditorPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	// Unregister editor category
	if (IPlacementModeModule::IsAvailable())
	{
		IPlacementModeModule::Get().UnregisterPlacementCategory("ProInstanceTools");
	}

	// Unregister style
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSet.Get());
	StyleSet.Reset();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FProInstanceToolsEditorPluginModule, ProInstanceToolsEditorPlugin)