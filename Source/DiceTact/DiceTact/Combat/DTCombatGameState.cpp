// Fill out your copyright notice in the Description page of Project Settings.

#include "DTCombatGameState.h"

#include "DTGameStartDataHolder.h"
#include "DiceTact/System/DiceTactGameInstance.h"
#include "EngineUtils.h"
#include "DiceTact/Characters/DTCharetteUnit.h"
#include "DiceTact/Characters/DTCombatPlayerController.h"
#include "DiceTact/Characters/Enemy/DTEnemyUnit.h"
#include "DiceTact/Characters/Hero/DTHeroCharacter.h"
#include "DiceTact/Dice/Definitions/DTDiceObjectDefinition.h"
#include "DiceTact/Dice/Definitions/DTDiceResolveDefinition.h"
#include "DiceTact/Inventory/DTDiceItemInstance.h"
#include "DiceTact/Inventory/DTHeroInstance.h"
#include "DiceTact/Combat/TurnBaseSystem/DTTurnBaseComponent.h"
#include "DiceTact/Combat/TurnBaseSystem/DTUnitStart.h"
#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "Kismet/GameplayStatics.h"
#include "DiceTact/Utilities/DTSystemStatics.h"

ADTCombatGameState::ADTCombatGameState()
{
    TurnManager = CreateDefaultSubobject<UDTTurnBaseComponent>(TEXT("TurnManager"));
}

void ADTCombatGameState::HandleBeginPlay()
{
    return GetCombatGameMode(GetWorld())->BeginPlay();
}

void ADTCombatGameState::FilterUnitsStartsOfType(TArray<ADTUnitStart*>& FromUnitStarts, ECombatUnitType FromType)
{
    return GetCombatGameMode(GetWorld())->FilterUnitsStartsOfType(FromUnitStarts, FromType);
}

ADTCombatGameMode* ADTCombatGameState::GetCombatGameMode(UWorld* World) const
{
    if (!World) return nullptr;
    return Cast<ADTCombatGameMode>(World->GetAuthGameMode());
}

ADTUnitStart* ADTCombatGameState::ChooseRandomStart(const TArray<ADTUnitStart*>& FromUnitStarts)
{    
    int32 Max = FromUnitStarts.Num();
    if (Max == 0)
    {
        return nullptr;
    }
    int32 RandomIndex = FMath::RandRange(0, Max - 1);
    return FromUnitStarts[RandomIndex];
}

void ADTCombatGameState::OnDicesLoaded()
{
    return GetCombatGameMode(GetWorld())->OnDicesLoaded();
}

void ADTCombatGameState::OnCombatLoaded_Implementation()
{
    return GetCombatGameMode(GetWorld())->OnCombatLoaded();
}

void ADTCombatGameState::SetupDeck()
{
    return GetCombatGameMode(GetWorld())->SetupDeck();
}

void ADTCombatGameState::AsyncLoadDiceDeck(const TArray<TObjectPtr<UDTDiceItemInstance>>& DiceDeck)
{
    return GetCombatGameMode(GetWorld())->AsyncLoadDiceDeck(DiceDeck);
}

bool ADTCombatGameState::SpawnHeroUnits()
{
    return GetCombatGameMode(GetWorld())->SpawnHeroUnits();
}

bool ADTCombatGameState::SpawnEnemyUnits()
{
    return GetCombatGameMode(GetWorld())->SpawnEnemyUnits();
}

bool ADTCombatGameState::SpawnCart()
{
    return GetCombatGameMode(GetWorld())->SpawnCart();
}

FCartGameData ADTCombatGameState::GetLoadCartData() const
{
    return GetCombatGameMode(GetWorld())->GetLoadCartData();
}

bool ADTCombatGameState::FindUnitStarts()
{
    return GetCombatGameMode(GetWorld())->FindUnitStarts();
}

UDTTurnBaseComponent* ADTCombatGameState::GetTurnManager()
{
    return GetCombatGameMode(GetWorld())->GetTurnManager();
}
