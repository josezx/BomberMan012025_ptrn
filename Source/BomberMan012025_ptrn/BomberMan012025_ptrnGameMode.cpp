
#include "BomberMan012025_ptrnGameMode.h"
#include "BomberMan012025_ptrnCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "FachadaJuego.h"
#include "Bloque.h"
#include "Bomba.h"
#include "VisitadorRotador.h"
#include "FabricaEnemigo.h"
#include "ContenedorEnemigo.h"
#include "Enemigo.h"
#include "EnemigoGelato.h"
#include "Iterador.h"
#include "Clonable.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"

ABomberMan012025_ptrnGameMode::ABomberMan012025_ptrnGameMode()
{
    PrimaryActorTick.bCanEverTick = true;
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
    if (PlayerPawnBPClass.Class != NULL)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }
    Fachada = nullptr;
}

void ABomberMan012025_ptrnGameMode::BeginPlay()
{
    Super::BeginPlay();
    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = this;
    SpawnParams.Instigator = GetInstigator();
    Fachada = GetWorld()->SpawnActor<AFachadaJuego>(AFachadaJuego::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
	generadorBordes();
	PosicionarJugadorAleatoriamente();
	tiempo = 0.0f;
	tiempo_enemigo = 0.0f;
	cantidad_enemigo = 0;
	bloque_primario = GetWorld()->SpawnActor<ABloque>(FVector(200.0f, 200.0f, 0.0f), FRotator::ZeroRotator);
	bomba_primaria = GetWorld()->SpawnActor<ABomba>(FVector(2000.0f, 2000.0f, 1000.0f), FRotator::ZeroRotator);
	visitador_rotador = GetWorld()->SpawnActor<AVisitadorRotador>(AVisitadorRotador::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
	contenedor_enemigos = GetWorld()->SpawnActor<AContenedorEnemigo>(AContenedorEnemigo::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
	fabrica_enemigo = GetWorld()->SpawnActor<AFabricaEnemigo>(AFabricaEnemigo::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
}
// compromiso de implementacion interfaz , 
void ABomberMan012025_ptrnGameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if (Fachada)
    {
		Fachada->ejecutarTick(DeltaTime, tiempo, tiempo_enemigo, cantidad_enemigo,
			bloque_primario, bomba_primaria, visitador_rotador, contenedor_enemigos, fabrica_enemigo);
    }
}

void ABomberMan012025_ptrnGameMode::generadorBordes()
{
	TColumnas = 51;
	TFilas = 51;
	MapaLaberinto.SetNum(TFilas);
	for (int Y = 0; Y < TFilas; Y++)
	{
		MapaLaberinto[Y].SetNum(TColumnas);
		for (int X = 0; X < TColumnas; X++)
		{
			int Mitad = TColumnas / 2;
			if (X >= Mitad)
			{
				if (X == Mitad || X == TColumnas - 1 || Y == 0 || Y == TFilas - 1)
				{
					MapaLaberinto[Y][X] = 1;
				}
				else
				{
					MapaLaberinto[Y][X] = -1;
				}
			}
			else
			{
				MapaLaberinto[Y][X] = -2;
			}
		}
	}
	TSet<FIntPoint> Visitadas;
	TArray<FIntPoint> Pila;
	auto Direcciones = { FIntPoint(0, -2), FIntPoint(0, 2), FIntPoint(-2, 0), FIntPoint(2, 0) };
	auto Valido = [&](int X, int Y) -> bool
		{
			return X > TColumnas / 2 && Y > 0 && X < TColumnas - 1 && Y < TFilas - 1;
		};
	FIntPoint Inicio(TColumnas / 2 + 1, 1);
	Pila.Push(Inicio);
	MapaLaberinto[Inicio.Y][Inicio.X] = 0;
	Visitadas.Add(Inicio);
	while (Pila.Num() > 0)
	{
		FIntPoint Actual = Pila.Top();
		TArray<FIntPoint> Vecinos;
		for (FIntPoint Dir : Direcciones)
		{
			FIntPoint Nuevo = Actual + Dir;
			if (Valido(Nuevo.X, Nuevo.Y) && !Visitadas.Contains(Nuevo))
			{
				Vecinos.Add(Nuevo);
			}
		}
		if (Vecinos.Num() > 0)
		{
			FIntPoint Elegido = Vecinos[FMath::RandRange(0, Vecinos.Num() - 1)];
			int MidX = (Actual.X + Elegido.X) / 2;
			int MidY = (Actual.Y + Elegido.Y) / 2;

			MapaLaberinto[Elegido.Y][Elegido.X] = 0;
			MapaLaberinto[MidY][MidX] = 0;

			Pila.Push(Elegido);
			Visitadas.Add(Elegido);
		}
		else
		{
			Pila.Pop();
		}
	}

	for (int Y = 1; Y < TFilas - 1; Y++)
	{
		for (int X = TColumnas / 2 + 1; X < TColumnas - 1; X++)
		{
			if (MapaLaberinto[Y][X] == -1)
			{
				MapaLaberinto[Y][X] = FMath::RandRange(1, 3);
			}
		}
	}
	if (!bloque_primario)
	{
		bloque_primario = GetWorld()->SpawnActor<ABloque>(FVector::ZeroVector, FRotator::ZeroRotator);
	}
	const float Espaciado = 200.f;
	for (int Y = 0; Y < TFilas; Y++)
	{
		for (int X = TColumnas / 2; X < TColumnas; X++)
		{
			if (MapaLaberinto[Y][X] > 0)
			{
				FVector Pos = FVector(X * Espaciado, Y * Espaciado, 0.f);
				IClonable* clon = bloque_primario->clonar(GetWorld(), Pos, FRotator::ZeroRotator);
			}
		}
	}

	for (int Y = 0; Y < TFilas; Y++)
	{
		for (int X = TColumnas / 2 + 1; X < TColumnas - 1; X++)
		{
			int Tipo = MapaLaberinto[Y][X];
			if (Tipo > 0)
			{
				int XReflejado = TColumnas / 2 - (X - TColumnas / 2);
				MapaLaberinto[Y][XReflejado] = Tipo;
				FVector Pos = FVector(XReflejado * Espaciado, Y * Espaciado, 0.f);
				IClonable* clon = bloque_primario->clonar(GetWorld(), Pos, FRotator::ZeroRotator);
			}
		}
	}
}

void ABomberMan012025_ptrnGameMode::PosicionarJugadorAleatoriamente()
{
	TArray<FVector> PosicionesValidas;
	float Espaciado = 200.0f;
	int32 NumFilas = MapaLaberinto.Num();
	int32 NumColumnas = MapaLaberinto[0].Num();
	float DistanciaMinima = FLT_MAX;

	for (int Y = 1; Y < NumFilas - 1; ++Y)
	{
		for (int X = 1; X < NumColumnas - 1; ++X)
		{
			if (MapaLaberinto[Y][X] == 0)
			{
				bool CercaDeBloque =
					MapaLaberinto[Y + 1][X] > 0 || MapaLaberinto[Y - 1][X] > 0 ||
					MapaLaberinto[Y][X + 1] > 0 || MapaLaberinto[Y][X - 1] > 0;

				if (CercaDeBloque)
				{
					int DistIzq = X;
					int DistDer = NumColumnas - 1 - X;
					int DistArriba = Y;
					int DistAbajo = NumFilas - 1 - Y;
					int DistanciaABorde = FMath::Min3(DistIzq, DistDer, FMath::Min(DistArriba, DistAbajo));

					FVector Pos = FVector(X * Espaciado, Y * Espaciado, 0.0f);

					if (DistanciaABorde < DistanciaMinima)
					{
						PosicionesValidas.Empty();
						DistanciaMinima = DistanciaABorde;
					}

					if (DistanciaABorde == DistanciaMinima)
					{
						PosicionesValidas.Add(Pos);
					}
				}
			}
		}
	}

	if (PosicionesValidas.Num() > 0)
	{
		FVector PosicionElegida = PosicionesValidas[FMath::RandRange(0, PosicionesValidas.Num() - 1)];
		PosicionElegida.Z = 100.f;
		APawn* Jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
		if (Jugador)
		{
			ACharacter* JugadorChar = Cast<ACharacter>(Jugador);
			if (JugadorChar && JugadorChar->GetCapsuleComponent())
			{
				PosicionElegida.Z = JugadorChar->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
			}

			Jugador->SetActorLocation(PosicionElegida);
			UE_LOG(LogTemp, Warning, TEXT("Jugador posicionado correctamente en: %s"), *PosicionElegida.ToString());
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No se encontró ninguna posición válida para el jugador."));
	}
}

