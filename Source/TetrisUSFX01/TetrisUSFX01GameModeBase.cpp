// Copyright Epic Games, Inc. All Rights Reserved.

/*Aquí se implementa el Singleton*/
#include "TetrisUSFX01GameModeBase.h"
#include "Board.h"
#include "EscenarioFactory.h"
#include "Escenario1.h"
#include "Escenario2.h"
#include "Escenario3.h"
#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"

ATetrisUSFX01GameModeBase::ATetrisUSFX01GameModeBase() {
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    /*DefaultPawnClass = ABoard::StaticClass();*/ //Se comenta esto para demostrar que ABoard se crea con el Singleton
    siguientePosicionZ = 0;
}

IEscenarioFactory* IEscenarioFactory::getEscenario(int _numeroEscenario) {
    if (_numeroEscenario == 1) {
        return NewObject<AEscenario1>();
    } else if (_numeroEscenario == 2) {
		return NewObject<AEscenario2>();
	} else if (_numeroEscenario == 3) {
		return NewObject<AEscenario3>();
    } else {
        return nullptr;
    }
}

void ATetrisUSFX01GameModeBase::BeginPlay()
{
    
    Super::BeginPlay();
    //FACTORY ESCENARIO
    IEscenarioFactory* escenariocreado = IEscenarioFactory::getEscenario(FMath::RandRange(1, 3));
    escenariocreado->crearEscenario();

    //SINGLETON BOARD
    ABoard* instancia = ABoard::GetInstancia(); //Se crea la instancia de ABoard (solo una)
    ABoard* instancia2 = ABoard::GetInstancia(); //Se crea la instancia de ABoard (de nuevo, pero no se crea otra instancia, se usa la misma)
    FString direccion_puntero = FString::Printf(TEXT("Se ha spawneado un Board de tipo: %p"), instancia); //Se imprime la dirección de memoria de la direccion de memoria de instancia
    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Cyan, direccion_puntero);
    FString direccion_puntero2 = FString::Printf(TEXT("Se ha spawneado un Board de tipo: %p"), instancia2); //Se imprime la dirección de memoria de la direccion de memoria de instancia2
    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Purple, direccion_puntero2);
    for (TActorIterator<ACameraActor> it(GetWorld()); it; ++it)
    {
        UE_LOG(LogTemp, Warning, TEXT("Find camera: %s"), *(it->GetFName().ToString()));
        if (it->GetFName() == TEXT("BoardCamera"))
        //if (it->GetFName() == TEXT("LeftCamera"))
        {
            APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
            PC->SetViewTargetWithBlend(*it, 0.5);
            break;
        }
    }

}

// Called every frame
void ATetrisUSFX01GameModeBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

   /* FTransform SpawnLocation;

    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Spawning un Piece"));
    SpawnedPiece = GetWorld()->SpawnActor<APiece>(APiece::StaticClass(), SpawnLocation);
    SpawnedPiece->SetActorRelativeLocation(FVector(0.0, 100.0, 0.0));
    SpawnedPiece->SpawnBlocks();*/ 

}


void ATetrisUSFX01GameModeBase::DestroyActorFunction()
{
	if (SpawnedActor != nullptr)
   {
      // Displays a red message on the screen for 10 seconds
      GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Actor Block destruido"));
      SpawnedActor->Destroy();
   }
}
