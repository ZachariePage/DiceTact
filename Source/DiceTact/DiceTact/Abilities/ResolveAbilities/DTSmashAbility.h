#pragma once

#include "CoreMinimal.h"
#include "DiceTact/Abilities/ResolveAbilities/DTResolveGameplayAbility.h"
#include "DTSmashAbility.generated.h"

class ADTDice;
class ADTHeroCharacter;
class UDTSmashData;
class UDTSeismicWaveComponent;

/** Makes the throwing hero jump to the resolving dice and release shockwaves */
UCLASS()
class DICETACT_API UDTSmashAbility : public UDTResolveGameplayAbility
{
	GENERATED_BODY()

public:
	// Keep the jump and wave state on this dice's ability instance
	UDTSmashAbility();

	// Read the resolving dice, its throwing hero and the face chosen by resolution
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	// Launch the prepared jump once after the ability commits
	virtual void CommitExecute(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo) override;

	// Restore the hero and remove callbacks before releasing dice resolution
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Config")
	TObjectPtr<UDTSmashData> AbilityData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "State")
	FVector WaveOrigin = FVector::ZeroVector;

	/** Play the jump effects without starting another jump */
	UFUNCTION(BlueprintImplementableEvent, Category = "Smash|Visuals")
	void OnJumpStarted(FVector StartLocation, FVector TargetLocation);

	/** Play the impact effects after the hero has recovered from ragdoll */
	UFUNCTION(BlueprintImplementableEvent, Category = "Smash|Visuals")
	void OnSmashImpact(FVector Location);

	/** Draw or update the ring at its current radius */
	UFUNCTION(BlueprintImplementableEvent, Category = "Smash|Visuals")
	void OnWaveUpdated(FVector Location, float Radius);

	/** Finish the visuals for one ring */
	UFUNCTION(BlueprintImplementableEvent, Category = "Smash|Visuals")
	void OnWaveFinished(FVector Location);

	/** Play hit effects after the shared wave applies its gameplay impact */
	UFUNCTION(BlueprintImplementableEvent, Category = "Smash|Visuals")
	void OnWaveHitTarget(FVector Location, FVector HitLocation, AActor* HitActor);

private:
	// Start the wave after the hero finishes its jump, or cancel with the movement
	void OnHeroJumpFinished(const FHitResult& Hit, bool bCancelled);

	// Cancel if either actor disappears before Smash finishes
	UFUNCTION()
	void OnParticipantDestroyed(AActor* DestroyedActor);

	// Finish through GAS so the dice handles queue completion and destruction
	void FinishSmash(bool bCancelled = false);

	UPROPERTY()
	TObjectPtr<UDTSeismicWaveComponent> WaveComponent;

	TWeakObjectPtr<ADTDice> SourceDice;
	TWeakObjectPtr<ADTHeroCharacter> Hero;
	FVector LaunchVelocity = FVector::ZeroVector;
	FVector JumpTargetLocation = FVector::ZeroVector;
	int32 DiceFace = 1;
	bool bCommitted = false;
	bool bWaitingForLanding = false;
	bool bEndingSmash = false;
};
