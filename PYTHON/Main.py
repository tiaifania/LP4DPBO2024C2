#mengimport class yang akan dipakai
from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage
from ParkingLot import ParkingLot

#pembuatan objek
mobil1 = Car("B 1234 CD", "Toyota", 2020, "Hitam", 5, 4)
mobil2 = Car("B 5678 EF", "Honda", 2019, "Putih", 4, 4)
motor1 = Motorcycle("D 9876 GH", "Yamaha", 2018, "Merah", "Sport", 10)
motor2 = Motorcycle("D 6543 IJ", "Suzuki", 2021, "Biru", "Matic", 8)

#memasukkan objek kedalam list
list_mobil = [mobil1, mobil2]
list_motor = [motor1, motor2]

#memasukkan data - data ke class Garage
garasi = Garage("HOTSPRING", "30 m2")
garasi.setMobil_garasi(list_mobil)
garasi.setMotor_garasi(list_motor)

#pembuatan obek
mobil3 = Car("A 3334 ADX", "TERIOS", 2017, "Putih", 4, 6)
mobil4 = Car("B 1998 RRS", "PAJERO", 2023, "Silver", 4, 6)
motor3 = Motorcycle("S 4829 L", "VESPA", 2020, "Biru", "Matic", 12)
motor4 = Motorcycle("AD 1111 JKL", "BEAT", 2019, "Merah", "Manual", 18)

#memasukkan objek kedalam list
list_mobil2 = [mobil3, mobil4]
list_motor2 = [motor3, motor4]

#memasukkan data - data ke class Parking lot
parkir = ParkingLot(10, 4)
parkir.setMobil_parkir(list_mobil2)
parkir.setMotor_parkir(list_motor2)

#menampilkan isi dari kelas Garage dan kumpulan kendaraan yang ada di dalam kelas tsb
print ("DETAIL TENTANG GARASI:")
print("NAMA GARASI : ", garasi.getNama_garasi())
print("LUAS GARASI : ", garasi.getLuas_garasi())
i = 1
for mobil in list_mobil:
    print(i, ".","Plat Nomor    :", mobil.getPlat_nomor())
    print("   ", "Merk          :", mobil.getmerk())
    print("   ","Tahun Produksi:", mobil.getTahun_produksi())
    print("   ","Warna         :", mobil.getWarna())
    print("   ","Jumlah Kursi  :", mobil.getJumlah_kursi())
    print("   ","Jumlah Pintu  :", mobil.getJumlah_pintu())
    i = 1 + i

for motor in list_motor:
    print(i, ".","Plat Nomor      :", motor.getPlat_nomor())
    print("   ","Merk            :", motor.getmerk())
    print("   ","Tahun Produksi  :", motor.getTahun_produksi())
    print("   ","Warna           :", motor.getWarna())
    print("   ","Jenis Motor     :", motor.getJenis_motor())
    print("   ","Kapasitas Tangki:", motor.getKapasitas_tangki())
    i = 1 + i
    
print()
#menampilkan isi dari kelas Parking lot dan kumpulan kendaraan yang ada di dalam kelas tsb

print ("DETAIL TENTANG TEMPAT PARKIR:")
print("KAPASITAS                 : ", parkir.getKapasitas())
print("JUMLAH KENDARAAN SAAT INI : ", parkir.getJumlah_kendaraan_saat_ini())
j = 1
for mobil in list_mobil2:
    print(j, ".","Plat Nomor    :", mobil.getPlat_nomor())
    print("   ", "Merk          :", mobil.getmerk())
    print("   ","Tahun Produksi:", mobil.getTahun_produksi())
    print("   ","Warna         :", mobil.getWarna())
    print("   ","Jumlah Kursi  :", mobil.getJumlah_kursi())
    print("   ","Jumlah Pintu  :", mobil.getJumlah_pintu())
    j = 1 + j

for motor in list_motor2:
    print(j, ".","Plat Nomor      :", motor.getPlat_nomor())
    print("   ","Merk            :", motor.getmerk())
    print("   ","Tahun Produksi  :", motor.getTahun_produksi())
    print("   ","Warna           :", motor.getWarna())
    print("   ","Jenis Motor     :", motor.getJenis_motor())
    print("   ","Kapasitas Tangki:", motor.getKapasitas_tangki())
    j = 1 + j