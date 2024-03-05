#pragma once
// Baris ini memastikan bahwa file header hanya disertakan sekali dalam unit kompilasi.

#include <iostream> // Library ini digunakan untuk operasi input/output.
#include <string>   // Library ini digunakan untuk menggunakan tipe data string.
#include <vector>   // Library ini digunakan untuk menggunakan tipe data vector.
#include "Car.cpp"  // Ini adalah file header untuk kelas Car.
#include "Motorcycle.cpp" // Ini adalah file header untuk kelas Motorcycle.

using namespace std; // Baris ini menggunakan namespace standar.

// Ini adalah deklarasi dari kelas ParkingLot.
class ParkingLot{
    private:
        // Ini adalah anggota data pribadi dari kelas ParkingLot.
        string nama;
        int kapasitas_motor, jumlah_mobil,kapasitas_mobil,jumlah_motor;
        vector<Car> mobil; // Vector yang menyimpan objek-objek dari kelas Car.
        vector<Motorcycle> Motor; // Vector yang menyimpan objek-objek dari kelas Motorcycle.
        
    public:
        // Ini adalah konstruktor default dari kelas ParkingLot.
        ParkingLot(){
            kapasitas_mobil = 0;
            kapasitas_motor = 0;
            jumlah_mobil = 0;
            jumlah_motor = 0;
        }

        // Ini adalah konstruktor parameter dari kelas ParkingLot.
        ParkingLot(int kapasitas_mobil,int kapasitas_motor,string nama){
            this->kapasitas_mobil = kapasitas_mobil;
            this->kapasitas_motor = kapasitas_motor;
            this->nama = nama;
        }
        
        // Ini adalah metode setter untuk mengatur nilai anggota data pribadi.
        void setnama(string nama) {
            this->nama = nama;
        }

        void setKapasitas_mobil(int kapasitas_mobil) {
            this->kapasitas_mobil = kapasitas_mobil;
        }

        void setKapasitas_motor(int kapasitas_motor) {
            this->kapasitas_motor = kapasitas_motor;
        }

        void setmobil(Car mobil){
            jumlah_mobil++; // Menambah jumlah mobil di parkir.
            this->mobil.push_back(mobil); // Menambahkan mobil ke vector.
        }

        void setmotor(Motorcycle motor){
            jumlah_motor++; // Menambah jumlah motor di parkir.
            this->Motor.push_back(motor); // Menambahkan motor ke vector.
        }

        // Ini adalah metode getter untuk mendapatkan nilai anggota data pribadi.
        string getnama() {
            return nama;
        }

        int getKapasitas_mobil() {
            return kapasitas_mobil;
        }

        int getKapasitas_motor() {
            return kapasitas_motor;
        }

        int getJumlahmotor() {
            return jumlah_motor;
        }

        int getJumlahmobil() {
            return jumlah_mobil;
        }

        vector<Car> getmobil(){
            return mobil; // Mengembalikan vector yang berisi objek-objek Car.
        }

        vector<Motorcycle> getmotor(){
            return Motor; // Mengembalikan vector yang berisi objek-objek Motorcycle.
        }

        // Ini adalah destruktor dari kelas ParkingLot.
        ~ParkingLot(){
            
        }
};
