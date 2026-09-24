#pragma once

#include "NCValidationParameters.generated.h"

struct FNamingConvention;

USTRUCT(BlueprintType)
struct FNCValidationParameters
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category="Validation Parameters")
	bool bCheckSubDirectories = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Validation Parameters", meta=(RelativeToGameContentDir, LongPackageName))
	FDirectoryPath TargetValidationDirectory;

	UPROPERTY(EditDefaultsOnly, Category="Validation Parameters", meta=(ToolTip="Does the validator Log Assets that matches their convention (Will flood the message log if true)?"))
	bool bLogMatchingConventions = false;
};