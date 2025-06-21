#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DecoradorColor.h"
#include "Bloque.generated.h"


UCLASS()
class BOMBERMAN012025_PTRN_API ABloque : public AActor, public IDecoradorColor
{
    GENERATED_BODY()

public:
    ABloque();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    ABloque* clonar(UWorld* _mundo, FVector _posicion, FRotator _rotacion);

	UStaticMeshComponent* GetMeshComponent() const { return meshComponent; }

	virtual void colorearBomba(class AActor* _bloque) override;


private:
    UPROPERTY()
    class UStaticMeshComponent* meshComponent;

    UPROPERTY()
    class UMaterialInterface* material;

    TArray<FString> rutasMateriales;

    FVector posicion;
    FVector tamanio;
    FRotator rotacion;
    float tiempo_bloque;
    float tiempo_decorar;
};
