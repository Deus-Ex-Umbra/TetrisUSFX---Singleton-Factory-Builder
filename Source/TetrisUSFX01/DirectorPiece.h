// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderPiece.h"
#include "Piece.h"
#include "DirectorPiece.generated.h"

UCLASS()
class TETRISUSFX01_API ADirectorPiece : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorPiece();
private:
	IBuilderPiece* builder;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	APiece* getPiece();
	void setBuilder(AActor* newBuilder);
	void buildPiece();
	class ABlock* getBlock(int _num);
};
