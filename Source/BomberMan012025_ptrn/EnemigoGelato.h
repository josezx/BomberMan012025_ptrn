// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoGelato.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN012025_PTRN_API AEnemigoGelato : public AEnemigo
{
	GENERATED_BODY()
public:
	// Constructor
	AEnemigoGelato();

protected:
	// BeginPlay
	virtual void BeginPlay() override;

public:
	// Tick
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* GelatoMesh;
private:
	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float Velocidad = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float AmplitudOnda = 20.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float FrecuenciaOnda = 2.0f;

	FVector PosicionInicial;
	float TiempoAcumulado = 0.0f;
};
