from Vehicle import Vehicle

class Motorcycle(Vehicle):
    def __init__(self, plat_nomer, merk, tahun_produksi, warna, jenis_motor, kapasitas_tangki):
        super().__init__(plat_nomer, merk, tahun_produksi, warna)
        self.jenis_motor = jenis_motor
        self.kapasitas_tangki = kapasitas_tangki

    def get_jenis_motor(self):
        return self.jenis_motor

    def get_kapasitas_tangki(self):
        return self.kapasitas_tangki

    def get_description(self):
        return f"Jenis Motor: {self.jenis_motor}, Kapasitas Tangki: {self.kapasitas_tangki}"