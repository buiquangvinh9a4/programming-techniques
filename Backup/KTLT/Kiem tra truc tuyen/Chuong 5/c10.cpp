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
};

void TCircle::enter() {
    cin >> x >> y >> r;
}


void TCircle::display() {
    float p = float(int(chuvi() * 100)) / 100;
    float s = float(int(dientich() * 100)) / 100;
    cout << fixed << setprecision(2);
    cout << p << " " << s;
}





float TCircle::chuvi() {
    return 2 * M_PI * r;
}

float TCircle::dientich() {
    return M_PI * r * r;
}


int main() {
    TCircle t1, t2, t3;
    t1.enter();
    t2.enter();
    t3.enter();
    cout << fixed << setprecision(2);
    t1.display(); cout << endl;
    t2.display(); cout << endl;
    t3.display();
    return 0;
}