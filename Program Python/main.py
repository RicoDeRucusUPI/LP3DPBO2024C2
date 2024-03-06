
# ==========================================================================
# Saya Rico Valentino 1909263 mengerjakan (LP3)
# dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak
# melakukan kecurangan seperti yang telah dispesifikasikan.
# ==========================================================================

from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage
from ParkingLot import ParkingLot

car1 = Car("D 1111 AAA", "Fortuner", "2009", "Merah", "4", "4")
car2 = Car("D 2222 AAA", "BMW", "2010", "Biru", "2", "2")
car3 = Car("D 3333 AAA", "Alya", "2011", "Kuning", "4", "4")

motorcycle1 = Motorcycle("F AAAA XXX", "Mio", "2011", "Hitam", "Matic", "2 Liter")
motorcycle2 = Motorcycle("F BBBB XXX", "Nmax", "2012", "Putih", "Matic", "2 Liter")
motorcycle3 = Motorcycle("F CCCC XXX", "Revo", "2013", "Merah", "Bebek", "2 Liter")

parking_lot = ParkingLot("Garasi Tua", "50m x 10m", 20)

parking_lot.add_vehicle(car1)
parking_lot.add_vehicle(car2)
parking_lot.add_vehicle(car3)
parking_lot.add_vehicle(motorcycle1)
parking_lot.add_vehicle(motorcycle2)
parking_lot.add_vehicle(motorcycle3)

print(f"Nama Garasi: {parking_lot.get_nama_garasi()}")
print(f"Luas Garasi: {parking_lot.get_luas_garasi()}")
print(f"Kapasitas kendaraan: {parking_lot.get_kapasitas()}")
print(f"Jumlah kendaraan Saat Ini: {parking_lot.get_jumlah_kendaraan()}")
print(f"Daftar kendaraan: \n{'Plat Nomer'.ljust(15)}{'Merk'.ljust(20)}{'Tahun Produksi'.ljust(20)}{'Warna'.ljust(10)}{'Deskripsi'.ljust(10)}")

for kendaraan in parking_lot.get_daftar_kendaraan_motor():
    print(f"{kendaraan.get_plat_nomer().ljust(15)}{kendaraan.get_merk().ljust(20)}{kendaraan.get_tahun_produksi().ljust(20)}{kendaraan.get_warna().ljust(10)}{kendaraan.get_description().ljust(10)}")

for kendaraan in parking_lot.get_daftar_kendaraan_mobil():
    print(f"{kendaraan.get_plat_nomer().ljust(15)}{kendaraan.get_merk().ljust(20)}{kendaraan.get_tahun_produksi().ljust(20)}{kendaraan.get_warna().ljust(10)}{kendaraan.get_description().ljust(10)}")
