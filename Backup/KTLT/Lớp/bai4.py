class People:
    def __init__(self):
        self.name = None
        self.age = 0
        self.address = None
    
    def getName(self):
        n = self.name
        return n
    def set(self):
        self.name = input('Nhập tên: ')
        self.age = int(input('Nhập tuổi: '))
        self.address = input('Nhập địa chỉ: ')
    
    def get(self):
        print('Họ tên là: ', self.name)
        print('Tuổi là: ', self.age)
        print('Địa chỉ là: ', self.address)
        #print(self.name, self.age, self.address)

class Student(People):
    def __init__(self):
        People.__init__(self)
        self.id = 0
        self.math = 0
        self.physical = 0
        self.chemistry = 0
    
    def set(self):
        People.set(self)
        self.id = int(input('Nhập id: '))
        self.math = float(input('Nhập điểm toán: '))
        self.physical = float(input('Nhập điểm môn Vật lý: '))
        self.chemistry = float(input('Nhập điểm môn Hóa học: '))

    def get(self):
        People.get(self)
        print(self.id, self.math, self.physical, self.chemistry)

    def GPA(self):
        gpa = (self.math + self.physical + self.chemistry) / 3
        return gpa


n = int(input('Nhập vào số sinh viên: '))
QLSV = []
for i in range(n):
    print('Nhập sinh viên', i + 1)
    SV = Student()
    SV.set()
    QLSV.append(SV)

for i in QLSV:
    i.GPA()
    i.get()



    
