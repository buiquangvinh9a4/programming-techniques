#include <iostream>
#include <cmath>
using namespace std;

class TPoint {
private:
    int x, y;
public:
    void enter();
    double S();
    friend void Swap(TPoint &t1, TPoint &t2);
    void display();
};

void TPoint::enter() {
    cin >> x >> y;
}

void TPoint::display() {
    cout << x << " " << y;
}

double TPoint::S() {
    double s = sqrt(x * x + y * y);
    return s;
}

void swap(int &a ,int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void Swap(TPoint &t1, TPoint &t2) { 
    swap(t1.x, t2.x);
    swap(t1.y, t2.y);
}


int main() {
    TPoint t1, t2, t3;
    t1.enter();
    t2.enter();
    t3.enter();
    double a = t1.S(), b = t2.S(), c = t3.S();
    if (a > b) {
        Swap(t1, t2);
        swap(a, b);
    }
    if (a > c) {
        Swap(t1, t3);
        swap(a, c);
    }
    if (b > c) {
        Swap(t2, t3);
        swap(b, c);
    }
    t1.display(); cout << endl;
    t2.display(); cout << endl;
    t3.display();
    return 0;
}