// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Visitante.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UVisitante : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN012025_PTRN_API IVisitante
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void visitar(class ABloque* bloque) = 0;
	virtual void visitar(class ABomba* bomba) = 0;
	virtual void visitar(class AEnemigo* enemigo) = 0;
};
