class People:
    def __init__(self):
        self.name = None
        self.age = 0
        self.address = None

def set(self):
    self.name = input('Name: ')
    self.age = int(input('Age: '))
    self.address = input('Address: ')

def get(self):
    print(self.name, self.age, self.address)

class Student(People):
    def __init__(self):
        People.__init__(self)
        self.id = 0
        self.math = 0
        self.physical = 0
        self.chemistry = 0

    def set(self):
        People.set(self)
        self.id = int(input('Id: '))
        self.math = float(input('Math: '))
        self.physical = float(input('Physical: '))
        self.chemistry = float(input('Chemistry: '))

    def get(self):
        People.get(self)
        print(self.math, self.physical, self.chemistry)

    def GPA(self):
        gpa = (self.math + self.physical + self.chemistry) / 3
        return gpa
    
n = int(input('Nhập vào số sinh viên: '))

QLSV = []

for i in range(n):
    print('Nhập sinh viên', i + 1)
    SV = Student()
    SV.set()
    QLSV.append()



    

