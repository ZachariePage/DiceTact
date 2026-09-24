// Fill out your copyright notice in the Description page of Project Settings.


#include "DTHeroPowerDefinition.h"
#include "Core/Abilities/HeroPower/HeroPowerAbility.h"

const FText& UDTHeroPowerDefinition::GetHeroPowerName() const
{
	return HeroPowerName;
}

const FText& UDTHeroPowerDefinition::GetHeroPowerDescription() const
{
	return HeroPowerDescription;
}

const FSlateBrush& UDTHeroPowerDefinition::GetHeroPowerIcon() const
{
	return HeroPowerIcon;
}

TSubclassOf<UHeroPowerAbility> UDTHeroPowerDefinition::GetHeroPower() const
{
	if (HeroPowerAbility.IsNull())
	{
		return nullptr;
	}
	return HeroPowerAbility.LoadSynchronous();
}

UDTTargetingStrategy* UDTHeroPowerDefinition::GetTargetingStrategy() const
{
	return TargetingStrategy;
}
