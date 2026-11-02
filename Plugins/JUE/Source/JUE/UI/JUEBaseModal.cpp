// Fill out your copyright notice in the Description page of Project Settings.


#include "JUEBaseModal.h"

void UJUEBaseModal::ConfirmModal(EModalConfirmationResult Result)
{
	OnModalConfirmation.Broadcast(Result);
	DeactivateWidget();
}
