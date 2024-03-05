//deklarasi library yang ingin 
#include <iostream>
#include <string>
#include <list>
#include <bits/stdc++.h>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "ParkingLot.cpp"
#include "Garage.cpp"

using namespace std;

int main(){
    //deklarasi mobil dan motor
    Car mobil1(5, 4, "B 1234 CD", "Toyota", "2020", "Hitam", "Bensin", "MOBIL");
    Car mobil2(4, 4, "B 5678 EF", "Honda", "2018", "Putih", "Bensin", "MOBIL");
    Car mobil3(2, 2, "A 8765 SS", "TERIOS", "2023", "ABU - ABU", "Solar", "MOBIL");
    Motorcycle motor1("Matic", "5 liter", "N 1234 AB", "Yamaha", "2019", "Merah", "Bensin", "MOTOR");
    Motorcycle motor2("Manual", "7 liter", "N 5678 CD", "Suzuki", "2021", "Biru", "Bensin", "MOTOR");
    Motorcycle motor3("matic", "15 L", "D 1223 A", "BEAT", "2022", "HITAM", "bensin", "MOTOR");

    list<Car> kumpulanMobil;    //deklarasi list bertipe class car
    kumpulanMobil.push_back(mobil1);    //memasukkan data ke list
    kumpulanMobil.push_back(mobil2);
    kumpulanMobil.push_back(mobil3);

    list<Motorcycle> kumpulanMotor; //deklarasi list bertipe class motorcycle
    kumpulanMotor.push_back(motor1);    //memasukkan data ke lsit
    kumpulanMotor.push_back(motor2);
    kumpulanMotor.push_back(motor3);

    ParkingLot tempatParkir(10, 3, kumpulanMobil, kumpulanMotor);   //memasukkan data ke dalam variabel bertipe parking lot

    Car mobil4(2, 4, "B 4527 RF", "CALYA", "2019", "PUTIH", "listrik", "MOBIL");
    Motorcycle motor4("MANUAL", "20 L", "S 5747 DEW", "RX KING", "2025", "violet", "solar", "MOTOR");
    Motorcycle motor5("MATIC", "19 L", "S 7155 FWK", "VESPA", "2020", "tosca", "bensin", "MOTOR");

    list<Car> kumpulanMobil2;   //deklarasi list
    kumpulanMobil2.push_back(mobil4);
    
    list<Motorcycle> kumpulanMotor2;
    kumpulanMotor2.push_back(motor4);
    kumpulanMotor2.push_back(motor5);

    Garage garasi("MAMANG RACING", "20", kumpulanMobil2, kumpulanMotor2); //memasukkan data ke dalam variabel bertipe parking lot

    int i = 1;
    //menampilkan detail tentang tempat parkir
    cout << "DETAIL TENTANG TEMPAT PARKIR" << endl;
    cout << "KAPASITAS                 : " << tempatParkir.getKapasitas() << endl;
    cout << "JUMLAH KENDARAAN SAAT INI : " << tempatParkir.getJumlah_kendaraan_saat_ini() << endl;
    cout << "KENDARAAN YANG SEDANG TERPARKIR:" << endl;
    //perulangan mengakses list yang menampung data mobil
    for (auto mobil : tempatParkir.getMobil_parkir())
    {
        cout << (i) << ". " << "PLAT NOMOR: " << mobil.getPlat_nomor() << endl;
        cout << "  " << "MERK: " << mobil.getMerk() << endl;
        cout << "  " << "TAHUN PROD: " << mobil.getTahun_produksi() << endl;
        cout << "  " << "WARNA: " << mobil.getWarna() << endl;
        cout << "  " << "BAHAN BAKAR: " << mobil.getBahan_bakar() << endl;
        cout << "  " << "JUMLAH PINTU: " << mobil.getJumlah_pintu() << endl;
        cout << "  " << "JUMLAH JENDELA: " << mobil.getJumlah_kursi() << endl;
        i++;
        cout << endl;
    }

    //perulangan mengakses list yang menampung data motor
    for(auto motor : tempatParkir.getMotor_parkir()){
        cout << (i) << ". " << "PLAT NOMOR: " << motor.getPlat_nomor() << endl;
        cout << "  " << "MERK: " << motor.getMerk() << endl;
        cout << "  " << "TAHUN PROD: " << motor.getTahun_produksi() << endl;
        cout << "  " << "WARNA: " << motor.getWarna() << endl;
        cout << "  " << "BAHAN BAKAR: " << motor.getBahan_bakar() << endl;
        cout << "  " << "JENIS MOTOR: " << motor.getJenis_motor() << endl;
        cout << "  " << "KAPASITAS TANGKI: " << motor.getKapasitas_tangki() << endl;
        cout << endl;
        i++;
    }

    int j = 1;
    //penampilan serba serbi garasi
    cout << "DETAIL TENTANG GARASI" << endl;
    cout << "NAMA GARASI : " << garasi.getnama_garasi() << endl;
    cout << "LUAS GARASI : " << garasi.getLuas_garasi() << endl;
    cout << "KENDARAAN YANG SEDANG DI GARASI:" << endl;
    for (auto mobil2 : garasi.getMobil_garasi())
    {
        cout << (j) << ". " << "PLAT NOMOR: " << mobil2.getPlat_nomor() << endl;
        cout << "  " << "MERK: " << mobil2.getMerk() << endl;
        cout << "  " << "TAHUN PROD: " << mobil2.getTahun_produksi() << endl;
        cout << "  " << "WARNA: " << mobil2.getWarna() << endl;
        cout << "  " << "BAHAN BAKAR: " << mobil2.getBahan_bakar() << endl;
        cout << "  " << "JUMLAH PINTU: " << mobil2.getJumlah_pintu() << endl;
        cout << "  " << "JUMLAH JENDELA: " << mobil2.getJumlah_kursi() << endl;
        cout << endl;
        j++;
    }

    for(auto motor2 : garasi.getMotor_garasi()){
        cout << (j) << ". " << "PLAT NOMOR: " << motor2.getPlat_nomor() << endl;
        cout << "  " << "MERK: " << motor2.getMerk() << endl;
        cout << "  " << "TAHUN PROD: " << motor2.getTahun_produksi() << endl;
        cout << "  " << "WARNA: " << motor2.getWarna() << endl;
        cout << "  " << "BAHAN BAKAR: " << motor2.getBahan_bakar() << endl;
        cout << "  " << "JENIS MOTOR: " << motor2.getJenis_motor() << endl;
        cout << "  " << "KAPASITAS TANGKI: " << motor2.getKapasitas_tangki() << endl;
        cout << endl;
        j++;
    }
    return 0;
}
