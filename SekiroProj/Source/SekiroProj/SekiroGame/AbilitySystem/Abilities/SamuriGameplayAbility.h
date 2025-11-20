// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/SekiroGameplayAbility.h"
#include "SamuriGameplayAbility.generated.h"

class UPlayerCombatComponent;
class ASekiroSamurai;
class ASekiroPlayerController;
/**
 * 
 */
UCLASS()
class SEKIROPROJ_API USamuriGameplayAbility : public USekiroGameplayAbility
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "GAS|Ability")
	ASekiroSamurai* GetSamuraiCharacterFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "GAS|Ability")
	ASekiroPlayerController* GetPlayerControllerFromActorInfo();
	
	UFUNCTION(BlueprintPure, Category = "GAS|Ability")
	UPlayerCombatComponent* GetPlayerCombatComponentFromActorInfo();

private:
	TWeakObjectPtr<ASekiroSamurai> CachedSamuraiCharacter;
	TWeakObjectPtr<ASekiroPlayerController> CachedSamuraiController;
};
