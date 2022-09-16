#include <iostream>
#include <cmath>         // dung de lay ham sqrt
#include <conio.h>       // dung de lay ham getch - dung man hinh
#include <iomanip>       // dung de lay ham setw() - thay doi khoang cach va setprecision() - thay doi gia tri thap phan
using namespace std;

// kieu ban ghi vecTor, luu tru gia tri cua vector: name (x, y)
struct vector {
    double x, y;     // toa do cua vector
};

// ham tinh do dai cua vector
double lengthVector(const vector &vt) {
    double x = sqrt(vt.x * vt.x + vt.y * vt.y);     // cong thuc tinh do dai vector
    return x; 
}

// ham tinh tong va hieu cua 2 vector
vector tong(vector t1, vector t2) {
    vector kq;
    kq.x = t1.x + t2.x;
    kq.y = t1.y + t2.y;
    return kq;
}

vector hieu(vector t1, vector t2) {
    vector kq;
    kq.x = t1.x - t2.x;
    kq.y = t1.y - t2.y;
    return kq;
}

int main(){

    vector v1, v2;
    //Nhap vao 2 vector
    cout << "Vector 1: "<<endl;
    cout << "- Enter x: "; cin >> v1.x;
    cout << "- Enter y: "; cin >> v1.y;
    cout << "Vector 2: "<<endl;
    cout << "- Enter x: "; cin >> v2.x;
    cout << "- Enter y: "; cin >> v2.y;

    double l1 = lengthVector(v1);
    double l2 = lengthVector(v2);
    cout<<"Length of vector 1: "<<l1<<endl;
    cout<<"Length of vector 2: "<<l2<<endl;
    
    // tinh tong va hieu cho 2 vector v1, v2 va in ra man hinh    
    vector v3, v4;
    v3 = tong(v1, v2);
    v4 = hieu(v1, v2);
    cout << "Vector tong: ("<<v3.x<<", "<<v3.y<<")"<<endl;
    cout << "Vector hieu: ("<<v4.x<<", "<<v4.y<<")"<<endl;
    getch();
    return 0;
}