from re import L
import string


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
def end_stack(st1):
    st2 = stack()
    
    for i in range(st1.length()):
        x = st1.pop()
        st2.push(x)
    
    pt_end = st2.pop()
    
    for i in range(st2.length()):
        x = st2.pop()
        st1.push(x)
    return pt_end

def pt_N(st1, n):
    st2 = stack()
    
    for i in range(st1.length() - n + 1):
        x = st1.pop()
        st2.push(x)
        
    pt_n = st2.pop()
    
    for i in range(st2.length()):
        x = st2.pop()
        st1.push(x)
    
    return pt_n

def main():
    # khởi tạo stack và các giá trị cho stack
    st1 = stack()
    st1.push(5)
    st1.push(4)
    st1.push(7)
    st1.push(8)
    st1.push(10)
    
    st1.show()
    
    # # gọi hàm lấy phần tử cuối stack
    # pt_end = end_stack(st1)
    
    # print(f'Phần tử ở đáy stack = {pt_end}')


    # gọi hàm lấy phần tử ở vị trí thứ n
    n = int(input('Bạn muốn lấy phần tử ở vị trí nào trong stack: '))
    
    pt_n = pt_N(st1, n)
    
    st1.show()
    print(f'Phần tử tại vị trí {n} trong stack = {pt_n}')
    
    


    
          
    
        
    
if __name__ == '__main__':
    main()