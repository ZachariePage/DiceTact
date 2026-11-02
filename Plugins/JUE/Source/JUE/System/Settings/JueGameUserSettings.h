// Copyright Justin Renaud-Gélinas & Antoine Chamberland-Dyotte 

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JueGameSettings.h"
#include "GameFramework/GameUserSettings.h"
#include "JueGameUserSettings.generated.h"


/** Delegates for each setting types  */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameSettingsSignature, const FJueGameplaySettings&, UpdatedGameSettings);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnControlsSignature, const FJueGameControlSettings&, UpdatedControls);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAudioSignature, const FJueGameAudioSettings&, UpdatedAudio);

/** Game  */


/**
 * 
 */
UCLASS(Blueprintable)
class JUE_API UJUEGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()

public:
	virtual void ApplySettings(bool bCheckForCommandLineOverrides) override;
	
	/** Events Signature */
	UPROPERTY(BlueprintAssignable, Category = "GameplaySettings")
	FOnGameSettingsSignature OnGameSettingsUpdate;
	UPROPERTY(BlueprintAssignable, Category = "GameplaySettings")
	FOnControlsSignature OnControlsSettingsUpdate;
	UPROPERTY(BlueprintAssignable, Category = "AudioSettings")
	FOnAudioSignature OnAudioSettingsUpdate;
	

	/** Settings */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GameplaySettings", Config)
	FJueGameplaySettings GameplaySettings;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GameplaySettings", Config)
	FJueGameControlSettings ControlSettings;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AudioSettings", Config)
	FJueGameAudioSettings AudioSettings;

	/** Setters */
	UFUNCTION(BlueprintCallable, Category = "Gameplay Settings")
	void SetGameSpeed(float GameSpeed);

	UFUNCTION(BlueprintCallable, Category = "Controls Settings")
	void SetSensitivity(float HorizontalSensitivity, float VerticalSensitivity);

	UFUNCTION(BlueprintCallable, Category = "Controls Settings")
	void SetAimSensitivity(float HorizontalAimSensitivity, float VerticalAimSensitivity);
	
	UFUNCTION(BlueprintCallable, Category = "AudioSettings")
	void SetMainAudioVolume(float MainAudioVolume);
	
	UFUNCTION(BlueprintCallable, Category = "AudioSettings")
	void SetMusicAudioVolume(float MusicAudioVolume);
	
	UFUNCTION(BlueprintCallable, Category = "AudioSettings")
	void SetSFXAudioVolume(float SFXAudioVolume);

	UFUNCTION(BlueprintCallable, Category = "AudioSettings")
	void SetAmbianceAudioVolume(float AmbianceAudioVolume);

	/** Getters */
	UFUNCTION(BlueprintPure, Category = "GameplaySettings")
	float GetGameSpeed() const;

	UFUNCTION(BlueprintPure, Category = "Controls Settings")
	float GetHorizontalSensitivity() const;
	
	UFUNCTION(BlueprintPure, Category = "Controls Settings")
	float GetVerticalSensitivity() const;
	
	UFUNCTION(BlueprintPure, Category = "Controls Settings")
	float GetHorizontalAimSensitivity() const;
	
	UFUNCTION(BlueprintPure, Category = "Controls Settings")
	float GetVerticalAimSensitivity() const;
	
	
	UFUNCTION(BlueprintPure, Category = "AudioSettings")
	float GetMainAudioVolume() const;

	UFUNCTION(BlueprintPure, Category = "AudioSettings")
	float GetMusicAudioVolume() const;
	
	UFUNCTION(BlueprintPure, Category = "AudioSettings")
	float GetSFXAudioVolume() const;

	UFUNCTION(BlueprintPure, Category = "AudioSettings")
	float GetAmbianceAudioVolume() const;
};
