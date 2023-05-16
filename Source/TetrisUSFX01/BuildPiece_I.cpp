// Fill out your copyright notice in the Description page of Project Settings.

#include "BuildPiece_I.h"
#include "Piece.h"
#include <vector>

// Sets default values
ABuildPiece_I::ABuildPiece_I()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SceneComponent = CreateDefaultSubobject<USceneComponent>("Pieces Scene");
	RootComponent = SceneComponent;
}

// Called when the game starts or when spawned
void ABuildPiece_I::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABuildPiece_I::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

APiece* ABuildPiece_I::getPiece()
{
	return piece;
}

void ABuildPiece_I::spawnBlocks()
{
	const std::vector<std::pair<float, float>> shapes = { {0.0, 10.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0} };
	FVector Location(0.0, 5.0, 195.0);
	FRotator Rotation(0.0, 0.0, 0.0);
	std::vector<int> tipoBlock;
	for (auto& s : shapes) {
		ABlock* b = nullptr;
		switch (FMath::RandRange(1, 6)) {
		case 1:
			b = GetWorld()->SpawnActor<ABlockNormal>(this->GetActorLocation(), Rotation);
			tipoBlock.push_back(1);
			break;
		case 2:
			b = GetWorld()->SpawnActor<ABlockPiedra>(this->GetActorLocation(), Rotation);
			tipoBlock.push_back(2);
			break;
		case 3:
			b = GetWorld()->SpawnActor<ABlockMadera>(this->GetActorLocation(), Rotation);
			tipoBlock.push_back(3);
			break;
		case 4:
			b = GetWorld()->SpawnActor<ABlockMetal>(this->GetActorLocation(), Rotation);
			tipoBlock.push_back(4);
			break;
		case 5:
			b = GetWorld()->SpawnActor<ABlockExplosivo>(this->GetActorLocation(), Rotation);
			tipoBlock.push_back(5);
			break;
		case 6:
			b = GetWorld()->SpawnActor<ABlockHielo>(this->GetActorLocation(), Rotation);
			tipoBlock.push_back(6);
			break;
		}
		Blocks.Add(b);
		b->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
		b->SetActorRelativeLocation(FVector(0.0, s.first, s.second));
	}
	piece->setBlocks(shapes, tipoBlock);
	piece = GetWorld()->SpawnActor<APiece>(Location, Rotation);
	piece->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

