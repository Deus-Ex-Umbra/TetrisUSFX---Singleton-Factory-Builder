// Fill out your copyright notice in the Description page of Project Settings.


#include "Escenario3.h"
#include <Kismet/GameplayStatics.h>
// Sets default values
AEscenario3::AEscenario3()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AEscenario3::mostrarInformacion()
{
	FString mensajeEscenario = FString::Printf(TEXT("El número de escenario es: %d\nEl nombre de escenario es: %s\nEl tipo de escenario es: %s"), numeroEscenario, *nombreEscenario, *tipoEscenario);
	GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Green, mensajeEscenario);
}

void AEscenario3::crearEscenario()
{
	numeroEscenario = 3;
	nombreEscenario = "Tercer Escenario 3";
	tipoEscenario = "Escenario Verde";
	const FString nivel = nombreEscenario;
	UGameplayStatics::OpenLevel(GetWorld(), FName(*nivel));
	mostrarInformacion();
}

// Called when the game starts or when spawned
void AEscenario3::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscenario3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

