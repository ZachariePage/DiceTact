// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Interface/PartyUnitInterface.h"
#include "AbilitySystemInterface.h"
#include "../TurnBaseUnit.h"
#include "Core/Interface/DiceAbilityCaster.h"
#include "HeroCharacter.generated.h"

class UActorDiceCollision;
class UDTHeroDefinition;
class UCameraComponent;
class UDTHeroPowerDefinition;
class UHeroPowerAbility;
class UThrowType;
class UAbilitySystemComponent;
class UPartyMovementAttributeSet;
class UGameplayAbility;

UCLASS(PrioritizeCategories="Party")
class DICETACT_API AHeroCharacter : public ATurnBaseUnit, public IAbilitySystemInterface, public IDiceAbilityCaster
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHeroCharacter();
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	// IAbilitySystem interface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
 
	// IPartyUnit nterface
	/*
	virtual bool IsPartyUnit_Implementation() const override;
	virtual UAbilitySystemComponent* GetPartyAbilitySystemComponent_Implementation() const override;
	virtual void TakeControlOfUnit_Implementation() override;
	virtual void LeaveControlOfUnit_Implementation() override;
	*/
	
	// IDiceAbilityCaster interface
	virtual UAbilitySystemComponent* GetDiceCasterAbilitySystemComponent_Implementation() const override;
	virtual void OnCastedAbilityFinished_Implementation() override;
	virtual int AmountOfAvailibleMana_Implementation() override;
	virtual bool TryThrowDice_Implementation(UDTDiceItemInstance* DiceItemInstance) override;
	virtual int GetAmountOfThrownDice_Implementation() const override;
	virtual int32 GetMaxThrowDice_Implementation() const override;

	UFUNCTION()
	void MoveToMouse(); 
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	
	UFUNCTION(BlueprintPure, Category = "Party|Movement")
	UPartyMovementAttributeSet* GetMovementAttributeSet() const;
	
	TSubclassOf<UGameplayAbility> GetDefaultMoveAbility() const;

	TSubclassOf<UHeroPowerAbility> GetHeroPowerAbility() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	UDTHeroPowerDefinition* GetHeroPowerDefinition() const;

	UFUNCTION(BlueprintCallable, Category = "Camera")
	void SetAiming(bool bAiming);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CanReceiveTurn() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CanTravel() const;

	UFUNCTION(BlueprintCallable, Category = "Throw")
	const UThrowType* GetThrowTypeData() const;

	UFUNCTION(BlueprintCallable)
	bool TryThrowAbility();

	//TODO: REPLACE THIS BY PROBABLY INTERFACE IDK THIS JUST FOR PREUVE TECHNIQUE
	//UJUEDevelopmentStatics::ReportWarningMessage("meowmeowmeow")
	void PushBackHero(FVector direction);
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
	TObjectPtr<UActorDiceCollision> CollisionData;
	//end

protected:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Party|Movement")
	TObjectPtr<UPartyMovementAttributeSet> MovementAttributeSet;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Party|Abilities|Throw")
	TSubclassOf<UGameplayAbility> DefaultThrowAbility;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Party|Abilities")
	TSubclassOf<UGameplayAbility> DefaultMoveAbility;
	UPROPERTY()
	FGameplayAbilitySpecHandle MoveHandle;
	
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Party|Abilities|Debug")
	TObjectPtr<UThrowType> DebugThrowTypeData;
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
	void ResetMovementBudgetForNewTurn();

	UFUNCTION(BlueprintCallable, Category = "Party|Movement")
	void ResetTurn();

	void GrantDefaultAbilities();

	UFUNCTION(BlueprintImplementableEvent)
	void OnGameplayAbilityEnded(const FAbilityEndedData& EndedData);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Party|Abilities")
	int32 DiceAmountThrown = 0;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Party|Abilities")
	int32 MaxThrows = 2;

	bool bHasMoved = false;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Party|Movement")
	float MaxMovementBudget = 1200.f;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<UCameraComponent> Cam;

	
};
