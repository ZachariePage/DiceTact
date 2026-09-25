// Fill out your copyright notice in the Description page of Project Settings.


#include "DTCombatStatics.h"


UTurnBaseComponent* UDTCombatStatics::GetTurnManager()
{
	return nullptr;
}

bool UDTCombatStatics::TryGetDiceTypeFromSides(int Sides, EDiceType& OutType)
{
	static const TMap<int32, EDiceType> SidesToType = {
		{ 4,   EDiceType::four  },
		{ 8,   EDiceType::eight },
		{ 12,  EDiceType::twelve},
		{ 20,  EDiceType::twenty},
	};

	if (const EDiceType* Found = SidesToType.Find(Sides))
	{
		OutType = *Found;
		return true;
	}
	return false;
}
