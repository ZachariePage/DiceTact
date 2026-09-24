// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorFactorySubSystem.h"

#include "Core/Characters/Hero/HeroCharacter.h"
#include "Core/Dice/Definitions/DTDiceObjectDefinition.h"
#include "Core/Inventory/DTDiceItemInstance.h"
#include "core/Projectiles/Dice.h"
#include "JUE/System/JUEDevelopmentStatics.h"


void UActorFactorySubSystem::LateInit(const TMap<EDiceType, UDTDiceObjectDefinition*>& Definitions)
{
	DiceDefinitions.Empty();
	for (const auto& Pair : Definitions)
	{
		DiceDefinitions.Add(Pair.Key, Pair.Value);
	}
}

ADice* UActorFactorySubSystem::SpawnDiceFromType(UObject* WorldContextObject,
		EDiceType Type,
		const UDTDiceResolveDefinition* ResolveDefinition,
		const FTransform& SpawnTransform,
		const FActorSpawnParameters& SpawnParams,
		bool spawnCamera)
{
	if (TObjectPtr<UDTDiceObjectDefinition>* Found = DiceDefinitions.Find(Type))
	{
		if (!WorldContextObject)
		{
			UJUEDevelopmentStatics::ReportDebugMessage("1");
			return nullptr;
		}

		UWorld* World = WorldContextObject->GetWorld();
		if (!World)
		{
			UJUEDevelopmentStatics::ReportDebugMessage("2");
			return nullptr;
		}

		TSubclassOf<ADice> DiceClass = (*Found)->GetDiceClass();
		if (!DiceClass)
		{
			UJUEDevelopmentStatics::ReportDebugMessage("3");
			return nullptr;
		}

		ADice* NewDice = World->SpawnActor<ADice>(DiceClass, SpawnTransform, SpawnParams);
		if (NewDice)
		{
			UJUEDevelopmentStatics::ReportDebugMessage("4");
			NewDice->InitializeDice(nullptr, ResolveDefinition);
			NewDice->SetPlayerUnit(
				Cast<AHeroCharacter>(SpawnParams.Instigator)
			);
			if (spawnCamera)
			{
				NewDice->InitializeDiceCamera();
			}
		}
		else
		{
			UJUEDevelopmentStatics::ReportDebugMessage("failed intern");
		}

		
		return NewDice;
	}
	else
	{
		UJUEDevelopmentStatics::ReportDebugMessage("no find");
	}

	return nullptr;
}

ADice* UActorFactorySubSystem::SpawnDice(UObject* WorldContextObject,const UDTDiceObjectDefinition* ObjectDefinition, UDTDiceItemInstance* ItemInstance,
const FTransform& SpawnTransform, const FActorSpawnParameters& SpawnParams,
	bool spawnCamera)
{
	if (!ObjectDefinition || !WorldContextObject)
	{
		return nullptr;
	}

	UWorld* World = WorldContextObject->GetWorld();
	if (!World)
	{
		return nullptr;
	}

	TSubclassOf<ADice> DiceClass = ObjectDefinition->GetDiceClass();
	if (!DiceClass)
	{
		return nullptr;
	}

	ADice* NewDice = World->SpawnActor<ADice>(DiceClass, SpawnTransform, SpawnParams);
	if (NewDice)
	{
		NewDice->InitializeDice(nullptr, ItemInstance->GetResolveDefinition());
		if (spawnCamera)
		{
			NewDice->InitializeDiceCamera();
		}
	}
	return NewDice;
}
