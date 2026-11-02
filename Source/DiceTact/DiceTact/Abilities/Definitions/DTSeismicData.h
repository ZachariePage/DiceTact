#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/EngineTypes.h"
#include "DTSeismicData.generated.h"

/** Settings for the seismic wave */
UCLASS()
class DICETACT_API UDTSeismicData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	/** Base radius in cm before adding the dice face bonus */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Wave", meta = (ClampMin = "0", Units = "cm"))
	float BaseRadius = 200.f;

	/** Extra radius per point on the dice face */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Wave", meta = (ClampMin = "0", Units = "cm"))
	float RadiusPerFace = 100.f;

	/** How fast the wave expands in cm per second */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Wave", meta = (ClampMin = "1"))
	float PropagationSpeed = 600.f;

	/** How far the wave reaches above and below its center */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Wave", meta = (ClampMin = "1", Units = "cm"))
	float WaveHalfHeight = 150.f;

	/** Seconds between wave updates */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Wave", meta = (ClampMin = "0.01", Units = "s"))
	float UpdateInterval = 0.03f;

	/** Damage per target per ring, set to 0 for no damage */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Impact", meta = (ClampMin = "0"))
	int32 Damage = 1;

	/** Outward push speed, characters also use their own collision settings */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Impact", meta = (ClampMin = "0"))
	float PushStrength = 600.f;

	/** Upward speed added to the push */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Impact", meta = (ClampMin = "0"))
	float UpwardStrength = 120.f;

	/** Object types the wave checks, allies are still ignored */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Targets")
	TArray<TEnumAsByte<EObjectTypeQuery>> HitObjectTypes;
};
