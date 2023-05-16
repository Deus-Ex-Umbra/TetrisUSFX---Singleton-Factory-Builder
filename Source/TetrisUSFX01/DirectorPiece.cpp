// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorPiece.h"
#include "BlockExplosivo.h"
#include "BlockHielo.h"
#include "BlockMetal.h"
#include "BlockMadera.h"
#include "BlockNormal.h"
#include "BlockPiedra.h"


// Sets default values
ADirectorPiece::ADirectorPiece()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorPiece::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorPiece::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

APiece* ADirectorPiece::getPiece()
{
	return builder->getPiece();
}

void ADirectorPiece::setBuilder(AActor* newBuilder)
{
	builder = Cast<IBuilderPiece>(newBuilder);
}

void ADirectorPiece::buildPiece()
{
	builder->spawnBlocks();
}

ABlock* ADirectorPiece::getBlock(int _num)
{
	switch (_num) {
	case 1:
		return GetWorld()->SpawnActor<ABlockNormal>(ABlockNormal::StaticClass());
		break;
	case 2:
		return GetWorld()->SpawnActor<ABlockPiedra>(ABlockPiedra::StaticClass());
		break;
	case 3:
		return GetWorld()->SpawnActor<ABlockMadera>(ABlockMadera::StaticClass());
		break;
	case 4:
		return GetWorld()->SpawnActor<ABlockMetal>(ABlockMetal::StaticClass());
		break;
	case 5:
		return GetWorld()->SpawnActor<ABlockExplosivo>(ABlockExplosivo::StaticClass());
		break;
	case 6:
		return GetWorld()->SpawnActor<ABlockHielo>(ABlockExplosivo::StaticClass());
		break;
	default:
		return nullptr;
	}
}

