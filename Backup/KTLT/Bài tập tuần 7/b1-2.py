class stackNode():
    def __init__(self, value):
        self.value = value
        self.next = None
    
class stack():
    def __init__(self):
        self.top = None
        self.size = 0
        
    def isEmpty(self):
        return self.size == 0
    
    def length(self):
        return self.size
    
    def push(self, x):
        newNode = stackNode(x)
        newNode.next = self.top
        self.top = newNode
        self.size += 1
    
    def pop(self):
        curNode = self.top
        if curNode is not None:
            value = curNode.value
            self.top = curNode.next
            self.size -= 1
        else:
            return -1
        return value
    
    def getTop(self):
        if self.top is not None:
            return self.top.value
        else:
            return -1
        
    def show(self):
        curNode = self.top
        while curNode is not None:
            print(curNode.value, end = ' ')
            curNode = curNode.next
        print()

def main():
    values = stack()
    for i in range(16):
        if i % 3 == 0:
            values.push(i)            
    
    values.show()               # Kết quả in ra: 15 12 9 6 3 0
    
    values_2 = stack()          
    for i in range(16):
        if i % 3 == 0:
            values_2.push(i)
        elif i % 4 == 0:
            values_2.pop()
            
    values_2.show()            # Kết quả in ra: 15 12 9 0
    
if __name__ == '__main__':
    main()