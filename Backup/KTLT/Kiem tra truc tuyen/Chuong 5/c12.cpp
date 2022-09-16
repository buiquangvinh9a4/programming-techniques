#include <iostream>
#include <cmath>
#include <iomanip>
# define M_PI    3.14159265358979323846  
using namespace std;

class TCircle {
private:
    int x, y, r;
public:
    void enter();
    void display();
    float chuvi();
    float dientich();
    friend void Swap(TCircle &t1, TCircle &t2);
};

void TCircle::enter() {
    cin >> x >> y >> r;
}

void TCircle::display() {
    cout << x << " " << y << " " << r;
}

float TCircle::chuvi() {
    return 2 * M_PI * r;
}

float TCircle::dientich() {
    return M_PI * r * r;
}

void swap(int &a ,int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void Swap(TCircle &t1, TCircle &t2) { 
    swap(t1.x, t2.x);
    swap(t1.y, t2.y);
    swap(t1.r, t2.r);
}


int main() {
    TCircle t1, t2, t3;
    t1.enter();
    t2.enter();
    t3.enter();
    float a = t1.dientich(), b = t2.dientich(), c = t3.dientich();
    if (a > b)
        Swap(t1, t2);
    if (a > c)
        Swap(t1, t3);
    if (b > c)
        Swap(t2, t3);
    t1.display(); cout << endl;
    t2.display(); cout << endl;
    t3.display();
    return 0;
}