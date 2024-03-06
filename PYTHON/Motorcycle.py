from Vehicle import Vehicle #import kelas parent yang ingin di inherit

#pengisian kelas Motorcycle yang mewarisi atribut dari Vehicle
class Motorcycle(Vehicle):
    #konstruktor berparamter
    def __init__(self, plat_nomor, merk, tahun_produksi, warna, jenis_motor, kapasitas_tangki):
        super().__init__(plat_nomor, merk, tahun_produksi, warna)
        self.jenis_motor = jenis_motor
        self.kapasitas_tangki = kapasitas_tangki
        
    #getter dan setter
    def setJenis_motor(self, jenis_motor):
        self.jenis_motor = jenis_motor
        
    def getJenis_motor(self):
        return self.jenis_motor
    
    def setKapasitas_tangki(self, kapasitas_tangki):
        self.kapasitas_tangki = kapasitas_tangki
        
    def getKapasitas_tangki(self):
        return self.kapasitas_tangki