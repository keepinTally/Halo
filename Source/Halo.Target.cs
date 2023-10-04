// Copyright Yeung

using UnrealBuildTool;
using System.Collections.Generic;

public class HaloTarget : TargetRules
{
	public HaloTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Halo" } );
	}
}
