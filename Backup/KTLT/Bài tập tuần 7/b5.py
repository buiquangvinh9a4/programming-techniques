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
        
# ----------------------------------------------------------

class stackArray:
    def __init__(self, maxSize):
        self.next = None
        self.top = -1
        self.size = 0
        self.stackarray = [None] * maxSize
    
    def isEmpty(self):
        return self.size == 0
    
    def isFull(self):
        return self.size == len(self.stackarray)
    
    def length(self):
        return self.size
    
    def push(self, value):
        if self.isFull():
            return -1
        else:
            if self.isEmpty():
                self.top = 0
                self.stackarray[self.top] = value
            else:
                self.top += 1
                self.stackarray[self.top] = value
            self.size += 1
    
    def pop(self):
        if self.isEmpty():
            return -1
        else:
            data = self.stackarray[self.top]
            self.top -= 1
            self.size -= 1
            return data
    
    def getTop(self):
        if self.isEmpty():
            return -1
        else:
            return self.stackarray[self.top]
    
    def show(self):
        temp = self.top + 1
        for i in range(temp):
            print(self.stackarray[i], end = ' ')
            temp -= 1
        print()
    
    
# ----------------------------------------------------------
class StackList:
    def __init__(self):
        self.stackList = list()
    
    def isEmpty(self):
        return len(self.stackList) == 0
    
    def length(self):
        return len(self.stackList)
    
    def getTop(self):
        if self.isEmpty():
            return -1
        return self.stackList[-1]
    
    def push(self, value):
        self.stackList.append(value)
    
    def pop(self):
        if self.isEmpty():
            return -1
        return self.stackList.pop()


def main():
    L = stackArray(5)
    L.push(5)
    L.push(4)
    L.push(3)
    L.show()
    L.push(6)
    L.push(7)
    L.show()
    L.push(8)
    L.pop()
    L.show()
    L.pop()
    L.show()
    print(L.pop())
    
if __name__ == '__main__':
    main()