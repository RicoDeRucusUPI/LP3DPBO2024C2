from Garage import Garage

class ParkingLot(Garage):
    def __init__(self, name, size, capacity):
        super().__init__(name, size)
        self.capacity = capacity
        self.current_vehicles = 0

    def get_kapasitas(self):
        return self.capacity

    def get_jumlah_kendaraan(self):
        self.current_vehicles = len(self.get_daftar_kendaraan_mobil()) + len(self.get_daftar_kendaraan_motor())
        return self.current_vehicles

    def add_vehicle(self, vehicle):
        if len(self.get_daftar_kendaraan_mobil()) + len(self.get_daftar_kendaraan_motor()) < self.capacity:
            super().add_vehicle(vehicle)
        else:
            print("Parking lot is full")