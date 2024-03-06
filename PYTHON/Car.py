from Vehicle import Vehicle #import kelas parent yang ingin di inherit

#pengisian kelas Car yang mewarisi atribut dari VEhicle
class Car(Vehicle):
    #konstruktor berparameter
    def __init__(self, plat_nomor, merk, tahun_produksi, warna, jumlah_kursi, jumlah_pintu):
        super().__init__(plat_nomor, merk, tahun_produksi, warna)
        self.jumlah_kursi = jumlah_kursi
        self.jumlah_pintu = jumlah_pintu
        
    #getter dan setter
    def setJumlah_kursi(self, jumlah_kursi):
        self.jumlah_kursi = jumlah_kursi
        
    def getJumlah_kursi(self):
        return self.jumlah_kursi
    
    def setJumlah_pintu(self, jumlah_pintu):
        self.jumlah_pintu = jumlah_pintu
        
    def getJumlah_pintu(self):
        return self.jumlah_pintu