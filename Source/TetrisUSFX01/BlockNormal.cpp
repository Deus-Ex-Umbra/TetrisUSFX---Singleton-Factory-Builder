// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockNormal.h"

ABlockNormal::ABlockNormal()
{
	UE_LOG(LogTemp, Warning, TEXT("Constructor de ABlockNormal"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshAsset(TEXT("StaticMesh'/Game/Mesh/BlockNormal.BlockNormal'"));
	if (BlockMeshAsset.Succeeded())
	{
		BlockMesh->SetStaticMesh(BlockMeshAsset.Object);
		BlockMesh->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
		BlockMesh->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	} else {
		UE_LOG(LogTemp, Warning, TEXT("No existe la malla para Block"));
	}
	MostrarInformacion();
}

void ABlockNormal::MostrarInformacion()
{
	UE_LOG(LogTemp, Warning, TEXT("Es un: BloqueNormal"));
}
