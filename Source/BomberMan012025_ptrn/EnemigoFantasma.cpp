// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFantasma.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoFantasma::AEnemigoFantasma()
{
	PrimaryActorTick.bCanEverTick = true;

	FantasmaMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FantasmaMesh"));
	RootComponent = FantasmaMesh;

	// Cargar malla esquelética del fantasma
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("/Game/StarterContent/Modelos3dzx/ghost/7b0ade11197a40dd935c25fb8b807f77_fbx.7b0ade11197a40dd935c25fb8b807f77_fbx"));
	if (MeshAsset.Succeeded())
	{
		FantasmaMesh->SetSkeletalMesh(MeshAsset.Object);
		FantasmaMesh->SetRelativeScale3D(FVector(2.0f)); // Fantasma grande
	}
}

void AEnemigoFantasma::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

void AEnemigoFantasma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoAcumulado += DeltaTime;

	// Movimiento de flotación en el eje Z
	FVector NuevaPosicion = PosicionInicial;
	NuevaPosicion.Z += AmplitudFlotacion * FMath::Sin(FrecuenciaFlotacion * TiempoAcumulado);

	SetActorLocation(NuevaPosicion);
}
