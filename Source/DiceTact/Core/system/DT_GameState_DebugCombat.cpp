// Fill out your copyright notice in the Description page of Project Settings.


#include "DT_GameState_DebugCombat.h"

#include "EngineUtils.h"
#include "Core/Characters/DTPlayerController_Combat.h"
#include "Core/Characters/Hero/DTHeroDefinition.h"
#include "Core/Characters/Hero/HeroCharacter.h"
#include "Core/Inventory/DTHeroInstance.h"
#include "Core/System/DTGameStartData.h"
#include "Core/TurnBaseSystem/TurnBaseComponent.h"
#include "Core/TurnBaseSystem/UnitStart.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "Kismet/GameplayStatics.h"

bool ADT_GameState_DebugCombat::SpawnHeroUnits()
{
	TArray<AUnitStart*> HeroStarts = UnitStarts;
	//FilterUnitsStartsOfType(HeroStarts, TODO);

	if (DebugData->GameData.RecruitedHeroes.IsEmpty() == false)
	{
		for (const auto& HeroClass : DebugData->GameData.RecruitedHeroes)
		{
			FVector StartPos = FVector();
			FRotator StartRotation = FRotator();
			{
				AUnitStart* HeroStart = ChooseRandomStart(HeroStarts);
	
				//Fail safe if UnitStarts > Heroes in deck
				if (IsValid(HeroStart) == false)
				{
					UJUEDevelopmentStatics::ReportErrorMessage("Could not find a Hero start for Hero " + HeroClass->GetName(), this);
					HeroStart = ChooseRandomStart(UnitStarts);
				}
		            
				StartPos = HeroStart->GetActorLocation();
				StartRotation = HeroStart->GetActorRotation();
			}
	
			FActorSpawnParameters SpawnParams;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		        
			AHeroCharacter* NewHero = GetWorld()->SpawnActor<AHeroCharacter>(
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
	TArray<AHeroCharacter*> HeroCharacters;
	FindHeroCharacters(HeroCharacters);
	for (const auto& HeroChar : HeroCharacters)
	{
		TurnManager->AddUnitToCombat(HeroChar, ECombatUnitType::Hero);
	}
    
	return true;
}

void ADT_GameState_DebugCombat::SetupDiceDeck()
{
	APlayerController* PC =  UGameplayStatics::GetPlayerController(this, 0);

	ADTPlayerController_Combat* DTPC = Cast<ADTPlayerController_Combat>(PC);
	if (IsValid(DTPC) == false)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("Could not setup the controller!", this);
		return;
	}

	DTPC->LoadDeck(DebugData->GameData.DeckItems);
}

void ADT_GameState_DebugCombat::FindHeroCharacters(TArray<AHeroCharacter*>& OutHeroes) const
{
	for (TActorIterator<AHeroCharacter> It(GetWorld(), AHeroCharacter::StaticClass()); It; ++It)
	{
		OutHeroes.Add(*It);
	}
}
