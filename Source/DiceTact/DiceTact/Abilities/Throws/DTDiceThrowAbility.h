// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
//#include "Core/Interface/ModifyingCameraAbility.h"
#include "DiceTact/Interface/DTRangeBaseAbilityInterface.h"
#include "DiceTact/Interface/DTTurnConsumingAbilityInterface.h"
#include "DTDiceThrowAbility.generated.h"

class ADTDice;
class UDTDiceItemInstance;
class UDTDiceThrowData;
class UDTResolveGameplayAbility;
/**
 * 
 */
UCLASS()
class DICETACT_API UDTDiceThrowAbility : public UGameplayAbility, public IDTRangeBaseAbilityInterface, public IDTTurnConsumingAbilityInterface//, public IModifyingCameraAbility
{
	GENERATED_BODY()

public:
	//interface range base
	UFUNCTION(BlueprintCallable, Category = "Ability|Range")
	virtual float GetAbilityMaxRange(const AActor* AvatarActor) const override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dice")
	float Range = 1000.f;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	TSubclassOf<UDTResolveGameplayAbility> GetResolveAbility();

	//interface turn consume
	virtual bool DoesItConsumeTurn_Implementation() override;

	virtual int ManaCost_Implementation() override;

	/*
	//cam interface
	UFUNCTION(BlueprintCallable, Category = "Camera")
	virtual bool ShouldModifyCamera_Implementation() const override;
	*/
	
	void SpawnDice();

	FVector CalculateSpawnLocation(const FVector& AvatarLocation, const FVector& TargetLocation) const;

	UFUNCTION(BlueprintCallable, Category = "Dice")
	void SetDiceItemInstance(UDTDiceItemInstance* ItemInstance);
	
protected:
	bool bThrowFinished = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dice")
	TObjectPtr<ADTDice> SpawnedDiceActor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Dice")
	TObjectPtr<UDTDiceItemInstance> DiceItemInstance;
	
	UPROPERTY()
	FGameplayAbilitySpecHandle SubsequentAbilityHandle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Cooldown")
	TSubclassOf<UGameplayEffect> CooldownEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dice")
	TObjectPtr<UDTDiceThrowData> ThrowData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dice")
	float ForwardSpawnOffset = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dice")
	float SpawnHeight = 75.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Time fastforward")
	float speedOfFastForward = 1.2;
	UFUNCTION(BlueprintCallable, Category = "Ability")
	void SendPendingAbility();

	UFUNCTION()
	void OnDiceRemoved();

	UFUNCTION()
	void OnSpawnedDiceDestroyed(AActor* DestroyedActor);

	UFUNCTION(BlueprintCallable, Category = "Dice")
	void SetDiceActor(ADTDice* dice);

	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData
	) override;

	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ability Cost")
	float ManaCost = 0;
};
