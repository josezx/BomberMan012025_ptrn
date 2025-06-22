// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FabricaEnemigo.h"
#include "ContenedorEnemigo.h"
#include "BomberMan012025_ptrnGameMode.generated.h"

UCLASS(minimalapi)
class ABomberMan012025_ptrnGameMode : public AGameModeBase
{
	GENERATED_BODY()

private:
	float tiempo;
	float tiempo_enemigo;
	int cantidad_enemigo;
	class ABloque* bloque_primario;
	class ABomba* bomba_primaria;
	class AVisitadorRotador* visitador_rotador;
	AContenedorEnemigo* contenedor_enemigos;
	

	UPROPERTY()
	AFabricaEnemigo* fabrica_enemigo;

	void generadorBordes();
public:
	ABomberMan012025_ptrnGameMode();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};



