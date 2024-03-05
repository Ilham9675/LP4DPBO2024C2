#pragma once
// Baris ini memastikan bahwa file header hanya disertakan sekali dalam unit kompilasi.

#include <iostream> // Library ini digunakan untuk operasi input/output.
#include <string>   // Library ini digunakan untuk menggunakan tipe data string.
#include "Vehicle.cpp" // Ini adalah file header untuk kelas Vehicle.

using namespace std; // Baris ini menggunakan namespace standar.

// Ini adalah deklarasi dari kelas Motorcycle yang merupakan turunan dari kelas Vehicle.
class Motorcycle : public Vehicle {
    private:
        // Ini adalah anggota data pribadi dari kelas Motorcycle.
        string jenis_motor;
        int Kapasitas_tangki;

    public:
        // Ini adalah konstruktor default dari kelas Motorcycle.
        Motorcycle(){
            this->jenis_motor = "";
            this->Kapasitas_tangki = 0;
        }

        // Ini adalah metode setter untuk mengatur nilai anggota data pribadi.
        void setJenisMotor(string jenis_motor) {
            this->jenis_motor = jenis_motor;
        }

        void setKapasitasTangki(int Kapasitas_tangki) {
            this->Kapasitas_tangki = Kapasitas_tangki;
        }

        // Ini adalah metode getter untuk mendapatkan nilai anggota data pribadi.
        string getJenisMotor() {
            return jenis_motor;
        }

        int getKapasitasTangki() {
            return Kapasitas_tangki;
        }

        // Ini adalah destruktor dari kelas Motorcycle.
        ~Motorcycle(){

        }
};
