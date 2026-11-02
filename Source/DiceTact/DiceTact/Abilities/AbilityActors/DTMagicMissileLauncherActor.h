// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTMagicMissileActor.h"
#include "GameFramework/Actor.h"
#include "DTMagicMissileLauncherActor.generated.h"

UCLASS()
class DICETACT_API ADTMagicMissileLauncherActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADTMagicMissileLauncherActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent)
	void SetHomingTarget(AActor* InTarget, FVector InFallbackTargetLocation);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<ADTMagicMissileActor> SpawnedMagicMissile;
};
