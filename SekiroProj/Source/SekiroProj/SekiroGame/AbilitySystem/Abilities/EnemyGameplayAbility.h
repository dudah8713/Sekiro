// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/SekiroGameplayAbility.h"
#include "EnemyGameplayAbility.generated.h"

class UEnemyCombatComponent;
class ASekiroEnemy;
/**
 * 
 */
UCLASS()
class SEKIROPROJ_API UEnemyGameplayAbility : public USekiroGameplayAbility
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "GAS|Ability")
	ASekiroEnemy* GetEnemyFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "GAS|Ability")
	UEnemyCombatComponent* GetEnemyCombatComponentFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "GAS|Ability")
	FGameplayEffectSpecHandle MakeEnemyDamageEffectSpecHandle(TSubclassOf<UGameplayEffect> EffectClass, const FScalableFloat& InDamageScalableFloat) const;

private:
	TWeakObjectPtr<ASekiroEnemy> CachedEnemy;
};
