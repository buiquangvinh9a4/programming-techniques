#include <iostream>
using namespace std;

class PhanSo{
private:
    int tu, mau;
public:
    PhanSo();
    PhanSo(int tt, int tm);
    void nhapdl();
    void hienthi();
    friend PhanSo operator+(PhanSo t1, PhanSo t2);
    friend PhanSo operator-(PhanSo t1, PhanSo t2);
    friend PhanSo operator*(PhanSo t1, PhanSo t2);
    friend PhanSo operator/(PhanSo t1, PhanSo t2);

    friend bool operator>(PhanSo t1, PhanSo t2);
    friend bool operator>=(PhanSo t1, PhanSo t2);
    friend bool operator<(PhanSo t1, PhanSo t2);
    friend bool operator<=(PhanSo t1, PhanSo t2);
    friend bool operator==(PhanSo t1, PhanSo t2);
    friend bool operator!=(PhanSo t1, PhanSo t2);

};

PhanSo::PhanSo() {
    tu = 0;
    mau = 1;
}

PhanSo::PhanSo(int tt, int tm) {
    tu = tt;
    mau = tm;
}

void PhanSo::nhapdl() {
    cin >> tu >> mau;
}

void PhanSo::hienthi() {
    cout << tu << "/" << mau;
}

PhanSo operator+(PhanSo t1, PhanSo t2) {
    PhanSo kq;
    kq.tu = t1.tu * t2.mau + t2.tu * t1.mau;
    kq.mau = t1.mau * t2.mau;
    return kq;
}

PhanSo operator-(PhanSo t1, PhanSo t2) {
    PhanSo kq;
    kq.tu = t1.tu * t2.mau - t2.tu * t1.mau;
    kq.mau = t1.mau * t2.mau;
    return kq;
}

PhanSo operator*(PhanSo t1, PhanSo t2) {
    PhanSo kq;
    kq.tu = t1.tu * t2.tu;
    kq.mau = t1.mau * t2.mau;
    return kq;
}

PhanSo operator/(PhanSo t1, PhanSo t2) {
    PhanSo kq;
    kq.tu = t1.tu * t2.mau;
    kq.mau = t1.mau * t2.tu;
    return kq;
}

bool operator>(PhanSo t1, PhanSo t2) {
    float x = t1.tu / float(t1.mau);
    float y = t2.tu / float(t2.mau);
    return (x > y) ? 1 : 0;

}

bool operator>=(PhanSo t1, PhanSo t2) {
    float x = t1.tu / float(t1.mau);
    float y = t2.tu / float(t2.mau);
    return (x >= y) ? 1 : 0;

}

bool operator<(PhanSo t1, PhanSo t2) {
    float x = t1.tu / float(t1.mau);
    float y = t2.tu / float(t2.mau);
    return (x < y) ? 1 : 0;

}

bool operator<=(PhanSo t1, PhanSo t2) {
    float x = t1.tu / float(t1.mau);
    float y = t2.tu / float(t2.mau);
    return (x <= y) ? 1 : 0;

}

bool operator==(PhanSo t1, PhanSo t2) {
    float x = t1.tu / float(t1.mau);
    float y = t2.tu / float(t2.mau);
    return (x == y) ? 1 : 0;

}

bool operator!=(PhanSo t1, PhanSo t2) {
    float x = t1.tu / float(t1.mau);
    float y = t2.tu / float(t2.mau);
    return (x != y) ? 1 : 0;

}


int main() {
    PhanSo t1(2, 3);
    PhanSo t2(4, 5);
    PhanSo t3;
    t3 = t1 + t2;
    t3.hienthi(); cout << endl;
    PhanSo t4;
    t4 = t1 / t2;
    t4.hienthi(); cout << endl;
    bool s1 = t1 > t2, s2 = t1 >= t2, s3 = t1 < t2, s4 = t1 <= t2, s5 = t1 == t2, s6 = t1 != t2;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;
}