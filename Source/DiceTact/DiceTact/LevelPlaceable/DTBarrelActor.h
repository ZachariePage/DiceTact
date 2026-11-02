// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTact/Interface/DTPhysicalUnitInterface.h"
#include "GameFramework/Actor.h"
#include "DTBarrelActor.generated.h"

UCLASS()
class DICETACT_API ADTBarrelActor : public AActor, public IDTPhysicalUnitInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADTBarrelActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void ApplyImpulse_Implementation(const FPushData& Info) override;
};
