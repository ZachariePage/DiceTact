#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTCameraSettings.generated.h"

USTRUCT(BlueprintType)
struct DICETACT_API FDTCameraProfile
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera", meta = (ClampMin = "100"))
	float Distance = 1800.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera", meta = (ClampMin = "-89", ClampMax = "-10"))
	float Pitch = -60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera", meta = (ClampMin = "-45", ClampMax = "45", Units = "deg"))
	float ViewPitchOffset = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera", meta = (ClampMin = "20", ClampMax = "120"))
	float FieldOfView = 90.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	float FocusHeight = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	FVector SocketOffset = FVector::ZeroVector;
};

UCLASS(BlueprintType)
class DICETACT_API UDTCameraSettings : public UDataAsset
{
	GENERATED_BODY()

public:
	UDTCameraSettings();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Profiles")
	FDTCameraProfile Overview;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Profiles")
	FDTCameraProfile Hero;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Profiles")
	FDTCameraProfile ThrowAim;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Profiles")
	FDTCameraProfile DiceFollow;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Movement", meta = (ClampMin = "0"))
	float PanSpeed = 1400.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Movement", meta = (ClampMin = "0"))
	float RotationSpeed = 90.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Movement", meta = (ClampMin = "0"))
	float BlendSpeed = 6.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Movement", meta = (ClampMin = "-89", ClampMax = "-1"))
	float MinimumPitch = -80.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Movement", meta = (ClampMin = "-89", ClampMax = "-1"))
	float MaximumPitch = -15.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Zoom", meta = (ClampMin = "0"))
	float ZoomStep = 150.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Zoom", meta = (ClampMin = "100"))
	float MinimumDistance = 500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config|Zoom", meta = (ClampMin = "100"))
	float MaximumDistance = 3000.0f;
};

