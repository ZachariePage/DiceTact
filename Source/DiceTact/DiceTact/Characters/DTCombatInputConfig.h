#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/EngineTypes.h"
#include "DTCombatInputConfig.generated.h"

UCLASS(BlueprintType)
class DICETACT_API UDTCombatInputConfig : public UDataAsset
{
	GENERATED_BODY()

public:
	// Matches the PlayerUnit channel used by hero capsules in the project collision settings.
	UPROPERTY(EditDefaultsOnly, Category = "Config|Targeting")
	TEnumAsByte<ECollisionChannel> HeroSelectionChannel = ECC_GameTraceChannel1;

	UPROPERTY(EditDefaultsOnly, Category = "Config|Targeting", meta = (ClampMin = "1000.0", Units = "cm"))
	float AimTraceDistance = 100000.f;

	UPROPERTY(EditDefaultsOnly, Category = "Config|Throw", meta = (ClampMin = "0.01", Units = "s"))
	float ThrowChargeDuration = 1.5f;

	UPROPERTY(EditDefaultsOnly, Category = "Config|Throw", meta = (ClampMin = "0.01"))
	float ThrowStrengthStep = 0.25f;

	UPROPERTY(EditDefaultsOnly, Category = "Config|Throw", meta = (ClampMin = "0"))
	float MaximumThrowStrength = 3.f;
};
