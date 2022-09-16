#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class T3DPoint {
private:
    int x, y, z;
public:
    void enter();
    void display();
    void tinhtien(int dx, int dy, int dz);
    double khoangcach();
};

void T3DPoint::enter() {
    cin >> x >> y >> z;
}


void T3DPoint::tinhtien(int dx, int dy, int dz) {
    x = x + dx; y = y + dx; z = z + dx;
}

double T3DPoint::khoangcach() {
    double s = sqrt((x * x) + (y * y) + (z * z));
    s = double(int(s * 10)) / 10;
    return s;
}


void T3DPoint::display() {
    cout << x << " " << y << " " << z;
}

int main() {
    T3DPoint t1, t2, t3;
    t1.enter();
    t2.enter();
    t3.enter();

    int dx, dy, dz;
    cin >> dx >> dy >> dz;
    t1.tinhtien(dx, dy, dz);
    t2.tinhtien(dx, dy, dz);
    t3.tinhtien(dx, dy, dz);

    cout << fixed << setprecision(1);
    cout << t1.khoangcach() << endl;
    cout << t2.khoangcach() << endl;
    cout << t3.khoangcach() << endl;

    return 0;
}


