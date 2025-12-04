// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "SekiroTypes/SekiroEnumTypes.h"
#include "SekiroGameplayAbility.generated.h"

class ASekiroSamurai;
class USekiroAbilitySystemComponent;
class UPawnCombatComponent;

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

protected:
	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	
	UFUNCTION(BlueprintPure, Category = "GAS|Ability")
	UPawnCombatComponent* GetPawnCombatComponentFromActorInfo() const;

	UFUNCTION(BlueprintPure, Category ="GAS|Ability")
	USekiroAbilitySystemComponent* GetSekiroASCFromActorInfo() const;
protected:
	UPROPERTY(EditDefaultsOnly, Category ="SekiroAbility")
	ESekiroAbilityActivationPolicy AbilityActivationPolicy = ESekiroAbilityActivationPolicy::OnTriggered;

	FActiveGameplayEffectHandle NativeApplyEffectSpecHandleToTarget(AActor* TargetActor, const FGameplayEffectSpecHandle& InSpecHandle);

	UFUNCTION(BlueprintCallable, Category = "GAS|Ability", meta = (DisplayName = "Apply Gameplay Effect Spec Handle to Target", ExpandEnumAsExecs = "OutSuccessType"))
	FActiveGameplayEffectHandle BP_ApplyEffectSpecHandleToTarget(AActor* TargetActor, const FGameplayEffectSpecHandle& InSpecHandle, ESekiroSuccessType& OutSuccessType);
};
