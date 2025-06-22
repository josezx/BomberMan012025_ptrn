// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Elemento.h"
#include "Iterador.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIterador : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN012025_PTRN_API IIterador
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void primero() = 0;
	virtual void siguiente() = 0;
	virtual bool fin() = 0;
	virtual IElemento* actual() = 0;
};
