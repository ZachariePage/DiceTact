// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraComponent.h"
#include "DiceCamera.generated.h"

class ADice;
UCLASS()
class DICETACT_API ADiceCamera : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADiceCamera();
	void SetDice(ADice* _dice);
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* Cam;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	ADice* Dice;

	
	/*
	bool bDiceSettled;
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float distanceZFromDice = 10.f;

	//@TODO: Implement this in Blueprint
	UFUNCTION()
	void ResetAndDiscardCamera();

};
