from Vehicle import Vehicle

class Car(Vehicle):
    def __init__(self, plat_nomer, merk, tahun_produksi, warna, jumlah_pintu, jumlah_kursi):
        super().__init__(plat_nomer, merk, tahun_produksi, warna)
        self.jumlah_pintu = jumlah_pintu
        self.jumlah_kursi = jumlah_kursi

    def get_jumlah_pintu(self):
        return self.jumlah_pintu

    def get_jumlah_kursi(self):
        return self.jumlah_kursi

    def get_description(self):
        return f"Jumlah Pintu: {self.jumlah_pintu}, Jumlah Kursi: {self.jumlah_kursi}"