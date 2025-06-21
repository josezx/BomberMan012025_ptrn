// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoShark.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN012025_PTRN_API AEnemigoShark : public AEnemigo
{
	GENERATED_BODY()
public:
	AEnemigoShark();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* SharkMesh;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float Velocidad = 200.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float Amplitud = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float Frecuencia = 1.5f;

	FVector PosicionInicial;
	float TiempoAcumulado = 0.0f;
};
