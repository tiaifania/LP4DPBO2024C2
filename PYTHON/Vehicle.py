#pengisian class VEHICLE
class Vehicle:
    #konstruktor berparameter
    def __init__(self, plat_nomor, merk, tahun_produksi, warna):
        self.plat_nomor = plat_nomor
        self.merk = merk
        self.tahun_produksi = tahun_produksi
        self.warna = warna
        
    #GETTER DAN SETTER
    def setPlat_nomor(self, plat_nomor):
        self.plat_nomor = plat_nomor
        
    def getPlat_nomor(self):
        return self.plat_nomor
    
    def setMerk(self, merk):
        self.merk = merk
        
    def getmerk(self):
        return self.merk
    
    def setTahun_produksi(self, tahun_produksi):
        self.tahun_produksi = tahun_produksi
        
    def getTahun_produksi(self):
        return self.tahun_produksi
    
    def setWarna(self, warna):
        self.warna = warna
        
    def getWarna(self):
        return self.warna