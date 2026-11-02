// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTact/Combat/TurnBaseSystem/DTTurnBaseComponent.h"
#include "Subsystems/WorldSubsystem.h"
#include "DTCombatBridgeSubsystem.generated.h"

UENUM(BlueprintType)
enum class EFocusActorMethod : uint8
{
	SnapOnce UMETA(ToolTip = "Snaps to the target, but do not follow."),
	Attach UMETA(ToolTip = "Will follow the Focused actor until specifically said to detach.")
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnActorFocus, AActor*, FocusedActor, EFocusActorMethod, FocusMethod, bool, bIsFocused);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorsFocused, const TArray<AActor*>&, FocusedActors);

struct FDTPendingAbility;
/**
 * 
 */
UCLASS(DisplayName="Turn-Based Combat Bridge Subsystem")
class DICETACT_API UDTCombatBridgeSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:

	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;

	/* Other combat events */
	UFUNCTION(BlueprintCallable)
	void RegisterNewFocus(AActor* NewFocus, EFocusActorMethod FocusMethod);
	UFUNCTION(BlueprintCallable)
	void UnregisterNewFocus(AActor* FocusRemovedFrom);
	UFUNCTION(BlueprintCallable)
	void AskFocusOnActors(const TArray<AActor*>& InActors);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsFocused() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	AActor* GetFocusedActor() const;

	/* Turn-based component indirect communications */
	UFUNCTION(BlueprintCallable, meta=(Keywords="Add"))
	void RegisterTurnReceiverToCombat(TScriptInterface<IDTTurnReceiver> TurnReceiver, ECombatUnitType TurnType);
	UFUNCTION(BlueprintCallable, meta=(Keywords="Remove"))
	void UnregisterTurnReceiverFromCombat(TScriptInterface<IDTTurnReceiver> RemovedTurnReceiver, ECombatUnitType TurnType);
	UFUNCTION(BlueprintCallable, meta=(Keywords="Add"))
	void RegisterUnitToCombat(ADTTurnBaseUnit* NewUnit, ECombatUnitType TurnType);
	UFUNCTION(BlueprintCallable, meta=(Keywords="Remove"))
	void UnregisterUnitFromCombat(ADTTurnBaseUnit* RemovedUnit, ECombatUnitType TurnType);

	UFUNCTION(BlueprintCallable)
	void AddPendingAbility(const FDTPendingAbility& NewPendingAbility);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const TArray<FDTPendingAbility>& GetAllPendingAbilities() const;

	/* Delegates */
	UPROPERTY(BlueprintAssignable)
	FOnCombatEnd OnCombatEnded;

	UPROPERTY(BlueprintAssignable)
	FOnActorFocus OnNewActorFocus;

	UPROPERTY(BlueprintAssignable)
	FOnActorsFocused OnActorsFocused;

	UPROPERTY(BlueprintAssignable)
	FOnTurnPhaseChange OnTurnPhaseChanged;
	
protected:

	UFUNCTION()
	void OnCombatEndedBridged(bool bWon);
	UFUNCTION()
	void OnPhaseChangedBridged(FName NewPhase, bool bEntering);
	UFUNCTION()
	void OnAuthorityChangedBridged(AActor* ActorWithAuthority);

	void SetupTurnSystem(UDTTurnBaseComponent* TurnBaseComponent);

	UPROPERTY()
	TObjectPtr<UDTTurnBaseComponent> TurnBasedSystem;

	UPROPERTY()
	TObjectPtr<AActor> FocusedActor;
};
