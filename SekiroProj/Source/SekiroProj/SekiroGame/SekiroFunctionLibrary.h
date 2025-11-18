// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "SekiroTypes/SekiroEnumTypes.h"
#include "SekiroFunctionLibrary.generated.h"

class USekiroAbilitySystemComponent;
/**
 * 
 */
UCLASS()
class SEKIROPROJ_API USekiroFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	static USekiroAbilitySystemComponent* NativeGetSekiroASCFromActor(AActor* InActor);
	//UFUNCTION(BlueprintCallable, Category = "FunctionLibrary", meta = (DisplayName = "Dose Actor Hava Tag", ExpandEnumAsExecs = "OutConfirmType"))
	//static void BP_DoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck, ESekiroConfirmType& OutConfirmType);

	UFUNCTION(BlueprintCallable, Category = "FunctionLibrary")
	static void AddGameplayTagToActorIfNone(AActor* InActor, FGameplayTag TagToAdd);
};
