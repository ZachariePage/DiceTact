// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTDice.h"
#include "Abilities/GameplayAbility.h"
#include "DTInstantActionDice.generated.h"

UCLASS()
class DICETACT_API ADTInstantActionDice : public ADTDice
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADTInstantActionDice();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability")
	TSubclassOf<UGameplayAbility> instantAbility;

	UPROPERTY()
	bool bAbilityThrown = false;

	UFUNCTION()
	void FireAbility();
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
