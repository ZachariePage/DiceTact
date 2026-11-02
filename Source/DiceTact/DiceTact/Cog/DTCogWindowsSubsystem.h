// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DTCogWindowsSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTCogWindowsSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:

	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void PostInitialize() override;

private:
	UPROPERTY()
	TWeakObjectPtr<USubsystem> CogSubsystem;
};
