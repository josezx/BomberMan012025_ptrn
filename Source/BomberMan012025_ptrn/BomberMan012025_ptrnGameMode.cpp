// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan012025_ptrnGameMode.h"
#include "BomberMan012025_ptrnCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Clonable.h"
#include "FabricaEnemigo.h"
#include "Enemigo.h"
#include "EnemigoGelato.h"
#include "EnemigoFantasma.h"
#include "EnemigoShark.h"
#include <array>
#include "Bloque.h"
#include "Bomba.h"
#include "VisitadorRotador.h"
#include "ContenedorEnemigo.h"
#include "GameFramework/Character.h"           // Para ACharacter
#include "Components/CapsuleComponent.h"       // Para UCapsuleComponent
#include "Kismet/GameplayStatics.h"            // Para UGameplayStatics::GetPlayerPawn
#include "Iterador.h"        

ABomberMan012025_ptrnGameMode::ABomberMan012025_ptrnGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	tiempo = 0.0f;
	tiempo_enemigo = 0.0f;
	cantidad_enemigo = 0;
}

void ABomberMan012025_ptrnGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Iniciando"));
	}
	// Initialize the factory for spawning enemies
	fabrica_enemigo = GetWorld()->SpawnActor<AFabricaEnemigo>(AFabricaEnemigo::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
	// Generate the borders of the game area
	this->generadorBordes();
	// Posicion de jugardor aleatoria
	PosicionarJugadorAleatoriamente();
	// Spawn a new bomb at a specific location
	//ABomba* nueva_bomba = GetWorld()->SpawnActor<ABomba>(FVector(1000.0f, 1000.0f, 1000.0f), FRotator(0.0f, 0.0f, 0.0f));
	bomba_primaria = GetWorld()->SpawnActor<ABomba>(FVector(2000.0f, 2000.0f, 1000.0f), FRotator(0.0f, 0.0f, 0.0f));
	visitador_rotador = GetWorld()->SpawnActor<AVisitadorRotador>(FVector::ZeroVector, FRotator::ZeroRotator);
	contenedor_enemigos = GetWorld()->SpawnActor<AContenedorEnemigo>(FVector::ZeroVector, FRotator::ZeroRotator);
}

void ABomberMan012025_ptrnGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (tiempo >= 0.7) {
		/*if (bloque_primario) {
			FVector nueva_posicion = FVector(FMath::RandRange(-1000.0f, 1000.0f), FMath::RandRange(-1000.0f, 1000.0f), FMath::RandRange(-1000.0f, 1000.0f));
			FRotator nueva_rotacion = FRotator(0.0f, 0.0f, 0.0f);
			ABloque* nuevo_bloque = bloque_primario->clonar(GetWorld(), nueva_posicion, nueva_rotacion);
			if (nuevo_bloque) {
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Bloque Clonado en Posicion: ") + nueva_posicion.ToString());
			}
		}
		tiempo = 0.0f;*/
		//ABomba* nueva_bomba = GetWorld()->SpawnActor<ABomba>(FVector(FMath::RandRange(0.0f, 2500.0f), FMath::RandRange(0.0f, 2500.0f), FMath::RandRange(0.0f, 2500.0f)), FRotator(0.0f, 0.0f, 0.0f));
		//int tipoEnemigo = FMath::RandRange(0, 2); // Genera un número aleatorio entre 0 y 2
		//FVector posicionEnemigo(FMath::RandRange(0.0f, 2500.0f), FMath::RandRange(0.0f, 2500.0f), FMath::RandRange(0.0f, 0.0f));
		// Spawn the enemy using the factory
		//AEnemigo* nuevo_enemigo = fabrica_enemigo->crearEnemigo(GetWorld(), posicionEnemigo, FRotator(0.0f, 0.0f, 0.0f), tipoEnemigo);
		
		bomba_primaria->aceptar(visitador_rotador); // Aplicamos el patrón Visitor para rotar la bomba

		// ==============================
		// PATRÓN DE DISEÑO: ITERATOR
		// Se utiliza para recorrer todos los enemigos contenidos en el objeto contenedor_enemigos,
		// sin exponer directamente su estructura interna (por ejemplo, el arreglo de enemigos).
		// Esto se logra mediante el uso de la interfaz IIterador, que define las operaciones necesarias
		// para acceder secuencialmente a cada enemigo del contenedor.
		// ==============================
		if (contenedor_enemigos)
		{
			// Creamos el iterador (devuelve un puntero a la interfaz base)
			IIterador* iterador = contenedor_enemigos->crearIterador();
			if (iterador)
			{
				// Creamos el iterador usando el método de la interfaz IIterable
				for (iterador->primero(); !iterador->fin(); iterador->siguiente())
				{
					// actual() devuelve IElemento*, lo convertimos a AEnemigo*
					// y nos aseguramos de que no sea nulo antes de usarlo.
					if (AEnemigo* enemigoActual = Cast<AEnemigo>(iterador->actual()))
					{
						
						enemigoActual->aceptar(visitador_rotador); // Aplicamos el patrón Visitor para rotar al enemigo
					}
				}

				// El iterador es un Actor que creamos con SpawnActor,
				// así que debemos destruirlo para no llenar el mundo de objetos.
				if (AActor* iteradorActor = dynamic_cast<AActor*>(iterador))
				{
					iteradorActor->Destroy();
				}
			}
		}
		// ==========================================================
	}
	if (tiempo_enemigo >= 1.7 && cantidad_enemigo < 8) {
		int tipoEnemigo = FMath::RandRange(0, 2); // Genera un número aleatorio entre 0 y 2
		FVector posicionEnemigo(FMath::RandRange(0.0f, 2500.0f), FMath::RandRange(0.0f, 2500.0f), 0.0f);
		AEnemigo* nuevo_enemigo = fabrica_enemigo->crearEnemigo(GetWorld(), posicionEnemigo, FRotator::ZeroRotator, tipoEnemigo);
		if (nuevo_enemigo && contenedor_enemigos) {
			contenedor_enemigos->agregarEnemigo(nuevo_enemigo);
			cantidad_enemigo++;
		}
		tiempo_enemigo = 0.0f;
	}
	tiempo += DeltaTime;
	tiempo_enemigo += DeltaTime;
}
//Laberinto por codigo
void ABomberMan012025_ptrnGameMode::generadorBordes()
{
	// Establecemos el tamaño del laberinto (51x51 celdas)
	TColumnas = 51;
	TFilas = 51;
	// Redimensionamos la matriz lógica para representar el laberinto
	MapaLaberinto.SetNum(TFilas);
	for (int Y = 0; Y < TFilas; Y++)
	{
		MapaLaberinto[Y].SetNum(TColumnas);
		for (int X = 0; X < TColumnas; X++)
		{
			// Solo trabaje la mitad derecha del mapa (más eficiente)
			int Mitad = TColumnas / 2;
			if (X >= Mitad)
			{
				if (X == Mitad || X == TColumnas - 1 || Y == 0 || Y == TFilas - 1)
				{
					MapaLaberinto[Y][X] = 1; 
				}
				else
				{
					MapaLaberinto[Y][X] = -1; // vacío por generar
				}
			}
			else
			{
				MapaLaberinto[Y][X] = -2; // no se usará (aún)
			}
		}
	}
	// === GENERACIÓN DE LABERINTO TIPO DFS ===

// Direcciones para movernos en saltos de 2 celdas (arriba, abajo, izq, der)

	TSet<FIntPoint> Visitadas;
	TArray<FIntPoint> Pila;
	// Direcciones para movernos en saltos de 2 celdas (arriba, abajo, izq, der)
	auto Direcciones = { FIntPoint(0, -2), FIntPoint(0, 2), FIntPoint(-2, 0), FIntPoint(2, 0) };
	// Función lambda para verificar si una posición es válida dentro del mapa
	auto Valido = [&](int X, int Y) -> bool
		{
			return X > TColumnas / 2 && Y > 0 && X < TColumnas - 1 && Y < TFilas - 1;
		};
	// Posición inicial desde la mitad derecha superior
	FIntPoint Inicio(TColumnas / 2 + 1, 1);
	Pila.Push(Inicio);
	MapaLaberinto[Inicio.Y][Inicio.X] = 0;
	Visitadas.Add(Inicio);
	// DFS iterativo: genera caminos en el laberinto
	while (Pila.Num() > 0)
	{
		FIntPoint Actual = Pila.Top();
		TArray<FIntPoint> Vecinos;
		// Buscar vecinos no visitados
		for (FIntPoint Dir : Direcciones)
		{
			FIntPoint Nuevo = Actual + Dir;
			if (Valido(Nuevo.X, Nuevo.Y) && !Visitadas.Contains(Nuevo))
			{
				Vecinos.Add(Nuevo);
			}
		}
		// Si hay vecinos válidos, elige uno al azar y continúa el recorrido
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
			Pila.Pop();// retrocede si no hay más caminos
		}
	}

	// Rellenar bloques en celdas no vacías
	for (int Y = 1; Y < TFilas - 1; Y++)
	{
		for (int X = TColumnas / 2 + 1; X < TColumnas - 1; X++)
		{
			if (MapaLaberinto[Y][X] == -1)
			{
				MapaLaberinto[Y][X] = FMath::RandRange(1, 3); // 1, 2, 3 representan tipos distintos
			}
		}
	}

	// Crear bloque primario si no existe
	if (!bloque_primario)
	{
		bloque_primario = GetWorld()->SpawnActor<ABloque>(FVector::ZeroVector, FRotator::ZeroRotator);
	}

	// === CREACIÓN VISUAL DE BLOQUES EN LA MITAD DERECHA ===
	// Espaciado entre bloques
	const float Espaciado = 200.f;
	for (int Y = 0; Y < TFilas; Y++)
	{
		for (int X = TColumnas / 2; X < TColumnas; X++)
		{
			if (MapaLaberinto[Y][X] > 0)
			{
				FVector Pos = FVector(X * Espaciado, Y * Espaciado, 0.f);
				// Aquí se aplica el patrón Prototype:
				// en lugar de instanciar un nuevo objeto, se clona el prototipo
				IClonable* clon = bloque_primario->clonar(GetWorld(), Pos, FRotator::ZeroRotator);
			}
		}
	}

	// === REFLEJO DE BLOQUES PROTOTYPE A LA MITAD IZQUIERDA ===

	for (int Y = 0; Y < TFilas; Y++)
	{
		for (int X = TColumnas / 2 + 1; X < TColumnas - 1; X++)
		{
			int Tipo = MapaLaberinto[Y][X];
			if (Tipo > 0)
			{
				// Calculamos la posición reflejada respecto al centro
				int XReflejado = TColumnas / 2 - (X - TColumnas / 2);
				MapaLaberinto[Y][XReflejado] = Tipo;

				FVector Pos = FVector(XReflejado * Espaciado, Y * Espaciado, 0.f);
				// Nuevamente aplicamos Prototype: clonamos hacia la izquierda
				IClonable* clon = bloque_primario->clonar(GetWorld(), Pos, FRotator::ZeroRotator);
			}
		}
	}

}
void ABomberMan012025_ptrnGameMode::PosicionarJugadorAleatoriamente()
{
	TArray<FVector> PosicionesValidas;
	float Espaciado = 200.0f; // Tu separación real entre bloques (usa 200 si tu clonado usa eso)
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

		// Ajustar altura del personaje
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
/*
void ABomberMan012025_ptrnGameMode::generadorBordes()
{
	this->bloque_primario = GetWorld()->SpawnActor<ABloque>(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));
	std::array<std::array<bool, 25>, 25> mapa_bloques = { {
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0,0,1},
	{1,0,1,1,1,1,0,1,0,1,0,1,0,1,0,1,1,1,0,1,0,1,1,0,1},
	{1,0,1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,1},
	{1,0,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,0,1},
	{1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,1},
	{1,1,1,0,1,0,1,1,1,1,0,1,1,1,0,1,1,1,1,1,0,1,1,0,1},
	{1,0,0,0,1,0,1,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,1,0,1},
	{1,0,1,1,1,0,1,0,1,1,1,0,0,0,0,1,1,1,0,1,1,0,1,0,1},
	{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1},
	{1,0,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,0,1,1,1},
	{1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,1,1,1,1,0,1,1,1,0,1},
	{1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1},
	{1,0,1,1,1,1,0,1,1,1,0,0,0,0,0,1,1,1,1,0,1,1,1,0,1},
	{1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1},
	{1,1,1,1,0,1,1,1,0,0,0,0,0,0,0,1,0,1,1,1,0,1,1,1,1},
	{1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1},
	{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,1,0,1},
	{1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,1},
	{1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
} };
	if (bloque_primario)
	{
		const float tamanoCelda = 200.0f;
		const FVector origen(0.0f, 0.0f, 0.0f);

		for (int fila = 0; fila < mapa_bloques.size(); ++fila)
		{
			for (int col = 0; col < mapa_bloques[fila].size(); ++col)
			{
				if (mapa_bloques[fila][col])
				{
					float x = origen.X + fila * tamanoCelda;
					float y = origen.Y + col * tamanoCelda;
					FVector posicion(x, y, origen.Z);

					IClonable* clonable = bloque_primario->clonar(GetWorld(), posicion, FRotator::ZeroRotator);
					ABloque* bloque_clonado = dynamic_cast<ABloque*>(clonable);
				}
			}
		}
	}
}
*/

