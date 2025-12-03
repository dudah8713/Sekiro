// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SekiroWeaponBase.generated.h"

class UBoxComponent;

DECLARE_DELEGATE_OneParam(FOnTargetInteractedDelegate, AActor*)

UCLASS()
class SEKIROPROJ_API ASekiroWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	
	ASekiroWeaponBase();

	FORCEINLINE UBoxComponent* GetWeaponCollisionBox() const { return WeaponCollisionBox; }

	FOnTargetInteractedDelegate OnWeaponHitTarget;
	FOnTargetInteractedDelegate OnWeaponPulledFromTarget;
	
protected:
	UFUNCTION()
	virtual void OnCollisionBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	virtual void OnCollisionBoxEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex); 
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapons")
	TObjectPtr<UStaticMeshComponent> WeaponMesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapons")
	TObjectPtr<UBoxComponent> WeaponCollisionBox;
};
