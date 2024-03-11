# Ini adalah import kelas Car dan Motorcycle yang diperlukan.
from Car import Car
from Motorcycle import Motorcycle

# Ini adalah deklarasi dari kelas Tampilan.
class Tampilan:
    def __init__(self, jumlah):
        # Konstruktor kelas Tampilan.
        self.kolom = [0] * jumlah

    def cek_kolom_mobil(self, car):
        # Metode untuk memeriksa dan mengatur lebar kolom berdasarkan data mobil.
        self.kolom[0] = max(self.kolom[0], len(car.get_plat_nomor()) + 2)
        self.kolom[1] = max(self.kolom[1], len(car.get_merk()) + 2)
        self.kolom[2] = max(self.kolom[2], len(car.get_warna()) + 2)
        self.kolom[3] = max(self.kolom[3], len(str(car.get_tahun_produksi())) + 2)
        self.kolom[4] = max(self.kolom[4], len(car.get_jenis_car()) + 2)
        self.kolom[5] = max(self.kolom[5], len(str(car.get_jumlah_kursi())) + 2)
        self.kolom[6] = max(self.kolom[6], len(str(car.get_jumlah_pintu())) + 2)

    def cek_kolom_motor(self, motorcycle):
        # Metode untuk memeriksa dan mengatur lebar kolom berdasarkan data motor.
        self.kolom[0] = max(self.kolom[0], len(motorcycle.get_plat_nomor()) + 2)
        self.kolom[1] = max(self.kolom[1], len(motorcycle.get_merk()) + 2)
        self.kolom[2] = max(self.kolom[2], len(motorcycle.get_warna()) + 2)
        self.kolom[3] = max(self.kolom[3], len(str(motorcycle.get_tahun_produksi())) + 2)
        self.kolom[4] = max(self.kolom[4], len(motorcycle.get_jenis_motor()) + 2)
        self.kolom[5] = max(self.kolom[5], len(str(motorcycle.get_kapasitas_tangki())) + 2)
        

    def Tampilan_tabel_Car(self, nama_header, data, nama_tabel):

        # Metode untuk menampilkan tabel data mobil.
        for i, header in enumerate(nama_header):
            self.kolom[i] = max(self.kolom[i], len(header)+2)
        
        panjang_kolom = sum(self.kolom[:7]) + 6

        # Mencetak batas atas tabel.
        print("|" + "=" * panjang_kolom + "|")
        # Mencetak nama tabel di tengah.
        print("|" + " " * ((panjang_kolom - len(nama_tabel)) // 2) + nama_tabel + " " * ((panjang_kolom - len(nama_tabel)) // 2),end="")
        if (panjang_kolom - len(nama_tabel)) % 2 == 1:
            print(" |")
        else:
            print("|")
        # Mencetak batas atas nama tabel.
        print("|" + "=" * panjang_kolom + "|")
        # Mencetak header tabel.
        print("|", end=" ")
        for i, header in enumerate(nama_header):
            print(f"{header}{' ' * (self.kolom[i] - (len(header) + 2))} |", end=" ")
        print()
        # Mencetak baris pemisah antara header dan data.
        print("|" + "=" * panjang_kolom + "|")
        # Mencetak data.
        
        for mobil in data:
            print("|", end=" ")
            
            print(f"{mobil.get_plat_nomor()}{' ' * (self.kolom[0] - (len(mobil.get_plat_nomor() )+2))} |", end=" ")
            
            print(f"{mobil.get_merk()}{' ' * (self.kolom[1] - (len(mobil.get_merk())+2))} |", end=" ")
            print(f"{mobil.get_warna()}{' ' * (self.kolom[2] - (len(mobil.get_warna())+2))} |", end=" ")
            print(f"{mobil.get_tahun_produksi()}{' ' * (self.kolom[3] - (len(str(mobil.get_tahun_produksi()))+2))} |", end=" ")
            print(f"{mobil.get_jenis_car()}{' ' * (self.kolom[4] - (len(mobil.get_jenis_car() )+2))} |", end=" ")
            print(f"{mobil.get_jumlah_kursi()}{' ' * (self.kolom[5] - (len(str(mobil.get_jumlah_kursi()))+2))} |", end=" ")
            print(f"{mobil.get_jumlah_pintu()}{' ' * (self.kolom[6] - (len(str(mobil.get_jumlah_pintu()))+2))} |")
            
            
            
        # Mencetak batas bawah tabel.
        print("|" + "=" * panjang_kolom + "|")

    def Tampilan_tabel_Motorcycle(self, nama_header, data, nama_tabel):
        # Metode untuk menampilkan tabel data motor.
        for i, header in enumerate(nama_header):
            self.kolom[i] = max(self.kolom[i], len(header)+2)
        
        panjang_kolom = sum(self.kolom[:6]) + 5

        # Mencetak batas atas tabel.
        print("|" + "=" * panjang_kolom + "|")
        # Mencetak nama tabel di tengah.
        print("|" + " " * ((panjang_kolom - len(nama_tabel)) // 2) + nama_tabel + " " * ((panjang_kolom - len(nama_tabel)) // 2),end="")
        if (panjang_kolom - len(nama_tabel)) % 2 == 1:
            print(" |")
        else:
            print("|")
        # Mencetak batas atas nama tabel.
        print("|" + "=" * panjang_kolom + "|")
        # Mencetak header tabel.
        print("|", end=" ")
        for i, header in enumerate(nama_header):
            print(f"{header}{' ' * (self.kolom[i] - (len(header) + 2))} |", end=" ")
        print()
        # Mencetak baris pemisah antara header dan data.
        print("|" + "=" * panjang_kolom + "|")
        # Mencetak data.
        
        for motor in data:
            print("|", end=" ")
            print(f"{motor.get_plat_nomor()}{' ' * (self.kolom[0] - (len(motor.get_plat_nomor())+2))} |", end=" ")
            
            
            print(f"{motor.get_merk()}{' ' * (self.kolom[1] - (len(motor.get_merk())+2))} |", end=" ")
            print(f"{motor.get_warna()}{' ' * (self.kolom[2] - (len(motor.get_warna())+2))} |", end=" ")
            print(f"{motor.get_tahun_produksi()}{' ' * (self.kolom[3] - (len(str(motor.get_tahun_produksi()))+2))} |", end=" ")
            print(f"{motor.get_jenis_motor()}{' ' * (self.kolom[4] - (len(motor.get_jenis_motor())+2))} |", end=" ")
            print(f"{motor.get_kapasitas_tangki()}{' ' * (self.kolom[5] - (len(str(motor.get_kapasitas_tangki()))+2))} |")
            
        # Mencetak batas bawah tabel.
        print("|" + "=" * panjang_kolom + "|")
