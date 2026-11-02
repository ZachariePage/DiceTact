// Fill out your copyright notice in the Description page of Project Settings.


#include "DTMoveAbility.h"

#include "DiceTact/Attributes/DTPartyMovementAttributes.h"


float UDTMoveAbility::GetAbilityMaxRange(const AActor* AvatarActor) const
{
	const ADTHeroCharacter* PlayerCharacter = Cast<ADTHeroCharacter>(AvatarActor);
	if (!PlayerCharacter)
	{
		return 0;
	}

	const UDTPartyMovementAttributes* MovementAttributeSet = PlayerCharacter->GetMovementAttributeSet();
	return MovementAttributeSet ? MovementAttributeSet->GetMovementBudget() : 0;
}
