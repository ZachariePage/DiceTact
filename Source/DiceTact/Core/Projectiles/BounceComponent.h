// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BounceComponent.generated.h"


class UDTBounceData;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DICETACT_API UBounceComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UBounceComponent();
	void InitializeBounceComponent(UDTBounceData* data);
protected:

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void BeginPlay() override;

	int BounceCounter = 0;

	UPROPERTY(VisibleAnywhere)
	UDTBounceData* BounceData;
	UFUNCTION()
	void OnBounceHit(
		UPrimitiveComponent* HitComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		FVector NormalImpulse,
		const FHitResult& Hit
	);



private:

	UPROPERTY()
	UPrimitiveComponent* PhysicsComponent;
};
