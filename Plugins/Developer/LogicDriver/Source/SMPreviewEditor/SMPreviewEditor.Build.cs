// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class SMPreviewEditor : ModuleRules
{
    public SMPreviewEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        DefaultBuildSettings = BuildSettingsVersion.V2;
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PrivateIncludePaths.AddRange(
            new string[] {
                Path.Combine("SMSystemEditor", "Private")
			});

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "SMSystem",
                "SMSystemEditor"
			}
            );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
				// Core modules
				"Engine",
                "CoreUObject",
                "Projects",
				"RenderCore",
                "InputCore",
                "Slate",
                "SlateCore",
                "UnrealEd",
                "EditorStyle",
                "MessageLog",
                "EditorWidgets",
                "AssetTools",
                
				"ApplicationCore",
                "AdvancedPreviewScene",
                "SceneOutliner",
                "Kismet",
                "UMG"
            }
            );
    }
}
