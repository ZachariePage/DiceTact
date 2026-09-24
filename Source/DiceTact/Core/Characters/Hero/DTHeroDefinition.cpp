// Fill out your copyright notice in the Description page of Project Settings.


#include "DTHeroDefinition.h"
#include "Core/Characters/Hero/HeroCharacter.h"

const FText& UDTHeroDefinition::GetHeroName() const
{
	return HeroName;
}

const FText& UDTHeroDefinition::GetHeroDescription() const
{
	return HeroDescription;
}

TSubclassOf<AHeroCharacter> UDTHeroDefinition::GetHeroUnitClass() const
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

const UThrowType* UDTHeroDefinition::GetHeroThrowType() const
{
	return HeroThrowType;
}

