// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;
using static UnrealBuildTool.ModuleRules;

public class BomberMan012025_ptrnTarget : TargetRules
{
    public BomberMan012025_ptrnTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V5;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_4;
        ExtraModuleNames.Add("BomberMan012025_ptrn");

    }
}
