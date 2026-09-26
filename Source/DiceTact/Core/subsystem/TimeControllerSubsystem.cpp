// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeControllerSubsystem.h"

#include "Kismet/GameplayStatics.h"

void UTimeControllerSubsystem::ApplyDilation(float Dilation)
{
	if (UWorld* World = GetWorld())
	{
		UGameplayStatics::SetGlobalTimeDilation(World, Dilation);
	}
}

bool UTimeControllerSubsystem::RequestTimeStop(float StopDuration, float TimeDilationDuringStop)
{
	if (bIsTimeStopped || StopDuration <= 0.f)
	{
		return false;
	}

	if (!GetWorld())
	{
		return false;
	}

	bIsTimeStopped = true;
	ElapsedRealTime = 0.f;
	RequestedDuration = StopDuration;
	
	ApplyDilation(TimeDilationDuringStop);

	TickerHandle = FTSTicker::GetCoreTicker().AddTicker(
		FTickerDelegate::CreateUObject(this, &UTimeControllerSubsystem::TickTimeStop));

	return true;
}

bool UTimeControllerSubsystem::TickTimeStop(float DeltaTime)
{
	ElapsedRealTime += DeltaTime;

	if (ElapsedRealTime >= RequestedDuration)
	{
		EndTimeStop();
		return false;
	}

	return true;
}

void UTimeControllerSubsystem::EndTimeStop()
{
	bIsTimeStopped = false;
	
	ApplyDilation(BaseDilation);

	OnTimeStopEnded.Broadcast();
}

void UTimeControllerSubsystem::StartFastForward(float SpeedMultiplier)
{
	bIsFastForwarding = true;
	BaseDilation = SpeedMultiplier;
	
	if (!bIsTimeStopped)
	{
		ApplyDilation(BaseDilation);
	}
}

void UTimeControllerSubsystem::StopFastForward()
{
	bIsFastForwarding = false;
	BaseDilation = 1.f;

	if (!bIsTimeStopped)
	{
		ApplyDilation(BaseDilation);
	}
}

void UTimeControllerSubsystem::Deinitialize()
{
	if (TickerHandle.IsValid())
	{
		FTSTicker::GetCoreTicker().RemoveTicker(TickerHandle);
		TickerHandle.Reset();
	}

	Super::Deinitialize();
}