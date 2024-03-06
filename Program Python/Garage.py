from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle

class Garage:
    def __init__(self, name, size):
        self.name = name
        self.size = size
        self.cars = []
        self.motorcycles = []

    def add_vehicle(self, vehicle):
        if isinstance(vehicle, Car):
            self.cars.append(vehicle)
        elif isinstance(vehicle, Motorcycle):
            self.motorcycles.append(vehicle)
        else:
            raise ValueError("Invalid vehicle type")

    def get_daftar_kendaraan_mobil(self):
        return self.cars

    def get_daftar_kendaraan_motor(self):
        return self.motorcycles

    def get_nama_garasi(self):
        return self.name

    def get_luas_garasi(self):
        return self.size

    def __str__(self):
        return f"Garage: {self.name}, Size: {self.size}, Cars: {self.cars}, Motorcycles: {self.motorcycles}"