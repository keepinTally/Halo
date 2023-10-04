// Copyright Yeung

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HaloCharacterBase.generated.h"

UCLASS()
class HALO_API AHaloCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AHaloCharacterBase();

protected:
	virtual void BeginPlay() override;

};
