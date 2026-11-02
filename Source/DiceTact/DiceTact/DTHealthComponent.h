// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DTHealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthValueChanged, int, OldValue, int, NewValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHealthDepleted);


USTRUCT(BlueprintType)
struct FDamageProposalContext
{
	GENERATED_BODY()
 
	UPROPERTY(BlueprintReadWrite, Category = "Damage")
	TObjectPtr<AActor> Self = nullptr;
 
	UPROPERTY(BlueprintReadWrite, Category = "Damage")
	TObjectPtr<AActor> Source = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = "Damage")
	int DamageProposed = 0;
};

USTRUCT(BlueprintType)
struct FDamageMitigationContext
{
	GENERATED_BODY()
 
	UPROPERTY(BlueprintReadWrite, Category = "Damage")
	TObjectPtr<AActor> Self = nullptr;
 
	UPROPERTY(BlueprintReadWrite, Category = "Damage")
	TObjectPtr<AActor> Source = nullptr;
 
	UPROPERTY(BlueprintReadWrite, Category = "Damage")
	int IncomingDamage = 0;
 
	UPROPERTY(BlueprintReadWrite, Category = "Damage")
	int Defense = 0;
 
	UPROPERTY(BlueprintReadWrite, Category = "Damage")
	bool bDodged = false;
};

USTRUCT(BlueprintType)
struct FDamageInfo
{
	GENERATED_BODY()
 
	UPROPERTY(BlueprintReadOnly, Category = "Damage")
	TObjectPtr<AActor> Source = nullptr;
 
	UPROPERTY(BlueprintReadOnly, Category = "Damage")
	TObjectPtr<AActor> Target = nullptr;
 
	UPROPERTY(BlueprintReadOnly, Category = "Damage")
	int FinalDamage = 0;

	UPROPERTY(BlueprintReadOnly, Category = "Damage")
	bool killedTarget;
	
	FDamageInfo() = default;
 
	FDamageInfo(AActor* InSource, AActor* InTarget,
		int InFinalDamage, bool InKilledTarget)
		: Source(InSource)
		, Target(InTarget)
		, FinalDamage(InFinalDamage)
		, killedTarget(InKilledTarget)
	{
	}
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DICETACT_API UDTHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDTHealthComponent();
	
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void SetStartingValue(int NewValue, bool bSetCurrentHealth = false);
	UFUNCTION(BlueprintCallable)
	void SetMaxValue(int NewValue);

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnHealthValueChanged OnCurrentHealthChanged;
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnHealthValueChanged OnMaxHealthChanged;
	
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnHealthDepleted OnHealthDepleted;

	UFUNCTION(BlueprintCallable)
	FDamageInfo TakeDamage(AActor* Source, float Damage);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsAlive() const;

protected:

	void RemoveHealth(int32 RemovedHealth);

	void SetHealth(int32 NewValue);
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Health")
	int32 CurrentHealth = 3;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int32 MaxHealth = 3;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int32 StartingHealth = 3;

};
