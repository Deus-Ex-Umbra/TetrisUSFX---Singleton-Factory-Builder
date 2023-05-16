// Fill out your copyright notice in the Description page of Project Settings.


#include "Board.h"
#include "DirectorPiece.h"
#include "BuildPiece_I.h"
#include "BuildPiece_Ingeniero.h"
#include "BuildPiece_J.h"
#include "BuildPiece_L.h"
#include "BuildPiece_O.h"
#include "BuildPiece_S.h"
#include "BuildPiece_T.h"
#include "BuildPiece_Z.h"
#include "BuildPieza_ExplosivaAmarilla.h"
#include "Piece.h"
#include "EngineUtils.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
// Sets default values

ABoard::ABoard()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABoard::BeginPlay()
{
	Super::BeginPlay();
	
    for (TActorIterator<APiece> it(GetWorld()); it; ++it)
    {
        if (it->GetFName() == TEXT("DissmissPieces"))
        {
            it->Dismiss();
            it->Destroy();
        }
    }
    FVector Location(0.0, 5.0, 185.0);
    FRotator Rotation(0.0, 0.0, 0.0);
    pieceI = GetWorld()->SpawnActor<ABuildPiece_I>(FVector(0.0, 5.0, 5.0), Rotation);
    pieceIngeniero = GetWorld()->SpawnActor<ABuildPiece_Ingeniero>(FVector(0.0, 5.0, 25.0), Rotation);
    pieceJ = GetWorld()->SpawnActor<ABuildPiece_J>(FVector(0.0, 5.0, 45.0), Rotation);
    pieceL = GetWorld()->SpawnActor<ABuildPiece_L>(FVector(0.0, 5.0, 65.0), Rotation);
    pieceO = GetWorld()->SpawnActor<ABuildPiece_O>(FVector(0.0, 5.0, 85.0), Rotation);
    pieceS = GetWorld()->SpawnActor<ABuildPiece_S>(FVector(0.0, 5.0, 105.0), Rotation);
    pieceT = GetWorld()->SpawnActor<ABuildPiece_T>(FVector(0.0, 5.0, 125.0), Rotation);
    pieceZ = GetWorld()->SpawnActor<ABuildPiece_Z>(FVector(0.0, 5.0, 145.0), Rotation);
    pieceAmarilla = GetWorld()->SpawnActor< ABuildPieza_ExplosivaAmarilla>(FVector(0.0, -10.0, 85.0), Rotation);
    director = GetWorld()->SpawnActor<ADirectorPiece>(ADirectorPiece::StaticClass());
}

/*No fue necesario hacer lo del libro, con esto bastaba, el del libro no me corrió :c*/
ABoard* ABoard::instancia = nullptr;
ABoard* ABoard::GetInstancia()
{
    if (instancia == nullptr) { //Como no hay instancia (nullptr) entonces se crea un nuevo ABoard
        instancia = NewObject<ABoard>(); //No se puede poner instancia = new ABoard(), así que se aplica esta forma
        GEngine->AddOnScreenDebugMessage(0, 15, FColor::Green, FString::Printf(TEXT("Board ha sido creado c:"))); //Mensaje de que se ha creado un nuevo ABoard
    }
    return instancia; //Se retorna la instancia c:
}
// Called every frame
void ABoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (bGameOver)
    {
        return;
    }

    switch (Status)
    {
    case PS_NOT_INITED:
        NewPiece();
        CoolLeft = CoolDown;
        Status = PS_MOVING;
        break;
    case PS_MOVING:
        CoolLeft -= DeltaTime;
        if (CoolLeft <= 0.0f)
        {
            MoveDown();
        }
        break;
    case PS_GOT_BOTTOM:
        CoolLeft -= DeltaTime;
        if (CoolLeft <= 0.0f)
        {
            if (CurrentPiece)
            {
                CurrentPiece->Dismiss();
                CurrentPiece->Destroy();
            }
            CurrentPiece = nullptr;
            NewPiece();
            CoolLeft = CoolDown;
            Status = PS_MOVING;
        }
        break;
    default:
        break;
    }
}

// Called to bind functionality to input
void ABoard::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAction("Rotate", IE_Pressed, this, &ABoard::Rotate);
    PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &ABoard::MoveLeft);
    PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &ABoard::MoveRight);
    PlayerInputComponent->BindAction("MoveDownToEnd", IE_Pressed, this, &ABoard::MoveDownToEnd);
    PlayerInputComponent->BindAction("NewPiece", IE_Pressed, this, &ABoard::NewPiece);
    //PlayerInputComponent->BindAction("CheckLine", IE_Pressed, this, &ABoard::CheckLine);

}

void ABoard::Rotate()
{
    if (CurrentPiece && Status != PS_GOT_BOTTOM)
    {
        CurrentPiece->TestRotate();
    }
}

void ABoard::MoveLeft()
{
    if (CurrentPiece)
    {
        CurrentPiece->MoveLeft();
        if (Status == PS_GOT_BOTTOM)
        {
            MoveDownToEnd();
        }
    }
}

void ABoard::MoveRight()
{
    if (CurrentPiece)
    {
        CurrentPiece->MoveRight();
        if (Status == PS_GOT_BOTTOM)
        {
            MoveDownToEnd();
        }
    }
}

void ABoard::MoveDown()
{
    if (CurrentPiece)
    {
        if (!CurrentPiece->MoveDown())
        {
            Status = PS_GOT_BOTTOM;
        }
        CoolLeft = CoolDown;
    }
}

void ABoard::NewPiece()
{
    CheckLine();
    if (CurrentPiece)
    {
        CurrentPiece->Dismiss();
        CurrentPiece->Destroy();
    }

    FVector Location(0.0, 5.0, 165.0);
    FRotator Rotation(0.0, 0.0, 0.0);
    /*if (FMath::RandRange(1, 2) == 1)
    {*/
        switch (FMath::RandRange(1, 9)) {
        case 1:
            director->setBuilder(pieceI);
            director->buildPiece();
            CurrentPiece = director->getPiece();
            CurrentPiece = Cast<APiece>(GetWorld()->SpawnActor<ABuildPiece_I>(Location, Rotation));
            break;
        case 2:
            director->setBuilder(pieceIngeniero);
            director->buildPiece();
            CurrentPiece = director->getPiece();
            CurrentPiece = Cast<APiece>(GetWorld()->SpawnActor<ABuildPiece_Ingeniero>(Location, Rotation));
            break;
        case 3:
            director->setBuilder(pieceJ);
            director->buildPiece();
            CurrentPiece = director->getPiece();
            CurrentPiece = Cast<APiece>(GetWorld()->SpawnActor<ABuildPiece_J>(Location, Rotation));
            break;
        case 4:
            director->setBuilder(pieceL);
            director->buildPiece();
            CurrentPiece = director->getPiece();
            CurrentPiece = Cast<APiece>(GetWorld()->SpawnActor<ABuildPiece_L>(Location, Rotation));
            break;
        case 5:
            director->setBuilder(pieceO);
            director->buildPiece();
            CurrentPiece = director->getPiece();
            CurrentPiece = Cast<APiece>(GetWorld()->SpawnActor<ABuildPiece_O>(Location, Rotation));
            break;
        case 6:
            director->setBuilder(pieceS);
            director->buildPiece();
            CurrentPiece = director->getPiece();
            CurrentPiece = Cast<APiece>(GetWorld()->SpawnActor<ABuildPiece_S>(Location, Rotation));
            break;
        case 7:
            director->setBuilder(pieceT);
            director->buildPiece();
            CurrentPiece = director->getPiece();
            CurrentPiece = Cast<APiece>(GetWorld()->SpawnActor<ABuildPiece_T>(Location, Rotation));
            break;
        case 8:
            director->setBuilder(pieceZ);
            director->buildPiece();
            CurrentPiece = director->getPiece();
            CurrentPiece = Cast<APiece>(GetWorld()->SpawnActor<ABuildPiece_Z>(Location, Rotation));
            break;
        case 9:
            director->setBuilder(pieceAmarilla);
            director->buildPiece();
            CurrentPiece = director->getPiece();
        }
        /*director->buildPiece();
        CurrentPiece = director->getPiece();*/
    /*} else {
        CurrentPiece = GetWorld()->SpawnActor<APiece>(Location, Rotation);
    }*/
    /*CurrentPiece = GetWorld()->SpawnActor<APiece>(Location, Rotation);*/
    bGameOver = CheckGameOver();
    if (bGameOver)
    {
        UE_LOG(LogTemp, Warning, TEXT("Game Over!!!!!!!!"));
        /*if (GameOverSoundCue)
        {
            UGameplayStatics::PlaySoundAtLocation(GetWorld(), GameOverSoundCue, GetActorLocation(), GetActorRotation());
        }*/
    }
}

void ABoard::CheckLine()
{
    auto MoveDownFromLine = [this](int z) {
        FVector Location(0.0f, 0.0f, 5.0 * z + 100.0);
        FRotator Rotation(0.0f, 0.0f, 0.0f);
        TArray<struct FOverlapResult> OutOverlaps;
        FCollisionShape CollisionShape;
        FVector Extent(4.5f, 49.5f, 95.0 + 4.5 - 5.0 * z);
        CollisionShape.SetBox(Extent);
        DrawDebugBox(GetWorld(), Location, Extent, FColor::Purple, false, 1, 0, 1);
        FCollisionQueryParams Params;
        FCollisionResponseParams ResponseParam;
        if (GetWorld()->OverlapMultiByChannel(OutOverlaps,
            Location, Rotation.Quaternion(), ECollisionChannel::ECC_WorldDynamic,
            CollisionShape, Params, ResponseParam))
        {
            for (auto&& Result : OutOverlaps)
            {
                FVector NewLocation = Result.GetActor()->GetActorLocation();
                NewLocation.Z -= 10.0f;
                Result.GetActor()->SetActorLocation(NewLocation);
            }
        }
    };

    int z = 0;
    while (z < 20)
    {
        FVector Location(0.0f, 0.0f, 10.0f * z + 5.0f);
        FRotator Rotation(0.0f, 0.0f, 0.0f);
        TArray<struct FOverlapResult> OutOverlaps;
        FCollisionShape CollisionShape;
        CollisionShape.SetBox(FVector(4.0f, 49.0f, 4.0f));
        //DrawDebugBox(GetWorld(), Location, FVector(4.5f, 49.5f, 4.5f), FColor::Purple, false, 1, 0, 1);
        FCollisionQueryParams Params;
        FCollisionResponseParams ResponseParam;
        bool b = GetWorld()->OverlapMultiByChannel(OutOverlaps,
            Location, Rotation.Quaternion(), ECollisionChannel::ECC_WorldDynamic,
            CollisionShape, Params, ResponseParam);
        if (!b || OutOverlaps.Num() < 10)
        {
            ++z;
            continue;
        }
        else // this line is full, remove the line
        {
            UE_LOG(LogTemp, Warning, TEXT("Find FULL LINE at z=%d"), z);
            for (auto&& Result : OutOverlaps)
            {
                Result.GetActor()->Destroy();
            }
            MoveDownFromLine(z);

            /*if (LineRemoveSoundCue)
            {
                UGameplayStatics::PlaySoundAtLocation(GetWorld(), LineRemoveSoundCue, GetActorLocation(), GetActorRotation());
            }*/
        }
    }
}

void ABoard::MoveDownToEnd()
{
    if (!CurrentPiece)
    {
        return;
    }

    while (CurrentPiece->MoveDown())
    {
    }

    /*if (MoveToEndSoundCue)
    {
        UGameplayStatics::PlaySoundAtLocation(GetWorld(), MoveToEndSoundCue, GetActorLocation(), GetActorRotation());
    }*/

    switch (Status)
    {
    case PS_MOVING:
        Status = PS_GOT_BOTTOM;
        CoolLeft = CoolDown;
        break;
    case PS_GOT_BOTTOM:
        break;
    default:
        UE_LOG(LogTemp, Warning, TEXT("Wrong status for MoveDownToEnd"));
        break;
    }
}

bool ABoard::CheckGameOver()
{
    if (!CurrentPiece)
    {
        UE_LOG(LogTemp, Warning, TEXT("NoPieces"));
        return true;
    }

    return CurrentPiece->CheckWillCollision([](FVector OldVector) { return OldVector; });
}
