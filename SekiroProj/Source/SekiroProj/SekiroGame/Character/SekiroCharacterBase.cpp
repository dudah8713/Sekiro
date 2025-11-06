// Fill out your copyright notice in the Description page of Project Settings.


#include "SekiroGame/Character/SekiroCharacterBase.h"

ASekiroCharacterBase::ASekiroCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("katana_r"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ASekiroCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

