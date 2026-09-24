// Fill out your copyright notice in the Description page of Project Settings.

#include "DTGameState_Combat.h"

#include "DiceTactGameInstance.h"
#include "EngineUtils.h"
#include "Core/Characters/CharetteUnit.h"
#include "Core/Characters/DTPlayerController_Combat.h"
#include "Core/Characters/EnemyUnit.h"
#include "Core/Characters/Hero/HeroCharacter.h"
#include "Core/Inventory/DTHeroInstance.h"
#include "Core/TurnBaseSystem/TurnBaseComponent.h"
#include "Core/TurnBaseSystem/UnitStart.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "Kismet/GameplayStatics.h"
#include "Utilities/DTSystemStatics.h"

ADTGameState_Combat::ADTGameState_Combat()
{
    TurnManager = CreateDefaultSubobject<UTurnBaseComponent>(TEXT("TurnManager"));
}

void ADTGameState_Combat::HandleBeginPlay()
{
    Super::HandleBeginPlay();
    FindUnitStarts();
    SpawnHeroUnits();
    SpawnEnemyUnits();
    SpawnCart();
    SetupDiceDeck();

    OnCombatPreInitialized();

    TurnManager->StartCombat();

    /*
    GetWorld()->GetTimerManager().SetTimer(
            debugTimer,
            [this]()
            {
                TurnManager->StartUnitTurn(ListOfPlayers[0]);
            },
            2.0f,
            false
        );
    TurnManager->StartGlobalTurn();
    TurnManager->StartUnitTurn(ListOfPlayers[0]);*/
}

void ADTGameState_Combat::AddPendingAbility(const FPendingAbility& PendingAbility)
{
	PendingAbilities.Add(PendingAbility);
}

void ADTGameState_Combat::AddDiceToResolve(ADice* DiceToResolve)
{
    DicesToResolve.Add(DiceToResolve);
}

void ADTGameState_Combat::RemoveDiceToResolve(ADice* DiceToResolve)
{
    DicesToResolve.RemoveSingle(DiceToResolve);
}

TArray<ADice*> ADTGameState_Combat::GetDiceToResolve() const
{
    return DicesToResolve;
}

void ADTGameState_Combat::ResolvePendingAbilities()
{
    /*
    for (const FPendingAbility& Pending : PendingAbilities)
    {
        if (!Pending.Caster)
        {
            continue;
        }

        UAbilitySystemComponent* ASC =
            IDiceAbilityCaster::Execute_GetDiceCasterAbilitySystemComponent(
                Pending.Caster.GetObject()
            );

        if (!ASC || !Pending.AbilityHandle.IsValid())
        {
            continue;
        }

        FGameplayAbilitySpec* Spec = ASC->FindAbilitySpecFromHandle(Pending.AbilityHandle);
        if (!Spec || !Spec->Ability)
        {
            continue;
        }

        FGameplayEventData EventData;
        EventData.EventTag = FGameplayTag::RequestGameplayTag(FName("Ability.Trigger.Pending"));
        EventData.Instigator = ASC->GetAvatarActor();
        EventData.OptionalObject = Pending.ToDataObject(this);

        const bool bTriggered = ASC->TriggerAbilityFromGameplayEvent(
            Pending.AbilityHandle,
            ASC->AbilityActorInfo.Get(),
            EventData.EventTag,
            &EventData,
            *ASC
        );

        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 15.0f, bTriggered ? FColor::Green : FColor::Red,
                bTriggered ? TEXT("triggered!") : TEXT("trigger failed"));
        }
    }

    PendingAbilities.Empty();
    */

    OnResolveAbilites();
}

void ADTGameState_Combat::FilterUnitsStartsOfType(TArray<AUnitStart*>& FromUnitStarts, ECombatUnitType FromType)
{
    for (auto It = FromUnitStarts.CreateIterator(); It; ++It)
    {
        if ((*It)->GetStartUnitType() != FromType)
        {
            It.RemoveCurrent();
        }
    }
}

AUnitStart* ADTGameState_Combat::ChooseRandomStart(const TArray<AUnitStart*>& FromUnitStarts)
{
    int32 Max = FromUnitStarts.Num();
    if (Max == 0)
    {
        return nullptr;
    }
    int32 RandomIndex = FMath::RandRange(0, Max - 1);
    return FromUnitStarts[RandomIndex];
}

void ADTGameState_Combat::OnCombatPreInitialized_Implementation()
{
    
}

void ADTGameState_Combat::SetupDiceDeck()
{

    const FDiceTactGameData& SessionData = UDTSystemStatics::LoadSessionData(this);

    APlayerController* PC =  UGameplayStatics::GetPlayerController(this, 0);

    ADTPlayerController_Combat* DTPC = Cast<ADTPlayerController_Combat>(PC);
    if (IsValid(DTPC) == false)
    {
        UJUEDevelopmentStatics::ReportErrorMessage("Could not setup the controller!", this);
        return;
    }

    DTPC->LoadDeck(SessionData.DeckItems);
}

bool ADTGameState_Combat::SpawnHeroUnits()
{
    const auto& Heroes = UDTSystemStatics::LoadSessionData(this).RecruitedHeroes;

    TArray<AUnitStart*> HeroStarts = UnitStarts;
    FilterUnitsStartsOfType(HeroStarts, ECombatUnitType::Hero);
    
    for (const auto& Hero : Heroes)
    {
        AUnitStart* HeroStart = ChooseRandomStart(HeroStarts);

        //Fail safe if UnitStarts > Heroes in deck
        if (IsValid(HeroStart) == false)
        {
            UJUEDevelopmentStatics::ReportErrorMessage("Could not find a Hero start for Hero " + Hero->GetName(), this);
            HeroStart = ChooseRandomStart(UnitStarts);
        }
            
        AHeroCharacter* NewHero = HeroStart->SpawnHeroCharacter(Hero->GetBaseHeroDefinition());    
    
        if (NewHero)
        {
            GetTurnManager()->AddUnitToCombat(NewHero, ECombatUnitType::Hero);
        }
    }
    
    return true;
}

bool ADTGameState_Combat::SpawnEnemyUnits()
{
    /*
    TArray<AUnitStart*> EnemyStarts = UnitStarts;
    FilterUnitsStartsOfType(EnemyStarts, ECombatUnitType::Enemy);
    */

    //Add already placed enemies to turn manager
    for (TActorIterator<AEnemyUnit> It(GetWorld(), AEnemyUnit::StaticClass()); It; ++It)
    {
        AEnemyUnit* Actor = *It;
        TurnManager->AddUnitToCombat(Actor, ECombatUnitType::Enemy);
    }
    
    
    return true;
}

bool ADTGameState_Combat::SpawnCart()
{
    AUnitStart* SelectedStart = nullptr;
    {
        TArray<AUnitStart*> CartStarts = UnitStarts;
        FilterUnitsStartsOfType(CartStarts, ECombatUnitType::Charette);

        SelectedStart = ChooseRandomStart(CartStarts);

        if (SelectedStart == nullptr)
        {
            UJUEDevelopmentStatics::ReportErrorMessage("Could not find a Start for the Cart!!! ", this);
            return false;
        }
    }

    TurnManager->AddUnitToCombat(SelectedStart->SpawnCart(), ECombatUnitType::Charette);
    return true;
}

bool ADTGameState_Combat::FindUnitStarts()
{
    /*
    TArray<AActor*> FoundSpawnZones;
    UGameplayStatics::GetAllActorsOfClass(
        GetWorld(),
        AUnitStart::StaticClass(),
        FoundSpawnZones
    );
    */

    for (TActorIterator<AUnitStart> It(GetWorld(), AUnitStart::StaticClass()); It; ++It)
    {
        AUnitStart* Actor = *It;
        UnitStarts.Add(Actor);
    }
    
    return true;
}

UTurnBaseComponent* ADTGameState_Combat::GetTurnManager()
{
    return TurnManager;
}
