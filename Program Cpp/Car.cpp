#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Vehicle.cpp"

using namespace std;

class Car : public Vehicle
{
	// Class Car melakukan Inheritance kepada kelas Vechicle 

private:
	string jumlah_kursi;
	string jumlah_pintu;
	// Variabel yang dibutuhkan
	
public:
	Car(string plat_nomer, string merk, string tahun_produksi, string warna, string jumlah_pintu, string jumlah_kursi) : Vehicle(plat_nomer, merk, tahun_produksi, warna){
		this->jumlah_pintu = jumlah_pintu;
		this->jumlah_kursi = jumlah_kursi;
	}
	// Constructor

	string getJumlahPintu(){
		return this->jumlah_pintu;
	}
	
	string getJumlahKursi(){
		return this->jumlah_kursi;
	}

	string getDescription(){
		return "Jumlah Pintu: " + this->jumlah_pintu + ", " + "Jumlah Kursi: " + this->jumlah_kursi;
	}
};