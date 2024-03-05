#pragma once
// Baris ini memastikan bahwa file header hanya disertakan sekali dalam unit kompilasi.

#include <iostream> // Library ini digunakan untuk operasi input/output.
#include <string>   // Library ini digunakan untuk menggunakan tipe data string.

using namespace std; // Baris ini menggunakan namespace standar.

// Ini adalah deklarasi dari kelas Vehicle.
class Vehicle{
    private: 
        // Ini adalah anggota data pribadi dari kelas Vehicle.
        string plat_nomor, merk, warna;
        int tahun_produksi;

    public:
        // Ini adalah konstruktor default dari kelas Vehicle.
        Vehicle()
        {
            this->plat_nomor = "";
            this->merk = "";
            this->warna = "";
            this->tahun_produksi = 0;
        }

        // Ini adalah konstruktor parameter dari kelas Vehicle.
        Vehicle(string plat_nomor,string merk,string warna,int tahun_produksi,string jenis_Vehicle){
            this->plat_nomor = plat_nomor;
            this->merk = merk;
            this->warna = warna;
            this->tahun_produksi = tahun_produksi;
        }

        // Ini adalah metode setter untuk mengatur nilai anggota data pribadi.
        void setPlatNomor(string plat_nomor) {
            this->plat_nomor = plat_nomor;
        }

        void setMerk(string merk) {
            this->merk = merk;
        }

        void setWarna(string warna) {
            this->warna = warna;
        }

        void setTahunProduksi(int tahun_produksi) {
            this->tahun_produksi = tahun_produksi;
        }

        // Ini adalah metode getter untuk mendapatkan nilai anggota data pribadi.
        string getPlatNomor() {
            return plat_nomor;
        }

        string getMerk() {
            return merk;
        }

        string getWarna() {
            return warna;
        }

        int getTahunProduksi() {
            return tahun_produksi;
        }

        // Ini adalah destruktor dari kelas Vehicle.
        ~Vehicle()    
        {

        }
};
