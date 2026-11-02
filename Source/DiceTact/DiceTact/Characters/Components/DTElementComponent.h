// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DTElementComponent.generated.h"


class ADTDice;
class UDTDiceElementDefinition;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DICETACT_API UDTElementComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDTElementComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Element")
	TObjectPtr<UDTDiceElementDefinition> ElementDefinition;
	
	TMap<TWeakObjectPtr<UDTElementComponent>, bool> HitThisTurn;

	UFUNCTION()
	void OnOwnerHit(AActor* SelfActor,AActor* OtherActor,FVector NormalImpulse,const FHitResult& Hit);

	UFUNCTION()
	bool CanProcessHit(UDTElementComponent* otherComp);

	UFUNCTION()
	void ExecuteReaction(UDTElementComponent* OtherActor);
public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	UDTDiceElementDefinition* GetElementDefinition() const;
	UFUNCTION(BlueprintCallable)
	void SetElementDefinition(UDTDiceElementDefinition* def);
	
};
