// DTTornadoData.h  -- REFERENCE: merge these fields into the DataAsset you already created.
// Keep your own parent class (UDataAsset / UPrimaryDataAsset / whatever UDTBlackHoleData uses).

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTTornadoData.generated.h"

UCLASS(BlueprintType)
class DICETACT_API UDTTornadoData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tornado|Radius", meta = (ClampMin = "0"))
	float BaseRadius = 250.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tornado|Radius", meta = (ClampMin = "0"))
	float AdditionalRadius = 50.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tornado|Lifetime", meta = (ClampMin = "0.1"))
	float BaseLifetime = 2.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tornado|Lifetime", meta = (ClampMin = "0"))
	float AdditionalLifetime = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tornado|Rotation", meta = (ClampMin = "0"))
	float RotationsPerLevel = 0.25f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tornado|Anchor", meta = (ClampMin = "0", ClampMax = "1"))
	float RadialRampFraction = 0.25f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tornado|Anchor", meta = (ClampMin = "0"))
	float MaxLiftHeight = 250.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tornado|Anchor", meta = (ClampMin = "0", ClampMax = "1"))
	float MinHeightFactor = 0.4f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tornado|Anchor")
	bool bClockwise = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tornado|Pull", meta = (ClampMin = "0"))
	float PullStiffness = 25.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tornado|Pull", meta = (ClampMin = "0"))
	float PullDamping = 8.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tornado|Pull", meta = (ClampMin = "0"))
	float MaxPullAcceleration = 4000.f;
};