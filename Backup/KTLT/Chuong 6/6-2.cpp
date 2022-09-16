#include <iostream>
#include <cmath>
using namespace std;

class TCircle {
private:
    double x, y, r;
public:
    TCircle();  // ham tao
    TCircle(double dx, double dy, double dr);
    TCircle(TCircle &T1);  // ham tao sao chep
    void enter();
    void display();
    friend string Intersect(TCircle a, TCircle b);
    ~TCircle();
};

string Intersect(TCircle a, TCircle b) {
    double s = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    if (s == a.r + b.r)
        return "Contact.\n";
    else if (s < a.r + b.r)
        return "Intersect.\n";
    else
        return "Do not intersect.\n";
}

TCircle::TCircle() {
    x = 0;
    y = 0;
    r = 0;
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





TCircle::~TCircle() {
    cout << "This is a destructor.\n";
}

int main() {

    // khoi tao mac dinh khong tham so
    TCircle t1;
    t1.display();

    // khoi tao co tham so
    TCircle t2(2, 3, 5);
    t2.display();

    // khoi tao ham tao sao chep
    TCircle t3(t1);
    t3.display();

    // vi tri tuong doi 2 duong tron
    cout << Intersect(t1, t2);
    
    return 0;
}
