// Fill out your copyright notice in the Description page of Project Settings.


#include "DTActorFactorySubSystem.h"

#include "DiceTact/Characters/Hero/DTHeroCharacter.h"
#include "DiceTact/Dice/Definitions/DTDiceObjectDefinition.h"
#include "DiceTact/Inventory/DTDiceItemInstance.h"
#include "DiceTact/Projectiles/DTDice.h"
#include "JUE/System/JUEDevelopmentStatics.h"


void UDTActorFactorySubSystem::LateInit(const TMap<EDiceType, UDTDiceObjectDefinition*>& Definitions)
{
	DiceDefinitions.Empty();
	for (const auto& Pair : Definitions)
	{
		DiceDefinitions.Add(Pair.Key, Pair.Value);
	}
}

ADTDice* UDTActorFactorySubSystem::SpawnDiceFromType(UObject* WorldContextObject,
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

		FString message = Found->GetName();
		UJUEDevelopmentStatics::ReportDebugMessage(message);
		if (!Found)
		{

		}
		TSubclassOf<ADTDice> DiceClass = (*Found)->GetDiceClass().Get();
		if (!DiceClass)
		{
			UJUEDevelopmentStatics::ReportDebugMessage("3");
			return nullptr;
		}

		ADTDice* NewDice = World->SpawnActor<ADTDice>(DiceClass, SpawnTransform, SpawnParams);
		if (NewDice)
		{
			//UJUEDevelopmentStatics::ReportDebugMessage("4");
			NewDice->InitializeDice(nullptr, ResolveDefinition);
			
			NewDice->SetAvatarOwner(SpawnParams.Instigator);
			
			
			if (spawnCamera)
			{
				//NewDice->InitializeDiceCamera();
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

ADTDice* UDTActorFactorySubSystem::SpawnDice(UObject* WorldContextObject,const UDTDiceObjectDefinition* ObjectDefinition, UDTDiceItemInstance* ItemInstance,
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

	TSubclassOf<ADTDice> DiceClass = ObjectDefinition->GetDiceClass().Get();
	if (!DiceClass)
	{
		return nullptr;
	}

	ADTDice* NewDice = World->SpawnActor<ADTDice>(DiceClass, SpawnTransform, SpawnParams);
	if (NewDice)
	{
		NewDice->InitializeDice(nullptr, ItemInstance->GetResolveDefinition());
		if (spawnCamera)
		{
			//NewDice->InitializeDiceCamera();
		}
	}
	return NewDice;
}
