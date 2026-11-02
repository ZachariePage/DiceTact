#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TurnBaseSystem/TurnBaseEncounterTypes/DTEncounterType.h"
#include "DTGameStartDataHolder.generated.h"

class UDTGameStartData;

UCLASS()
class DICETACT_API ADTGameStartDataHolder : public AActor
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "GameStart", meta = (WorldContext = "WorldContextObject"))
	static ADTGameStartDataHolder* Get(const UObject* WorldContextObject);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GameStart")
	TObjectPtr<UDTGameStartData> GameStartData;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GameStart")
	TObjectPtr<UDTEncounterType> EncounterTypeData;
};