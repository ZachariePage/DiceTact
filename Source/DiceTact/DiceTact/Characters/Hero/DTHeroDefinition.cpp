// Fill out your copyright notice in the Description page of Project Settings.


#include "DTHeroDefinition.h"
#include "DiceTact/Characters/Hero/DTHeroCharacter.h"
#include "DiceTact/Medaillon/DTMedaillonDefinition.h"

const FText& UDTHeroDefinition::GetHeroName() const
{
	return HeroName;
}

const FText& UDTHeroDefinition::GetHeroDescription() const
{
	return HeroDescription;
}

TSubclassOf<ADTHeroCharacter> UDTHeroDefinition::GetHeroUnitClass() const
{
	return HeroUnitClass.LoadSynchronous();
}

UDTHeroPowerDefinition* UDTHeroDefinition::GetHeroAbilityDefinition() const
{
	return HeroPowerDefinition;
}

const FSlateBrush& UDTHeroDefinition::GetHeroIcon() const
{
	return HeroIcon;
}

const UDTThrowTypeData* UDTHeroDefinition::GetHeroThrowType() const
{
	return HeroThrowType;
}

float UDTHeroDefinition::GetHeroBaseMovementBudget() const
{
	return BaseMovementBudget;
}

UDTMedaillonDefinition* UDTHeroDefinition::GetMedaillonAbility() const
{
	return MedaillonAbility;
}



