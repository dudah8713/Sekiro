// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/OverlayWidgetController.h"
#include "../AbilitySystem/SekiroAttributeSet.h"

void UOverlayWidgetController::BroadcastInitialValues()
{
	const USekiroAttributeSet* SekiroAttributeSet = CastChecked<USekiroAttributeSet>(AttributeSet);
	
	OnHealthChanged.Broadcast(SekiroAttributeSet->GetHealth());
	OnMaxHealthChanged.Broadcast(SekiroAttributeSet->GetMaxHealth());

	OnStaminaChanged.Broadcast(SekiroAttributeSet->GetStamina());
	OnMaxStaminaChanged.Broadcast(SekiroAttributeSet->GetMaxStamina());
}

void UOverlayWidgetController::BindCallbacksToDependencies()
{
	const USekiroAttributeSet* SekiroAttributeSet = CastChecked<USekiroAttributeSet>(AttributeSet);

	// GAS의 Attribute 변경 이벤트에 HealthChanged 함수 등록
	
	// GetGameplayAttributeValueChangeDelegate() - "이 Attribute가 변경되면 알려줘"
	// .AddUObject() - "누구한테 알려줄지 등록"
	// this - "나(현재 Controller 객체)한테 알려줘"
	// &UOverlayWidgetController::HealthChanged - "이 함수를 호출해줘"
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		SekiroAttributeSet->GetHealthAttribute()).AddUObject(this, &UOverlayWidgetController::HealthChanged);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
	SekiroAttributeSet->GetMaxHealthAttribute()).AddUObject(this, &UOverlayWidgetController::MaxHealthChanged);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
	SekiroAttributeSet->GetStaminaAttribute()).AddUObject(this, &UOverlayWidgetController::StaminaChanged);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
	SekiroAttributeSet->GetMaxHealthAttribute()).AddUObject(this, &UOverlayWidgetController::MaxStaminaChanged);
}

void UOverlayWidgetController::HealthChanged(const FOnAttributeChangeData& Data) const
{
	OnHealthChanged.Broadcast(Data.NewValue);
}

void UOverlayWidgetController::MaxHealthChanged(const FOnAttributeChangeData& Data) const
{
	OnMaxHealthChanged.Broadcast(Data.NewValue);
}

void UOverlayWidgetController::StaminaChanged(const FOnAttributeChangeData& Data) const
{
	OnStaminaChanged.Broadcast(Data.NewValue);
}

void UOverlayWidgetController::MaxStaminaChanged(const FOnAttributeChangeData& Data) const
{
	OnMaxStaminaChanged.Broadcast(Data.NewValue);
}

