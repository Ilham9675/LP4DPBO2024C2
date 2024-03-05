#pragma once
// Baris ini memastikan bahwa file header hanya disertakan sekali dalam unit kompilasi.

#include <iostream> // Library ini digunakan untuk operasi input/output.
#include <string>   // Library ini digunakan untuk menggunakan tipe data string.
#include <vector>   // Library ini digunakan untuk menggunakan tipe data vector.
#include "Car.cpp"  // Ini adalah file header untuk kelas Car.

using namespace std; // Baris ini menggunakan namespace standar.

// Ini adalah deklarasi dari kelas Garage.
class Garage{
    private:
        // Ini adalah anggota data pribadi dari kelas Garage.
        string Nama_garasi;
        int luas_garasi;
        int jumlah_car;
        vector<Car> mobil; // Vector yang menyimpan objek-objek dari kelas Car.
        
    public:
        // Ini adalah konstruktor default dari kelas Garage.
        Garage(){
            Nama_garasi = "";
            jumlah_car = 0;
            luas_garasi = 0;
        }

        // Ini adalah metode setter untuk mengatur nilai anggota data pribadi.
        void setNamaGarasi(string Nama_garasi) {
            this->Nama_garasi = Nama_garasi;
        }

        void setLuasGarasi(int luas_garasi) {
            this->luas_garasi = luas_garasi;
        }

        void setKendaraan(Car mobil) {
            jumlah_car++; // Menambah jumlah mobil di garasi.
            this->mobil.push_back(mobil); // Menambahkan mobil ke vector.
        }

        // Ini adalah metode getter untuk mendapatkan nilai anggota data pribadi.
        string getNamaGarasi() {
            return Nama_garasi;
        }

        int getLuasGarasi() {
            return luas_garasi;
        }

        int getJumlahCar() {
            return jumlah_car;
        }

        vector<Car> getmobil(){
            return mobil; // Mengembalikan vector yang berisi objek-objek Car.
        }

        // Ini adalah destruktor dari kelas Garage.
        ~Garage(){
            
        }
};
