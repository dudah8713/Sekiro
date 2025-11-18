// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "SekiroPlayerState.generated.h"

class USekiroAbilitySystemComponent;
class UAttributeSet;
/**
 * 
 */
UCLASS()
class SEKIROPROJ_API ASekiroPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ASekiroPlayerState();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	USekiroAbilitySystemComponent* GetSekiroAbilitySystemComponent() const { return SekiroASC; }
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }
	
protected:
	UPROPERTY()
	TObjectPtr<USekiroAbilitySystemComponent> SekiroASC;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
};
