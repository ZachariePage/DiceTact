// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTact/Interface/DTPhysicalUnitInterface.h"
#include "GameFramework/Actor.h"
#include "DTPhysicBasePlaceableActor.generated.h"

UCLASS()
class DICETACT_API ADTPhysicBasePlaceableActor : public AActor, public IDTPhysicalUnitInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADTPhysicBasePlaceableActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//physics
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UPhysicalReactionComponent> PhysicalReaction;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void ApplyImpulse_Implementation(
		const FPushData& Info
	) override;
	
};
