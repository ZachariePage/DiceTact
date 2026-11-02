// Fill out your copyright notice in the Description page of Project Settings.


#include "DTActorDiceCollisionData.h"

#include "DiceTact/Physics/PhysicalReactionComponent.h"

float UDTActorDiceCollisionData::GetMassMultiplier(EPhysMassClass HitterMass) const
{
	switch (HitterMass)
	{
	case EPhysMassClass::Light: return LightHitMultiplier;
	case EPhysMassClass::Heavy: return HeavyHitMultiplier;
	case EPhysMassClass::Medium: return MediumHitMultiplier;
	default:return MediumHitMultiplier;
	}
}
