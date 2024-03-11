# Ini adalah import kelas Vehicle yang diperlukan.
from Vehicle import Vehicle

# Ini adalah deklarasi dari kelas Car yang merupakan turunan dari kelas Vehicle.
class Car(Vehicle):
    def __init__(self, jumlah_kursi=0, jumlah_pintu=0):
        # Ini adalah konstruktor kelas Car.
        super().__init__()  # Memanggil konstruktor kelas induk (Vehicle)
        self.jenis_car = "" # Inisialisasi jenis_car dengan string kosong
        self.jumlah_kursi = jumlah_kursi
        self.jumlah_pintu = jumlah_pintu

    # Ini adalah metode setter untuk mengatur nilai atribut objek.
    def set_jenis_car(self, jenis_car):
        self.jenis_car = jenis_car

    def set_jumlah_kursi(self, jumlah_kursi):
        self.jumlah_kursi = jumlah_kursi

    def set_jumlah_pintu(self, jumlah_pintu):
        self.jumlah_pintu = jumlah_pintu

    # Ini adalah metode getter untuk mendapatkan nilai atribut objek.
    def get_jenis_car(self):
        return self.jenis_car

    def get_jumlah_kursi(self):
        return self.jumlah_kursi

    def get_jumlah_pintu(self):
        return self.jumlah_pintu

