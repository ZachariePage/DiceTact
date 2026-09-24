// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


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
class DICETACT_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int Health = 3;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int MaxHealth = 3;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int StartingHealth = 3;

public:

	UFUNCTION(BlueprintCallable)
	FDamageInfo TakeDamage(AActor* Source, float Damage);
};
