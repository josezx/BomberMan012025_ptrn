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
	//bloques y bombas
	class ABloque* bloque_primario;
	class ABomba* bomba_primaria;
	//// Visitador para aplicar patrón Visitor
	class AVisitadorRotador* visitador_rotador;
    //// Contenedor de enemigos para aplicar Iterator
	AContenedorEnemigo* contenedor_enemigos;
	

	UPROPERTY()
	AFabricaEnemigo* fabrica_enemigo;
public:
	// NUEVO: Mapa lógico del laberinto y dimensiones
	TArray<TArray<int>> MapaLaberinto;
	int TFilas;
	int TColumnas;
	// Generador de laberinto (Prototype + DFS)
	void generadorBordes();
	// Posiciona al jugador en una celda válida aleatoriamente 
	void PosicionarJugadorAleatoriamente();
public:
	ABomberMan012025_ptrnGameMode();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};



