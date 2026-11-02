#pragma once

#include "CoreMinimal.h"
#include "DTSeismicData.h"
#include "DTSmashData.generated.h"

/** Seismic settings plus the Smash jump and extra rings */
UCLASS()
class DICETACT_API UDTSmashData : public UDTSeismicData
{
	GENERATED_BODY()

public:
	/** Lower values make the jump higher */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Jump", meta = (ClampMin = "0.05", ClampMax = "0.95"))
	float ArcParam = 0.5f;

	/** Seconds allowed for the jump before cancelling */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Jump", meta = (ClampMin = "0.1", Units = "s"))
	float MaxJumpDuration = 8.f;

	/** Seconds to look ahead for a blocking collision before leaving ragdoll */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Jump", meta = (ClampMin = "0", Units = "s"))
	float CollisionLookAheadTime = 0.08f;

	/** Number of rings, each target can be hit once per ring */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Wave", meta = (ClampMin = "1", ClampMax = "10"))
	int32 RingCount = 3;

	/** Seconds between rings */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Wave", meta = (ClampMin = "0", Units = "s"))
	float RingDelay = 0.2f;
};
