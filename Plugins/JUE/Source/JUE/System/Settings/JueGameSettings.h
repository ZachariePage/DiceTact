#pragma once

#include "CoreMinimal.h"
#include "JueGameSettings.generated.h"

USTRUCT(BlueprintType)
struct FJueGameplaySettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Game")
	float GameSpeed = 1.0f;
};

USTRUCT(BlueprintType)
struct FJueGameControlSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sensitivity")
	float HorizontalSensitivity = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sensitivity")
	float VerticalSensitivity = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sensitivity", DisplayName="Inverted Horizontal Axis")
	bool XInverted = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sensitivity", DisplayName="Inverted Vertical Axis")
	bool YInverted = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sensitivity")
	float HorizontalAimSensitivity = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sensitivity")
	float VerticalAimSensitivity = 1.0f;
};

USTRUCT(BlueprintType)
struct FJueGameAudioSettings
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Audio")
	float MainAudioVolume = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Audio")
	float MusicAudioVolume = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Audio")
	float SFXAudioVolume = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Audio")
	float AmbianceAudioVolume = 1.0f;
};