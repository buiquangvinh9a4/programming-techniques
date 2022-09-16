#include <iostream>
using namespace std;

class SANPHAM{
private:
    int ten, gia;
public:
    SANPHAM(int ten, int gia);
    friend istream & operator>>(istream &is, TFraction &T);
    friend ostream & operator<<(ostream &os, TFraction &T);
};

SANPHAM ::SANPHAM(int ten, int gia) {
    this-> ten = ten;
    this-> gia = gia;
}

istream & operator>>(istream &is, TFraction &T) {
    is >> T.ten >> T.gia;
    return is;
}

ostream & operator<<(ostream &os, TFraction &T) {
    os << T.ten << " " << T.gia;
    return os;
}

int main() {
    SANPHAM t1, t2, t3;
    cin >> t1 >> t2;
    
    return 0;
}