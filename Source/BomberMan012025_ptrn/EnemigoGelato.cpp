// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoGelato.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Constructor
AEnemigoGelato::AEnemigoGelato()
{
	PrimaryActorTick.bCanEverTick = true;

	GelatoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GelatoMesh"));
	RootComponent = GelatoMesh;

	// Cargar la malla estática del slime
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Modelos3dzx/Gelatoo/slime_BigSlime.slime_BigSlime"));
	if (MeshAsset.Succeeded())
	{
		GelatoMesh->SetStaticMesh(MeshAsset.Object);
	}
	// ✅ Establecer escala grande (doble tamaño)
	GelatoMesh->SetWorldScale3D(FVector(20.0f, 20.0f, 20.0f));
}

// BeginPlay
void AEnemigoGelato::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

// Tick
void AEnemigoGelato::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoAcumulado += DeltaTime;

	// Movimiento hacia adelante en el eje X
	FVector NuevaPosicion = GetActorLocation();
	NuevaPosicion.X += Velocidad * DeltaTime;

	// Movimiento ondulatorio en el eje Z (como arrastrándose o temblando)
	NuevaPosicion.Z = PosicionInicial.Z + AmplitudOnda * FMath::Sin(FrecuenciaOnda * TiempoAcumulado);

	SetActorLocation(NuevaPosicion);
}
