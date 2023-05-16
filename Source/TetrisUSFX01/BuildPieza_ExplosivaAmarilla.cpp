// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildPieza_ExplosivaAmarilla.h"
#include "Piece.h"
#include <vector>

// Sets default values
ABuildPieza_ExplosivaAmarilla::ABuildPieza_ExplosivaAmarilla()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SceneComponent = CreateDefaultSubobject<USceneComponent>("Pieces Scene");
	RootComponent = SceneComponent;
}

// Called when the game starts or when spawned
void ABuildPieza_ExplosivaAmarilla::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABuildPieza_ExplosivaAmarilla::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

APiece* ABuildPieza_ExplosivaAmarilla::getPiece()
{
	return piece;
}

void ABuildPieza_ExplosivaAmarilla::spawnBlocks()
{
	const std::vector<std::pair<float, float>> shapes = { {0.0, 10.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0} };
	FVector Location(0.0, 5.0, 195.0);
	FRotator Rotation(0.0, 0.0, 90.0);
	std::vector<int> tipoBlock;
	for (auto& s : shapes) {
		ABlockExplosivo* b = nullptr;
		switch (FMath::RandRange(1, 2)) {
		case 1:
			b = GetWorld()->SpawnActor<ABlockExplosivo>(this->GetActorLocation(), Rotation);
			tipoBlock.push_back(5);
			break;
		case 2:
			b = GetWorld()->SpawnActor<ABlockExplosivoAmarillo>(this->GetActorLocation(), Rotation);
			tipoBlock.push_back(6);
			break;
		}
		Blocks.Add(b);
		b->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
		b->SetActorRelativeLocation(FVector(0.0, s.first, s.second));
	}
	/*piece->setBlocks(shapes, tipoBlock);*/
	piece = GetWorld()->SpawnActor<APiece>(Location, Rotation);
	piece->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

