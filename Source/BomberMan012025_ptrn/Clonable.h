// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Clonable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UClonable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN012025_PTRN_API IClonable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual IClonable* clonar(UWorld* _mundo, FVector _posicion, FRotator _rotacion) = 0;
};
