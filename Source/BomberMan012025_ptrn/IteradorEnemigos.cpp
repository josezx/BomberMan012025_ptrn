#include "IteradorEnemigos.h"
#include "ContenedorEnemigo.h"
#include "Enemigo.h"

AIteradorEnemigos::AIteradorEnemigos()
{
	PrimaryActorTick.bCanEverTick = false;
	contenedor = nullptr;
	indice = 0;
}

void AIteradorEnemigos::BeginPlay()
{
	Super::BeginPlay();
}

void AIteradorEnemigos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AIteradorEnemigos::primero()
{
	indice = 0;
}

void AIteradorEnemigos::siguiente()
{
	if (contenedor)
	{
		indice++;
	}
}

bool AIteradorEnemigos::fin()
{
	if (!contenedor || indice >= contenedor->obtenerEnemigos().Num())
	{
		return true;
	}
	return false;
}

AEnemigo* AIteradorEnemigos::actual()
{
	if (contenedor && contenedor->obtenerEnemigos().IsValidIndex(indice))
	{
		return contenedor->obtenerEnemigos()[indice];
	}
	return nullptr; 
}

void AIteradorEnemigos::establecerContenedor(AContenedorEnemigo* nuevoContenedor)
{
	contenedor = nuevoContenedor;
	primero(); 
}
