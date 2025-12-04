// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "SekiroAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName)			\
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName)  \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName)				\
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName)				\
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
/**
 * 
 */
UCLASS()
class SEKIROPROJ_API USekiroAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	USekiroAttributeSet();
	// 변수를 리플리케이트하기 위한 함수
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Health, Category = "Vital Attributes")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(USekiroAttributeSet, Health);
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxHealth, Category = "Vital Attributes")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(USekiroAttributeSet, MaxHealth);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Stamina, Category = "Vital Attributes")
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(USekiroAttributeSet, Stamina);
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxStamina, Category = "Vital Attributes")
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS(USekiroAttributeSet, MaxStamina);
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Posture, Category = "Vital Attributes")
	FGameplayAttributeData Posture; //체간
	ATTRIBUTE_ACCESSORS(USekiroAttributeSet, Posture);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxPosture, Category = "Vital Attributes")
	FGameplayAttributeData MaxPosture;
	ATTRIBUTE_ACCESSORS(USekiroAttributeSet, MaxPosture);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_AttackPower, Category = "Attack Attributes")
	FGameplayAttributeData AttackPower;
	ATTRIBUTE_ACCESSORS(USekiroAttributeSet, AttackPower);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_DefensePower, Category = "Defense Attributes")
	FGameplayAttributeData DefensePower;
	ATTRIBUTE_ACCESSORS(USekiroAttributeSet, DefensePower);
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_DamageTaken, Category = "Attack Attributes")
	FGameplayAttributeData DamageTaken;
	ATTRIBUTE_ACCESSORS(USekiroAttributeSet, DamageTaken);
	
	UPROPERTY(BlueprintReadOnly, Category = "Meta Attributes")
	FGameplayAttributeData InComingDamage;
	ATTRIBUTE_ACCESSORS(USekiroAttributeSet, InComingDamage);
	
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldHealth) const;

	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const;

	UFUNCTION()
	void OnRep_Stamina(const FGameplayAttributeData& OldStamina) const;

	UFUNCTION()
	void OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina) const;
	
	UFUNCTION()
	void OnRep_Posture(const FGameplayAttributeData& OldPosture) const;

	UFUNCTION()
	void OnRep_MaxPosture(const FGameplayAttributeData& OldMaxPosture) const;

	UFUNCTION()
	void OnRep_AttackPower(const FGameplayAttributeData& OldAttackPower) const;

	UFUNCTION()
	void OnRep_DefensePower(const FGameplayAttributeData& OldDefensePower) const;
	
	UFUNCTION()
	void OnRep_DamageTaken(const FGameplayAttributeData& OldDamageTaken) const;
	
	//UFUNCTION()
	//virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;
};
