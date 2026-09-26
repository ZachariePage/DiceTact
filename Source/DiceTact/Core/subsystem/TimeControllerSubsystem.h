// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TimeControllerSubsystem.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTimeStopEnded);
UCLASS()
class DICETACT_API UTimeControllerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Deinitialize() override;
	
	UFUNCTION(BlueprintCallable, Category = "Time Controller")
	bool RequestTimeStop(float StopDuration, float TimeDilationDuringStop = 0.f);
	
	UFUNCTION(BlueprintCallable, Category = "Time Controller")
	void StartFastForward(float SpeedMultiplier = 2.f);
	
	UFUNCTION(BlueprintCallable, Category = "Time Controller")
	void StopFastForward();

	UFUNCTION(BlueprintPure, Category = "Time Controller")
	bool IsTimeStopped() const { return bIsTimeStopped; }

	UFUNCTION(BlueprintPure, Category = "Time Controller")
	bool IsFastForwarding() const { return bIsFastForwarding; }

	UPROPERTY(BlueprintAssignable, Category = "Time Controller")
	FOnTimeStopEnded OnTimeStopEnded;

private:
	bool TickTimeStop(float DeltaTime);
	void EndTimeStop();
	void ApplyDilation(float Dilation);

	bool bIsTimeStopped = false;
	bool bIsFastForwarding = false;
	
	float BaseDilation = 1.f;

	float ElapsedRealTime = 0.f;
	float RequestedDuration = 0.f;

	FTSTicker::FDelegateHandle TickerHandle;
};
