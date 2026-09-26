// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Core/Interface/ModifyingCameraAbility.h"
#include "Core/Interface/RangeBaseAbility.h"
#include "Core/Interface/TurnConsumingAbility.h"
#include "GA_ThrowDice.generated.h"

class ADice;
class UDTDiceItemInstance;
class UDiceThrowData;
class UResolveGameplayAbility;
/**
 * 
 */
UCLASS()
class DICETACT_API UGA_ThrowDice : public UGameplayAbility, public IRangeBaseAbility, public ITurnConsumingAbility, public IModifyingCameraAbility
{
	GENERATED_BODY()

public:
	//interface range base
	UFUNCTION(BlueprintCallable, Category = "Ability|Range")
	virtual float GetAbilityMaxRange(const AActor* AvatarActor) const override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dice")
	float Range = 1000.f;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	TSubclassOf<UResolveGameplayAbility> GetResolveAbility();

	//interface turn consume
	virtual bool DoesItConsumeTurn_Implementation() override;

	virtual int ManaCost_Implementation() override;

	//cam interface
	UFUNCTION(BlueprintCallable, Category = "Camera")
	virtual bool ShouldModifyCamera_Implementation() const override;

	void SpawnDice();

	UFUNCTION(BlueprintCallable, Category = "Dice")
	void SetDiceItemInstance(UDTDiceItemInstance* ItemInstance);
	
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dice")
	TObjectPtr<ADice> SpawnedDiceActor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Dice")
	TObjectPtr<UDTDiceItemInstance> DiceItemInstance;
	
	UPROPERTY()
	FGameplayAbilitySpecHandle SubsequentAbilityHandle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Cooldown")
	TSubclassOf<UGameplayEffect> CooldownEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dice")
	TObjectPtr<UDiceThrowData> ThrowData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dice")
	FVector OffsetSpawnLocation = FVector(200.f, 200.f, 0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Time fastforward")
	float speedOfFastForward = 1.2;
	UFUNCTION(BlueprintCallable, Category = "Ability")
	void SendPendingAbility();

	UFUNCTION(BlueprintCallable, Category = "Dice")
	void SetDiceActor(ADice* dice);

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
