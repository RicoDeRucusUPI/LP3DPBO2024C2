#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Garage.cpp"

using namespace std;

class ParkingLot : public Garage
{
	// Class ParkingLot yang melakukan inheritance kepada class Garage

private:
	int kapasitas;
	int jumlah_kendaraan_saat_ini;
	// variable yang dibutuhkan
	
public:
	ParkingLot(string nama_garasi, string luas_garasi, int kapasitas) : Garage(nama_garasi, luas_garasi){
		this->kapasitas = kapasitas;
	}
	// Constructor

	int getKapasitas(){
		return this->kapasitas;
	}
	
	int getJumlahKendaraan(){
		this->jumlah_kendaraan_saat_ini = 0;
		for (auto kendaraan : this->getDaftarKendaraanMotor())
		{
			this->jumlah_kendaraan_saat_ini++;
		}
		for (auto kendaraan : this->getDaftarKendaraanMobil())
		{
			this->jumlah_kendaraan_saat_ini++;
		}

		return this->jumlah_kendaraan_saat_ini;
	}
};