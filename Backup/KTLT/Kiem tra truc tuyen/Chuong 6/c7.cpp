#include <iostream>
using namespace std;

class TFraction {
private:
    int a, b;
public:
    TFraction();
    TFraction(int a, int b);
    TFraction(TFraction &T1);
    void enter();
    void display();
    void rutgon();
    friend void tich(TFraction t1, TFraction t2, TFraction &t3);
};

TFraction::TFraction() {
    a = 1;
    b = 1;
}

TFraction::TFraction(int a, int b) {
    this->a = a;
    this->b = b;
}

TFraction::TFraction(TFraction &T1) {
    a = T1.a;
    b = T1.b;
}

void TFraction::enter() {
    cin >> a >> b;
}

void TFraction::display() {
    rutgon();
    cout << a << " " << b;
}

int UCLN(int a, int b) {
    if (a % b == 0)
        return b;
    return UCLN(b, a % b);
}

void TFraction::rutgon() {
    int c = UCLN(a, b);
    if (a == 0) {
        a = a;
        b = b;
    } else {
        a = a / c;
        b = b / c;
    }
    if ((a < 0 && b < 0) || (a > 0 && b < 0)) {
        a = -a;
        b = -b;
    }
}

void tich(TFraction t1, TFraction t2, TFraction &t3) {
    t3.a = t1.a * t2.a;
    t3.b = t1.b * t2.b;
    t3.rutgon();
}

int main() {
    TFraction t1, t2;
    t1.enter();
    t2.enter();
    
    TFraction t3(t2);
    tich(t1, t2, t3);
    t3.display();

    return 0;
}