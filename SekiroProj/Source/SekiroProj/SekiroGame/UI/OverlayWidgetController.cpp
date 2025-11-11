// Fill out your copyright notice in the Description page of Project Settings.


#include "SekiroGame/UI/OverlayWidgetController.h"
#include "../AbilitySystem/SekiroAttributeSet.h"

void UOverlayWidgetController::BroadcastInitialValues()
{
	const USekiroAttributeSet* SekiroAttributeSet = CastChecked<USekiroAttributeSet>(AttributeSet);
	OnHealthChanged.Broadcast(SekiroAttributeSet->GetHealth());
	OnMaxHealthChanged.Broadcast(SekiroAttributeSet->GetMaxHealth());
}

void UOverlayWidgetController::BindCallbacksToDependencies()
{
	const USekiroAttributeSet* SekiroAttributeSet = CastChecked<USekiroAttributeSet>(AttributeSet);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		SekiroAttributeSet->GetHealthAttribute()).AddUObject(this, &UOverlayWidgetController::HealthChanged);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
	SekiroAttributeSet->GetMaxHealthAttribute()).AddUObject(this, &UOverlayWidgetController::MaxHealthChanged);
}

void UOverlayWidgetController::HealthChanged(const FOnAttributeChangeData& Data) const
{
	OnHealthChanged.Broadcast(Data.NewValue);
}

void UOverlayWidgetController::MaxHealthChanged(const FOnAttributeChangeData& Data) const
{
	OnMaxHealthChanged.Broadcast(Data.NewValue);
}

