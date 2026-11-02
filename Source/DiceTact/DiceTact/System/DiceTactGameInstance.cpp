// Fill out your copyright notice in the Description page of Project Settings.


#include "DiceTactGameInstance.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "DiceTact/Inventory/DTDiceItemInstance.h"
#include "Kismet/GameplayStatics.h"

void UDiceTactGameInstance::Init()
{
	Super::Init();
}

UDiceTactSaveGame* UDiceTactGameInstance::GetLoadedGameSave() const
{
	if (IsSaveGameLoaded())
	{
		return CurrentSaveGame;
	}
	
	return nullptr;
}

const FHeroGameData& UDiceTactGameInstance::GetSavedHeroData() const
{
	return GetLoadedGameSave()->GetHeroData();
}

const FDiceGameData& UDiceTactGameInstance::GetSavedDiceData() const
{
	return GetLoadedGameSave()->GetDeckData();
}

const FCartGameData& UDiceTactGameInstance::GetSavedCartData() const
{
	return GetLoadedGameSave()->GetCartData();
}

const TSoftObjectPtr<UWorld> UDiceTactGameInstance::GetNextLevel() const
{
	return GetLoadedGameSave()->GetTargetLevel();
}

const FString& UDiceTactGameInstance::GetCurrentGameSlotName() const
{
	return CurrentGameSlot;
}

const FString& UDiceTactGameInstance::GetDefaultGameSlotName() const
{
	return DefaultGameSlotName;
}

bool UDiceTactGameInstance::IsSaveGameLoaded(FString& _SaveGameSlot) const
{
	if (IsSaveGameLoaded())
	{
		_SaveGameSlot = CurrentGameSlot;
		return true;
	}
	
	return false;
}

bool UDiceTactGameInstance::IsSaveGameLoaded() const
{
	return IsValid(CurrentSaveGame);
}

bool UDiceTactGameInstance::CreateNewSaveGame(const FString& InSlot)
{
	USaveGame* NewSaveGame = UGameplayStatics::CreateSaveGameObject(UDiceTactSaveGame::StaticClass());

	if (IsValid(NewSaveGame) == false)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("Could not create new SaveGame!", this);
		return false;
	}

	UDiceTactSaveGame* DTSaveGame = Cast<UDiceTactSaveGame>(NewSaveGame);
	if (IsValid(DTSaveGame) == false)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("CreateNewSaveGame : Created Save Game is not of type UDiceTactSaveGame!");
		return false;
	}

	CurrentSaveGame = DTSaveGame;
	CurrentGameSlot = InSlot;
	return true;
}

bool UDiceTactGameInstance::SaveGameToDisk()
{
	/*
	 *	Async Save maybe later...
	 *	UGameplayStatics::AsyncSaveGameToSlot()
	 */

	return UGameplayStatics::SaveGameToSlot(CurrentSaveGame, CurrentGameSlot, 0);
}

bool UDiceTactGameInstance::LoadSaveGame(const FString& FromSlot)
{
	USaveGame* SaveGame = UGameplayStatics::LoadGameFromSlot(FromSlot, 0);

	if (IsValid(SaveGame) == false)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("Failed to load SaveGame: " + FromSlot +"!", this);
		return false;
	}

	UDiceTactSaveGame* DTSaveGame = Cast<UDiceTactSaveGame>(SaveGame);

	if (IsValid(DTSaveGame) == false)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("Failed to load SaveGame: " + FromSlot +",\nSave Game is not of type UDiceTactSaveGame!", this);
		return false;		
	}

	CurrentSaveGame = DTSaveGame;
	CurrentGameSlot = FromSlot;
	return true;
}

bool UDiceTactGameInstance::SaveGameCartData(const FCartGameData& NewData)
{
	if (IsSaveGameLoaded() == false)
	{
		return false;
	}
	
	CurrentSaveGame->SetCartData(NewData);
	return true;
}

bool UDiceTactGameInstance::SetTargetLevel(TSoftObjectPtr<UWorld> _TargetEncounterMap)
{
	if (IsSaveGameLoaded() == false)
	{
		return false;
	}
	
	CurrentSaveGame->SetTargetLevel(_TargetEncounterMap);
	return true;
}

bool UDiceTactGameInstance::SaveGameNewDice(const UDTDiceItemInstance* NewDice)
{
	if (IsSaveGameLoaded() == false)
	{
		return false;
	}
	
	UDTDiceItemInstance* DuplicatedDiceItem = DuplicateObject(NewDice, CurrentSaveGame);
	CurrentSaveGame->AddNewDice(DuplicatedDiceItem);
	return true;
}

