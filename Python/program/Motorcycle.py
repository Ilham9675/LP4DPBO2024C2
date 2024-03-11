# Ini adalah import kelas Vehicle yang diperlukan.
from Vehicle import Vehicle

# Ini adalah deklarasi dari kelas Motorcycle yang merupakan turunan dari kelas Vehicle.
class Motorcycle(Vehicle):
    def __init__(self):
        # Ini adalah konstruktor kelas Motorcycle.
        super().__init__()  # Memanggil konstruktor kelas induk (Vehicle)
        self.jenis_motor = ""  # Inisialisasi jenis_motor dengan string kosong
        self.kapasitas_tangki = 0

    # Ini adalah metode setter untuk mengatur nilai atribut objek.
    def set_jenis_motor(self, jenis_motor):
        self.jenis_motor = jenis_motor

    def set_kapasitas_tangki(self, kapasitas_tangki):
        self.kapasitas_tangki = kapasitas_tangki

    # Ini adalah metode getter untuk mendapatkan nilai atribut objek.
    def get_jenis_motor(self):
        return self.jenis_motor

    def get_kapasitas_tangki(self):
        return self.kapasitas_tangki

