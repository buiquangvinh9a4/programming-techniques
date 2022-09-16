#include <iostream>
using namespace std;

class TFraction {
private:
    int a, b;
public:
    void enter();
    void display();
    void rutgon();
    friend bool sosanh(TFraction t1, TFraction t2);
};

void TFraction::enter() {
    cin >> a >> b;
}

void TFraction::display() {
    cout << a << " " << b;
}

int UCLN(int a, int b) {
    if (a % b == 0)
        return b;
    return UCLN(b, a % b);
}

bool sosanh(TFraction t1, TFraction t2) {
    if ((t1.a / float(t1.b)) <= (t2.a / float(t2.b)))
        return true;
    else return false;
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

int main() {
    TFraction t1, t2, t3;
    t1.enter();
    t2.enter();
    t3.enter();
    t1.rutgon();
    t2.rutgon();
    t3.rutgon();
    if (sosanh(t1, t2) && sosanh(t2, t3)) {
        t1.display(); cout << endl;
        t2.display(); cout << endl;
        t3.display();
    }
    else if (sosanh(t1, t3) && sosanh (t3, t2)) {
        t1.display(); cout << endl;
        t3.display(); cout << endl;
        t2.display();
    }
    else if (sosanh(t2, t1) && sosanh (t1, t3)) {
        t2.display(); cout << endl;
        t1.display(); cout << endl;
        t3.display();
    }
    else if (sosanh(t2, t3) && sosanh (t3, t1)) {
        t2.display(); cout << endl;
        t3.display(); cout << endl;
        t1.display();
    }
    else if (sosanh(t3, t1) && sosanh (t1, t2)) {
        t3.display(); cout << endl;
        t1.display(); cout << endl;
        t2.display();
    }
    else if (sosanh(t3, t2) && sosanh (t2, t1)) {
        t3.display(); cout << endl; 
        t2.display(); cout << endl; 
        t1.display();
    }
    return 0;
}