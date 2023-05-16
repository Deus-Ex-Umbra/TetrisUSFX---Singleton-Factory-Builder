// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EscenarioFactory.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEscenarioFactory : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRISUSFX01_API IEscenarioFactory
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	int numeroEscenario;
	FString nombreEscenario;
	FString tipoEscenario;
	virtual void mostrarInformacion() = 0;
	virtual void crearEscenario() = 0;
	static IEscenarioFactory* getEscenario(int numeroEscenario);
};
