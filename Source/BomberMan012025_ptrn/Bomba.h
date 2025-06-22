#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IDecoradorColor.h"
#include "Visitable.h"
#include "Bomba.generated.h"

UCLASS()
class BOMBERMAN012025_PTRN_API ABomba : public AActor, public IVisitable
{
    GENERATED_BODY()

public:
    ABomba();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    UStaticMeshComponent* GetMeshComponent() const { return meshComponent; }
	virtual void aceptar(class IVisitante* visitador) override;

private:
    UPROPERTY()
    UStaticMeshComponent* meshComponent;

   /* UPROPERTY()
    UMaterialInterface* material;

    TArray<FString> rutasMateriales;
    */
    FVector tamanio;
    float tiempo_bomba;
    IIDecoradorColor* decorador;  // Aquí usaremos el decorador
};
