// Copyright Yeung

using UnrealBuildTool;
using System.Collections.Generic;

public class HaloEditorTarget : TargetRules
{
	public HaloEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Halo" } );
	}
}
