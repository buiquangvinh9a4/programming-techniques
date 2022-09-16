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
    float s();
    friend int F(TCircle t1, TCircle  t2);
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

int F(TCircle t1, TCircle t2) {
    if (t1.s() < t2.s()) {
        return 0;
    } else if (t1.s() == t2.s()) {
        return 1;
    } else {
        return 2;
    }
}


int main() {
    TCircle t1, t2, t3;
    t1.enter();
    t2.enter();
    t3.enter();

    int S1 = F(t1, t2), S2 = F(t2, t3), S3 = F(t1, t3);
    if ((S1 == 0 || S1 == 1) && (S2 == 0 || S2 == 1)) {
        t1.display();
    } else if ((S2 == 0 || S2 == 1) && (S3 == 2)) {
        t2.display();
    } else {
        t3.display();
    }
    return 0;
}