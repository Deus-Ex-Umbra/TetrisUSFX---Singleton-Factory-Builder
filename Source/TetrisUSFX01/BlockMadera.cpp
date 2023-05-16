// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockMadera.h"

ABlockMadera::ABlockMadera()
{
	UE_LOG(LogTemp, Warning, TEXT("Constructor de ABlockMadera"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshAsset(TEXT("StaticMesh'/Game/Mesh/BlockMadera.BlockMadera'"));
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

void ABlockMadera::MostrarInformacion()
{
	UE_LOG(LogTemp, Warning, TEXT("Es un: BloqueMadera"))
}
