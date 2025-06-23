#include "FachadaJuego.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h" 
#include "Kismet/GameplayStatics.h"
#include "Clonable.h"
#include "Bloque.h"
#include "Bomba.h"
#include "VisitadorRotador.h"
#include "FabricaEnemigo.h"
#include "ContenedorEnemigo.h"
#include "Iterador.h"
#include "Enemigo.h"



AFachadaJuego::AFachadaJuego()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AFachadaJuego::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFachadaJuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFachadaJuego::ejecutarTick(float DeltaTime, float& tiempo, float& tiempo_enemigo, int& cantidad_enemigo,
	ABloque* bloque_primario, ABomba* bomba_primaria, AVisitadorRotador* visitador_rotador,
	AContenedorEnemigo* contenedor_enemigos, AFabricaEnemigo* fabrica_enemigo)
{
	if (tiempo >= 0.7) {
		bomba_primaria->aceptar(visitador_rotador);
		if (contenedor_enemigos)
		{
			IIterador* iterador = contenedor_enemigos->crearIterador();
			if (iterador)
			{
				for (iterador->primero(); !iterador->fin(); iterador->siguiente())
				{
					if (AEnemigo* enemigoActual = Cast<AEnemigo>(iterador->actual()))
					{

						enemigoActual->aceptar(visitador_rotador);
					}
				}
				if (AActor* iteradorActor = dynamic_cast<AActor*>(iterador))
				{
					iteradorActor->Destroy();
				}
			}
		}
	}
	if (tiempo_enemigo >= 1.7 && cantidad_enemigo < 8) {
		int tipoEnemigo = FMath::RandRange(0, 2);
		FVector posicionEnemigo(FMath::RandRange(0.0f, 2500.0f), FMath::RandRange(0.0f, 2500.0f), 0.0f);
		AEnemigo* nuevo_enemigo = fabrica_enemigo->crearEnemigo(GetWorld(), posicionEnemigo, FRotator::ZeroRotator, tipoEnemigo);
		if (nuevo_enemigo && contenedor_enemigos) {
			contenedor_enemigos->agregarEnemigo(nuevo_enemigo);
			cantidad_enemigo++;
		}
		tiempo_enemigo = 0.0f;
	}
	tiempo += DeltaTime;
	tiempo_enemigo += DeltaTime;
}