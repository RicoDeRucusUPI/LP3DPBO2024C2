class Vehicle:
    def __init__(self, plat_nomer, merk, tahun_produksi, warna):
        self.plat_nomer = plat_nomer
        self.merk = merk
        self.tahun_produksi = tahun_produksi
        self.warna = warna

    def get_plat_nomer(self):
        return self.plat_nomer

    def get_merk(self):
        return self.merk

    def get_tahun_produksi(self):
        return self.tahun_produksi

    def get_warna(self):
        return self.warna

    def get_description(self):
        return "Tidak Ada Deskripsi"