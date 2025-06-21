// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaEnemigo.h"
#include "EnemigoFantasma.h"
#include "EnemigoGelato.h"
#include "EnemigoShark.h"
#include "Enemigo.h"
// Sets default values
AFabricaEnemigo::AFabricaEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
AEnemigo* AFabricaEnemigo::crearEnemigo(UWorld* _mundo, FVector _posicion, FRotator _rotacion, int tipoEnemigo)
{
	AEnemigo* enemigo = nullptr;
	switch (tipoEnemigo)
	{
	case 0: // Enemigo Fantasma
		enemigo = _mundo->SpawnActor<AEnemigoFantasma>(_posicion, _rotacion);
		break;
	case 1: // Enemigo Gelato
		enemigo = _mundo->SpawnActor<AEnemigoGelato>(_posicion, _rotacion);
		break;
	case 2: // Enemigo Gusano
		enemigo = _mundo->SpawnActor<AEnemigoShark>(_posicion, _rotacion);
		break;
	default:
		enemigo = _mundo->SpawnActor<AEnemigoFantasma>(_posicion, _rotacion); // Enemigo por defecto
	}
	return enemigo;
}
