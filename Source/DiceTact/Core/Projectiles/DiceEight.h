// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Dice.h"
#include "DiceEight.generated.h"

UCLASS()
class DICETACT_API ADiceEight : public ADice
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADiceEight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
