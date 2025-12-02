// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "Interface/PawnCombatInterface.h"
#include "SekiroCharacterBase.generated.h"

class USekiroAbilitySystemComponent;
class UAttributeSet;
class UGameplayAbility;
class UDataAsset_StartUpDataBase;

UCLASS(Abstract) //직접적인 월드 배치를 방지함
class SEKIROPROJ_API ASekiroCharacterBase : public ACharacter, public IAbilitySystemInterface, public IPawnCombatInterface
{
	GENERATED_BODY()

public:
	ASekiroCharacterBase();

	//~ Begin IAbilitySystemInterface 
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	USekiroAbilitySystemComponent* GetSekiroAbilitySystemComponent() const { return SekiroASC; }
	//~ End IAbilitySystemInterface

	//~ Begin IPawnCombatInterface
	virtual UPawnCombatComponent* GetPawnCombatComponent() const override;
	//~ End IPawnCombatInterface

	
	FORCEINLINE UAttributeSet* GetAttributeSet() { return AttributeSet; }
	
protected:
	virtual void BeginPlay() override;
	virtual void PossessedBy(AController* NewController) override;
protected:
	//UPROPERTY(EditAnywhere, Category = "Combat")
	//TObjectPtr<USkeletalMeshComponent> Weapon;

	UPROPERTY()
	TObjectPtr<USekiroAbilitySystemComponent> SekiroASC;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterData")
	TSoftObjectPtr<UDataAsset_StartUpDataBase> CharacterStartUpData;
	
};
