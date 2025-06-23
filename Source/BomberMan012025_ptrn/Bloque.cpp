#include "Bloque.h"
#include "Components/StaticMeshComponent.h"
#include "DecoradorColorAleatorio.h"


ABloque::ABloque()
{
    PrimaryActorTick.bCanEverTick = true;
    meshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = meshComponent;
    UStaticMesh* meshAsset = LoadObject<UStaticMesh>(nullptr, TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (meshAsset)
    {
        meshComponent->SetStaticMesh(meshAsset);
    }
    material = LoadObject<UMaterialInterface>(nullptr, TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel'"));
    if (material)
    {
        meshComponent->SetMaterial(0, material);
    }
    posicion = FVector::ZeroVector;
    rotacion = FRotator::ZeroRotator;
    tamanio = FVector(2.0f);
    tiempo_bloque = 0.0f;
    tiempo_decorar = 0.0f;
}

void ABloque::BeginPlay()
{
    Super::BeginPlay();
    SetActorScale3D(tamanio);
    decorador = new DecoradorColorAleatorio(this);
}

void ABloque::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
   /* tiempo_bloque += DeltaTime; */
    tiempo_decorar += DeltaTime;

   /* if (tiempo_bloque >= 0.3f)
    {
        rotacion.Add(0.0f, 1.0f, 0.0f);
        SetActorRotation(rotacion);
        tiempo_bloque = 0.0f;
    }
   */
    if (tiempo_decorar >= 1.5f && decorador)
    {
        decorador->colorear();
        tiempo_decorar = 0.0f;
    }
}

IClonable* ABloque::clonar(UWorld* _mundo, FVector _posicion, FRotator _rotacion)
{
    if (!_mundo) return nullptr;

    FActorSpawnParameters params;
    ABloque* nuevo_bloque = _mundo->SpawnActor<ABloque>(GetClass(), _posicion, _rotacion, params);

    if (nuevo_bloque)
    {
        nuevo_bloque->tamanio = this->tamanio;
        nuevo_bloque->material = this->material;
        nuevo_bloque->SetActorScale3D(tamanio);
        nuevo_bloque->meshComponent->SetStaticMesh(meshComponent->GetStaticMesh());
        nuevo_bloque->meshComponent->SetMaterial(0, material);

        return Cast<IClonable>(nuevo_bloque);
    }

    return nullptr;
}
//// Implementación del patrón Visitor
void ABloque::aceptar(IVisitante* visitador)
{
	if (visitador)
	{
		visitador->visitar(this);
	}
}