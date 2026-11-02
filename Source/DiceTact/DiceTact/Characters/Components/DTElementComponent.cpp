// Fill out your copyright notice in the Description page of Project Settings.


#include "DTElementComponent.h"

#include "DiceTact/Subsystem/DTElementalReactionSubsystem.h"
#include "JUE/System/JUEDevelopmentStatics.h"


// Sets default values for this component's properties
UDTElementComponent::UDTElementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UDTElementComponent::BeginPlay()
{
	Super::BeginPlay();
	
	// ...
	if (AActor* Owner = GetOwner())
	{
		Owner->OnActorHit.AddDynamic(this, &UDTElementComponent::OnOwnerHit);
	}
}


void UDTElementComponent::OnOwnerHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	UDTElementComponent* OtherElementComp = OtherActor->FindComponentByClass<UDTElementComponent>();

	if (OtherElementComp)
	{
		ExecuteReaction(OtherElementComp);
	}
}

bool UDTElementComponent::CanProcessHit(UDTElementComponent* otherComp)
{
	if (bool* hit = HitThisTurn.Find(otherComp))
	{
		if (hit)
		{
			return false;
		}
	}
	HitThisTurn.Add(otherComp, true);
	otherComp->HitThisTurn.Add(this, true);
	return true;
}

void UDTElementComponent::ExecuteReaction(UDTElementComponent* OtherComp)
{
	if (this > OtherComp) return;
	if (!CanProcessHit(OtherComp)) return;
	UGameInstance* GameInstance = GetWorld()->GetGameInstance();

	if (!GameInstance)
	{
		return;
	}

	UDTElementalReactionSubsystem* ReactionSubsystem = GameInstance->GetSubsystem<UDTElementalReactionSubsystem>();

	if (ReactionSubsystem)
	{
		ReactionSubsystem->TryReact(
			GetOwner(), OtherComp->GetOwner(),
				GetElementDefinition()->GetElementType(), OtherComp->GetElementDefinition()->GetElementType(),
				GetOwner()->GetActorLocation()
			);
	}
	
	UJUEDevelopmentStatics::ReportDebugMessage("reached here", GetWorld());
}

// Called every frame
void UDTElementComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                      FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

UDTDiceElementDefinition* UDTElementComponent::GetElementDefinition() const
{
	return ElementDefinition;
}

void UDTElementComponent::SetElementDefinition(UDTDiceElementDefinition* def)
{
	ElementDefinition = def;
}

