from Garage import Garage
from Motorcycle import Motorcycle
from Car import Car
from Parkinglot import Parkinglot
from Tampilan import Tampilan

if __name__ == "__main__":
    # inisialisasi nama kolom mobil dan motor
    namakolommobil = ["plat nomer", "merk", "warna", "tahun produksi", "jenis mobil", "jumlah kursi", "jumlah pintu"]
    namakolommotor = ["plat nomer", "merk", "warna", "tahun produksi", "jenis motor", "kapasitas tangki"]

    # inisialisasi nama panjang kolom
    tabelmobilgarbaga = Tampilan(len(namakolommobil))
    tabelmobilparkirlot = Tampilan(len(namakolommobil))
    tabelmotorparkirlot = Tampilan(len(namakolommotor))

    # pemasukan data parking lot dan garage
    temp_mobil = Car()
    temp_mobil.set_plat_nomor("AB 1234 CD")
    temp_mobil.set_merk("Toyota")
    temp_mobil.set_warna("Merah")
    temp_mobil.set_tahun_produksi(2020)
    temp_mobil.set_jenis_car("SUV")
    temp_mobil.set_jumlah_kursi(5)
    temp_mobil.set_jumlah_pintu(4)

    tabelmobilgarbaga.cek_kolom_mobil(temp_mobil)

    garasi = Garage()
    garasi.set_nama_garasi("garasi pak mamat")
    garasi.set_luas_garasi(20)
    garasi.set_kendaraan(temp_mobil)

    temp_mobil.set_plat_nomor("AB 1240 CD")
    temp_mobil.set_merk("Suzuki")
    temp_mobil.set_warna("Hitam")
    temp_mobil.set_tahun_produksi(2022)
    temp_mobil.set_jenis_car("Hatchback")
    temp_mobil.set_jumlah_kursi(4)
    temp_mobil.set_jumlah_pintu(4)

    garasi.set_kendaraan(temp_mobil)
    tabelmobilgarbaga.cek_kolom_mobil(temp_mobil)

    parkiranmodern = Parkinglot()
    parkiranmodern.set_kapasitas_mobil(50)
    parkiranmodern.set_kapasitas_motor(10)
    parkiranmodern.set_nama("parkiran blok z")

    temp_motor = Motorcycle()
    temp_motor.set_plat_nomor("AB 1234 CD")
    temp_motor.set_merk("Toyota")
    temp_motor.set_warna("Merah")
    temp_motor.set_tahun_produksi(2020)
    temp_motor.set_jenis_motor("motor merah")
    temp_motor.set_kapasitas_tangki(982)

    parkiranmodern.set_motor(temp_motor)
    tabelmotorparkirlot.cek_kolom_motor(temp_motor)

    temp_motor.set_plat_nomor("AB 1231 CD")
    temp_motor.set_merk("Honda")
    temp_motor.set_warna("Merah")
    temp_motor.set_tahun_produksi(2020)
    temp_motor.set_jenis_motor("Sport")
    temp_motor.set_kapasitas_tangki(1000)

    parkiranmodern.set_motor(temp_motor)
    tabelmotorparkirlot.cek_kolom_motor(temp_motor)

    temp_motor.set_plat_nomor("AB 1232 CD")
    temp_motor.set_merk("Yamaha")
    temp_motor.set_warna("Biru")
    temp_motor.set_tahun_produksi(2021)
    temp_motor.set_jenis_motor("Matic")
    temp_motor.set_kapasitas_tangki(1100)

    parkiranmodern.set_motor(temp_motor)
    tabelmotorparkirlot.cek_kolom_motor(temp_motor)

    temp_motor.set_plat_nomor("AB 1240 CD")
    temp_motor.set_merk("Suzuki")
    temp_motor.set_warna("Hitam")
    temp_motor.set_tahun_produksi(2022)
    temp_motor.set_jenis_motor("Trail")
    temp_motor.set_kapasitas_tangki(1200)

    parkiranmodern.set_motor(temp_motor)
    tabelmotorparkirlot.cek_kolom_motor(temp_motor)

    temp_mobil.set_plat_nomor("AB 1231 CD")
    temp_mobil.set_merk("Toyota")
    temp_mobil.set_warna("Merah")
    temp_mobil.set_tahun_produksi(2020)
    temp_mobil.set_jenis_car("SUV")
    temp_mobil.set_jumlah_kursi(5)
    temp_mobil.set_jumlah_pintu(4)

    parkiranmodern.set_mobil(temp_mobil)
    tabelmobilparkirlot.cek_kolom_mobil(temp_mobil)

    temp_mobil.set_plat_nomor("AB 1232 CD")
    temp_mobil.set_merk("Honda")
    temp_mobil.set_warna("Biru")
    temp_mobil.set_tahun_produksi(2021)
    temp_mobil.set_jenis_car("Sedan")
    temp_mobil.set_jumlah_kursi(4)
    temp_mobil.set_jumlah_pintu(4)

    parkiranmodern.set_mobil(temp_mobil)
    tabelmobilparkirlot.cek_kolom_mobil(temp_mobil)

    # penampilan data
    print("nama garasi      : ", garasi.get_nama_garasi())
    print("luas garasi      : ", garasi.get_luas_garasi(), "meter persegi")
    print("jumlah kendaraan : ", garasi.get_jumlah_car())
    tabelmobilgarbaga.Tampilan_tabel_Car(namakolommobil, garasi.get_mobil(), "daftar mobil")

    print("\nnama parkingLot     : ", parkiranmodern.get_nama())
    print("kapasitas mobil     : ", parkiranmodern.get_kapasitas_mobil())
    print("jumlah mobil        : ", parkiranmodern.get_jumlah_mobil())
    print("kapasitas motor     : ", parkiranmodern.get_kapasitas_motor())
    print("jumlah motor        : ", parkiranmodern.get_jumlah_motor())
    tabelmobilgarbaga.Tampilan_tabel_Car(namakolommobil, parkiranmodern.get_mobil(), "daftar mobil")
    tabelmobilgarbaga.Tampilan_tabel_Motorcycle(namakolommotor, parkiranmodern.get_motor(), "daftar motor")
