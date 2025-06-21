#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DecoradorColor.h"
#include "Bomba.generated.h"

UCLASS()
class BOMBERMAN012025_PTRN_API ABomba : public AActor, public IDecoradorColor
{
    GENERATED_BODY()

public:
    ABomba();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void colorearBomba(class AActor* bomba) override;

    UStaticMeshComponent* GetMeshComponent() const { return meshComponent; }

private:
    UPROPERTY()
    UStaticMeshComponent* meshComponent;

    UPROPERTY()
    UMaterialInterface* material;

    TArray<FString> rutasMateriales;

    FVector tamanio;
    float tiempo_bomba;
};
