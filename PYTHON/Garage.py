#pengisian kelas Garage
class Garage:
    def __init__(self, nama_garasi, luas_garasi):
        self.nama_garasi = nama_garasi
        self.luas_garasi = luas_garasi
        self.mobil_garasi = [] #contoh penggunaan composite yang berbentuk list
        self.motor_garasi = [] #contoh penggunaan composite yang berbentuk list
        
    #getter dan setter
    def setNama_garasi(self, nama_garasi):
        self.nama_garasi = nama_garasi
        
    def getNama_garasi(self):
        return self.nama_garasi
    
    def setLuas_garasi(self, luas_garasi):
        self.luas_garasi = luas_garasi
        
    def getLuas_garasi(self):
        return self.luas_garasi
    
    def setMobil_garasi(self, mobil_garasi):
        self.mobil_garasi = mobil_garasi
        
    def getMobil_garasi(self):
        return self.mobil_garasi
    
    def setMotor_garasi(self, motor_garasi):
        self.motor_garasi = motor_garasi
        
    def getMotor_garasi(self):
        return self.motor_garasi