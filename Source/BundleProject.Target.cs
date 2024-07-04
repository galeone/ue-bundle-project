using UnrealBuildTool;
using System.Collections.Generic;

public class BundleProjectTarget : TargetRules {
  public BundleProjectTarget(TargetInfo Target) : base(Target) {
    Type = TargetType.Game;
    DefaultBuildSettings = BuildSettingsVersion.V5;
    IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
    ExtraModuleNames.AddRange(new string[] { "BundleProject", "URedis" });
  }
}
