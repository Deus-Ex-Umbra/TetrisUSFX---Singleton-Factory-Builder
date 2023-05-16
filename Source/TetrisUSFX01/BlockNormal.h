// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block.h"
#include "BlockNormal.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API ABlockNormal : public ABlock
{
	GENERATED_BODY()
		ABlockNormal();
	virtual void MostrarInformacion();
};
