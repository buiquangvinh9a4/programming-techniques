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
    float p();

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

float TCircle::p() {
    return 3.14 * 2 * r;
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

void swap(TCircle &T1, TCircle &T2) {
    TCircle temp = T1;
    T1 = T2;
    T2 = temp;
}


int main() {
    TCircle t1, t2, t3;
    cin >> t1 >> t2 >> t3;
    if (t1 > t2)
        swap(t1, t2);
    if (t1 > t3)
        swap(t1, t3);
    if (t2 > t3)
        swap(t2, t3);
    cout << t1 << "\n" << t2 << "\n" << t3 << "\n";
    return 0;
}