// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderPiece.h"
#include "BlockExplosivo.h"
#include "BlockExplosivoAmarillo.h"
#include "BuildPieza_ExplosivaAmarilla.generated.h"

UCLASS()
class TETRISUSFX01_API ABuildPieza_ExplosivaAmarilla : public AActor, public IBuilderPiece
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuildPieza_ExplosivaAmarilla();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual class APiece* getPiece() override;
	virtual void spawnBlocks() override;
	class APiece* piece;
	TArray<ABlockExplosivo*> Blocks;
	UPROPERTY()
		class USceneComponent* SceneComponent;
};
