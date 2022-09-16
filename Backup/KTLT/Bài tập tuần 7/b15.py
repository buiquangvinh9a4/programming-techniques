class PostfixCalculator:
    def __init__(self):
        self.stackList = list()

    def value(self, x):
        self.stackList.append(x)
        
    def result(self):
        if len(self.stackList) == 0:
            return -1
        return self.stackList[-1]
    
    def length(self):
        return len(self.stackList)
    
    def clear(self):
        for i in range(len(self.stackList)):
            self.stackList.pop()
    
    def clearLast(self):
        if len(self.stackList) == 0:
            return -1
        return self.stackList.pop()
    
    def compute(self, op):
        if len(self.stackList) <= 1:
            return -1
        s = 0
        t1 = self.stackList.pop()
        t2 = self.stackList.pop()
        if op == '+':
            s = t2 + t1
        elif op == '-':
            s = t2 - t1
        elif op == '*':
            s = t2 * t1
        elif op == '/':
            s = t2 / t1
        self.stackList.append(s)
        
            
    
    def show(self):
        for i in range(len(self.stackList)):
            print(self.stackList[i], end = '')
        print()    
    
    
def main():
    L = PostfixCalculator()
    L.value(2)
    L.value(3)
    L.value(4)
    L.value(5)
    
    print(L.length())
    L.show()
    L.clearLast()
    print(L.length())
    L.show()
    L.compute('+')
    L.show()
    L.compute('*')
    L.show()
    
    
if __name__ == '__main__':
    main()