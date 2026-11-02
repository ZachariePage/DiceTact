// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DTInteractable.generated.h"

USTRUCT(Blueprintable)
struct FInteractionQuery
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<AActor> Instigator;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<AController> ControllerInstigator;
	
};

// This class does not need to be modified.
UINTERFACE(Blueprintable)
class UDTInteractable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DICETACT_API IDTInteractable
{
	GENERATED_BODY()

public:
	
	/* Blueprint interfaces */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void BeginInteraction(const FInteractionQuery& InteractionQuery);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void StopInteraction(const FInteractionQuery& InteractionQuery);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TryCommitInteraction(const FInteractionQuery& InteractionQuery);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void CancelInteractionCommit(const FInteractionQuery& InteractionQuery);
protected:
	
	/* Default C++ implementations */
	virtual void TryCommitInteraction_Implementation(const FInteractionQuery& InteractionQuery) {}
	virtual void CancelInteractionCommit_Implementation(const FInteractionQuery& InteractionQuery) {}
	virtual void BeginInteraction_Implementation(const FInteractionQuery& InteractionQuery) {}
	virtual void StopInteraction_Implementation(const FInteractionQuery& InteractionQuery) {}
};
