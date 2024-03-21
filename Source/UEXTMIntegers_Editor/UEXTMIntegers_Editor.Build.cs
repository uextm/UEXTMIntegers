// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

using UnrealBuildTool;

public class UEXTMIntegers_Editor : ModuleRules
{
	public UEXTMIntegers_Editor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		CppStandard = CppStandardVersion.Cpp20;
		
		PublicDependencyModuleNames.AddRange(new []
		{
			"BlueprintGraph",
			"Core",
			"CoreUObject",
			"Engine",
			"GraphEditor",
			"InputCore",
			"Slate",
			"SlateCore",
			"UnrealEd",
			
			"UEXTMIntegers"
		});
		
		PrivateDependencyModuleNames.AddRange(new string[] { });
	}
}
