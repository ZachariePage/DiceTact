// Fill out your copyright notice in the Description page of Project Settings.


#include "DTTargetStrategy_AllDIce.h"
#include "core/Projectiles/Dice.h"

#include "Core/System/DTGameState_Combat.h"
#include "Core/Characters/Hero/HeroCharacter.h"

TArray<AActor*> UDTTargetStrategy_AllDIce::GetPossibleTargets(AHeroCharacter* Caster) const
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

	ADTGameState_Combat* GS = Cast<ADTGameState_Combat>(World->GetGameState());
	if (GS)
	{
		for (ADice* Dice : GS->GetDiceToResolve())
		{
			if (Dice != nullptr)
			{
				Targets.Add(Dice);
			}
		}
	}

	return Targets;
}
