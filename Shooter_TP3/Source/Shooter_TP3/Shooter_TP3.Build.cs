// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Shooter_TP3 : ModuleRules
{
	public Shooter_TP3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
