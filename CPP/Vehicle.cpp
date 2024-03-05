#pragma once
#include <iostream>
#include <string>
using namespace std;

//pengisian kelas vehicle 
class Vehicle {
    private:
    //deklarasi atribut yang ada di kelas vehicle
    string plat_nomor;
    string merk;
    string tahun_produksi;
    string warna;
    string bahan_bakar;
    string jenis_kendaraan;

    public:
    Vehicle(){
    }

    //konstruktor
    Vehicle(string plat_nomor,string merk, string tahun_produksi, string warna , string bahan_bakar, string jenis_kendaraan){
        this->plat_nomor = plat_nomor;
        this->merk = merk;
        this->tahun_produksi = tahun_produksi;
        this->warna = warna;
        this->bahan_bakar = bahan_bakar;
        this->jenis_kendaraan = jenis_kendaraan;
    }

    //getter setter dan method
    void setPlat_nomor(string plat_nomor){
        this->plat_nomor = plat_nomor;
    }

    string getPlat_nomor(){
        return plat_nomor;
    }

    void setMerk(string merk){
        this->merk = merk;
    }

    string getMerk(){
        return merk;
    }

    void setTahun_produksi(string tahun_produksi){
        this->tahun_produksi = tahun_produksi;
    }

    string getTahun_produksi(){
        return tahun_produksi;
    }

    void setWarna(string warna){
        this->warna = warna;
    }

    string getWarna(){
        return warna;
    }

    void setBahan_bakar(string bahan_bakar){
        this->bahan_bakar = bahan_bakar;
    }

    string getBahan_bakar(){
        return bahan_bakar;
    }

    void setJenis_kendaraan(string jenis_kendaraan){
        this->jenis_kendaraan = jenis_kendaraan;
    }

    string getJenis_kendaraan(){
        return jenis_kendaraan;
    }

    ~Vehicle(){
    }
};