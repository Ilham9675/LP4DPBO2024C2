# Ini adalah import kelas Car dan Motorcycle yang diperlukan.
from Car import Car
from Motorcycle import Motorcycle

# Ini adalah deklarasi dari kelas ParkingLot.
class Parkinglot:
    def __init__(self, kapasitas_mobil=0, kapasitas_motor=0, nama=""):
        # Ini adalah konstruktor kelas ParkingLot.
        self.nama = nama
        self.kapasitas_motor = kapasitas_motor
        self.jumlah_motor = 0
        self.kapasitas_mobil = kapasitas_mobil
        self.jumlah_mobil = 0
        self.mobil = []  # List yang menyimpan objek-objek dari kelas Car.
        self.motor = []  # List yang menyimpan objek-objek dari kelas Motorcycle.

    # Ini adalah metode setter untuk mengatur nilai atribut objek.
    def set_nama(self, nama):
        self.nama = nama

    def set_kapasitas_mobil(self, kapasitas_mobil):
        self.kapasitas_mobil = kapasitas_mobil

    def set_kapasitas_motor(self, kapasitas_motor):
        self.kapasitas_motor = kapasitas_motor

    def set_mobil(self, mobil):
        self.jumlah_mobil += 1  # Menambah jumlah mobil di parkir.
        self.mobil.append(mobil)  # Menambahkan mobil ke list.

    def set_motor(self, motor):
        self.jumlah_motor += 1  # Menambah jumlah motor di parkir.
        self.motor.append(motor)  # Menambahkan motor ke list.

    # Ini adalah metode getter untuk mendapatkan nilai atribut objek.
    def get_nama(self):
        return self.nama

    def get_kapasitas_mobil(self):
        return self.kapasitas_mobil

    def get_kapasitas_motor(self):
        return self.kapasitas_motor

    def get_jumlah_motor(self):
        return self.jumlah_motor

    def get_jumlah_mobil(self):
        return self.jumlah_mobil

    def get_mobil(self):
        return self.mobil  # Mengembalikan list yang berisi objek-objek Car.

    def get_motor(self):
        return self.motor  # Mengembalikan list yang berisi objek-objek Motorcycle.

    # Tidak diperlukan destruktor dalam Python karena Garbage Collection akan menangani pelepasan memori.

