#pengisian kelas parking lot
class ParkingLot:
    #konstruktor berparameter
    def __init__ (self, kapasitas, jumlah_kendaraan_saat_ini):
        self.kapasitas = kapasitas
        self.jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini
        self.mobil_parkir = [] #contoh penggunaan composite yang berbentuk list
        self.motor_parkir = [] #contoh penggunaan composite yang berbentuk list
        
    #getter dan setter
    def setKapasitas(self, kapasitas):
        self.kapasitas = kapasitas
        
    def getKapasitas(self):
        return self.kapasitas
    
    def setJumlah_kendaraan_saat_ini(self, jumlah_kendaraan_saat_ini):
        self.jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini
        
    def getJumlah_kendaraan_saat_ini(self):
        return self.jumlah_kendaraan_saat_ini
    
    def setMobil_parkir(self, mobil_parkir):
        self.mobil_parkir = mobil_parkir
        
    def getMobil_parkir(self):
        return self.mobil_parkir
    
    def setMotor_parkir(self, motor_parkir):
        self.motor_parkir = motor_parkir
        
    def getMotor_parkir(self):
        return self.motor_parkir