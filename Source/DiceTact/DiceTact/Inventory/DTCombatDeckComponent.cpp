// Fill out your copyright notice in the Description page of Project Settings.


#include "DTCombatDeckComponent.h"
#include "DTDiceItemInstance.h"


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
	if (!IsValid(NewDice) || DiceItems.Contains(NewDice))
	{
		return;
	}

	DiceItems.Add(NewDice, Availability);
	OrderedDice.Add(NewDice);
	OnDiceAdded.Broadcast(NewDice);
}

bool UDTCombatDeckComponent::TryUseDice(UDTDiceItemInstance* DiceItem)
{
	if (!IsDiceAvailable(DiceItem))
	{
		return false;
	}

	DiceItems[DiceItem] = EDiceAvailabilityType::Unusable;
	OnDiceUsed.Broadcast(DiceItem);
	return true;
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

TArray<UDTDiceItemInstance*> UDTCombatDeckComponent::GetAvailableDiceInOrder() const
{
	TArray<UDTDiceItemInstance*> AvailableDice;
	AvailableDice.Reserve(OrderedDice.Num());
	for (UDTDiceItemInstance* DiceItem : OrderedDice)
	{
		if (IsDiceAvailable(DiceItem))
		{
			AvailableDice.Add(DiceItem);
		}
	}
	return AvailableDice;
}

bool UDTCombatDeckComponent::IsDiceAvailable(UDTDiceItemInstance* DiceItem) const
{
	if (!IsValid(DiceItem))
	{
		return false;
	}
	const EDiceAvailabilityType* Availability = DiceItems.Find(DiceItem);
	return Availability && *Availability == EDiceAvailabilityType::Available;
}


// Called when the game starts
void UDTCombatDeckComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

