// Fill out your copyright notice in the Description page of Project Settings.


#include "Escenario2.h"
#include "BlockHielo.h"
#include <Kismet/GameplayStatics.h>
// Sets default values
AEscenario2::AEscenario2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	/*static ConstructorHelpers::FObjectFinder<UStaticMesh> EscenarioMesh(TEXT("Material'/Game/Mesh/Material_1.Material_1'"));*/
}

void AEscenario2::mostrarInformacion()
{
	FString mensajeEscenario = FString::Printf(TEXT("El número de escenario es: %d\nEl nombre de escenario es: %s\nEl tipo de escenario es: %s"), numeroEscenario, *nombreEscenario, *tipoEscenario);
	GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Blue, mensajeEscenario);
}

void AEscenario2::crearEscenario()
{
	numeroEscenario = 2;
	nombreEscenario = "Segundo Escenario 2";
	tipoEscenario = "Escenario Azul";
	const FString nivel = nombreEscenario;
	UGameplayStatics::OpenLevel(GetWorld(), FName(*nivel));
	mostrarInformacion();
}

// Called when the game starts or when spawned
void AEscenario2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscenario2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

