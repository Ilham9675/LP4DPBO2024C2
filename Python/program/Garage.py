# Ini adalah import kelas Car yang diperlukan.
from Car import Car

# Ini adalah deklarasi dari kelas Garage.
class Garage:
    def __init__(self):
        # Ini adalah konstruktor kelas Garage.
        self.nama_garasi = ""  # Inisialisasi nama_garasi dengan string kosong
        self.luas_garasi = 0
        self.jumlah_car = 0
        self.mobil = []  # List yang menyimpan objek-objek dari kelas Car.

    # Ini adalah metode setter untuk mengatur nilai atribut objek.
    def set_nama_garasi(self, nama_garasi):
        self.nama_garasi = nama_garasi

    def set_luas_garasi(self, luas_garasi):
        self.luas_garasi = luas_garasi

    def set_kendaraan(self, mobil):
        self.jumlah_car += 1  # Menambah jumlah mobil di garasi.
        self.mobil.append(mobil)  # Menambahkan mobil ke list.

    # Ini adalah metode getter untuk mendapatkan nilai atribut objek.
    def get_nama_garasi(self):
        return self.nama_garasi

    def get_luas_garasi(self):
        return self.luas_garasi

    def get_jumlah_car(self):
        return self.jumlah_car

    def get_mobil(self):
        return self.mobil  # Mengembalikan list yang berisi objek-objek Car.
