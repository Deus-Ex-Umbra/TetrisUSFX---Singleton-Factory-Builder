// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderPiece.h"
#include "Block.h"
#include "BlockHielo.h"
#include "BlockExplosivo.h"
#include "BlockMetal.h"
#include "BlockMadera.h"
#include "BlockNormal.h"
#include "BlockPiedra.h"
#include "BuildPiece_Ingeniero.generated.h"

UCLASS()
class TETRISUSFX01_API ABuildPiece_Ingeniero : public AActor, public IBuilderPiece
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuildPiece_Ingeniero();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual class APiece* getPiece() override;
	virtual void spawnBlocks() override;
	class APiece* piece;
	TArray<ABlock*> Blocks;
	UPROPERTY()
		class USceneComponent* SceneComponent;
};
