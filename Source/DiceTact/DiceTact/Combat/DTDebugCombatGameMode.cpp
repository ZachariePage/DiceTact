// Fill out your copyright notice in the Description page of Project Settings.


#include "DTDebugCombatGameMode.h"

#include "DTGameStartDataHolder.h"
#include "EngineUtils.h"
#include "DiceTact/Characters/DTCombatPlayerController.h"
#include "DiceTact/Characters/Hero/DTHeroDefinition.h"
#include "DiceTact/Characters/Hero/DTHeroCharacter.h"
#include "DiceTact/Inventory/DTHeroInstance.h"
#include "DiceTact/System/DTGameStartData.h"
#include "DiceTact/Combat/TurnBaseSystem/DTTurnBaseComponent.h"
#include "DiceTact/Combat/TurnBaseSystem/DTUnitStart.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "Kismet/GameplayStatics.h"

bool ADTDebugCombatGameMode::SpawnHeroUnits()
{
	TArray<ADTUnitStart*> HeroStarts = UnitStarts;
	FilterUnitsStartsOfType(HeroStarts, ECombatUnitType::Hero);

	if (IsValid(GetDebugData()) == false)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("Gym does not contain a GameStartDataHolder", this);
		return false;
	}

	
	if (GetDebugData()->HeroesData.RecruitedHeroes.IsEmpty() == false)
	{
		for (const auto& HeroClass : GetDebugData()->HeroesData.RecruitedHeroes)
		{
			FVector StartPos = FVector();
			FRotator StartRotation = FRotator();
			{
				ADTUnitStart* HeroStart = ChooseRandomStart(HeroStarts);
	
				//Fail safe if UnitStarts > Heroes in deck
				if (IsValid(HeroStart) == false)
				{
					UJUEDevelopmentStatics::ReportErrorMessage("Could not find a Hero start for Hero " + HeroClass->GetName(), this);
					HeroStart = ChooseRandomStart(UnitStarts);
				}
				else
				{
					HeroStarts.Remove(HeroStart);
				}
		            
				StartPos = HeroStart->GetActorLocation();
				StartRotation = HeroStart->GetActorRotation();
			}
	
			FActorSpawnParameters SpawnParams;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		        
			ADTHeroCharacter* NewHero = GetWorld()->SpawnActor<ADTHeroCharacter>(
				HeroClass->GetBaseHeroDefinition()->GetHeroUnitClass(),
				StartPos,
				StartRotation
			);
		    
			if (NewHero)
			{
				GetTurnManager()->AddUnitToCombat(NewHero, ECombatUnitType::Hero);
			}
		}
	}
	
	//Add the remaining ones that were already spawned
	TArray<ADTHeroCharacter*> HeroCharacters;
	FindHeroCharacters(HeroCharacters);
	for (const auto& HeroChar : HeroCharacters)
	{
		TurnManager->AddUnitToCombat(HeroChar, ECombatUnitType::Hero);
	}
    
	return true;
}

void ADTDebugCombatGameMode::SetupDeck()
{
	AsyncLoadDiceDeck(GetDebugData()->DiceData.DeckItems);
}

void ADTDebugCombatGameMode::OnDicesLoaded()
{

	APlayerController* PC =  UGameplayStatics::GetPlayerController(this, 0);

	ADTCombatPlayerController* DTPC = Cast<ADTCombatPlayerController>(PC);
	if (IsValid(DTPC) == false)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("Could not setup the controller!", this);
		return;
	}

	DTPC->LoadDeck(GetDebugData()->DiceData.DeckItems);
	OnCombatLoaded();
}

FCartGameData ADTDebugCombatGameMode::GetLoadCartData() const
{
	return GetDebugData()->CartData;
}

void ADTDebugCombatGameMode::FindHeroCharacters(TArray<ADTHeroCharacter*>& OutHeroes) const
{
	for (TActorIterator<ADTHeroCharacter> It(GetWorld(), ADTHeroCharacter::StaticClass()); It; ++It)
	{
		OutHeroes.Add(*It);
	}
}

TObjectPtr<UDTGameStartData> ADTDebugCombatGameMode::GetDebugData() const
{
	const ADTGameStartDataHolder* DataActor = ADTGameStartDataHolder::Get(this);
	return DataActor ? DataActor->GameStartData : nullptr;
}