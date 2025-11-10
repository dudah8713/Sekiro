// Fill out your copyright notice in the Description page of Project Settings.


#include "SekiroGame/UI/OverlayWidgetController.h"
#include "../AbilitySystem/SekiroAttributeSet.h"

void UOverlayWidgetController::BroadcastInitialValues()
{
	const USekiroAttributeSet* SekiroAttributeSet = CastChecked<USekiroAttributeSet>(AttributeSet);
	OnHealthChanged.Broadcast(SekiroAttributeSet->GetHealth());
	OnMaxHealthChanged.Broadcast(SekiroAttributeSet->GetMaxHealth());
}
