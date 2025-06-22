// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Visitante.h"
#include "Visitable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UVisitable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN012025_PTRN_API IVisitable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void aceptar(IVisitante* visitante) = 0;
};
