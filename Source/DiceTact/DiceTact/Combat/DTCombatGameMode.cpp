// Fill out your copyright notice in the Description page of Project Settings.


#include "DTCombatGameMode.h"

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

ADTCombatGameMode::ADTCombatGameMode()
{
    TurnManager = CreateDefaultSubobject<UDTTurnBaseComponent>(TEXT("TurnManager"));
}

void ADTCombatGameMode::BeginPlay()
{
    FindUnitStarts();
    
    if (SpawnHeroUnits() == false)
    {
        return;
    }
    SpawnEnemyUnits();
    SpawnCart();
    SetupDeck();
    
    Super::BeginPlay();
}

void ADTCombatGameMode::FilterUnitsStartsOfType(TArray<ADTUnitStart*>& FromUnitStarts, ECombatUnitType FromType)
{
    for (auto It = FromUnitStarts.CreateIterator(); It; ++It)
    {
        if ((*It)->GetStartUnitType() != FromType)
        {
            It.RemoveCurrent();
        }
    }
}


ADTUnitStart* ADTCombatGameMode::ChooseRandomStart(const TArray<ADTUnitStart*>& FromUnitStarts)
{
    int32 Max = FromUnitStarts.Num();
    if (Max == 0)
    {
        return nullptr;
    }
    int32 RandomIndex = FMath::RandRange(0, Max - 1);
    return FromUnitStarts[RandomIndex];
}

void ADTCombatGameMode::OnDicesLoaded()
{

    const FDiceGameData& SessionData = UDTSystemStatics::GetDTGameInstance()->GetSavedDiceData();

    APlayerController* PC =  UGameplayStatics::GetPlayerController(this, 0);

    ADTCombatPlayerController* DTPC = Cast<ADTCombatPlayerController>(PC);
    if (IsValid(DTPC) == false)
    {
        UJUEDevelopmentStatics::ReportErrorMessage("Could not setup the controller!", this);
        return;
    }
    
    DTPC->LoadDeck(SessionData.DeckItems);
    OnCombatLoaded();
}

void ADTCombatGameMode::OnCombatLoaded_Implementation()
{
    UJUEDevelopmentStatics::ReportDebugMessage("Combat is fully loaded!");
}

void ADTCombatGameMode::SetupDeck()
{
    const FDiceGameData& SessionData = UDTSystemStatics::GetDTGameInstance()->GetSavedDiceData();

    APlayerController* PC =  UGameplayStatics::GetPlayerController(this, 0);

    ADTCombatPlayerController* DTPC = Cast<ADTCombatPlayerController>(PC);
    if (IsValid(DTPC) == false)
    {
        UJUEDevelopmentStatics::ReportErrorMessage("Could not setup the controller!", this);
        return;
    }
    AsyncLoadDiceDeck(SessionData.DeckItems);
}

void ADTCombatGameMode::AsyncLoadDiceDeck(const TArray<TObjectPtr<UDTDiceItemInstance>>& DiceDeck)
{
    
    TArray<FSoftObjectPath> ObjectsToLoad;
    for (auto& DeckItem : DiceDeck)
    {
        ObjectsToLoad.Add(DeckItem->GetDiceObjectDefinition()->GetDiceClass().ToSoftObjectPath());
        ObjectsToLoad.Add(DeckItem->GetResolveDefinition()->GetResolveAbility().ToSoftObjectPath());
        if (DeckItem->GetResolveDefinition()->GetResolveMaterial())
        {
            ObjectsToLoad.Add(DeckItem->GetResolveDefinition()->GetResolveMaterial().ToSoftObjectPath());
        }
    }
    UJUEDevelopmentStatics::ReportDebugMessage("Loading DiceDeck... (" + FString::FromInt(ObjectsToLoad.Num()) + " assets to load)", this, FLinearColor::Blue);

    DiceLoadHandle = UAssetManager::GetStreamableManager().RequestAsyncLoad(ObjectsToLoad,
        FStreamableDelegate::CreateUObject(this, &ADTCombatGameMode::OnDicesLoaded));
}

bool ADTCombatGameMode::SpawnHeroUnits()
{
    if (UDTSystemStatics::IsSaveGameLoaded() == false)
    {
        return false;
    }
    
    const FHeroGameData& HeroGameData = UDTSystemStatics::GetDTGameInstance()->GetSavedHeroData();

    TArray<ADTUnitStart*> HeroStarts = UnitStarts;
    FilterUnitsStartsOfType(HeroStarts, ECombatUnitType::Hero);
    
    for (const auto& Hero : HeroGameData.RecruitedHeroes)
    {
        ADTUnitStart* SelectedHeroStart = ChooseRandomStart(HeroStarts);

        //Fail safe if UnitStarts > Heroes in deck
        if (IsValid(SelectedHeroStart) == false)
        {
            UJUEDevelopmentStatics::ReportErrorMessage("Could not find a Hero start for Hero " + Hero->GetName(), this);
            SelectedHeroStart = ChooseRandomStart(UnitStarts);
        }
        else
        {
            HeroStarts.Remove(SelectedHeroStart);
        }

        if (SelectedHeroStart)
        {
            if (ADTHeroCharacter* NewHero = SelectedHeroStart->SpawnHeroCharacter(Hero->GetBaseHeroDefinition()))    
            {
                GetTurnManager()->AddUnitToCombat(NewHero, ECombatUnitType::Hero);
            }
        }
    }
    
    return true;
}

bool ADTCombatGameMode::SpawnEnemyUnits()
{
    /*
    TArray<AUnitStart*> EnemyStarts = UnitStarts;
    FilterUnitsStartsOfType(EnemyStarts, ECombatUnitType::Enemy);
    */

    //Add already placed enemies to turn manager
    for (TActorIterator<ADTEnemyUnit> It(GetWorld(), ADTEnemyUnit::StaticClass()); It; ++It)
    {
        ADTEnemyUnit* Actor = *It;
        TurnManager->AddUnitToCombat(Actor, ECombatUnitType::Enemy);
    }
    
    
    return true;
}

bool ADTCombatGameMode::SpawnCart()
{
    ADTUnitStart* SelectedStart = nullptr;
    {
        TArray<ADTUnitStart*> CartStarts = UnitStarts;
        FilterUnitsStartsOfType(CartStarts, ECombatUnitType::Charette);

        SelectedStart = ChooseRandomStart(CartStarts);

        if (SelectedStart == nullptr)
        {
            UJUEDevelopmentStatics::ReportErrorMessage("Could not find a Start for the Cart!!! ", this);
            return false;
        }
    }
    

    ADTCharetteUnit* Charette = SelectedStart->SpawnCart();

    if (IsValid(Charette) == false)
    {
        return false;
    }
    
    UDTHealthComponent* HealthComp = nullptr;
    Charette->GetHealthComponent(HealthComp);
    HealthComp->SetMaxValue(GetLoadCartData().MaxHealth);
    HealthComp->SetStartingValue(GetLoadCartData().CurrentHealth, true);
    
    TurnManager->AddUnitToCombat(Charette, ECombatUnitType::Charette);
    return true;
}

FCartGameData ADTCombatGameMode::GetLoadCartData() const
{
    if (UDTSystemStatics::IsSaveGameLoaded() == false)
    {
        return FCartGameData(99,99);
    }
    return UDTSystemStatics::GetDTGameInstance()->GetSavedCartData();
}

bool ADTCombatGameMode::FindUnitStarts()
{
    /*
    TArray<AActor*> FoundSpawnZones;
    UGameplayStatics::GetAllActorsOfClass(
        GetWorld(),
        AUnitStart::StaticClass(),
        FoundSpawnZones
    );
    */

    for (TActorIterator<ADTUnitStart> It(GetWorld(), ADTUnitStart::StaticClass()); It; ++It)
    {
        ADTUnitStart* Actor = *It;
        UnitStarts.Add(Actor);
    }
    
    return true;
}

UDTTurnBaseComponent* ADTCombatGameMode::GetTurnManager()
{
    return TurnManager;
}
