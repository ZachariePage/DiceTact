#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DiceTact/subsystem/DTCombatBridgeSubsystem.h"
#include "DTCameraPawn.generated.h"

class ADTHeroCharacter;
class ADTDice;
class UDTCameraSettings;
class USpringArmComponent;
class UCameraComponent;
struct FDTCameraProfile;

UENUM(BlueprintType)
enum class EDTCameraMode : uint8
{
	Overview,
	Hero,
	ThrowAim,
	DiceFollow
};

UCLASS()
class DICETACT_API ADTCameraPawn : public APawn
{
	GENERATED_BODY()

public:
	ADTCameraPawn();
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Camera")
	void SetCameraActive(bool value);

	UFUNCTION(BlueprintCallable, Category = "Camera")
	void SetSelectedHero(ADTHeroCharacter* Hero);

	UFUNCTION(BlueprintCallable, Category = "Camera")
	void SetThrowAimActive(bool bActive);

	UFUNCTION(BlueprintCallable, Category = "Camera")
	void FollowThrownDice(ADTDice* Dice);

	void MoveCamera(const FVector2D& Input);
	void RotateCamera(const FVector2D& Input);
	void ZoomCamera(float Amount);
	void ToggleOverview();

	UFUNCTION(BlueprintPure, Category = "Camera")
	bool IsFollowingThrownDice() const;

	UFUNCTION(BlueprintPure, Category = "Camera")
	bool IsPlayerCameraInputAllowed() const;

	// Returns the current mode: Overview, Hero, ThrowAim or DiceFollow, without changing it.
	// Temporary focus can make the camera watch another actor while this stored mode stays the same.
	UFUNCTION(BlueprintPure, Category = "Camera")
	EDTCameraMode GetCameraMode() const { return CameraMode; }

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<USceneComponent> RootSceneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<UCameraComponent> CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<USpringArmComponent> SpringArmComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<UDTCameraSettings> CameraSettings;

private:
	const FDTCameraProfile& GetProfile() const;
	void RestorePlayerMode();
	void StopFollowingDice();
	void ClearTemporaryFocus(bool bKeepLastLocation = false);

	UFUNCTION()
	void OnFollowedDiceFinished();

	UFUNCTION()
	void OnFollowedDiceDestroyed(AActor* DestroyedActor);

	UFUNCTION()
	void OnTemporaryDiceRemoved();

	UFUNCTION()
	void OnTemporaryActorDestroyed(AActor* DestroyedActor);

	UFUNCTION()
	void OnNewActorFocus(AActor* FocusedActor, EFocusActorMethod FocusMethod, bool bIsFocused);

	UFUNCTION()
	void OnCombatActorsFocused(const TArray<AActor*>& FocusedActors);

	UFUNCTION()
	void OnCombatPhaseChanged(FName PhaseName, bool bEntering);

	UFUNCTION()
	void OnCombatEnded(bool bWon);

	TWeakObjectPtr<ADTHeroCharacter> SelectedHero;
	TWeakObjectPtr<ADTDice> FollowedDice;
	TWeakObjectPtr<AActor> TemporaryFocus;
	TWeakObjectPtr<UDTCombatBridgeSubsystem> CombatBridge;
	EDTCameraMode CameraMode = EDTCameraMode::Overview;
	FVector OverviewLocation = FVector::ZeroVector;
	FVector PanOffset = FVector::ZeroVector;
	FVector TemporaryFocusLocation = FVector::ZeroVector;
	float CameraYaw = 0.0f;
	float PitchOffset = 0.0f;
	float ZoomOffset = 0.0f;
	bool bHasTemporaryFocus = false;
	bool bResolvingDice = false;
};
