// Copyright Yeung


#include "Character/HaloCharacterBase.h"

AHaloCharacterBase::AHaloCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<UStaticMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AHaloCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

