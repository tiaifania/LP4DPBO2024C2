#pragma once
//pemanggilan library yang ingin digunakan
#include <iostream>
#include <string>
#include "Vehicle.cpp"

using namespace std;
//pengisian motorcycle yang merawisi dari vehicle
class Motorcycle : public Vehicle{
    private:
    string jenis_motor;
    string kapasitas_tangki;

    public:
    Motorcycle(){
    }

    //kontruktor yang juga menginclude  warisan
    Motorcycle(string jenis_motor, string kapasitas_tangki, string plat_nomor,string merk, string tahun_produksi, string warna , string bahan_bakar, string jenis_kendaraan) : Vehicle(plat_nomor, merk, tahun_produksi, warna, bahan_bakar, jenis_kendaraan){
        this->jenis_motor = jenis_motor;
        this->kapasitas_tangki = kapasitas_tangki;
    }

    //getter setter dan method
    void setJenis_motor(string jenis_motor){
        this->jenis_motor = jenis_motor;
    }

    string getJenis_motor(){
        return jenis_motor;
    }

    void setKapasitas_tangki(string kapasitas_tangki){
        this->kapasitas_tangki = kapasitas_tangki;
    }

    string getKapasitas_tangki(){
        return kapasitas_tangki;
    }

    ~Motorcycle(){
    }
};