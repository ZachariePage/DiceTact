// Fill out your copyright notice in the Description page of Project Settings.


#include "DTPhysicalUnitInterface.h"

#include "DTPushable.h"
#include "JUE/System/JUEDevelopmentStatics.h"


// Add default functionality here for any IPhysicalUnit functions that are not pure virtual.
void IDTPhysicalUnitInterface::ApplyImpulse_Implementation(const FPushData& Info)
{
	AActor* Actor = Cast<AActor>(_getUObject());

	if (!Actor)
	{
		return;
	}

	TArray<UPrimitiveComponent*> Components;
	Actor->GetComponents<UPrimitiveComponent>(Components);

	FString Message = Actor->GetName();

	for (UPrimitiveComponent* Component : Components)
	{
		if (!Component || !Component->IsSimulatingPhysics())
		{
			continue;
		}

		Message += FString::Printf(
			TEXT("\n%s: Simulating Physics"),
			*Component->GetName()
		);

		Component->AddImpulse(
			Info.Direction * Info.Strength,
			NAME_None,
			true
		);
	}

	UJUEDevelopmentStatics::ReportDebugMessage(Message);
}

void IDTPhysicalUnitInterface::ApplyBlackHoleImpulse_Implementation(const FPushData& Info)
{
	ApplyImpulse_Implementation(Info);
}
