#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DTMagicMissileActor.generated.h"

class UStaticMeshComponent;

UCLASS()
class DICETACT_API ADTMagicMissileActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADTMagicMissileActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UStaticMeshComponent> MagicMissileMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float ExplosionRadius;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TObjectPtr<AActor> HomingTarget = nullptr;

	/** Speed of the missile while it homes towards its target (cm/s). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magic Missile|Homing")
	float HomingSpeed = 2500.0f;

	/** How quickly the missile turns towards its target. Higher values make sharper turns. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magic Missile|Homing")
	float HomingSteering = 10.0f;

	/** Vertical offset applied to the target's location when aiming. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magic Missile|Homing")
	float TargetZOffset = 0.0f;

	/** Fallback lifetime so a missile that never hits anything cannot keep the ability alive forever. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magic Missile|Homing")
	float MaxLifeTime = 10.0f;
};
