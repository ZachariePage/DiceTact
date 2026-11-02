// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DTMeteorActor.generated.h"

UCLASS()
class DICETACT_API ADTMeteorActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADTMeteorActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void PropulseMeteor(FVector impulse);
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UStaticMeshComponent> MeteorMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float ExplosionRadius;
};
