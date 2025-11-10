// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "../UI/OverlayWidgetController.h"
#include "SekiroHUD.generated.h"

class USekiroUserWidget;
struct FWidgetControllerParams;
/**
 * 
 */
UCLASS()
class SEKIROPROJ_API ASekiroHUD : public AHUD
{
	GENERATED_BODY()

public:
	UOverlayWidgetController* GetOverlayWidgetController(
		const FWidgetControllerParams& WCParams);

	void InitOverlay(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC, UAttributeSet* AS);

private:
	UPROPERTY()
	TObjectPtr<USekiroUserWidget> OverlayWidget;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<USekiroUserWidget> OverlayWidgetClass;

	UPROPERTY()
	TObjectPtr<UOverlayWidgetController> OverlayWidgetController;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UOverlayWidgetController> OverlayWidgetControllerClass;
};
