// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//// M�todo para aceptar un visitante
void AEnemigo::aceptar(IVisitante* visitador)
{
	if (visitador)
	{
		visitador->visitar(this);
	}
}

