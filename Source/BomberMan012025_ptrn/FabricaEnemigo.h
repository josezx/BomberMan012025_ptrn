// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.h"
#include "FabricaEnemigo.generated.h"

UCLASS()
class BOMBERMAN012025_PTRN_API AFabricaEnemigo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

AEnemigo* crearEnemigo(UWorld* _mundo, FVector _posicion, FRotator _rotacion, int tipoEnemigo);

};
