// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockPiedra.h"

ABlockPiedra::ABlockPiedra()
{
	UE_LOG(LogTemp, Warning, TEXT("Constructor de ABlockPiedra"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshAsset(TEXT("StaticMesh'/Game/Mesh/BlockPiedra.BlockPiedra'"));
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

void ABlockPiedra::MostrarInformacion()
{
	UE_LOG(LogTemp, Warning, TEXT("Es un: BloquePiedra"))
}
