#include <iostream>
using namespace std;

class TFraction {
private:
    int a, b;
public:
    void enter();
    void show();
    void rutgon();
    TFraction();
    TFraction(int a, int b);
    TFraction(TFraction &T);
    friend TFraction operator+(TFraction T1, TFraction T2);
    friend istream & operator>>(istream &is, TFraction &T);
    friend ostream & operator<<(ostream &os, TFraction &T);
};

void TFraction::enter() {
    cin >> a >> b;
}

void TFraction::show() {
    cout << a << " " << b;
}

int UCLN(int a, int b) {
    if (a % b == 0) {
        return b;
    } else {
        return UCLN(b, a % b);
    }
}

void TFraction::rutgon() {
    int i = UCLN(a, b);
    if (a == 0) {
        a = a;
        b = b;
    } else {
        a /= i;
        b /= i;
    }
    if ((a < 0 && b < 0) || (a > 0 && b < 0)) {
        a = -a;
        b = -b;
    }
}

TFraction::TFraction() {
    a = 0;
    b = 1;
}

TFraction::TFraction(int a, int b) {
    this->a = a;
    this->b = b;
}

TFraction::TFraction(TFraction &T) {
    a = T.a;
    b = T.b;
}

TFraction operator+(TFraction T1, TFraction T2) {
    TFraction kq;
    kq.a = T1.a * T2.b + T1.b * T2.a;
    kq.b = T1.b * T2.b;
    kq.rutgon();
    return kq;
}

istream & operator>>(istream &is, TFraction &T) {
    is >> T.a >> T.b;
    return is;
}

ostream & operator<<(ostream &os, TFraction &T) {
    os << T.a << " " << T.b;
    return os;
}

int main() {
    TFraction t1, t2, t3;
    cin >> t1 >> t2;
    t3 = t1 + t2;
    cout << t3;
    return 0;
}