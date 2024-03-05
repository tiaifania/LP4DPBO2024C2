#pragma once
//pemanggilan library yang ingin dipakai
#include <iostream>
#include <string>
#include <list>
#include "Car.cpp"
#include "Motorcycle.cpp"



using namespace std;
//pengisian class 
class ParkingLot{
    private:
    int kapasitas;
    int jumlah_kendaraan_saat_ini;
    list<Car> mobil_parkir;     //komposit dari kelas mobil dalam bentuk list
    list<Motorcycle> motor_parkir;  //komposit dari kelas motor dalam bentuk list

    public:
    ParkingLot(){
    }

    //konstruktor ber parameter
    ParkingLot(int kapasitas, int jumlah_kendaraan_saat_ini, list<Car> mobil_parkir, list<Motorcycle> motor_parkir) {
        this->kapasitas = kapasitas;
        this->jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini;
        this->mobil_parkir = mobil_parkir;
        this->motor_parkir = motor_parkir;
    }
    //getter setter method
    void setKapasitas(int kapasitas){
        this->kapasitas = kapasitas;
    }

    int getKapasitas(){
        return kapasitas;
    }

    void setJumlah_kendaraan_saat_ini(int jumlah_kendaraan_saat_ini){
        this->jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini;
    }

    int getJumlah_kendaraan_saat_ini(){
        return jumlah_kendaraan_saat_ini;
    }

    void setMobil_parkir(list<Car> mobil_parkir){
        this->mobil_parkir = mobil_parkir;
    }

    list<Car> getMobil_parkir(){
        return mobil_parkir;
    }

    void setMotor_parkir(list<Motorcycle> motor_parkir){
        this->motor_parkir = motor_parkir;
    }

    list<Motorcycle> getMotor_parkir(){
        return motor_parkir;
    }

    ~ParkingLot(){
    }
};