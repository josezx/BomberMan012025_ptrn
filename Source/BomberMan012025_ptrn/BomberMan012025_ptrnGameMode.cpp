// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan012025_ptrnGameMode.h"
#include "BomberMan012025_ptrnCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "FabricaEnemigo.h"
#include "Enemigo.h"
#include "EnemigoGelato.h"
#include "EnemigoFantasma.h"
#include "EnemigoShark.h"
#include <array>
#include "Bloque.h"
#include "Bomba.h"

ABomberMan012025_ptrnGameMode::ABomberMan012025_ptrnGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	tiempo = 0.0f;
}

void ABomberMan012025_ptrnGameMode::BeginPlay()
{
	Super::BeginPlay();
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Iniciando"));
	}
	fabrica_enemigo = GetWorld()->SpawnActor<AFabricaEnemigo>(AFabricaEnemigo::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
	this->generadorBordes();
	ABomba* nueva_bomba = GetWorld()->SpawnActor<ABomba>(FVector(1000.0f, 1000.0f, 1000.0f), FRotator(0.0f, 0.0f, 0.0f));
	//GELATO ENEMY
	FVector posicionSpawn(FMath::RandRange(100.f, 2500.f), FMath::RandRange(100.f, 2500.f), 0.f);
	FRotator rotacionSpawn(0.0f, 0.0f, 0.0f);
	AEnemigoGelato* enemigoGelato = GetWorld()->SpawnActor<AEnemigoGelato>(AEnemigoGelato::StaticClass(), posicionSpawn, rotacionSpawn);

	if (enemigoGelato)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("¡Enemigo Gelato generado!"));
	}
	//FANTASMA ENEMY
	FVector posicionFantasma(FMath::RandRange(100.f, 2500.f), FMath::RandRange(100.f, 2500.f), 0.f);
	FRotator rotacionFantasma(0.f, 0.f, 0.f);

	AEnemigoFantasma* fantasma = GetWorld()->SpawnActor<AEnemigoFantasma>(
		AEnemigoFantasma::StaticClass(),
		posicionFantasma,
		rotacionFantasma
	);

	if (fantasma)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Purple, TEXT("¡Enemigo Fantasma generado!"));
	}
//SHARK ENEMY
	FVector posicionTiburon(0.f, 0.f, 0.f);
	FRotator rotacionTiburon = FRotator::ZeroRotator;

	AEnemigoShark* tiburon = GetWorld()->SpawnActor<AEnemigoShark>(
		AEnemigoShark::StaticClass(),
		posicionTiburon,
		rotacionTiburon
	);

	if (tiburon)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("¡Tiburón generado!"));
	}

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
		int tipoEnemigo = FMath::RandRange(0, 2); // Genera un número aleatorio entre 0 y 2
		FVector posicionEnemigo(FMath::RandRange(0.0f, 2500.0f), FMath::RandRange(0.0f, 2500.0f), FMath::RandRange(0.0f, 0.0f));
		AEnemigo* nuevo_enemigo = fabrica_enemigo->crearEnemigo(GetWorld(), posicionEnemigo, FRotator(0.0f, 0.0f, 0.0f), tipoEnemigo);
	}
	tiempo += DeltaTime;
}

void ABomberMan012025_ptrnGameMode::generadorBordes()
{
	//Esquina inferior izquierda
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

					bloque_primario->clonar(GetWorld(), posicion, FRotator::ZeroRotator);
				}
			}
		}
	}
}