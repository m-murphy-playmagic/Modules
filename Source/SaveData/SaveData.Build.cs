using UnrealBuildTool; 

public class SaveData: ModuleRules
{

	public SaveData(ReadOnlyTargetRules Target) : base(Target)
	{

		PrivateDependencyModuleNames.AddRange(new string[] {"Core"});

	}

}