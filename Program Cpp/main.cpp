/* 
    ==========================================================================
    Saya Rico Valentino 1909263 mengerjakan (LP3)
    dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan.
    ==========================================================================
*/

#include <bits/stdc++.h>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Garage.cpp"
#include "ParkingLot.cpp"
// Deklarasi namespace
using namespace std;

// Fungsi main() yang digunakan sebagai program utama
int main() {
    ios::sync_with_stdio(0);
    cin.tie();


    Car car1("D 1111 AAA", "Fortuner", "2009", "Merah", "4", "4");
    Car car2("D 2222 AAA", "BMW", "2010", "Biru", "2", "2");
    Car car3("D 3333 AAA", "Alya", "2011", "Kuning", "4", "4");
    // Memanggil Kelas Car

    Motorcycle motorcycle1("F AAAA XXX", "Mio", "2011", "Hitam", "Matic", "2 Liter");
    Motorcycle motorcycle2("F BBBB XXX", "Nmax", "2012", "Putih", "Matic", "2 Liter");
    Motorcycle motorcycle3("F CCCC XXX", "Revo", "2013", "Merah", "Bebek", "2 Liter");
    // Memanggil Kelas Motorcycle

    ParkingLot parkingLot("Garasi Tua", "50m x 10m", 20);
    // Memanggil Kelas ParkingLot

    parkingLot.addKendaraan(car1);
    parkingLot.addKendaraan(car2);
    parkingLot.addKendaraan(car3);
    parkingLot.addKendaraan(motorcycle1);
    parkingLot.addKendaraan(motorcycle2);
    parkingLot.addKendaraan(motorcycle3);
    // Menambahkan kendaraan ke ParkingLot


    cout << "Nama Garasi: " << parkingLot.getNamaGarasi() << endl;
    cout << "Luas Garasi: " << parkingLot.getLuasGarasi() << endl;
    cout << "Kapasitas kendaraan:" << parkingLot.getKapasitas() << endl;
    cout << "Jumlah kendaraan Saat Ini: " << parkingLot.getJumlahKendaraan() << endl;
    cout << "Daftar kendaraan: " << endl;
    cout << left << setw(15)  << "Plat Nomer"
    << setw(20) << "Merk"
    << setw(20) << "Tahun Produksi"
    << setw(10)  << "Warna"
    << setw(10)  << "Deskripsi"
    << endl;
    // Print Title

    for (auto kendaraan : parkingLot.getDaftarKendaraanMotor())
    {
        cout << left << setw(15)  << kendaraan.getPlatNomer()
        << setw(20) << kendaraan.getMerk()
        << setw(20) << kendaraan.getTahunProduksi()
        << setw(10)  << kendaraan.getWarna()
        << setw(10)  << kendaraan.getDescription()
        << endl;
    }
    // Print Kendaraan Motor

    for (auto kendaraan : parkingLot.getDaftarKendaraanMobil())
    {
        cout << left << setw(15)  << kendaraan.getPlatNomer()
        << setw(20) << kendaraan.getMerk()
        << setw(20) << kendaraan.getTahunProduksi()
        << setw(10)  << kendaraan.getWarna()
        << setw(10)  << kendaraan.getDescription()
        << endl;
    }

    // Print Kendaraan Mobil
    return 0;
}