#pragma once
//pemanggilan library yang ingin dipakai
#include <iostream>
#include <string>
#include <list>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"

using namespace std;

//pengisian class
class Garage{
    private:
    string nama_garasi;
    string luas_garasi;
    list<Car> mobil_garasi; //komposit dari kelas mobil dalam bentuk list
    list<Motorcycle> motor_garasi;  //komposit dari kelas motor dalam bentuk list

    public:
    Garage(){
    }

    //konstruktor berparameter
    Garage(string nama_garasi, string luas_garasi, list<Car> mobil_garasi, list<Motorcycle> motor_garasi){
        this->nama_garasi = nama_garasi;
        this->luas_garasi = luas_garasi;
        this->mobil_garasi = mobil_garasi;
        this->motor_garasi = motor_garasi;
    }

    //getter setter method
    void setNama_garasi(string nama_garasi){
        this->nama_garasi = nama_garasi;
    }

    string getnama_garasi(){
        return nama_garasi;
    }

    void setLuas_garasi(string luas_garasi){
        this->luas_garasi = luas_garasi;
    }

    string getLuas_garasi(){
        return luas_garasi;
    }

    void setMobil_garasi(list<Car> mobil_garasi){
        this->mobil_garasi = mobil_garasi;
    }

    list<Car> getMobil_garasi(){
        return mobil_garasi;
    }

    void setMotor_garasi(list<Motorcycle> motor_garasi){
        this->motor_garasi = motor_garasi;
    }

    list<Motorcycle> getMotor_garasi(){
        return motor_garasi;
    }

    ~Garage(){
    }
};