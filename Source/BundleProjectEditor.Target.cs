using UnrealBuildTool;
using System.Collections.Generic;

public class BundleProjectEditorTarget : TargetRules {
  public BundleProjectEditorTarget(TargetInfo Target) : base(Target) {
    Type = TargetType.Editor;
    DefaultBuildSettings = BuildSettingsVersion.V5;
    IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
    ExtraModuleNames.AddRange(new string[] { "BundleProject", "URedis" });
  }
}
