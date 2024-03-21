// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

using UnrealBuildTool;

public class UEXTMIntegers : ModuleRules
{
	public UEXTMIntegers(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		CppStandard = CppStandardVersion.Cpp20;
		
		PublicDependencyModuleNames.AddRange(new []
		{
			"Core",
			"CoreUObject",
			"Engine"
		});
		
		PrivateDependencyModuleNames.AddRange(new string[] { });
	}
}
