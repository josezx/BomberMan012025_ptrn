#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "FachadaJuego.generated.h"

class ABloque;
class ABomba;
class AVisitadorRotador;
class AContenedorEnemigo;
class AFabricaEnemigo;
class AEnemigo;
class IIterador;

UCLASS()
class BOMBERMAN012025_PTRN_API AFachadaJuego : public AActor
{
    GENERATED_BODY()

public:
    AFachadaJuego();
    virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override;

	void ejecutarTick(float DeltaTime, float& tiempo, float& tiempo_enemigo, int& cantidad_enemigo,
		ABloque* bloque_primario, ABomba* bomba_primaria, AVisitadorRotador* visitador_rotador,
		AContenedorEnemigo* contenedor_enemigos, AFabricaEnemigo* fabrica_enemigo);
};
