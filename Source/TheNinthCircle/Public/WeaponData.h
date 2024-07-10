// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WeaponData.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FWeaponInformation {
	GENERATED_BODY()

public:

	UPROPERTY()
	int32 BaseDamage;

	UPROPERTY()
	int32 MagazineCapacity;

	UPROPERTY()
	float ReloadSpeed;

	UPROPERTY()
	int32 RPM;

	UPROPERTY()
	FString WeaponName;
};


UCLASS()
class THENINTHCIRCLE_API UWeaponData : public UPrimaryDataAsset
{
	GENERATED_BODY()

	UPROPERTY()
	FWeaponInformation Telemetry;

	UFUNCTION(BlueprintCallable)
	void initWeaponData(FString name, int32 damage, float reloadtime, int32 rof, int32 capacity) {
		Telemetry.WeaponName = name;
		Telemetry.BaseDamage = damage;
		Telemetry.ReloadSpeed = reloadtime;
		Telemetry.RPM = rof;
		Telemetry.MagazineCapacity = capacity;
	}
	
	UFUNCTION(BlueprintCallable)
	FString getWeaponName() {
		return Telemetry.WeaponName;
	}

	UFUNCTION(BlueprintCallable)
	int getBaseDamage() {
		return Telemetry.BaseDamage;
	}

	UFUNCTION(BlueprintCallable) 
	int getMagazineCapacity() {
		return Telemetry.MagazineCapacity;
	}

	UFUNCTION(BlueprintCallable)
	float getReloadSpeed() {
		return Telemetry.ReloadSpeed;
	}

	UFUNCTION(BlueprintCallable)
	int getRPM() {
		return Telemetry.RPM;
	}
};


