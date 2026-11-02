// Fill out your copyright notice in the Description page of Project Settings.


#include "DTTimeControllerSubsystem.h"

#include "Kismet/GameplayStatics.h"

void UDTTimeControllerSubsystem::ApplyDilation(float Dilation)
{
	if (UWorld* World = GetWorld())
	{
		UGameplayStatics::SetGlobalTimeDilation(World, Dilation);
	}
}

//giga slop to rework
bool UDTTimeControllerSubsystem::RequestTimeStop(float StopDuration, float TimeDilationDuringStop,
                                               float EaseInDuration, float EaseOutDuration,
                                               float EaseExponent)
{
    if (bIsTimeStopped || StopDuration <= 0.f)
    {
       return false;
    }

    if (!GetWorld())
    {
       return false;
    }

    EaseInDuration  = FMath::Max(0.f, EaseInDuration);
    EaseOutDuration = FMath::Max(0.f, EaseOutDuration);
	
    const float TotalEase = EaseInDuration + EaseOutDuration;
    if (TotalEase > StopDuration)
    {
       const float Scale = StopDuration / TotalEase;
       EaseInDuration  *= Scale;
       EaseOutDuration *= Scale;
    }

    bIsTimeStopped = true;
    ElapsedRealTime = 0.f;
    RequestedDuration = StopDuration;
    StopDilation = TimeDilationDuringStop;
    EaseInTime = EaseInDuration;
    EaseOutTime = EaseOutDuration;
    EaseCurveExponent = FMath::Max(1.f, EaseExponent);
	
    ApplyDilation(EaseInTime > 0.f ? BaseDilation : StopDilation);

    TickerHandle = FTSTicker::GetCoreTicker().AddTicker(
       FTickerDelegate::CreateUObject(this, &UDTTimeControllerSubsystem::TickTimeStop));

    return true;
}

bool UDTTimeControllerSubsystem::TickTimeStop(float DeltaTime)
{
    ElapsedRealTime += DeltaTime;

    if (ElapsedRealTime >= RequestedDuration)
    {
       EndTimeStop();
       return false;
    }

    float Dilation = StopDilation;
    const float EaseOutStart = RequestedDuration - EaseOutTime;

    if (EaseInTime > 0.f && ElapsedRealTime < EaseInTime)
    {
       const float Alpha = ElapsedRealTime / EaseInTime;
       Dilation = FMath::InterpEaseInOut(BaseDilation, StopDilation, Alpha, EaseCurveExponent);
    }
    else if (EaseOutTime > 0.f && ElapsedRealTime > EaseOutStart)
    {
       const float Alpha = (ElapsedRealTime - EaseOutStart) / EaseOutTime;
       Dilation = FMath::InterpEaseInOut(StopDilation, BaseDilation, Alpha, EaseCurveExponent);
    }

    ApplyDilation(Dilation);

    return true;
}

void UDTTimeControllerSubsystem::EndTimeStop()
{
	bIsTimeStopped = false;
	
	ApplyDilation(BaseDilation);

	OnTimeStopEnded.Broadcast();
}

void UDTTimeControllerSubsystem::StartFastForward(float SpeedMultiplier)
{
	bIsFastForwarding = true;
	BaseDilation = SpeedMultiplier;
	
	if (!bIsTimeStopped)
	{
		ApplyDilation(BaseDilation);
	}
}

void UDTTimeControllerSubsystem::StopFastForward()
{
	bIsFastForwarding = false;
	BaseDilation = 1.f;

	if (!bIsTimeStopped)
	{
		ApplyDilation(BaseDilation);
	}
}

void UDTTimeControllerSubsystem::Deinitialize()
{
	if (TickerHandle.IsValid())
	{
		FTSTicker::GetCoreTicker().RemoveTicker(TickerHandle);
		TickerHandle.Reset();
	}

	Super::Deinitialize();
}