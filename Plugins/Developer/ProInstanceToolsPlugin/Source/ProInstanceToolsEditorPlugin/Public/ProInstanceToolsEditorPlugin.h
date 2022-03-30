// Copyright 2021 Dmitry Karpukhin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Templates/SubclassOf.h"
#include "Styling/SlateStyle.h"
#include "ProInstanceToolsParent.h"

class FProInstanceToolsEditorPluginModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	TSharedPtr<FSlateStyleSet> StyleSet;
};