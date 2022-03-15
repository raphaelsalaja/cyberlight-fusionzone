// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMProjectEditorSettings.h"

#include "SMConduitInstance.h"
#include "SMStateInstance.h"
#include "SMStateMachineInstance.h"
#include "SMTransitionInstance.h"

USMProjectEditorSettings::USMProjectEditorSettings()
{
	bUpdateAssetsOnStartup = true;
	bDisplayAssetUpdateProgress = true;
	bDisplayMemoryLimitsOnCompile = true;
	bAlwaysDisplayStructMemoryUsage = false;
	StructMemoryLimitWarningThreshold = 0.9f;
	bDisplayInputEventNotes = true;
	bValidateInstanceOnCompile = true;
	bLinkerLoadHandling = true;
	bRestrictInvalidCharacters = true;
	bWarnIfChildrenAreOutOfDate = true;
	bDefaultNewTransitionsToTrue = false;
	bConfigureNewConduitsAsTransitions = true;
	bDisplayUpdateNotification = true;
	InstalledVersion = "";
	EditorNodeConstructionScriptSetting = ESMEditorConstructionScriptProjectSetting::SM_Standard;
	bEnablePreviewMode = true;

	DefaultStateClass = USMStateInstance::StaticClass();
	DefaultStateMachineClass = USMStateMachineInstance::StaticClass();
	DefaultConduitClass = USMConduitInstance::StaticClass();
	DefaultTransitionClass = USMTransitionInstance::StaticClass();
}

void USMProjectEditorSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	SaveConfig();
}
