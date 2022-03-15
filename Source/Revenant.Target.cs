

using UnrealBuildTool;
using System.Collections.Generic;

public class RevenantTarget : TargetRules
{
	public RevenantTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Revenant" } );
	}
}
