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

	// 생성할 컨트롤러의 클래스 타입을 에디터에서 지정하기 위한 클래스 변수
	UPROPERTY(EditAnywhere)
	TSubclassOf<UOverlayWidgetController> OverlayWidgetControllerClass;
};
