// Tornado.h

#pragma once

#include "CoreMinimal.h"
#include "DTResolveGameplayAbility.h"
#include "DTTornadoAbility.generated.h"

class UDTTornadoData;
class UPrimitiveComponent;

struct FWindAnchor
{
	TWeakObjectPtr<UPrimitiveComponent> Target;

	// Angle (radians) around the tornado center at t = 0
	float StartAngle = 0.f;

	float HeightFactor = 1.f;

	FVector LastLocation = FVector::ZeroVector;
};

UCLASS()
class DICETACT_API UDTTornadoAbility : public UDTResolveGameplayAbility
{
	GENERATED_BODY()

public:
	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;

	virtual void EndAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		bool bReplicateEndAbility,
		bool bWasCancelled) override;

	UFUNCTION(BlueprintPure, Category = "Tornado")
	float GetTornadoRadius() const;

	UFUNCTION(BlueprintPure, Category = "Tornado")
	float GetTornadoHeight() const;

	UFUNCTION(BlueprintPure, Category = "Tornado")
	float GetTornadoLifetime() const;

	UFUNCTION(BlueprintPure, Category = "Tornado")
	FVector GetTornadoCenter() const;

	// Scale to apply to the engine's /Engine/BasicShapes/Cylinder (100 x 100 x 100) to match the tornado
	UFUNCTION(BlueprintPure, Category = "Tornado")
	FVector GetTornadoCylinderScale() const;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	TObjectPtr<UDTTornadoData> data;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Object Type")
	TArray<TEnumAsByte<EObjectTypeQuery>> LiftedObjectTypes;

private:
	TArray<FWindAnchor> Anchors;
	TArray<TWeakObjectPtr<UPrimitiveComponent>> LiftedTargets;

	FVector TornadoCenter = FVector::ZeroVector;
	float TornadoRadius = 0.f;
	float TornadoLifetime = 1.f;
	float TotalRotations = 0.f;
	float TornadoStartTime = 0.f;
	float LastUpdateTime = 0.f;
	float ReleaseTime = 0.f;
	bool bReleased = false;

	FTimerHandle AnchorTickTimerHandle;
	FTimerHandle CheckRestTimerHandle;
	FTimerHandle MaxWaitTimerHandle;

	UPROPERTY(EditDefaultsOnly, Category = "Tornado")
	float AnchorUpdateInterval = 0.016f;

	UPROPERTY(EditDefaultsOnly, Category = "Tornado")
	float RestCheckInterval = 0.15f;

	UPROPERTY(EditDefaultsOnly, Category = "Tornado")
	float RestVelocityThreshold = 5.f;

	UPROPERTY(EditDefaultsOnly, Category = "Tornado")
	float MinSettleTime = 1.f;

	UPROPERTY(EditDefaultsOnly, Category = "Tornado")
	float MaxSettleWaitTime = 5.f;

	// ---- DEBUG DRAW ----
	UPROPERTY(EditDefaultsOnly, Category = "Tornado|Debug")
	bool bDrawDebug = false;

	UPROPERTY(EditDefaultsOnly, Category = "Tornado|Debug", meta = (ClampMin = "0"))
	float DebugTrailDuration = 3.f;

	void DebugDrawVolume() const;
	void DebugDrawAnchor(const FWindAnchor& Anchor, const FVector& NewLocation, const FVector& TargetLocation) const;
	void DebugDrawRelease() const;
	// ---- END DEBUG DRAW ----

	void UpdateAnchors();
	void ReleaseTargets();
	void CheckIfAtRest();
	FVector ComputeAnchorLocation(const FWindAnchor& Anchor, float Progress) const;
};