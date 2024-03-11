# Baris ini memastikan bahwa kelas hanya dideklarasikan sekali dalam satu modul.

# Ini adalah deklarasi dari kelas Vehicle.
class Vehicle:
    def __init__(self, plat_nomor="", merk="", warna="", tahun_produksi=0):
        # Ini adalah konstruktor kelas Vehicle.
        self.plat_nomor = plat_nomor
        self.merk = merk
        self.warna = warna
        self.tahun_produksi = tahun_produksi

    # Ini adalah metode setter untuk mengatur nilai atribut objek.
    def set_plat_nomor(self, plat_nomor):
        self.plat_nomor = plat_nomor

    def set_merk(self, merk):
        self.merk = merk

    def set_warna(self, warna):
        self.warna = warna

    def set_tahun_produksi(self, tahun_produksi):
        self.tahun_produksi = tahun_produksi

    # Ini adalah metode getter untuk mendapatkan nilai atribut objek.
    def get_plat_nomor(self):
        return self.plat_nomor

    def get_merk(self):
        return self.merk

    def get_warna(self):
        return self.warna

    def get_tahun_produksi(self):
        return self.tahun_produksi

  