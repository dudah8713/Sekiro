// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/SekiroCharacterBase.h"
#include "AbilitySystem/SekiroAbilitySystemComponent.h"

ASekiroCharacterBase::ASekiroCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("katana_r"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

UAbilitySystemComponent* ASekiroCharacterBase::GetAbilitySystemComponent() const
{
	return GetSekiroAbilitySystemComponent();
}

void ASekiroCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

void ASekiroCharacterBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (SekiroASC)
	{
		ensureMsgf(!CharacterStartUpData.IsNull(), TEXT("Forgot to assign StartUp Data to %s"), *GetName());
	}
}	
