#include "PendingAbility.h"
#include "PendingAbilityPayload.h"
UPendingAbilityPayload* FPendingAbility::ToDataObject(UObject* Outer) const
{
	UPendingAbilityPayload* Payload = NewObject<UPendingAbilityPayload>(Outer);
	Payload->PendingData = *this;
	return Payload;
}
