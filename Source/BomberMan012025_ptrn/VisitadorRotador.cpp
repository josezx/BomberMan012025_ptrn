// Fill out your copyright notice in the Description page of Project Settings.


#include "VisitadorRotador.h"
#include "Bloque.h"
#include "Bomba.h"
#include "Enemigo.h"

// Sets default values
AVisitadorRotador::AVisitadorRotador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVisitadorRotador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVisitadorRotador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void AVisitadorRotador::visitar(ABloque* bloque)
{
	if (bloque)
	{
		FVector rotacion = bloque->GetActorRotation().Euler();
		rotacion.Y += 10.0f; // Incrementa la rotación en el eje Y
		rotacion.X += 10.0f; // Incrementa la rotación en el eje X
		bloque->SetActorRotation(FRotator::MakeFromEuler(rotacion));
	}
}

void AVisitadorRotador::visitar(ABomba* bomba)
{
	if (bomba)
	{
		FVector rotacion = bomba->GetActorRotation().Euler();
		rotacion.Y += 10.0f; // Incrementa la rotación en el eje Y
		rotacion.X += 10.0f; // Incrementa la rotación en el eje X
		bomba->SetActorRotation(FRotator::MakeFromEuler(rotacion));
	}
}

void AVisitadorRotador::visitar(AEnemigo* enemigo)
{
	if (enemigo)
	{
		FVector rotacion = enemigo->GetActorRotation().Euler();
		rotacion.Y += 10.0f; // Incrementa la rotación en el eje Y
		rotacion.X += 10.0f; // Incrementa la rotación en el eje X
		enemigo->SetActorRotation(FRotator::MakeFromEuler(rotacion));
	}
}