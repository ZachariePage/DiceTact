// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "DiceTact/Combat/TurnBaseSystem/DTTurnReceiver.h"
#include "DTBaseAIController.generated.h"

UCLASS()
class DICETACT_API ADTBaseAIController : public AAIController, public IDTTurnReceiver
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADTBaseAIController();
	
	//INCLUDE_TURN_IMPLEMENTATION();

	/* IDTTurnReceiver Interface begin */
	virtual FOnTurnFinished& GetFinishedTurnDelegate() override
	{return OnTurnFinished;}
	
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnTurnFinished OnTurnFinished;
	
	virtual AActor* GetControlledActor_Implementation() override;
	/* IDTTurnReceiver Interface End */

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
