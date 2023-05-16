// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Piece.h"
#include "Board.generated.h"

UCLASS()
class TETRISUSFX01_API ABoard : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABoard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//Aquí se crea el ABoard y sus punteros
	UPROPERTY()
	APiece* CurrentPiece;
	static ABoard* instancia; //Puntero a instancia (nullptr)
	static ABoard* GetInstancia(); //Obtener instancia 
	void Rotate(); 
	void MoveLeft(); 
	void MoveRight();
	void MoveDown(); 
	void NewPiece();
	void CheckLine();
	void MoveDownToEnd();
	UPROPERTY(VisibleAnywhere, Category = "Principal")
		class ABuildPiece_I* pieceI;
	UPROPERTY(VisibleAnywhere, Category = "Principal")
		class ABuildPiece_Z* pieceZ;
	UPROPERTY(VisibleAnywhere, Category = "Principal")
		class ABuildPiece_L* pieceL;
	UPROPERTY(VisibleAnywhere, Category = "Principal")
		class ABuildPiece_T* pieceT;
	UPROPERTY(VisibleAnywhere, Category = "Principal")
		class ABuildPiece_O* pieceO;
	UPROPERTY(VisibleAnywhere, Category = "Principal")
		class ABuildPiece_S* pieceS;
	UPROPERTY(VisibleAnywhere, Category = "Principal")
		class ABuildPiece_J* pieceJ;
	UPROPERTY(VisibleAnywhere, Category = "Principal")
		class ABuildPiece_Ingeniero* pieceIngeniero;
	UPROPERTY(VisibleAnywhere, Category = "Principal")
		class ADirectorPiece* director;

private:
	enum PieceStatus { PS_NOT_INITED, PS_MOVING, PS_GOT_BOTTOM };
	PieceStatus Status = PS_NOT_INITED;

	const float CoolDown = 0.5f;
	float CoolLeft = 0.5f;
	bool bGameOver = false;

	bool CheckGameOver();

};
