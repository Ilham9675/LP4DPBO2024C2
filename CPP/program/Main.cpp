

#include <iostream> // Library ini digunakan untuk operasi input/output.
#include <string>   // Library ini digunakan untuk menggunakan tipe data string.
#include <vector>   // Library ini digunakan untuk menggunakan tipe data vector.

#include "Garage.cpp" // Ini adalah file header untuk kelas Garage
#include "Motorcycle.cpp" // Ini adalah file header untuk kelas Motorcycle
#include "Car.cpp" // Ini adalah file header untuk kelas Car
#include "ParkingLot.cpp" // Ini adalah file header untuk kelas Motorcycle
#include "Tampilan.cpp" // Ini adalah file header untuk kelas Tampilan

using namespace std;

int main(){
    //inisialisasi nama kolong mobil dam motor
    vector<string> namakolommobil = {"plat nomer","merk","warna","tahun produksi","jenis mobil","jumlah kursi","jumlah pintu"};
    vector<string> namakolommotor = {"plat nomer","merk","warna","tahun produksi","jenis motor","kapasitas tangki"};

    // inisialisasi nama panjang kolom
    Tampilan tabelmobilgarbaga(namakolommobil.size());
    Tampilan tabelmobilparkirlot(namakolommobil.size());
    Tampilan tabelmotorparkirlot(namakolommotor.size());

    // pemasukan data parkinglot dan garage
    
    Car temp_mobil;
    temp_mobil.setPlatNomor("AB 1234 CD");
    temp_mobil.setMerk("Toyota");
    temp_mobil.setWarna("Merah");
    temp_mobil.setTahunProduksi(2020);
    temp_mobil.setJenisCar("SUV");
    temp_mobil.setJumlahKursi(5);
    temp_mobil.setJumlahPintu(4);
    
    tabelmobilgarbaga.cek_kolom_mobil(temp_mobil);

    Garage garasi;
    garasi.setNamaGarasi("garasi pak mamat");
    garasi.setLuasGarasi(20);
    garasi.setKendaraan(temp_mobil);

    temp_mobil.setPlatNomor("AB 1240 CD");
    temp_mobil.setMerk("Suzuki");
    temp_mobil.setWarna("Hitam");
    temp_mobil.setTahunProduksi(2022);
    temp_mobil.setJenisCar("Hatchback");
    temp_mobil.setJumlahKursi(4);
    temp_mobil.setJumlahPintu(4);

    garasi.setKendaraan(temp_mobil);
    tabelmobilgarbaga.cek_kolom_mobil(temp_mobil);



    ParkingLot parkiranmodern;
    parkiranmodern.setKapasitas_mobil(50);
    parkiranmodern.setKapasitas_motor(10);
    parkiranmodern.setnama("parkiran blok z");
    Motorcycle temp_motor;
    temp_motor.setPlatNomor("AB 1234 CD");
    temp_motor.setMerk("Toyota");
    temp_motor.setWarna("Merah");
    temp_motor.setTahunProduksi(2020);
    temp_motor.setJenisMotor("motor merah");
    temp_motor.setKapasitasTangki(982);
    parkiranmodern.setmotor(temp_motor);
    tabelmotorparkirlot.cek_kolom_motor(temp_motor);


    temp_motor.setPlatNomor("AB 1231 CD");
    temp_motor.setMerk("Honda");
    temp_motor.setWarna("Merah");
    temp_motor.setTahunProduksi(2020);
    temp_motor.setJenisMotor("Sport");
    temp_motor.setKapasitasTangki(1000);
    tabelmotorparkirlot.cek_kolom_motor(temp_motor);

    parkiranmodern.setmotor(temp_motor);
    temp_motor.setPlatNomor("AB 1232 CD");
    temp_motor.setMerk("Yamaha");
    temp_motor.setWarna("Biru");
    temp_motor.setTahunProduksi(2021);
    temp_motor.setJenisMotor("Matic");
    temp_motor.setKapasitasTangki(1100);
    tabelmotorparkirlot.cek_kolom_motor(temp_motor);


    parkiranmodern.setmotor(temp_motor);
    temp_motor.setPlatNomor("AB 1240 CD");
    temp_motor.setMerk("Suzuki");
    temp_motor.setWarna("Hitam");
    temp_motor.setTahunProduksi(2022);
    temp_motor.setJenisMotor("Trail");
    temp_motor.setKapasitasTangki(1200);
    parkiranmodern.setmotor(temp_motor);
    tabelmotorparkirlot.cek_kolom_motor(temp_motor);


    temp_mobil.setPlatNomor("AB 1231 CD");
    temp_mobil.setMerk("Toyota");
    temp_mobil.setWarna("Merah");
    temp_mobil.setTahunProduksi(2020);
    temp_mobil.setJenisCar("SUV");
    temp_mobil.setJumlahKursi(5);
    temp_mobil.setJumlahPintu(4);
    parkiranmodern.setmobil(temp_mobil);
    tabelmobilparkirlot.cek_kolom_mobil(temp_mobil);


    temp_mobil.setPlatNomor("AB 1232 CD");
    temp_mobil.setMerk("Honda");
    temp_mobil.setWarna("Biru");
    temp_mobil.setTahunProduksi(2021);
    temp_mobil.setJenisCar("Sedan");
    temp_mobil.setJumlahKursi(4);
    temp_mobil.setJumlahPintu(4);
    parkiranmodern.setmobil(temp_mobil);
    tabelmobilparkirlot.cek_kolom_mobil(temp_mobil);

    // penampilan data
    
    cout << "nama garasi      : " << garasi.getNamaGarasi() << endl;
    cout << "luas garasi      : " << garasi.getLuasGarasi() << "meter persegi" << endl;
    cout << "jumlah kendaraan : " << garasi.getJumlahCar() << endl;
    tabelmobilgarbaga.Tampilan_tabel_Car(namakolommobil,garasi.getmobil(),"daftar mobil");




    cout << "\nnama parkingLot     : " << parkiranmodern.getnama() << endl;
    cout << "kapasitas mobil     : " << parkiranmodern.getKapasitas_mobil() << endl;
    cout << "jumlah mobil        : " << parkiranmodern.getJumlahmobil() << endl;
    cout << "kapasitas motor     : " << parkiranmodern.getKapasitas_motor() << endl;
    cout << "jumlah motor        : " << parkiranmodern.getJumlahmotor() << endl;
    tabelmobilgarbaga.Tampilan_tabel_Car(namakolommobil,parkiranmodern.getmobil(),"daftar mobil");
    tabelmobilgarbaga.Tampilan_tabel_Motorcycle(namakolommotor,parkiranmodern.getmotor(),"daftar motor");
    return 0;
}

