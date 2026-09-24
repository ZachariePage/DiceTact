// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DiceTact : ModuleRules
{
	public DiceTact(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"NavigationSystem",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"GameplayAbilities",
			"GameplayTasks",
			"GameplayTags",
			"Niagara",
			"CogCommon",
			
			//UI modules
			"UMG",
			"Slate",
			"SlateCore",
			"CommonUI"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { "JUE" });

		PublicIncludePaths.AddRange(new string[] {
			"DiceTact",
			"DiceTact/Variant_Strategy",
			"DiceTact/Variant_Strategy/UI",
			"DiceTact/Variant_TwinStick",
			"DiceTact/Variant_TwinStick/AI",
			"DiceTact/Variant_TwinStick/Gameplay",
			"DiceTact/Variant_TwinStick/UI"
		});

		if (Target.Configuration != UnrealTargetConfiguration.Shipping)
		{
			PublicDependencyModuleNames.AddRange(new string[]
			{
				"Cog",
				"CogAbility",
				"CogAI",
				"CogAll",
				"CogDebug",
				"CogEngine",
				"CogImgui",
				"CogInput",
			});
		}

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
