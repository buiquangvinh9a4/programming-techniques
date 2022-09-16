#include <iostream>
#include <cmath>
using namespace std;

class DIEM {
    int x, y;
public:
    void enter();
    float distance();
    void move(int dx, int dy);
    void display();
};

void DIEM::enter() {
    cin >> x >> y;
}

float DIEM::distance() {
    float s = sqrt(x * x + y * y);
    return s;
}

void DIEM::move(int dx, int dy) {
    x = x + dx;
    y = y + dy;
}

void DIEM::display() {
    cout << "(" << x << ", " << y << ")" << endl;
}

int main() {
    DIEM d1, d2;
    d1.enter();
    d1.display();
    cout << d1.distance() << endl;

    d2.enter();
    d2.display();
    d2.move(3, -1);
    d2.display();
    return 0;
}