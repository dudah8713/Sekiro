// Fill out your copyright notice in the Description page of Project Settings.


#include "SekiroGame/UI/SekiroUserWidget.h"

void USekiroUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}
