#include "Items/Weapons/SekiroWeaponBase.h"
#include "Components/BoxComponent.h"

// Sets default values
ASekiroWeaponBase::ASekiroWeaponBase()
{
	PrimaryActorTick.bCanEverTick = false;

	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>("WeaponMesh");
	SetRootComponent(WeaponMesh);
}

// Called when the game starts or when spawned
void ASekiroWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASekiroWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

