// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraComponent.h"
#include "DTDiceCamera.generated.h"

class ADTCameraPawn;
class ADTDice;
UCLASS()
class DICETACT_API ADTDiceCamera : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADTDiceCamera();
	void SetDice(ADTDice* _dice);
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* Cam;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	ADTDice* Dice;

	UPROPERTY()
	ADTCameraPawn* CachedCamPawn = nullptr;

	FTimerHandle DeactivateTimerHandle;
	FTimerHandle SelfDestructTimerHandle;
	bool bIsResetting = false;
	/*
	bool bDiceSettled;
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float distanceZFromDice = 10.f;

	//@TODO: Implement this in Blueprint
	UFUNCTION()
	void ResetAndDiscardCamera();

};
