// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BomberMan012025_ptrn : ModuleRules
{
	public BomberMan012025_ptrn(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
