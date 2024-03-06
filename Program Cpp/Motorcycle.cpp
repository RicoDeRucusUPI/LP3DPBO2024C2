#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Vehicle.cpp"

using namespace std;

class Motorcycle : public Vehicle
{
	// Class Motorcycle melakukan inheritance kepada kelas Vehicle

private:
	string jenis_motor;
	string kapasitas_tangki;
	// Variable yang dibutuhkan

public:
	Motorcycle(string plat_nomer, string merk, string tahun_produksi, string warna, string jenis_motor, string kapasitas_tangki) : Vehicle(plat_nomer, merk, tahun_produksi, warna){
		this->jenis_motor = jenis_motor;
		this->kapasitas_tangki = kapasitas_tangki;
	}
	// Contrutor

	string getJenisMotor(){
		return this->jenis_motor;
	}
	
	string getKapasitasTangki(){
		return this->kapasitas_tangki;
	}

	string getDescription(){
		return "Jenis Motor: " + this->jenis_motor + ", " + "Kapasitas Tangki: " + this->kapasitas_tangki;
	}
};