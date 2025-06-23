#include "Bomba.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "DecoradorColorAleatorio.h"

ABomba::ABomba()
{
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cuerpo"));
	RootComponent = Mesh;

	Mecha = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mecha"));
	Mecha->SetupAttachment(Mesh);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CuerpoMesh(TEXT("/Game/StarterContent/Modelos3dzx/bombs/bomb1/Bomba_Cylinder002.Bomba_Cylinder002"));
	if (CuerpoMesh.Succeeded())
	{
		Mesh->SetStaticMesh(CuerpoMesh.Object);
		Mesh->SetWorldScale3D(EscalaInicial); // ← Escala inicial
	}

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MechaMesh(TEXT("/Game/StarterContent/Modelos3dzx/bombs/bomb1/Bomba_Object001.Bomba_Object001"));
	if (MechaMesh.Succeeded())
	{
		Mecha->SetStaticMesh(MechaMesh.Object);
		Mecha->SetRelativeLocation(FVector(0, 0, 5));
	}
	tamanio = FVector(2.0f);
	tiempo_bomba = 0.0f;
}

void ABomba::BeginPlay()
{
	Super::BeginPlay();
	SetActorScale3D(tamanio);
	// Instanciamos el decorador
	decorador = new DecoradorColorAleatorio(this);
}


void ABomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	tiempo_bomba += DeltaTime;

	if (tiempo_bomba >= 2.5f && decorador)
	{
		decorador->colorear();  // Llama al decorador
		tiempo_bomba = 0.0f;
	}
}
//// Método para aceptar un visitante
void ABomba::aceptar(IVisitante* visitador)
{
	if (visitador)
	{
		visitador->visitar(this);
	}
}
