#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Car.cpp"
#include "Motorcycle.cpp"

using namespace std;

class Tampilan {
private:
    vector<int> kolom;
public:
    

    Tampilan(int jumlah){
        for(int i = 0;i < jumlah;i++){
            kolom.push_back(0);
            
        }
    }





    void cek_kolom_mobil(Car car){
        if(kolom[0] < car.getPlatNomor().length() + 2){
            kolom[0] = car.getPlatNomor().length() + 2;
        }
        if(kolom[1] < car.getMerk().length() + 2){
            kolom[1] = car.getMerk().length() + 2;
        }
        if(kolom[2] < car.getWarna().length() + 2){
            kolom[2] = car.getWarna().length() + 2;
        }
        if(kolom[3] < to_string(car.getTahunProduksi()).length() + 2){
            kolom[3] = to_string(car.getTahunProduksi()).length() + 2;
        }
        if(kolom[4] < car.getJenisCar().length() + 2){
            kolom[4] = car.getJenisCar().length() + 2;
        }
        if(kolom[5] < to_string(car.getJumlahKursi()).length() + 2){
            kolom[5] = to_string(car.getJumlahKursi()).length() + 2;
        }
        if(kolom[6] < to_string(car.getJumlahPintu()).length() + 2){
            kolom[6] = to_string(car.getJumlahPintu()).length() + 2;
        }
        
    }


    void cek_kolom_motor(Motorcycle motorcycle){
        if(kolom[0] < motorcycle.getPlatNomor().length() + 2){
            kolom[0] = motorcycle.getPlatNomor().length() + 2;
        }
        if(kolom[1] < motorcycle.getMerk().length() + 2){
            kolom[1] = motorcycle.getMerk().length() + 2;
        }
        if(kolom[2] < motorcycle.getWarna().length() + 2){
            kolom[2] = motorcycle.getWarna().length() + 2;
        }
        if(kolom[3] < to_string(motorcycle.getTahunProduksi()).length() + 2){
            kolom[3] = to_string(motorcycle.getTahunProduksi()).length() + 2;
        }
        
        if(kolom[4] < motorcycle.getJenisMotor().length() + 2){
            kolom[4] = motorcycle.getJenisMotor().length() + 2;
        }
        if(kolom[5] < to_string(motorcycle.getKapasitasTangki()).length() + 2){
            kolom[5] = to_string(motorcycle.getKapasitasTangki()).length() + 2;
        }
        
    }

    // Metode untuk menampilkan tabel dengan data yang diberikan.
    void Tampilan_tabel_Car(vector<string> nama_header, vector<Car> data, string nama_tabel) {
        // Inisialisasi variabel i dan j untuk penggunaan dalam loop.
        int i = 0, j = 0;

        // Mengatur lebar kolom berdasarkan panjang header dan data.
        for (i = 0; i < nama_header.size(); i++) {
            if (kolom[i] < (nama_header[i].length() + 2)) {
                kolom[i] = nama_header[i].length() + 2;
            }
            
            
        }

        // Menghitung panjang total kolom.
        int panjang_kolom = 0;
        for (i = 0; i < kolom.size(); i++) {
            panjang_kolom += kolom[i];
        }
        panjang_kolom += 6; // Menambahkan ruang untuk batas tabel.

        // Mencetak batas atas tabel.
        cout << "|";
        for (i = 0; i < panjang_kolom; i++) {
            cout << "=";
        }
        cout << "|" << endl;

        // Mencetak nama tabel di tengah.
        cout << "|";
        for (i = 0; i < (panjang_kolom - nama_tabel.length()) / 2; i++) {
            cout << " ";
        }
        cout << nama_tabel;
        for (i = 0; i < (panjang_kolom - nama_tabel.length()) / 2; i++) {
            cout << " ";
        }
        if ((panjang_kolom - nama_tabel.length()) % 2 == 1) {
            cout << " ";
        }
        cout << "|" << endl;

        // Mencetak batas atas nama tabel.
        cout << "|";
        for (i = 0; i < panjang_kolom; i++) {
            cout << "=";
        }
        cout << "|" << endl;

        // Mencetak header tabel.
        cout << "| ";
        for (i = 0; i < nama_header.size(); i++) {
            cout << nama_header[i];
            for (j = 0; j < (kolom[i] - 2) - nama_header[i].length(); j++) {
                cout << " ";
            }
            if (i + 1 != nama_header.size()) {
                cout << " | ";
            }
        }
        cout << " |" << endl;

        // Mencetak batas atas header tabel.
        cout << "|";
        for (i = 0; i < panjang_kolom; i++) {
            cout << "=";
        }
        cout << "|" << endl;

        // Mencetak data ke dalam tabel.
        for (i = 0; i < data.size(); i++) {
            cout << "| ";
            // Melakukan pencetakan data setiap kolom dengan padding yang sesuai.
            cout << data[i].getPlatNomor();
            for (j = 0; j < (kolom[0] - 2) - data[i].getPlatNomor().length(); j++) {
                cout << " ";
            }
            cout << " | ";

            cout << data[i].getMerk();
            for (j = 0; j < (kolom[1] - 2) - data[i].getMerk().length(); j++) {
                cout << " ";
            }
            cout << " | ";

            cout << data[i].getWarna();
            for (j = 0; j < (kolom[2] - 2) - data[i].getWarna().length(); j++) {
                cout << " ";
            }
            cout << " | ";

            cout << data[i].getTahunProduksi();
            for (j = 0; j < (kolom[3] - 2) - to_string(data[i].getTahunProduksi()).length(); j++) {
                cout << " ";
            }
            cout << " | ";

            cout << data[i].getJenisCar();
            for (j = 0; j < (kolom[4] - 2) - data[i].getJenisCar().length(); j++) {
                cout << " ";
            }
            cout << " | ";

            cout << data[i].getJumlahKursi();
            for (j = 0; j < (kolom[5] - 2) - to_string(data[i].getJumlahKursi()).length(); j++) {
                cout << " ";
            }
            cout << " | ";

            cout << data[i].getJumlahPintu();
            for (j = 0; j < (kolom[6] - 2) - to_string(data[i].getJumlahPintu()).length(); j++) {
                cout << " ";
            }
            cout << " |" << endl;
        }

        // Mencetak batas bawah tabel.
        cout << "|";
        for (i = 0; i < panjang_kolom; i++) {
            cout << "=";
        }
        cout << "|" << endl;
    }

    void Tampilan_tabel_Motorcycle(vector<string> nama_header, vector<Motorcycle> data, string nama_tabel) {
        // Inisialisasi variabel i dan j untuk penggunaan dalam loop.
        int i = 0, j = 0;

        // Mengatur lebar kolom berdasarkan panjang header dan data.
        for (i = 0; i < nama_header.size(); i++) {
            if (kolom[i] < (nama_header[i].length() + 2)) {
                kolom[i] = nama_header[i].length() + 2;
            }
            
        }

        // Menghitung panjang total kolom.
        int panjang_kolom = 0;
        for (i = 0; i < nama_header.size(); i++) {
            panjang_kolom += kolom[i];
        }
        panjang_kolom += 5; // Menambahkan ruang untuk batas tabel.

        // Mencetak batas atas tabel.
        cout << "|";
        for (i = 0; i < panjang_kolom; i++) {
            cout << "=";
        }
        cout << "|" << endl;

        // Mencetak nama tabel di tengah.
        cout << "|";
        for (i = 0; i < (panjang_kolom - nama_tabel.length()) / 2; i++) {
            cout << " ";
        }
        cout << nama_tabel;
        for (i = 0; i < (panjang_kolom - nama_tabel.length()) / 2; i++) {
            cout << " ";
        }
        if ((panjang_kolom - nama_tabel.length()) % 2 == 1) {
            cout << " ";
        }
        cout << "|" << endl;

        // Mencetak batas atas nama tabel.
        cout << "|";
        for (i = 0; i < panjang_kolom; i++) {
            cout << "=";
        }
        cout << "|" << endl;

        // Mencetak header tabel.
        cout << "| ";
        for (i = 0; i < nama_header.size(); i++) {
            cout << nama_header[i];
            for (j = 0; j < (kolom[i] - 2) - nama_header[i].length(); j++) {
                cout << " ";
            }
            if (i + 1 != nama_header.size()) {
                cout << " | ";
            }
        }
        cout << " |" << endl;

        // Mencetak batas atas header tabel.
        cout << "|";
        for (i = 0; i < panjang_kolom; i++) {
            cout << "=";
        }
        cout << "|" << endl;

        // Mencetak data ke dalam tabel.
        for (i = 0; i < data.size(); i++) {
            cout << "| ";
            // Melakukan pencetakan data setiap kolom dengan padding yang sesuai.
            cout << data[i].getPlatNomor();
            for (j = 0; j < (kolom[0] - 2) - data[i].getPlatNomor().length(); j++) {
                cout << " ";
            }
            cout << " | ";

            cout << data[i].getMerk();
            for (j = 0; j < (kolom[1] - 2) - data[i].getMerk().length(); j++) {
                cout << " ";
            }
            cout << " | ";

            cout << data[i].getWarna();
            for (j = 0; j < (kolom[2] - 2) - data[i].getWarna().length(); j++) {
                cout << " ";
            }
            cout << " | ";

            cout << data[i].getTahunProduksi();
            for (j = 0; j < (kolom[3] - 2) - to_string(data[i].getTahunProduksi()).length(); j++) {
                cout << " ";
            }
            cout << " | ";


            cout << data[i].getJenisMotor();
            for (j = 0; j < (kolom[4] - 2) - data[i].getJenisMotor().length(); j++) {
                cout << " ";
            }
            cout << " | ";

            cout << data[i].getKapasitasTangki();
            for (j = 0; j < (kolom[5] - 2) - to_string(data[i].getKapasitasTangki()).length(); j++) {
                cout << " ";
            }
            
            cout << " |" << endl;
        }

        // Mencetak batas bawah tabel.
        cout << "|";
        for (i = 0; i < panjang_kolom; i++) {
            cout << "=";
        }
        cout << "|" << endl;
    }
    ~Tampilan(){
        
    }

    
};