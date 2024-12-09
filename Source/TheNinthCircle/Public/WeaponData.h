// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WeaponData.generated.h"


UCLASS()
class THENINTHCIRCLE_API UWeaponData : public UPrimaryDataAsset
{
	GENERATED_BODY()

private:
	UPROPERTY()
	int32 BaseDamage;

	UPROPERTY()
	int32 MagazineCapacity;

	UPROPERTY()
	int32 RPM;
	
	UPROPERTY()
	float ReloadSpeed;

	UPROPERTY()
	FString WeaponName;

	UFUNCTION(BlueprintCallable)
	void initWeaponData(FString name, int32 damage, float reloadtime, int32 rof, int32 capacity) {
		WeaponName = name;
		BaseDamage = damage;
		ReloadSpeed = reloadtime;
		RPM = rof;
		MagazineCapacity = capacity;
	}
	
	UFUNCTION(BlueprintCallable)
	FString getWeaponName() {
		return WeaponName;
	}

	UFUNCTION(BlueprintCallable)
	int getBaseDamage() {
		return BaseDamage;
	}

	UFUNCTION(BlueprintCallable) 
	int getMagazineCapacity() {
		return MagazineCapacity;
	}

	UFUNCTION(BlueprintCallable)
	float getReloadSpeed() {
		return ReloadSpeed;
	}

	UFUNCTION(BlueprintCallable)
	int getRPM() {
		return RPM;
	}
};


