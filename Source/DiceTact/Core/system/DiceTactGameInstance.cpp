// Fill out your copyright notice in the Description page of Project Settings.


#include "DiceTactGameInstance.h"

void UDiceTactGameInstance::Init()
{
	Super::Init();
}

const FDiceTactGameData& UDiceTactGameInstance::LoadGameData() const
{
	return SessionData;
}

const TArray<UDTHeroInstance*>& UDiceTactGameInstance::GetHeroInstances() const
{
	return SessionData.RecruitedHeroes;
}

const TArray<UDTDiceItemInstance*>& UDiceTactGameInstance::GetDiceItemInstances() const
{
	return SessionData.DeckItems;
}

float UDiceTactGameInstance::GetCartIntegrity(const FDiceTactGameData& GameData)
{
	return GameData.CartIntegrity;
}

void UDiceTactGameInstance::CreateNewSaveData(const FDiceTactGameData& NewData)
{
	SessionData = NewData;
}

