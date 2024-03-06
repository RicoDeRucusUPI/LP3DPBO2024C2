#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"

using namespace std;

class Garage
{
	// Class Garage untuk parent dari class ParkingLot karena menurut saya itu saling berhubungan

private:
	string nama_garasi;
	string luas_garasi;
	vector<Car> daftar_kendaraan_mobil;
	vector<Motorcycle> daftar_kendaraan_motor;
	// Variable yang dibutuhkan
	// vector digunakan untuk melakukan array of object pada class Car dan Motorcycle
	// Melakukan Composite dari class Car dan Motorcycle yang dimasukan kedalam Vector

	
public:
	Garage(string nama_garasi, string luas_garasi){
		this->nama_garasi = nama_garasi;
		this->luas_garasi = luas_garasi;
	}
	// Constructor 


	Garage(string nama_garasi, string luas_garasi, Car daftar_kendaraan){
		this->nama_garasi = nama_garasi;
		this->luas_garasi = luas_garasi;
		this->daftar_kendaraan_mobil.push_back(daftar_kendaraan);
	}
	// Constructor: Overloading

	Garage(string nama_garasi, string luas_garasi, Motorcycle daftar_kendaraan){
		this->nama_garasi = nama_garasi;
		this->luas_garasi = luas_garasi;
		this->daftar_kendaraan_motor.push_back(daftar_kendaraan);
	}
	// Constructor: Overloading

	string getNamaGarasi(){
		return this->nama_garasi;
	}
	
	string getLuasGarasi(){
		return this->luas_garasi;
	}

	void addKendaraan(Car daftar_kendaraan){
		this->daftar_kendaraan_mobil.push_back(daftar_kendaraan);
	}

	void addKendaraan(Motorcycle daftar_kendaraan){
		this->daftar_kendaraan_motor.push_back(daftar_kendaraan);
	}
	// Function: Overloading

	vector<Car> getDaftarKendaraanMobil(){
		return this->daftar_kendaraan_mobil;
	}

	vector<Motorcycle> getDaftarKendaraanMotor(){
		return this->daftar_kendaraan_motor;
	}
};