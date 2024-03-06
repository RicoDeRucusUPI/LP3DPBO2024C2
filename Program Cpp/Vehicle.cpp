// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

#include <iostream>
#include <string>
#include <vector>
// Memasukan library yang digunakan

using namespace std;

class Vehicle
{
	// Class Vehicle untuk parent dari Class Car dan Motorcycle

private:
	string plat_nomer;
	string merk;
	string tahun_produksi;
	string warna;
	// Atribute yang dibutuhkan

public:
	Vehicle(string plat_nomer, string merk, string tahun_produksi, string warna){
		this->plat_nomer = plat_nomer;
		this->merk = merk;
		this->tahun_produksi = tahun_produksi;
		this->warna = warna;
	}
	// Constructor

	string getPlatNomer(){
		return this->plat_nomer;
	}
	
	string getMerk(){
		return this->merk;
	}

	string getTahunProduksi(){
		return this->tahun_produksi;
	}

	string getWarna(){
		return this->warna;
	}

	string getDescription(){
		return "Tidak Ada Deskripsi";
	}

};