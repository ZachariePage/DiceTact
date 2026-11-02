// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DTFireBallActor.generated.h"

UCLASS()
class DICETACT_API ADTFireBallActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADTFireBallActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UStaticMeshComponent> BouleDeFeuMesh;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void PropulseBouleDeFeu(FVector impulse);
};
