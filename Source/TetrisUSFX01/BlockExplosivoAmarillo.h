// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BlockExplosivo.h"
#include "BlockExplosivoAmarillo.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API ABlockExplosivoAmarillo : public ABlockExplosivo
{
	GENERATED_BODY()
public:
	ABlockExplosivoAmarillo();
	virtual void mostrarInformacion();
};
