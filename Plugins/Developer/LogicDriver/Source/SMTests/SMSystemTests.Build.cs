// Copyright Recursoft LLC 2019-2022. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class SMSystemTests : ModuleRules
{
    public SMSystemTests(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
            new string[] {
                Path.Combine(ModuleDirectory, "Public"),
                
				// ... add public include paths required here ...
			});
        
        PrivateIncludePaths.AddRange(
            new string[] {
                Path.Combine(ModuleDirectory, "Private"),
                Path.Combine(ModuleDirectory, "../SMSystemEditor/Private"),
                Path.Combine(ModuleDirectory, "../SMExtendedEditor/Private"),
				// ... add other private include paths required here ...
			});

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "UnrealEd",
                "BlueprintGraph",
                "KismetCompiler",
                "SlateCore",
                "InputCore",
                "SMSystem",
                "SMSystemEditor",
                "SMExtendedRuntime",
                "SMExtendedEditor"
            }
            );
    }
}
