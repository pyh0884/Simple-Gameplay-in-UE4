// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SimpleGameplayInUE4 : ModuleRules
{
	public SimpleGameplayInUE4(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
