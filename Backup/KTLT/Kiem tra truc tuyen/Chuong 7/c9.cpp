#include <iostream>
using namespace std;

class TFraction {
private:
    int a, b;
public:
    void enter();
    void display();
    TFraction();
    TFraction(int a, int b);
    TFraction(TFraction &T);
    void rutgon();
    friend TFraction operator+(TFraction t1, TFraction t2);
    friend istream & operator>>(istream &is, TFraction &t);
    friend ostream & operator<<(ostream &os, TFraction &t);
};

void TFraction::enter() {
    cin >> a >> b;
}

void TFraction::display() {
    cout << a << " " << b;
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

int UCLN(int a, int b) {
    if (a % b == 0) return b;
    return UCLN(b, a % b);
}

void TFraction::rutgon() {
    int i = UCLN(a, b);
    if (a == 0) {
        a = a;
        b = b;
    } else {
        a = a / i;
        b = b / i;
    }
    if ((a < 0 && b < 0) || (a > 0 && b < 0)) {
        a = -a;
        b = -b;
    }
}

TFraction operator+(TFraction t1, TFraction t2) {
    TFraction t3;
    t3.a = t1.a * t2.b + t1.b * t2.a;
    t3.b = t1.b * t2.b;
    return t3;
}

istream & operator>>(istream &is, TFraction &t) {
    is >> t.a >> t.b;
    return is;
}

ostream & operator<<(ostream &os, TFraction &t) {
    os << t.a << " " << t.b;
    return os;
}

int main() {
    TFraction t1, t2, t3;
    cin >> t1;
    cin >> t2;
    t3 = t1 + t2;
    t3.rutgon();
    cout << t3;
    return 0;
}