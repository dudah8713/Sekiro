// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "SekiroAbilitySystemComponent.generated.h"

class UDataAsset_StartUpDataBase;
/**
 * 
 */
UCLASS()
class SEKIROPROJ_API USekiroAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable ,Category = "GAS|Ability", meta = (ApplyLevel = "1"))
	void GrantSekiroWeaponAbilities(const TArray<FSekiroSamuraiAbilitySet>& InDefaultWeaponAbilities, int32 ApplyLevel, TArray<FGameplayAbilitySpecHandle>& OutGrantedAbilitySpecHandles);
	
	
	void OnAbilityInputPressed(const FGameplayTag& InInputTag);
	void OnAbilityInputReleased(const FGameplayTag& InInputTag);
};
