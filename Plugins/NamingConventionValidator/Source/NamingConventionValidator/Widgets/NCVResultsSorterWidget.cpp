// © Justin Renaud-Gélinas, 2026


#include "NCVResultsSorterWidget.h"
#include "NCVResultCategory.h"
#include "Misc/DataValidation.h"

bool UNCVResultsSorterWidget::IsEmpty() const
{
	return RegisteredEntries.IsEmpty();
}

#if WITH_EDITOR
EDataValidationResult UNCVResultsSorterWidget::IsDataValid(class FDataValidationContext& Context) const
{

	if (IsValid(ResultCategoryClass) == false)
	{
		Context.AddError(FText::AsCultureInvariant("Please specify the ResultCategoryClass!"));
	}
	
	return Super::IsDataValid(Context);
}
#endif

void UNCVResultsSorterWidget::RemoveEntries()
{
	for (auto Category  = RegisteredEntries.CreateIterator(); Category; ++Category)
	{
		Category->Value->RemoveEntries();
		Category.RemoveCurrent();
	}
}

void UNCVResultsSorterWidget::AddIncorrectEntry(const FAssetData& AssetData, const FNamingConvention* NamingConvention, const FNCValidationResult& ValidationResult)
{
	if (UNCVResultCategory** FoundCategory = RegisteredEntries.Find(AssetData.GetClass()))
	{
		(*FoundCategory)->AddIncorrectEntry(AssetData, NamingConvention, ValidationResult);
	}
	else
	{
		UNCVResultCategory* NewCategory = CreateWidget<UNCVResultCategory>(this, ResultCategoryClass);
		NewCategory->InitializeCategory(AssetData.GetClass());
		NewCategory->AddIncorrectEntry(AssetData, NamingConvention, ValidationResult);
		RegisteredEntries.Add(AssetData.GetClass(), NewCategory);
		OnCategoryAdded(NewCategory);
	}
}
