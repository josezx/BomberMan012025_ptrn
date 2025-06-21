// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoShark.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoShark::AEnemigoShark()
{
	PrimaryActorTick.bCanEverTick = true;

	SharkMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SharkMesh"));
	RootComponent = SharkMesh;

	// Cargar la malla esquelética del tiburón
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("/Game/StarterContent/Modelos3dzx/zx/Sport_Shark.Sport_Shark"));
	if (MeshAsset.Succeeded())
	{
		SharkMesh->SetSkeletalMesh(MeshAsset.Object);
		SharkMesh->SetRelativeScale3D(FVector(2.5f)); // Tiburón grande
	}
}

void AEnemigoShark::BeginPlay()
{
	Super::BeginPlay();

	PosicionInicial = GetActorLocation();
}

void AEnemigoShark::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoAcumulado += DeltaTime;

	// Movimiento hacia adelante en eje Y
	FVector NuevaPosicion = GetActorLocation();
	NuevaPosicion.Y += Velocidad * DeltaTime;

	// Oscilación en el eje X (zigzag como tiburón)
	NuevaPosicion.X = PosicionInicial.X + Amplitud * FMath::Sin(Frecuencia * TiempoAcumulado);

	SetActorLocation(NuevaPosicion);
}
