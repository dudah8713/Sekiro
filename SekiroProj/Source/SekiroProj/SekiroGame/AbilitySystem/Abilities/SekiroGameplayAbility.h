// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "SekiroGameplayAbility.generated.h"

class ASekiroSamurai;

UENUM(BlueprintType)
enum class ESekiroAbilityActivationPolicy : uint8
{
	OnTriggered,
	OnGiven
};

/**
 * 
 */
UCLASS()
class SEKIROPROJ_API USekiroGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "GAS|Ability")
	ASekiroSamurai* GetSamuraiCharacterFromActorInfo();
	
protected:
	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

protected:
	UPROPERTY(EditDefaultsOnly, Category ="SekiroAbility")
	ESekiroAbilityActivationPolicy AbilityActivationPolicy = ESekiroAbilityActivationPolicy::OnTriggered;

private:
	TWeakObjectPtr<ASekiroSamurai> CachedSamuraiCharacter;
};
