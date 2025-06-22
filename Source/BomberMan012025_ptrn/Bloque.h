#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IDecoradorColor.h"
#include "Clonable.h"
#include "Visitable.h"
#include "Bloque.generated.h"

UCLASS()
class BOMBERMAN012025_PTRN_API ABloque : public AActor, public IClonable, public IVisitable
{
    GENERATED_BODY()

public:
    ABloque();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    virtual IClonable* clonar(UWorld* _mundo, FVector _posicion, FRotator _rotacion) override;
	UStaticMeshComponent* GetMeshComponent() const { return meshComponent; }
    virtual void aceptar(IVisitante* visitador) override;

private:
    UPROPERTY()
    class UStaticMeshComponent* meshComponent;

    UPROPERTY()
    class UMaterialInterface* material;

/*    TArray<FString> rutasMateriales;*/

    FVector posicion;
    FVector tamanio;
    FRotator rotacion;
    float tiempo_bloque;
    float tiempo_decorar;
    IIDecoradorColor* decorador; // Nuevo: decorador externo
};
