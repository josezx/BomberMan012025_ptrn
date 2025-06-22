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
    /*
    rutasMateriales = {
        TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel'"),
        TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/Fuego.Fuego'"),
        TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/Fuego.Fuego'"),
        TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'"),
        TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'"),
        TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Water_Ocean.M_Water_Ocean'"),
        TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Water_Ocean.M_Water_Ocean'")
    };
    */
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
    tiempo_bloque += DeltaTime;
    tiempo_decorar += DeltaTime;

    if (tiempo_bloque >= 0.3f)
    {
        rotacion.Add(0.0f, 1.0f, 0.0f);
        SetActorRotation(rotacion);
        tiempo_bloque = 0.0f;
    }

    if (tiempo_decorar >= 1.5f && decorador)
    {
        decorador->colorear();
        tiempo_decorar = 0.0f;
    }
    /*
    if (tiempo_bloque >= 0.3f) {
        rotacion.Add(0.0f, 1.0f, 0.0f);
        SetActorRotation(rotacion);
        tiempo_bloque = 0.0f;
    }
    
	if (tiempo_decorar >= 1.5f) {
		colorearBomba(this);
		tiempo_decorar = 0.0f;
	}
    tiempo_bloque += DeltaTime;
	tiempo_decorar += DeltaTime;
    */
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

/*
void ABloque::colorearBomba(AActor* _bloque)
{
    if (!_bloque || !material) return;
    ABloque* bloque_real = Cast<ABloque>(_bloque);
    if (bloque_real)
    {
        int index = FMath::RandRange(0, rutasMateriales.Num() - 1);
        UMaterialInterface* nuevoMaterial = LoadObject<UMaterialInterface>(nullptr, *rutasMateriales[index]);
        if (nuevoMaterial)
        {
            bloque_real->GetMeshComponent()->SetMaterial(0, nuevoMaterial);
        }
    }
}
*/

void ABloque::aceptar(IVisitante* visitador)
{
	if (visitador)
	{
		visitador->visitar(this);
	}
}