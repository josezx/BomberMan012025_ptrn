// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoFantasma.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN012025_PTRN_API AEnemigoFantasma : public AEnemigo
{
	GENERATED_BODY()
public:
	// Constructor
	AEnemigoFantasma();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* FantasmaMesh;
private:
	UPROPERTY(EditAnywhere, Category = "Movimiento Fantasmal")
	float AmplitudFlotacion = 50.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento Fantasmal")
	float FrecuenciaFlotacion = 2.0f;

	float TiempoAcumulado = 0.0f;
	FVector PosicionInicial;
};
