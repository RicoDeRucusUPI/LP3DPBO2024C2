Saya Rico Valentino 1909263 mengerjakan (LP3) dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.

# Alur OPP
## Membuat 5 class Vehicle, Car, Motorcycle, Garage, ParkingLot

## Konsep Inheritance
Vehicle
	<- Car
	<- Motorcycle

Garage
	<- ParkingLot

Class Vehicle melakukan inheritance dengan Class Car
Class Car melakukan inheritance dengan Class Motorcycle

Class Garage melakukan inheritance dengan Class ParkingLot

## Konsep Composite
Garage <- Vechile (Car & Motorcycle)

Class Garage membutuhkan class Car dan Motorcycle untuk variabel atau Composite


## Running Program
### Untuk Cpp
g++ main.cpp -o main.exe
main.exe

### untuk Python
python main.py
