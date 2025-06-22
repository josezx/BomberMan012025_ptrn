#include "ContenedorEnemigo.h"
#include "IteradorEnemigos.h"

AContenedorEnemigo::AContenedorEnemigo()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AContenedorEnemigo::BeginPlay()
{
	Super::BeginPlay();
}

void AContenedorEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
///
IIterador* AContenedorEnemigo::crearIterador()
{
    AIteradorEnemigos* iterador = GetWorld()->SpawnActor<AIteradorEnemigos>();
    iterador->establecerContenedor(this);
    return iterador;
}

void AContenedorEnemigo::agregarEnemigo(AEnemigo* enemigo)
{
	if (enemigo)
	{
		enemigos.Add(enemigo);
	}
}

AEnemigo* AContenedorEnemigo::obtenerEnemigo(int index)
{
	if (enemigos.IsValidIndex(index))
	{
		return enemigos[index];
	}
	return nullptr;
}

TArray<AEnemigo*>& AContenedorEnemigo::obtenerEnemigos()
{
	return enemigos;
}
/*void AContenedorEnemigo::reiniciar()
{
	enemigos.Empty();
}
*/