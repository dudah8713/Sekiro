// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "AbilitySystem/SekiroAttributeSet.h"
#include "GEExecCalc_Damage.generated.h"

struct FSamuraiDamageCapture
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(AttackPower)
	DECLARE_ATTRIBUTE_CAPTUREDEF(DefensePower)

	FSamuraiDamageCapture()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(USekiroAttributeSet, AttackPower, Source, false)
		DEFINE_ATTRIBUTE_CAPTUREDEF(USekiroAttributeSet, DefensePower, Target, false)
	}
};

static const FSamuraiDamageCapture& GetSamuraiDamageCapture()
{
	static FSamuraiDamageCapture SamuraiDamageCapture;
	return SamuraiDamageCapture;
}
/**
 * 
 */
UCLASS()
class SEKIROPROJ_API UGEExecCalc_Damage : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()
public:
	UGEExecCalc_Damage();

	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;
};
