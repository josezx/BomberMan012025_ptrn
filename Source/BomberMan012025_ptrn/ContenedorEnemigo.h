// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Iterable.h"
#include "Enemigo.h"
#include "ContenedorEnemigo.generated.h"

UCLASS()
class BOMBERMAN012025_PTRN_API AContenedorEnemigo : public AActor, public IIterable
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AContenedorEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	TArray<AEnemigo*> enemigos;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual class IIterador* crearIterador() override;
	void agregarEnemigo(AEnemigo* enemigo);
	AEnemigo* obtenerEnemigo(int index);
	TArray<AEnemigo*>& obtenerEnemigos();
	/**
 * Elimina todos los enemigos almacenados en el contenedor.
 * Útil para reiniciar el estado del juego.
 */
	/*void reiniciar();*/
};
