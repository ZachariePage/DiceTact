#pragma once
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TimerManager.h"
#include "DTSeismicWaveComponent.generated.h"

class UDTSeismicData;
class UPrimitiveComponent;

DECLARE_MULTICAST_DELEGATE_TwoParams(FOnSeismicWaveUpdated, FVector, float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnSeismicRingFinished, FVector);
DECLARE_MULTICAST_DELEGATE_ThreeParams(FOnSeismicTargetHit, FVector, FVector, AActor*);
DECLARE_MULTICAST_DELEGATE(FOnSeismicEffectFinished);

/** Expanding shockwave rings used by Smash */
UCLASS()
class DICETACT_API UDTSeismicWaveComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Keep wave timing and target tracking separate from the hero's jump
	bool StartWave(UDTSeismicData* Settings, FVector Origin, int32 DiceFace,
		int32 RingCount = 1, float RingDelay = 0.f);

	// Cancel without notifying the ability that the effect completed
	void StopWave();

	FOnSeismicWaveUpdated OnWaveUpdated;
	FOnSeismicRingFinished OnRingFinished;
	FOnSeismicTargetHit OnTargetHit;
	FOnSeismicEffectFinished OnEffectFinished;

protected:
	// Do not leave a timer pointing to a destroyed component
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;

private:
	// Advance each ring and finish the effect after the last one
	void UpdateWave();

	// Only the newly reached part of the ring can affect targets
	void AffectTargets(float PreviousRadius);

	// Exclude allies and prevent repeated hits within the same ring
	bool CanAffectTarget(AActor* Target, UPrimitiveComponent* Component) const;

	// Reuse the target's push and damage behavior
	void ApplyImpact(AActor* Target, UPrimitiveComponent* Component, const FVector& HitLocation);

	// Notify completion only while an effect is running
	void FinishEffect();

	UPROPERTY()
	TObjectPtr<UDTSeismicData> AbilityData;

	FVector WaveOrigin = FVector::ZeroVector;
	TSet<TWeakObjectPtr<AActor>> HitActors;
	FTimerHandle UpdateTimerHandle;
	float WaveStartTime = 0.f;
	float MaximumRadius = 0.f;
	float CurrentRadius = 0.f;
	float DelayBetweenRings = 0.f;
	int32 RingsRemaining = 0;
	bool bRunning = false;
};
