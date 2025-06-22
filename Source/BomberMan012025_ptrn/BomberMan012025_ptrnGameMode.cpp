// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan012025_ptrnGameMode.h"
#include "BomberMan012025_ptrnCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Clonable.h"
#include "FabricaEnemigo.h"
#include "Enemigo.h"
#include "EnemigoGelato.h"
#include "EnemigoFantasma.h"
#include "EnemigoShark.h"
#include <array>
#include "Bloque.h"
#include "Bomba.h"
#include "VisitadorRotador.h"
#include "ContenedorEnemigo.h" 
#include "Iterador.h"        

ABomberMan012025_ptrnGameMode::ABomberMan012025_ptrnGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	tiempo = 0.0f;
	tiempo_enemigo = 0.0f;
	cantidad_enemigo = 0;
}

void ABomberMan012025_ptrnGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Iniciando"));
	}
	// Initialize the factory for spawning enemies
	fabrica_enemigo = GetWorld()->SpawnActor<AFabricaEnemigo>(AFabricaEnemigo::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
	// Generate the borders of the game area
	this->generadorBordes();
	// Spawn a new bomb at a specific location
	//ABomba* nueva_bomba = GetWorld()->SpawnActor<ABomba>(FVector(1000.0f, 1000.0f, 1000.0f), FRotator(0.0f, 0.0f, 0.0f));
	bomba_primaria = GetWorld()->SpawnActor<ABomba>(FVector(2000.0f, 2000.0f, 1000.0f), FRotator(0.0f, 0.0f, 0.0f));
	visitador_rotador = GetWorld()->SpawnActor<AVisitadorRotador>(FVector::ZeroVector, FRotator::ZeroRotator);
	contenedor_enemigos = GetWorld()->SpawnActor<AContenedorEnemigo>(FVector::ZeroVector, FRotator::ZeroRotator);
}

void ABomberMan012025_ptrnGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (tiempo >= 0.7) {
		/*if (bloque_primario) {
			FVector nueva_posicion = FVector(FMath::RandRange(-1000.0f, 1000.0f), FMath::RandRange(-1000.0f, 1000.0f), FMath::RandRange(-1000.0f, 1000.0f));
			FRotator nueva_rotacion = FRotator(0.0f, 0.0f, 0.0f);
			ABloque* nuevo_bloque = bloque_primario->clonar(GetWorld(), nueva_posicion, nueva_rotacion);
			if (nuevo_bloque) {
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Bloque Clonado en Posicion: ") + nueva_posicion.ToString());
			}
		}
		tiempo = 0.0f;*/
		//ABomba* nueva_bomba = GetWorld()->SpawnActor<ABomba>(FVector(FMath::RandRange(0.0f, 2500.0f), FMath::RandRange(0.0f, 2500.0f), FMath::RandRange(0.0f, 2500.0f)), FRotator(0.0f, 0.0f, 0.0f));
		//int tipoEnemigo = FMath::RandRange(0, 2); // Genera un número aleatorio entre 0 y 2
		//FVector posicionEnemigo(FMath::RandRange(0.0f, 2500.0f), FMath::RandRange(0.0f, 2500.0f), FMath::RandRange(0.0f, 0.0f));
		// Spawn the enemy using the factory
		//AEnemigo* nuevo_enemigo = fabrica_enemigo->crearEnemigo(GetWorld(), posicionEnemigo, FRotator(0.0f, 0.0f, 0.0f), tipoEnemigo);
		bomba_primaria->aceptar(visitador_rotador);

		// ===== CAMBIO: Lógica de iteración corregida y segura =====
		if (contenedor_enemigos)
		{
			// Creamos el iterador (devuelve un puntero a la interfaz base)
			IIterador* iterador = contenedor_enemigos->crearIterador();
			if (iterador)
			{
				for (iterador->primero(); !iterador->fin(); iterador->siguiente())
				{
					// actual() devuelve IElemento*, lo convertimos a AEnemigo*
					// y nos aseguramos de que no sea nulo antes de usarlo.
					if (AEnemigo* enemigoActual = Cast<AEnemigo>(iterador->actual()))
					{
						enemigoActual->aceptar(visitador_rotador);
					}
				}

				// El iterador es un Actor que creamos con SpawnActor,
				// así que debemos destruirlo para no llenar el mundo de objetos.
				if (AActor* iteradorActor = dynamic_cast<AActor*>(iterador))
				{
					iteradorActor->Destroy();
				}
			}
		}
		// ==========================================================
	}
	if (tiempo_enemigo >= 1.7 && cantidad_enemigo < 8) {
		int tipoEnemigo = FMath::RandRange(0, 2); // Genera un número aleatorio entre 0 y 2
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

void ABomberMan012025_ptrnGameMode::generadorBordes()
{
	this->bloque_primario = GetWorld()->SpawnActor<ABloque>(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));
	std::array<std::array<bool, 25>, 25> mapa_bloques = { {
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0,0,1},
	{1,0,1,1,1,1,0,1,0,1,0,1,0,1,0,1,1,1,0,1,0,1,1,0,1},
	{1,0,1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,1},
	{1,0,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,0,1},
	{1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,1},
	{1,1,1,0,1,0,1,1,1,1,0,1,1,1,0,1,1,1,1,1,0,1,1,0,1},
	{1,0,0,0,1,0,1,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,1,0,1},
	{1,0,1,1,1,0,1,0,1,1,1,0,0,0,0,1,1,1,0,1,1,0,1,0,1},
	{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1},
	{1,0,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,0,1,1,1},
	{1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0,1,1,1,0,1},
	{1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1},
	{1,0,1,1,1,1,0,1,1,1,0,0,0,0,0,1,1,1,1,0,1,1,1,0,1},
	{1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1},
	{1,1,1,1,0,1,1,1,0,0,0,0,0,0,0,1,0,1,1,1,0,1,1,1,1},
	{1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1},
	{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,1,0,1},
	{1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,1},
	{1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
} };
	if (bloque_primario)
	{
		const float tamanoCelda = 200.0f;
		const FVector origen(0.0f, 0.0f, 0.0f);

		for (int fila = 0; fila < mapa_bloques.size(); ++fila)
		{
			for (int col = 0; col < mapa_bloques[fila].size(); ++col)
			{
				if (mapa_bloques[fila][col])
				{
					float x = origen.X + fila * tamanoCelda;
					float y = origen.Y + col * tamanoCelda;
					FVector posicion(x, y, origen.Z);

					IClonable* clonable = bloque_primario->clonar(GetWorld(), posicion, FRotator::ZeroRotator);
					ABloque* bloque_clonado = dynamic_cast<ABloque*>(clonable);
				}
			}
		}
	}
}