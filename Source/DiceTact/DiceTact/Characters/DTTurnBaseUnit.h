// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTact/Interface/DTInteractable.h"
#include "GameFramework/Character.h"
#include "DTTurnBaseUnit.generated.h"

UCLASS()
class DICETACT_API ADTTurnBaseUnit : public ACharacter, public IDTInteractable
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADTTurnBaseUnit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
