// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

using UnrealBuildTool;
using System.IO;


public class SMExtendedRuntime : ModuleRules
{
	public SMExtendedRuntime(ReadOnlyTargetRules Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V2;
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
                Path.Combine(ModuleDirectory, "Public"),
                Path.Combine(ModuleDirectory, "Public", "Properties")
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
                Path.Combine(ModuleDirectory, "Private")
				// ... add other private include paths required here ...
			}
			);

        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
                "SMSystem"
				// ... add other public dependencies that you statically link with here ...
			}
			);

        // Editor specific modules for slate specific configuration of editor widgets.
        // Configuration values are stored on run-time struct for overall simplicity.
        if (Target.Type == TargetType.Editor)
        {
            PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "SlateCore",
            }
            );
        }

        PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
