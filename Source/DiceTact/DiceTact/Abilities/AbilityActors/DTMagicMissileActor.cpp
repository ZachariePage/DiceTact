#include "DTMagicMissileActor.h"

#include "Components/StaticMeshComponent.h"


ADTMagicMissileActor::ADTMagicMissileActor()
{
	PrimaryActorTick.bCanEverTick = true;

	MagicMissileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeteorMesh"));
	
	MagicMissileMesh->SetSimulatePhysics(true);
}

void ADTMagicMissileActor::BeginPlay()
{
	Super::BeginPlay();

	if (MagicMissileMesh)
	{
		// Homing drives the missile with a velocity every frame, so gravity would only pull it off course.
		MagicMissileMesh->SetEnableGravity(false);
		MagicMissileMesh->SetLinearDamping(0.0f);
		MagicMissileMesh->SetUseCCD(true);
	}

	if (MaxLifeTime > 0.0f)
	{
		SetLifeSpan(MaxLifeTime);
	}
}

void ADTMagicMissileActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}