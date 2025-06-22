// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoGelato.h"
#include "Components/StaticMeshComponent.h"
#include "BomberMan012025_ptrnGameMode.h"
#include "Kismet/GameplayStatics.h"
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
	GelatoMesh->SetWorldScale3D(FVector(2.0f, 2.0f, 2.0f));
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

	// Obtener el GameMode actual
	ABomberMan012025_ptrnGameMode* gameMode = Cast<ABomberMan012025_ptrnGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	if (!gameMode) return;

	// Obtener posición actual
	FVector pos = GetActorLocation();
	int celdaX = FMath::FloorToInt(pos.X / 200.f); // redondear hacia abajo
	int celdaY = FMath::FloorToInt(pos.Y / 200.f);

	// Calcular siguiente celda
	float avance = Velocidad * DeltaTime;
	float nuevaX = pos.X + avance;
	int nuevaCeldaX = FMath::FloorToInt(nuevaX / 200.f);

	// Verificamos si la celda de destino cambió y es válida
	if (nuevaCeldaX != celdaX)
	{
		if (gameMode->MapaLaberinto.IsValidIndex(celdaY) && gameMode->MapaLaberinto[celdaY].IsValidIndex(nuevaCeldaX))
		{
			int tipo = gameMode->MapaLaberinto[celdaY][nuevaCeldaX];
			if (tipo != 0)
			{
				// No se puede avanzar, cancelamos movimiento
				return;
			}
		}
		else
		{
			// Fuera de rango
			return;
		}
	}

	// Movimiento horizontal permitido
	FVector NuevaPosicion = pos;
	NuevaPosicion.X = nuevaX;

	// Movimiento vertical (ondulatorio)
	NuevaPosicion.Z = PosicionInicial.Z + AmplitudOnda * FMath::Sin(FrecuenciaOnda * TiempoAcumulado);

	SetActorLocation(NuevaPosicion);
}
