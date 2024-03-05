#pragma once
#include <iostream>
#include <string>
#include "Vehicle.cpp"

using namespace std;
//class car yang mendapatkan warisan dari class vehicle
class Car : public Vehicle {
    private:
    //atribut yang ada di kelas car
    int jumlah_kursi;
    int jumlah_pintu;

    public:
    Car(){
    }

    //konstruktor yang mewarisi dari vehcle
    Car(int jumlah_kursi, int jumlah_pintu, string plat_nomor,string merk, string tahun_produksi, string warna , string bahan_bakar, string jenis_kendaraan) : Vehicle(plat_nomor, merk, tahun_produksi, warna, bahan_bakar, jenis_kendaraan){
        this->jumlah_kursi = jumlah_kursi;
        this->jumlah_pintu = jumlah_pintu;
    }

    //getter setter method
    void setJumlah_kursi(int jumlah_kursi){
        this->jumlah_kursi = jumlah_kursi;
    }

    int getJumlah_kursi(){
        return jumlah_kursi;
    }

    void setJumlah_pintu(int jumlah_pintu){
        this->jumlah_pintu = jumlah_pintu;
    }

    int getJumlah_pintu(){
        return jumlah_pintu;
    }

    ~Car(){
    }
};
