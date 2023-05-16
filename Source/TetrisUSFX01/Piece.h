// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.h"
#include "BlockHijo01.h"
#include "BlockHijo02.h"
#include "BlockExplosivo.h"
#include "BlockMetal.h"
#include "BlockMadera.h"
#include "BlockNormal.h"
#include "BlockPiedra.h"
#include "BlockHielo.h"
#include <functional>
#include <vector>
#include "Piece.generated.h"

UCLASS()
class TETRISUSFX01_API APiece : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APiece();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
		class USceneComponent* SceneComponent;
	void setBlocks(const std::vector<std::pair<float, float>>& BlocksC, std::vector<int> _tipoBlock);
	void DrawDebugLines();
	void TestRotate();
	void MoveLeft();
	void MoveRight();
	bool MoveDown(bool PlaySound = true);
	void Dismiss();
	bool CheckWillCollision(std::function<FVector(FVector OldLocation)> ChangeBeforeCheck);
	
	UPROPERTY(EditAnywhere)
	TArray<class UMaterial*> Colors;

private:

	TArray<ABlock*> Blocks;
	bool insetBlocks = false;
	void setinsetBlocks(bool _insetBlocks);
public:
	void SpawnBlocks();

};
