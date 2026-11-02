// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DTCombatDeckComponent.generated.h"


class UDTDiceItemInstance;

UENUM(Blueprintable)
enum class EDiceAvailabilityType : uint8
{
	Available,
	Unusable
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDiceEvent, UDTDiceItemInstance*, RelevantDice);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DICETACT_API UDTCombatDeckComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDTCombatDeckComponent();

	UFUNCTION(BlueprintCallable)
	void AddDiceToDeck(UDTDiceItemInstance* NewDice, EDiceAvailabilityType Availability = EDiceAvailabilityType::Available);
	
	UFUNCTION(BlueprintCallable)
	bool TryUseDice(UDTDiceItemInstance* DiceItem);

	UFUNCTION(BlueprintCallable)
	void ResetDeck();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const TMap<UDTDiceItemInstance*, EDiceAvailabilityType>& GetDicesInDeck() const;

	// Keyboard shortcuts and UI use the same order, skipping spent dice.
	UFUNCTION(BlueprintPure, Category = "Deck")
	TArray<UDTDiceItemInstance*> GetAvailableDiceInOrder() const;

	UFUNCTION(BlueprintPure, Category = "Deck")
	bool IsDiceAvailable(UDTDiceItemInstance* DiceItem) const;


	/* Blueprint exposed delegates */
	UPROPERTY(BlueprintAssignable)
	FOnDiceEvent OnDiceUsed;
	UPROPERTY(BlueprintAssignable)
	FOnDiceEvent OnDiceAdded;

	UPROPERTY(BlueprintAssignable)
	FOnInventoryEvent OnDeckReset;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	TMap<UDTDiceItemInstance*, EDiceAvailabilityType> DiceItems;

private:
	UPROPERTY(Transient)
	TArray<TObjectPtr<UDTDiceItemInstance>> OrderedDice;
};
