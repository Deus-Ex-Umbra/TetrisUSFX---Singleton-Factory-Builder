// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockMetal.h"

ABlockMetal::ABlockMetal()
{
	UE_LOG(LogTemp, Warning, TEXT("Constructor de ABlockMetal"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshAsset(TEXT("StaticMesh'/Game/Mesh/BlockMetal.BlockMetal'"));
	if (BlockMeshAsset.Succeeded())
	{
		BlockMesh->SetStaticMesh(BlockMeshAsset.Object);
		BlockMesh->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
		BlockMesh->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No existe la malla para Block"));
	}
	MostrarInformacion();
}

void ABlockMetal::MostrarInformacion()
{
	UE_LOG(LogTemp, Warning, TEXT("Es un: BloqueMetal"));
}
