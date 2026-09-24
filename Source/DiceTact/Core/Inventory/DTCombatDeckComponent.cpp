// Fill out your copyright notice in the Description page of Project Settings.


#include "DTCombatDeckComponent.h"


// Sets default values for this component's properties
UDTCombatDeckComponent::UDTCombatDeckComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

void UDTCombatDeckComponent::AddDiceToDeck(UDTDiceItemInstance* NewDice, EDiceAvailabilityType Availability)
{
	if (ContainsDiceItem(NewDice, Availability))
	{
		return;
	}

	DiceItems.Add(NewDice, Availability);
	OnDiceAdded.Broadcast(NewDice);
}

bool UDTCombatDeckComponent::TryUseDice(UDTDiceItemInstance* DiceItem)
{
	EDiceAvailabilityType Availability = EDiceAvailabilityType::Available;
	
	if (ContainsDiceItem(DiceItem, Availability))
	{
		EDiceAvailabilityType* DiceAvailability = DiceItems.Find(DiceItem);
		*DiceAvailability = EDiceAvailabilityType::Unusable;
		OnDiceUsed.Broadcast(DiceItem);
		return true;
	}
	
	return false;
}

void UDTCombatDeckComponent::ResetDeck()
{
	for (auto& DiceItem : DiceItems)
	{
		DiceItem.Value = EDiceAvailabilityType::Available;
	}
	OnDeckReset.Broadcast();
}

const TMap<UDTDiceItemInstance*, EDiceAvailabilityType>& UDTCombatDeckComponent::GetDicesInDeck() const
{
	return DiceItems;
}


// Called when the game starts
void UDTCombatDeckComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

bool UDTCombatDeckComponent::ContainsDiceItem(UDTDiceItemInstance* Dice, EDiceAvailabilityType& OutAvailability)
{
	EDiceAvailabilityType* FoundItem = DiceItems.Find(Dice);

	if (FoundItem)
	{
		OutAvailability = *FoundItem;
		return true;
	}

	return false;
}

