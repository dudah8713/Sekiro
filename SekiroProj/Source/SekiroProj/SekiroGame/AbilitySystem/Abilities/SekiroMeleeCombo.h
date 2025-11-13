// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "SekiroMeleeCombo.generated.h"

/**
 * 
 */
UCLASS()
class SEKIROPROJ_API USekiroMeleeCombo : public UGameplayAbility
{
	GENERATED_BODY()
public:
	USekiroMeleeCombo();

	UPROPERTY(BlueprintReadOnly, Category = "GAS|Melee Combo")
	int32 ComboIndex;

	// 입력 버퍼
	bool bInputBuffered;

	UPROPERTY(EditDefaultsOnly, Category = "GAS|Stamina")
	float StaminaCost;

	UPROPERTY(EditDefaultsOnly, Category = "GAS|Melee Combo Anim")
	UAnimSequence* ComboAnimations[4];

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;

protected:
	void OnAnimationEnded();
	void OnInputPressed();

	APawn* GetPawn() const;
};
