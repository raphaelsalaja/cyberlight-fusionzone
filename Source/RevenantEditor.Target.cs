

using UnrealBuildTool;
using System.Collections.Generic;

public class RevenantEditorTarget : TargetRules
{
	public RevenantEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Revenant" } );
	}
}
