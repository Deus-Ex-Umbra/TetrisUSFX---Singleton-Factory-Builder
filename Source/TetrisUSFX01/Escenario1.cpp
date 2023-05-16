// Fill out your copyright notice in the Description page of Project Settings.


#include "Escenario1.h"
#include "BlockExplosivo.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AEscenario1::AEscenario1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	/*static ConstructorHelpers::FObjectFinder<UStaticMesh> EscenarioMesh(TEXT("Material'/Game/Mesh/Material_6.Material_6'"));*/
}

void AEscenario1::mostrarInformacion()
{
	FString mensajeEscenario = FString::Printf(TEXT("El número de escenario es: %d\nEl nombre de escenario es: %s\nEl tipo de escenario es: %s"), numeroEscenario, *nombreEscenario, *tipoEscenario);
	GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Red, mensajeEscenario);
}
void AEscenario1::crearEscenario()
{
	numeroEscenario = 1;
	nombreEscenario = "Primer Escenario 1";
	tipoEscenario = "Escenario Rojo";
	const FString nivel = nombreEscenario;
	UGameplayStatics::OpenLevel(GetWorld(), FName(*nivel));
	mostrarInformacion();
}

// Called when the game starts or when spawned
void AEscenario1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscenario1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

