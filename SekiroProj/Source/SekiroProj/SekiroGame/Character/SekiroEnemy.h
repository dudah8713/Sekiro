// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/SekiroCharacterBase.h"
#include "SekiroEnemy.generated.h"

class UEnemyCombatComponent;
/**
 * 
 */
UCLASS()
class SEKIROPROJ_API ASekiroEnemy : public ASekiroCharacterBase
{
	GENERATED_BODY()

public:
	ASekiroEnemy();

	//~ Begin IPawnCombatInterface
	virtual UPawnCombatComponent* GetPawnCombatComponent() const override;
	//~ End IPawnCombatInterface
	
	FORCEINLINE UEnemyCombatComponent* GetEnemyCombatComponent() const { return EnemyCombatComponent;}
	
protected:
	virtual void PossessedBy(AController* NewController) override;
	virtual void BeginPlay() override;

private:
	void InitEnemyStartUpData();
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category ="Combat")
	TObjectPtr<UEnemyCombatComponent> EnemyCombatComponent;
};
