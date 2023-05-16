// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block.h"
#include "BlockExplosivo.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API ABlockExplosivo : public ABlock
{
	GENERATED_BODY()
	ABlockExplosivo();
	virtual void MostrarInformacion();
};
