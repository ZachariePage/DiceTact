// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "Components/SphereComponent.h"
#include "DiceTact/Characters/Enemy/DTEnemyUnit.h"
#include "GameFramework/Actor.h"
#include "DTGlueTrapActor.generated.h"

UCLASS()
class DICETACT_API ADTGlueTrapActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADTGlueTrapActor();
	
	UFUNCTION(BlueprintCallable)
	void SetTrapRadius(const float Radius);
	
	UFUNCTION(BlueprintCallable)
	void SetTrapDuration(const int Duration);
	
	UFUNCTION(BlueprintCallable)
	void SetTrapEffect(const TSubclassOf<UGameplayEffect> Effect);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
	UFUNCTION()
	void HandleTurnPhaseChanged(FName PhaseName, bool bEntered);
	
	UFUNCTION()
	void HandleCombatEnded(bool bHeroesWon);
	
	UFUNCTION(BlueprintImplementableEvent)
	void CleanupTrap();
	
	UPROPERTY(EditDefaultsOnly, Category = "Turns")
	FName CountedPhase = TEXT("Enemies");
	
	UPROPERTY(BlueprintReadOnly, Category = "Turns")
	int RemainingTurns = 0;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
	TObjectPtr<USphereComponent> TrapCollider;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TMap<TObjectPtr<ADTEnemyUnit>, FActiveGameplayEffectHandle> ActiveEffects;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Data")
	float TrapRadius;

	// Duration in turn
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Data")
	int TrapDuration;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Data")
	TSubclassOf<UGameplayEffect> TrapEffect;
};
