// © Justin Renaud-Gélinas, 2026


#include "NCVUtilityStatics.h"

#include "Materials/MaterialInstanceConstant.h"
#include "Sound/SoundCue.h"
#include "Widgets/EditorNCVTool.h"

FString UNCVUtilityStatics::GetCleanNameForClasses(TSubclassOf<UObject> Class, bool bPluralName)
{
	if (Class == UStaticMesh::StaticClass())
	{
		return bPluralName ? FString("Static Meshes") : FString("Static Mesh");
	}
	else if (Class == UTexture2D::StaticClass())
	{
		return bPluralName ? FString("2D Textures") : FString("Texture 2D");
	}
	else if (Class == UBlueprint::StaticClass())
	{
		return bPluralName ? FString("Blueprints") : FString("Blueprint");
	}
	else if (Class == USoundWave::StaticClass())
	{
		return bPluralName ? FString("Sound Waves") : FString("Sound Wave");
	}
	else if (Class == USoundCue::StaticClass())
	{
		return bPluralName ? FString("Sound Cues") : FString("Sound Cue");
	}
	else if (Class == UMaterialInstanceConstant::StaticClass())
	{
		return bPluralName ? FString("Material Instances (Constant)") : FString("Material Instance (Constant)");
	}
		return FString("");
}

bool UNCVUtilityStatics::IsValidationResultValid(const FNCValidationResult& Result)
{
	return Result.SuffixResult == EValidationResult::Success
	&& Result.PrefixResult == EValidationResult::Success;
}
