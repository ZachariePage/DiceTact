#include "DTPendingAbility.h"
#include "DTPayloadPendingAbility.h"
UDTPayloadPendingAbility* FDTPendingAbility::ToDataObject(UObject* Outer) const
{
	UDTPayloadPendingAbility* Payload = NewObject<UDTPayloadPendingAbility>(Outer);
	Payload->PendingData = *this;
	return Payload;
}
