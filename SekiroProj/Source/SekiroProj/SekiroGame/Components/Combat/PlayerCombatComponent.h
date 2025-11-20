// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Combat/PawnCombatComponent.h"
#include "PlayerCombatComponent.generated.h"

class ASekiroWeaponKatana;
/**
 * 
 */
UCLASS()
class SEKIROPROJ_API UPlayerCombatComponent : public UPawnCombatComponent
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "Combat")
	ASekiroWeaponKatana* GetPlayerCarriedWeaponByTag(FGameplayTag InWeaponTag) const;

	UFUNCTION(BlueprintPure, Category = "Combat")
	ASekiroWeaponKatana* GetPlayerCurrentEquippedWeapon() const;

	//UFUNCTION(BlueprintPure, Category = "Combat")
	//float GetPlayerCurrentEquippedWeaponDamageAtLevel(float InLevel) const;
};
