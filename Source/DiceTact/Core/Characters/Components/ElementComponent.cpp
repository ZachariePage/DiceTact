// Fill out your copyright notice in the Description page of Project Settings.


#include "ElementComponent.h"

#include "Core/subsystem/ElementalReactionSubsystem.h"
#include "JUE/System/JUEDevelopmentStatics.h"


// Sets default values for this component's properties
UElementComponent::UElementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UElementComponent::BeginPlay()
{
	Super::BeginPlay();
	
	// ...
	if (AActor* Owner = GetOwner())
	{
		Owner->OnActorHit.AddDynamic(this, &UElementComponent::OnOwnerHit);
	}
}


void UElementComponent::OnOwnerHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	UElementComponent* OtherElementComp = OtherActor->FindComponentByClass<UElementComponent>();

	if (OtherElementComp)
	{
		ExecuteReaction(OtherElementComp);
	}
}

bool UElementComponent::CanProcessHit(UElementComponent* otherComp)
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

void UElementComponent::ExecuteReaction(UElementComponent* OtherComp)
{
	if (this > OtherComp) return;
	if (!CanProcessHit(OtherComp)) return;
	UGameInstance* GameInstance = GetWorld()->GetGameInstance();

	if (!GameInstance)
	{
		return;
	}

	UElementalReactionSubsystem* ReactionSubsystem = GameInstance->GetSubsystem<UElementalReactionSubsystem>();

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
void UElementComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                      FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

UDTDiceElementDefinition* UElementComponent::GetElementDefinition() const
{
	return ElementDefinition;
}

void UElementComponent::SetElementDefinition(UDTDiceElementDefinition* def)
{
	ElementDefinition = def;
}

