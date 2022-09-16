


class VEHICLE:
    def __init__(self):
        self.nhanhieu = None
        self.giaban = 0

    def nhap(self):
        self.nhanhieu = input('Thương hiệu là: ')
        self.giaban = int(input('Giá: '))

    def xuat(self):
        print(self.nhanhieu, self.giaban)

class MOTOR(VEHICLE):
    def __init__(self):
        VEHICLE.__init__(self)
        self.dungtich = 0

    def nhap(self):
        VEHICLE.nhap(self)
        self.dungtich = float(input('Dung tích xilanh là: '))
    
    def xuat(self):
        VEHICLE.xuat(self)
        print(self.dungtich)
    
    def kiemtra(self):
        if self.dungtich >= 250 and self.giaban >= 20000:
            return 1
        else:
            return 0

class CAR(VEHICLE):
    def __init__(self):
        VEHICLE.__init__(self)
        self.thoigian = 0

    def nhap(self):
        VEHICLE.nhap(self)
        self.thoigian = int(input('Thời gian tăng tốc lên 100km/h: '))

    def xuat(self):
        VEHICLE.xuat(self)
        print(self.thoigian)

    def kiemtra(self):
        if self.thoigian <= 5 and self.giaban >= 20000:
            return 1
        else: 
            return 0

n = int(input('Nhập số lượng xe motor: '))
m = int(input('Nhập số lượng xe car: '))

QLXMT = []
QLXC = []

for i in range(n):
    print('Nhập xe motor thứ', i + 1)
    MT = MOTOR()
    MT.nhap()
    QLXMT.append(MT)

for i in range(m):
    print('Nhập xe car thứ', i + 1)
    XC = CAR()
    XC.nhap()
    QLXC.append(XC)

for i in QLXMT:
    if i.kiemtra() == 1:
        i.xuat()

for i in QLXC:
    if i.kiemtra() == 1:
        i.xuat()




    