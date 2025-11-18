// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAsset_StartUpDataBase.h"
#include "SekiroTypes/SekiroStructTypes.h"
#include "DataAsset_SamuraiStartUpDataBase.generated.h"
/**
 * 
 */
UCLASS()
class SEKIROPROJ_API UDataAsset_SamuraiStartUpDataBase : public UDataAsset_StartUpDataBase
{
	GENERATED_BODY()
public:
	virtual void GiveToAbilitySystemComponent(USekiroAbilitySystemComponent* InASCtoGive, int32 ApplyLevel = 1) override;
	
protected:
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData", meta = (TitleProperty = "InputTag"))
	TArray<FSekiroSamuraiAbilitySet> SamuraiStartUpAbilitySets;
};
