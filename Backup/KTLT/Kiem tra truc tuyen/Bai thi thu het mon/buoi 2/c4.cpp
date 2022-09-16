	#include <iostream>
#define pi 3.14159265358979323846
using namespace std;

class TCircle {
private:
    int x, y, r;
public:
    void enter() {
        cin >> x >> y >> r;
    }
    void show() {
        cout << x << " " << y << " " << r;
    }
    double P() {
        double p = pi * 2 * r;
        p = double(int(p * 100) / 100.0);
        return p;
    }
    double S() {
        double s = pi * r * r;
        s = double(int(s * 100) / 100.0);
        return s;
    }
};

int main() {
    TCircle t1, t2, t3;
    t1.enter();
    t2.enter();
    t3.enter();

    cout << t1.P() << " " << t1.S() << endl;
    cout << t2.P() << " " << t2.S() << endl;
    cout << t3.P() << " " << t3.S();
    return 0;
}
