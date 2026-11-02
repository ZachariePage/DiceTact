// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTact/Interface/DTPartyUnitInterface.h"
#include "AbilitySystemInterface.h"
#include "../DTTurnBaseUnit.h"
#include "DiceTact/Interface/DTDiceAbilityCaster.h"
#include "DiceTact/Interface/DTPushable.h"
#include "TimerManager.h"
#include "DiceTact/Interface/DTPhysicalUnitInterface.h"
#include "DTHeroCharacter.generated.h"

struct FPhysicalImpactInfo;
class UPhysicalReactionComponent;
class UDTMedaillonDefinition;
class UDTActorDiceCollisionData;
class UDTHeroDefinition;
class UCameraComponent;
class UDTHeroPowerDefinition;
class UDTHeroPowerAbility;
class UDTThrowTypeData;
class UAbilitySystemComponent;
class UDTPartyMovementAttributes;
class UGameplayAbility;

// Report the landing hit and whether the jump was cancelled
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnAbilityJumpFinished, const FHitResult&, bool);

UCLASS(PrioritizeCategories="Party")
class DICETACT_API ADTHeroCharacter : public ADTTurnBaseUnit, public IDTPushable, public IAbilitySystemInterface, public IDTDiceAbilityCaster, public IDTPhysicalUnitInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADTHeroCharacter();
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Stop an ability jump without notifying gameplay while the hero leaves the world
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	// Keep normal ragdoll recovery from interrupting a controlled jump
	virtual void Tick(float DeltaSeconds) override;
	virtual bool PushTowardBlackHole_Implementation(const FPushData& PushData) override; 

	// IAbilitySystem interface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
 
	// IPartyUnit nterface
	/*
	virtual bool IsPartyUnit_Implementation() const override;
	virtual UAbilitySystemComponent* GetPartyAbilitySystemComponent_Implementation() const override;
	virtual void TakeControlOfUnit_Implementation() override;
	virtual void LeaveControlOfUnit_Implementation() override;
	*/

	/* IPushable interface begin */
	bool PushToward_Implementation(const FPushData& PushData) override;
	/* IPushable interface end */
	
	// IDiceAbilityCaster interface
	virtual UAbilitySystemComponent* GetDiceCasterAbilitySystemComponent_Implementation() const override;
	virtual void OnCastedAbilityFinished_Implementation() override;
	virtual int AmountOfAvailibleMana_Implementation() override;
	virtual bool TryThrowDice_Implementation(UDTDiceItemInstance* DiceItemInstance) override;
	virtual int GetAmountOfThrownDice_Implementation() const override;
	virtual int32 GetMaxThrowDice_Implementation() const override;

	UFUNCTION()
	void TryMoveToMouse(); 
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	
	UFUNCTION(BlueprintPure, Category = "Party|Movement")
	UDTPartyMovementAttributes* GetMovementAttributeSet() const;
	
	TSubclassOf<UGameplayAbility> GetDefaultMoveAbility() const;

	TSubclassOf<UDTHeroPowerAbility> GetHeroPowerAbility() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	UDTHeroPowerDefinition* GetHeroPowerDefinition() const;

	UFUNCTION(BlueprintCallable, Category = "Camera")
	void SetAiming(bool bAiming);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CanReceiveTurn() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CanTravel() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CanUsePower() const;

	UFUNCTION(BlueprintCallable, Category = "Throw")
	const UDTThrowTypeData* GetThrowTypeData() const;

	UFUNCTION(BlueprintCallable)
	bool TryActivateHeroPower();

	//TODO: REPLACE THIS BY PROBABLY INTERFACE IDK THIS JUST FOR PREUVE TECHNIQUE
	//UJUEDevelopmentStatics::ReportWarningMessage("meowmeowmeow")
	void BeginRagdoll(FVector LaunchVelocity, FVector Torque);
	void TickRagdoll(float DeltaTime);
	void EndRagdoll();
	UPROPERTY()
	float RagdollTimer = 0.f;
	UPROPERTY(VisibleAnywhere)
	bool bRagdolling = false;
	FVector DefaultMeshRelativeLocation;
	FRotator DefaultMeshRelativeRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	TObjectPtr<UDTActorDiceCollisionData> CollisionData;

	// Ability jumps: shared movement for Smash and other abilities.
	// Prepare the ground destination and arc before the calling ability commits
	bool PrepareAbilityJump(FVector TargetLocation, float ArcParam, AActor* IgnoredActor,
		FVector& OutLaunchVelocity, FVector& OutGroundLocation) const;

	// Launch a prepared arc and report its actual landing or cancellation
	bool BeginAbilityJump(FVector LaunchVelocity, float MaxDuration, float CollisionLookAheadTime,
		AActor* IgnoredActor, FOnAbilityJumpFinished Completion);

	// Check immediately after jump visuals when a nearby obstacle needs early recovery
	void CheckAbilityJump();

	// Restore movement and notify the caller that its jump was cancelled
	void CancelAbilityJump();

	// End of the public ability jump functions.

protected:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	//medaillon
	UPROPERTY(EditAnywhere, Category = "Medaillon|Debug")
	TArray<TObjectPtr<UDTMedaillonDefinition>> DebugMedaillon;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Party|Movement")
	TObjectPtr<UDTPartyMovementAttributes> MovementAttributeSet;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Party|Abilities|Throw")
	TSubclassOf<UGameplayAbility> DefaultThrowAbility;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Party|Abilities")
	TSubclassOf<UGameplayAbility> DefaultMoveAbility;
	UPROPERTY()
	FGameplayAbilitySpecHandle MoveHandle;
	
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Party|Abilities|Debug")
	TObjectPtr<UDTThrowTypeData> DebugThrowTypeData;
	UPROPERTY(BlueprintReadOnly)
	FGameplayAbilitySpecHandle ThrowSpecHandle;
	UPROPERTY(EditInstanceOnly, Category = "Party|Abilities|Debug")
	TObjectPtr<UDTHeroPowerDefinition> DebugHeroPowerDefinition;
	UPROPERTY()
	FGameplayAbilitySpecHandle HeroPowerHandle;
	
	
	/* @TODO: MAKE THIS EDITOR-ONLY since we are always going to load a hero instead */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Party|Abilities")
	TObjectPtr<UDTHeroDefinition> HeroDefinition;
	
	virtual void PossessedBy(AController* NewController) override;

	UFUNCTION(BlueprintCallable, Category = "Party|Movement")
	void ResetMovementBudget();

	UFUNCTION(BlueprintCallable, Category = "Party|Movement")
	void ResetTurn();

	void GrantDefaultAbilities();
	void GrantDefaultMedaillonAbilities();

	UFUNCTION(BlueprintImplementableEvent)
	void OnGameplayAbilityEnded(const FAbilityEndedData& EndedData);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Party|Abilities")
	int32 DiceAmountThrown = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Party|Abilities")
	int32 MaxThrows = 2;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Party|Abilities")
	bool bUsedPower = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<UCameraComponent> Cam;
	
	//physics
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UPhysicalReactionComponent> PhysicalReaction;
	UFUNCTION()
	void HandleImpactReceived(UPhysicalReactionComponent* Comp, const FPhysicalImpactInfo& Info);
	virtual void ApplyImpulse_Implementation(const FPushData& Info) override;

private:
	// Ability jumps: shared movement for Smash and other abilities.
	// Complete only when character movement confirms a real landing
	UFUNCTION()
	void OnAbilityJumpLanded(const FHitResult& Hit);

	// Release jump state before notifying the calling ability
	void FinishAbilityJump(const FHitResult& Hit, bool bCancelled);

	// Leave capsule physics before contact without completing the jump
	void RecoverAbilityJump();

	FOnAbilityJumpFinished AbilityJumpCompletion;
	TWeakObjectPtr<AActor> AbilityJumpIgnoredActor;
	FTimerHandle AbilityJumpTimerHandle;
	float AbilityJumpStartTime = 0.f;
	float AbilityJumpMaxDuration = 0.f;
	float AbilityJumpCollisionLookAheadTime = 0.f;
	bool bAbilityJumpActive = false;
	bool bStartingAbilityJump = false;
	bool bAbilityJumpCancelRequested = false;

	// Keep the physics arc active until early recovery restores character movement
	bool bAbilityJumpPhysicsActive = false;
	float AbilityJumpPreviousLinearDamping = 0.f;
	// End of ability jump state.

	//physics
	void CalculateImpactIntensity(const FPhysicalImpactInfo& Info, float& Intensity);
};
