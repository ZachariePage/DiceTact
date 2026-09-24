// Fill out your copyright notice in the Description page of Project Settings.


#include "GAMove.h"

#include "Core/Attributes/PartyMovementAttributeSet.h"


float UGAMove::GetAbilityMaxRange(const AActor* AvatarActor) const
{
	const AHeroCharacter* PlayerCharacter = Cast<AHeroCharacter>(AvatarActor);
	if (!PlayerCharacter)
	{
		return 0;
	}

	const UPartyMovementAttributeSet* MovementAttributeSet = PlayerCharacter->GetMovementAttributeSet();
	return MovementAttributeSet ? MovementAttributeSet->GetMovementBudget() : 0;
}
