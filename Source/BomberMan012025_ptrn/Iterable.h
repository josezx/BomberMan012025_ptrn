// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Iterador.h"
#include "Iterable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIterable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
 // ==============================
 // PATR�N DE DISE�O: ITERATOR
 // Interfaz que define una colecci�n iterable,
 // con el m�todo crearIterador() para obtener un iterador.
 // Implementada por clases como AContenedorEnemigo.
 // ==============================
class BOMBERMAN012025_PTRN_API IIterable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual IIterador* crearIterador() = 0;
};
