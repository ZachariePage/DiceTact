// Fill out your copyright notice in the Description page of Project Settings.


#include "DTHeroPowerDefinition.h"
#include "DiceTact/Abilities/HeroPower/DTHeroPowerAbility.h"

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

TSubclassOf<UDTHeroPowerAbility> UDTHeroPowerDefinition::GetHeroPower() const
{
	if (HeroPowerAbility.IsNull())
	{
		return nullptr;
	}
	return HeroPowerAbility.LoadSynchronous();
}

const UDTTargetingStrategy* UDTHeroPowerDefinition::GetTargetingStrategy() const
{
	return TargetingStrategy;
}

EActivationTiming UDTHeroPowerDefinition::GetActivationTiming() const
{
	return ActivationTiming;
}
