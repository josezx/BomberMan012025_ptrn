// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IDecoradorColor.h"
#include "GameFramework/Actor.h"
/**
 * 
 */
class BOMBERMAN012025_PTRN_API DecoradorColorAleatorio : public IIDecoradorColor
{
private:
	AActor* objetoDecorado;
	TArray<FString> rutasMateriales;
public:
	DecoradorColorAleatorio(AActor*_actor);
	virtual void colorear() override;
};
