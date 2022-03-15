// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class SMExtendedEditor : ModuleRules
{
    public SMExtendedEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        DefaultBuildSettings = BuildSettingsVersion.V2;
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
            new string[] {
                Path.Combine(ModuleDirectory, "Public"),
				// ... add public include paths required here ...
			});

        
        PrivateIncludePaths.AddRange(
            new string[] {
                Path.Combine(ModuleDirectory, "Private"),
                Path.Combine("SMSystemEditor", "Private"),
                Path.Combine("SMExtendedRuntime", "Private")
				// ... add other private include paths required here ...
			});

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "SMSystem",
                "SMExtendedRuntime",
                "SMSystemEditor"
				// ... add other public dependencies that you statically link with here ...
			}
            );
        
        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
				// Core modules
				"Engine",
                "CoreUObject",
                "Projects",
                "UnrealEd",
                "RenderCore",
                "InputCore",
                "SlateCore",
                "Slate",
                "EditorStyle",
                "MessageLog",
                "EditorWidgets",
                "ToolMenus",

                "WorkspaceMenuStructure",
                "DetailCustomizations",
                "PropertyEditor",

                "BlueprintGraph",
                "Kismet",
                "KismetCompiler",
                "KismetWidgets",

                "UnrealEd",
                "GraphEditor",
                "ContentBrowser",

                "ApplicationCore",
            }
            );

        PrivateIncludePathModuleNames.AddRange(
        new string[] {
                    "AssetRegistry",
                    "AssetTools",
                    "BlueprintGraph",
                    "Kismet",
                    "KismetCompiler",
                    "KismetWidgets",
                    "EditorWidgets",
                    "ContentBrowser",
        });

        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
				// ... add any modules that your module loads dynamically here ...
			}
            );
    }
}
