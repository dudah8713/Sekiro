// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/SekiroWidgetController.h"

void USekiroWidgetController::SetWidgetControllerParams(const FWidgetControllerParams& WCParams)
{
	PlayerController = WCParams.PlayerController;
	PlayerState = WCParams.PlayerState;
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
}

void USekiroWidgetController::BroadcastInitialValues()
{
}

void USekiroWidgetController::BindCallbacksToDependencies()
{
}
