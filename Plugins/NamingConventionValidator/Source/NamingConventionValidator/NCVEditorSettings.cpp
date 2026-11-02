// © Justin Renaud-Gélinas, 2026


#include "NCVEditorSettings.h"

#include "Sound/SoundCue.h"
#include "EditorUtilityWidgetBlueprint.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetRegistry/IAssetRegistry.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Widgets/EditorNCVTool.h"

UNCVEditorSettings::UNCVEditorSettings(const FObjectInitializer& ObjectInitializer)
{
	CategoryName = "Plugins";
	SectionName = "Naming Conventions";

	AddNamingConvention(UActorComponent::StaticClass(), FNamingConvention("BPC_"));
	AddNamingConvention(USoundCue::StaticClass(), FNamingConvention("A_", "_Cue"));
	AddNamingConvention(USoundWave::StaticClass(), FNamingConvention("A_"));
	AddNamingConvention(UBlueprintFunctionLibrary::StaticClass(), FNamingConvention("BPFL_"));
	AddNamingConvention(UBlueprint::StaticClass(), FNamingConvention({"BP_","BPFL_"}));
	AddNamingConvention(UStaticMesh::StaticClass(), FNamingConvention("SM_"));
	AddNamingConvention(UMaterialInstanceConstant::StaticClass(), FNamingConvention("MI_"));
	AddNamingConvention(UTexture2D::StaticClass(), FNamingConvention({"T_"},
		{"_D","_BC","_N","_R","_A","_O","_B","_E","_M","_S","_ORM"}));

	/*
	 * Set a default asset if not valid.
	 */
	if (EUWidget.IsValid())
	{
		return;
	}

	//Auto search for an EUW Blueprint if not valid.
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();

	FTopLevelAssetPath EUWPath = UEditorUtilityWidgetBlueprint::StaticClass()->GetClassPathName();

	TArray<FAssetData> AssetData;
	AssetRegistry.GetAssetsByClass(EUWPath, AssetData);

	if (AssetData.IsEmpty())
	{
		return;
	}

	EUWidget = AssetData[0].ToSoftObjectPath();
}

bool UNCVEditorSettings::ShouldPerformValidationOnLoad() const
{
	return bPerformValidationOnLoad;
}

bool UNCVEditorSettings::ShouldCheckSubDirectories() const
{
	return DefaultValidationParameters.bCheckSubDirectories;
}

bool UNCVEditorSettings::ShouldLogMatchingConventions() const
{
	return DefaultValidationParameters.bLogMatchingConventions;
}

const FDirectoryPath& UNCVEditorSettings::GetTargetValidationDirectory() const
{
	return DefaultValidationParameters.TargetValidationDirectory;
}

UEditorUtilityWidgetBlueprint* UNCVEditorSettings::GetNCVWidgetTool() const
{
	return EUWidget.LoadSynchronous();
}

const TMap<TSubclassOf<UObject>, FNamingConvention>& UNCVEditorSettings::GetNamingConventions() const
{
	return NamingConventions;
}

const FNamingConvention* UNCVEditorSettings::FindNamingConvention(TSubclassOf<UObject> Class) const
{
	return NamingConventions.Find(Class);
}


FText UNCVEditorSettings::GetSectionText() const
{
	return FText::AsCultureInvariant("Naming Convention Validation Settings");
}

FText UNCVEditorSettings::GetSectionDescription() const
{
	return FText::AsCultureInvariant("Insert naming convention of the specified class. Add an underscore (_) at the end or beginning of the entry.\nConsult your organization's style guide.");
}

void UNCVEditorSettings::AddNamingConvention(TSubclassOf<UObject> Class, const FNamingConvention& NewNamingConvention)
{
	if (NamingConventions.Contains(Class) == false)
	{
		NamingConventions.Add(Class, NewNamingConvention);
	}
}
