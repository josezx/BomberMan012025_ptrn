// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IDecoradorColor.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIDecoradorColor : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN012025_PTRN_API IIDecoradorColor
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	/*virtual void colorearBomba(class AActor* bomba) = 0;
	*/
	virtual void colorear() = 0;
};
