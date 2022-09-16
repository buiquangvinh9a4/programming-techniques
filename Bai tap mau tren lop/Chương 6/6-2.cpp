#include <iostream>
#include <cmath>
using namespace std;

class TCircle {
private:
    double x, y, r;
public:
    TCircle();
    TCircle(double dx, double dy, double dr);
    TCircle(TCircle &T1);
    void enter();
    void display();
    ~TCircle();
    
    friend string intersect(TCircle a, TCircle b);
};

TCircle::TCircle() {
    x = 2;
    y = 2;
    r = 2;
}

TCircle::TCircle(double dx, double dy, double dr) {
    x = dx;
    y = dy;
    r = dr;
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
    cout << "Circle (" << x << ", " << y << ", r = " <<  r << ")" << endl;
}

string intersect(TCircle a, TCircle b) {
    double s = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    
    if (s == a.r + b.r)
        return "Touch.\n";
    else if (s < a.r + b.r)
        return "Intersect.\n";
    else
        return "Do not intersect.\n";
}

TCircle::~TCircle() {
    cout << "This is a destructor.\n";
}

int main() {

    // khoi tao mac dinh
    TCircle t1;
    t1.display();

    // khoi tao co tham so
    TCircle t2(2, 3, 5);
    t2.display();

    // vi tri tuong doi 2 duong tron
    cout << intersect(t1, t2);
    
    return 0;
}