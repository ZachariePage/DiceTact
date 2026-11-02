// Fill out your copyright notice in the Description page of Project Settings.


#include "DTTargetStrategy_AllDIce.h"

#include "DiceTact/Abilities/DTPendingAbility.h"
#include "DiceTact/Projectiles/DTDice.h"

#include "DiceTact/Characters/Hero/DTHeroCharacter.h"
#include "DiceTact/subsystem/DTCombatBridgeSubsystem.h"

TArray<AActor*> UDTTargetStrategy_AllDIce::GetPossibleTargets(ADTHeroCharacter* Caster) const
{
	TArray<AActor*> Targets;

	if (Caster == nullptr)
	{
		return Targets;
	}
	
	UWorld* World = Caster->GetWorld();
	if (World == nullptr)
	{
		return Targets;
	}

	UDTCombatBridgeSubsystem* CombatSub = World->GetSubsystem<UDTCombatBridgeSubsystem>();
	if (CombatSub)
	{
		for (const FDTPendingAbility& Ability : CombatSub->GetAllPendingAbilities())
		{
			if (IsValid(Ability.DiceActor))
			{
				Targets.Add(Ability.DiceActor);
			}
		}
	}

	return Targets;
}
