#include <iostream>
using namespace std;

class TRectangle {
private:
    int x, y, a, b;
public:
    void enter();
    void display();
    TRectangle();
    TRectangle(int x, int y, int a, int b);
    TRectangle(TRectangle &T);
    friend istream & operator>>(istream &is, TRectangle &T);
    friend ostream & operator<<(ostream &os, TRectangle &T);
    int S();
    friend bool operator<(TRectangle t1, TRectangle t2);
    friend bool operator<=(TRectangle t1, TRectangle t2);
    friend bool operator>(TRectangle t1, TRectangle t2);
    friend bool operator>=(TRectangle t1, TRectangle t2);
    friend bool operator!=(TRectangle t1, TRectangle t2);
    friend bool operator==(TRectangle t1, TRectangle t2);

};

void TRectangle::enter() {
    cin >> x >> y >> a >> b;
}

void TRectangle::display() {
    cout << x << " " << y << " " << a << " " << b;
}

TRectangle::TRectangle() {
    x = 0; y = 0; a = 0; b = 0;
}

TRectangle::TRectangle(int x, int y, int a, int b) {
    this->x = x;
    this->y = y;
    this->a = a;
    this->b = b;
}

TRectangle::TRectangle(TRectangle &T) {
    x = T.x;
    y = T.y;
    a = T.a;
    b = T.b;
}


istream & operator>>(istream &is, TRectangle &t) {
    is >> t.x >> t.y >> t.a >> t.b;
    return is;
}

ostream & operator<<(ostream &os, TRectangle &t) {
    os << t.x << " " << t.y << " " << t.a << " " << t.b;
    return os;
}

int TRectangle::S() {
    return a * b;
}

bool operator<(TRectangle t1, TRectangle t2) {
    return (t1.S() < t2.S()) ? true : false;
}

bool operator<=(TRectangle t1, TRectangle t2) {
    return (t1.S() <= t2.S()) ? true : false;
}

bool operator>(TRectangle t1, TRectangle t2) {
    return (t1.S() > t2.S()) ? true : false;
}

bool operator>=(TRectangle t1, TRectangle t2) {
    return (t1.S() >= t2.S()) ? true : false;
}

bool operator!=(TRectangle t1, TRectangle t2) {
    return (t1.S() != t2.S()) ? true : false;
}

bool operator==(TRectangle t1, TRectangle t2) {
    return (t1.S() == t2.S()) ? true : false;
}


void swap(TRectangle &t1, TRectangle &t2) {
    TRectangle temp = t1;
    t1 = t2;
    t2 = temp;
}

void swap(int &t1, int &t2) {
    int temp = t1;
    t1 = t2;
    t2 = temp;
}


int main() {
    TRectangle t1, t2, t3;
    cin >> t1 >> t2 >> t3;
    int a1 = 1, a2 = 2, a3 = 3;
    if (t1 <= t2 && a1 > a2) {
        swap(t1, t2);
        swap(a1, a2);
    }
    if (t1 <= t3 && a1 > a3) {
        swap(t1, t3);
        swap(a1, a3);
    }
    if (t2 <= t3 && a2 > a3) {
        swap(t2, t3);
        swap(a2, a3);
    }
    cout << t1 << "\n" << t2 << "\n" << t3;
    return 0;
}