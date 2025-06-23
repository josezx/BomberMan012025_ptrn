// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BomberMan012025_ptrnGameMode.generated.h"

UCLASS(minimalapi)
class ABomberMan012025_ptrnGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    ABomberMan012025_ptrnGameMode();
    virtual void Tick(float DeltaTime) override;
    class AFachadaJuego* Fachada;
protected:
    virtual void BeginPlay() override;
public:
    TArray<TArray<int>> MapaLaberinto;
    int TFilas;
    int TColumnas;
private:
    float tiempo;
    float tiempo_enemigo;
    int cantidad_enemigo;

    UPROPERTY()
    class ABloque* bloque_primario;

    UPROPERTY()
    class ABomba* bomba_primaria;

    UPROPERTY()
    class AVisitadorRotador* visitador_rotador;

    UPROPERTY()
    class AContenedorEnemigo* contenedor_enemigos;

    UPROPERTY()
    class AFabricaEnemigo* fabrica_enemigo;

    void generadorBordes();
    void PosicionarJugadorAleatoriamente();

};
