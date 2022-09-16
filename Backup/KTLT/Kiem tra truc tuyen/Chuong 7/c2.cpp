#include <iostream>
using namespace std;

class TCircle {
private:
    int x, y, r;
public:
    TCircle();
    TCircle(int x, int y, int r);
    TCircle(TCircle &T1);
    void enter();
    void display();
    friend bool operator>(TCircle T1, TCircle T2);
    friend bool operator>=(TCircle T1, TCircle T2);
    friend bool operator<(TCircle T1, TCircle T2);
    friend bool operator<=(TCircle T1, TCircle T2);
    friend bool operator!=(TCircle T1, TCircle T2);
    friend bool operator==(TCircle T1, TCircle T2);
    friend istream & operator>>(istream &is, TCircle &T);
    friend ostream & operator<<(ostream &os, TCircle &T);
    float s();

};

TCircle::TCircle() {
    x = 0;
    y = 0;
    r = 0;
}

TCircle::TCircle(int x, int y, int r) {
    this->x = x;
    this->y = y;
    this->r = r;
}

TCircle::TCircle(TCircle &T1) {
    x = T1.x;
    y = T1.y;
    r = T1.r;
}

void TCircle::enter() {
    cin >> x >> y >> r;
}

void TCircle::display() {
    cout << x << " " << y << " " << r;
}

float TCircle::s() {
    return 3.14 * r * r;
}

bool operator>(TCircle T1, TCircle T2) {
    return (T1.s() > T2.s()) ? true : false;
}

bool operator>=(TCircle T1, TCircle T2) {
    return (T1.s() >= T2.s()) ? true : false;
}

bool operator<(TCircle T1, TCircle T2) {
    return (T1.s() < T2.s()) ? true : false;
}

bool operator<=(TCircle T1, TCircle T2) {
    return (T1.s() <= T2.s()) ? true : false;
}

bool operator!=(TCircle T1, TCircle T2) {
    return (T1.s() != T2.s()) ? true : false;
}

bool operator==(TCircle T1, TCircle T2) {
    return (T1.s() == T2.s()) ? true : false;
}

istream & operator>>(istream &is, TCircle &T) {
    is >> T.x >> T.y >> T.r;
    return is;
}

ostream & operator<<(ostream &os, TCircle &T) {
    os << T.x << " " << T.y << " " << T.r;
    return os;
}


int main() {
    TCircle t1, t2, t3;
    cin >> t1 >> t2 >> t3;
    TCircle min = t1;
    if (t2 < min) min = t2;
    if (t3 < min) min = t3;
    cout << min;
    return 0;
}