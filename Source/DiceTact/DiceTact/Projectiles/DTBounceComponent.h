// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DTBounceComponent.generated.h"


class UDTBounceData;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DICETACT_API UDTBounceComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDTBounceComponent();
	void InitializeBounceComponent(UDTBounceData* data);
protected:

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void BeginPlay() override;

	int BounceCounter = 0;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
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
