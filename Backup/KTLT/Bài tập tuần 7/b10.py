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


def main():
    st = stack()
    bieuthuc = input('Nhập biểu thức hậu tố: ')
    l = len(bieuthuc)
    
    for i in bieuthuc:
        if '0' <= i <= '9':
            st.push(i)
        else:
            if (st.isEmpty() == False):
                t1 = st.pop()
                t2 = st.pop()
                kq = 0
                if i == '+':
                    kq = int(t2) + int(t1)
                elif i == '-':
                    kq = int(t2) - int(t1)
                elif i == '*':
                    kq = int(t2) * int(t1)
                elif i == '/':
                    kq = int(t2) / int(t1)
                st.push(kq) 
    ketqua = 0
    if (st.isEmpty() == False):
        ketqua = st.pop()
    print(f'Kết quả biểu thức {bieuthuc} = {ketqua}')
                
    
        
    
if __name__ == '__main__':
    main()