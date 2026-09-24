// © Justin Renaud-Gélinas, 2026


#include "NCVResultCategory.h"

void UNCVResultCategory::RemoveEntries()
{
	OnRemoveEntries();
	RemoveFromParent();
}

void UNCVResultCategory::AddIncorrectEntry(const FAssetData& AssetData, const FNamingConvention* NamingConvention,
                                           const FNCValidationResult& ValidationResult)
{
	OnEntryAdded(AssetData, *NamingConvention, ValidationResult);
}
