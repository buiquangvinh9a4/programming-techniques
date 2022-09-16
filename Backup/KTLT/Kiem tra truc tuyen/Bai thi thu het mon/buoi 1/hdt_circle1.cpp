#include <iostream>
using namespace std;

class TCircle {
private:
    int x, y, r;
public:
    void enter();
    void show();
    double p();
    double S();
    friend bool operator>(TCircle t1, TCircle t2);
    friend bool operator>=(TCircle t1, TCircle t2);
    friend bool operator<(TCircle t1, TCircle t2);
    friend bool operator<=(TCircle t1, TCircle t2);
    friend bool operator==(TCircle t1, TCircle t2);
    friend bool operator!=(TCircle t1, TCircle t2);
    friend istream & operator>>(istream &is, TCircle &t);
    friend ostream & operator<<(ostream &os, TCircle &t);
};

void TCircle::enter() {
    cin >> x >> y >> r;
}

void TCircle::show() {
    cout << x << " " << y << " " << r;
}

double TCircle::p() {
    return 2 * r * 3.14;
}

double TCircle::S() {
    return r * r * 3.14;
}

bool operator>(TCircle t1, TCircle t2) {
    return (t1.S() > t2.S()) ? 1 : 0;
}

bool operator>=(TCircle t1, TCircle t2) {
    return (t1.S() >= t2.S()) ? 1 : 0;
}

bool operator<(TCircle t1, TCircle t2) {
    return (t1.S() < t2.S()) ? 1 : 0;
}

bool operator<=(TCircle t1, TCircle t2) {
    return (t1.S() <= t2.S()) ? 1 : 0;
}

bool operator==(TCircle t1, TCircle t2) {
    return (t1.S() == t2.S()) ? 1 : 0;
}

bool operator!=(TCircle t1, TCircle t2) {
    return (t1.S() != t2.S()) ? 1 : 0;
}

istream & operator>>(istream &is, TCircle &t) {
    is >> t.x >> t.y >> t.r;
    return is;
}

ostream & operator<<(ostream &os, TCircle &t) {
    os << t.x << " " << t.y << " " << t.r;
    return os;
}

void swap(TCircle &t1, TCircle &t2) {
    TCircle tmp = t1;
    t1 = t2;
    t2 = tmp;
}


int main() {
    TCircle t1, t2, t3;
    cin >> t1 >> t2 >> t3;
    if (t1 > t2) {
        swap(t1, t2);
    }
    if (t1 > t3) {
        swap(t1, t3);
    }
    if (t2 > t3) {
        swap(t2, t3);
    }
    cout << t1 << endl;
    cout << t2 << endl;
    cout << t3 << endl;
    

    return 0;
}