// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "EscenarioFactory.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escenario3.generated.h"

UCLASS()
class TETRISUSFX01_API AEscenario3 : public AActor, public IEscenarioFactory
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEscenario3();
	virtual void mostrarInformacion() override;
	virtual void crearEscenario() override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
