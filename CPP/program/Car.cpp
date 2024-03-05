#pragma once
// Baris ini memastikan bahwa file header hanya disertakan sekali dalam unit kompilasi.

#include <iostream> // Library ini digunakan untuk operasi input/output.
#include <string>   // Library ini digunakan untuk menggunakan tipe data string.
#include "Vehicle.cpp" // Ini adalah file header untuk kelas Vehicle.

using namespace std; // Baris ini menggunakan namespace standar.

// Ini adalah deklarasi dari kelas Car yang merupakan turunan dari kelas Vehicle.
class Car : public Vehicle{
    private:
        // Ini adalah anggota data pribadi dari kelas Car.
        string jenis_Car;
        int Jumlah_Kursi, Jumlah_Pintu;

    public:
        // Ini adalah konstruktor default dari kelas Car.
        Car(){
            Jumlah_Kursi = 0;
            Jumlah_Pintu = 0;
        }

        // Ini adalah konstruktor parameter dari kelas Car.
        Car(int Jumlah_Kursi,int Jumlah_Pintu){
            this->Jumlah_Kursi = Jumlah_Kursi;
            this->Jumlah_Pintu = Jumlah_Pintu;
        }

        // Ini adalah metode setter untuk mengatur nilai anggota data pribadi.
        void setJenisCar(string jenis_car){
            this->jenis_Car = jenis_car;
        }

        void setJumlahKursi(int Jumlah_Kursi) {
            this->Jumlah_Kursi = Jumlah_Kursi;
        }

        void setJumlahPintu(int Jumlah_Pintu) {
            this->Jumlah_Pintu = Jumlah_Pintu;
        }

        // Ini adalah metode getter untuk mendapatkan nilai anggota data pribadi.
        string getJenisCar(){
            return jenis_Car;
        }

        int getJumlahKursi() {
            return Jumlah_Kursi;
        }

        int getJumlahPintu() {
            return Jumlah_Pintu;
        }

        // Ini adalah destruktor dari kelas Car.
        ~Car(){
            
        }
};
