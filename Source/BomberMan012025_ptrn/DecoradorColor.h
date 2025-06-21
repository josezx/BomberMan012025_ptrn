// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DecoradorColor.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UDecoradorColor : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN012025_PTRN_API IDecoradorColor
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void colorearBomba(class AActor* bomba) = 0;
};
