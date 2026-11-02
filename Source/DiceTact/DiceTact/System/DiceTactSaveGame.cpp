// Fill out your copyright notice in the Description page of Project Settings.


#include "DiceTactSaveGame.h"

#include "DTGameStartData.h"

const FHeroGameData& UDiceTactSaveGame::GetHeroData() const
{
	return HeroData;
}

const FDiceGameData& UDiceTactSaveGame::GetDeckData() const
{
	return DeckData;
}

const FCartGameData& UDiceTactSaveGame::GetCartData() const
{
	return CartData;
}

FName UDiceTactSaveGame::GetCurrentLocation() const
{
	return CurrentLocation;
}

void UDiceTactSaveGame::GetTargetLevel(TSoftObjectPtr<UWorld>& OutWorld, bool& OutPointsToPath, bool& OutValidObject) const
{
	if (TargetLevel.IsValid())
	{
		OutPointsToPath = true;
		OutValidObject = true;
		OutWorld = TargetLevel;
		return;
	}
	else if (TargetLevel.ToSoftObjectPath().IsValid())
	{
		OutPointsToPath = true;
		OutWorld = TargetLevel;
		return;
	}

	OutPointsToPath = false;
}

TSoftObjectPtr<UWorld> UDiceTactSaveGame::GetTargetLevel() const
{
	return TargetLevel;
}

FName UDiceTactSaveGame::GetCurrentBiome() const
{
	return CurrentBiome;
}

void UDiceTactSaveGame::SetDataFromGameStartData(const UDTGameStartData* FromData)
{
	SetHeroCollection(FromData->HeroesData.RecruitedHeroes);
	SetDeckCollection(FromData->DiceData.DeckItems);
	SetCartData(FromData->CartData);
	SetCurrentLocation(FromData->CurrentOverworldLocation);
	SetCurrentBiome(FromData->CurrentOverworldBiome);
}

void UDiceTactSaveGame::SetDeckCollection(const TArray<UDTDiceItemInstance*>& DeckItems)
{
	DeckData.DeckItems = DeckItems;
}

void UDiceTactSaveGame::SetHeroCollection(const TArray<UDTHeroInstance*>& HeroItems)
{
	//GameData.RecruitedHeroes = HeroItems;
	HeroData.RecruitedHeroes = HeroItems;
}

void UDiceTactSaveGame::SetCartData(const FCartGameData& _CartData)
{
	//GameData.CartData = CartData;
	CartData = _CartData;
}

void UDiceTactSaveGame::AddNewDice(UDTDiceItemInstance* NewDice)
{
	DeckData.DeckItems.Add(NewDice);
}

void UDiceTactSaveGame::SetCurrentLocation(FName _CurrentLocation)
{
	CurrentLocation = _CurrentLocation;
}

void UDiceTactSaveGame::SetTargetLevel(TSoftObjectPtr<UWorld> ToLevel)
{
	TargetLevel = ToLevel;
}

void UDiceTactSaveGame::SetCurrentBiome(FName _CurrentBiome)
{
	CurrentBiome = _CurrentBiome;
}

