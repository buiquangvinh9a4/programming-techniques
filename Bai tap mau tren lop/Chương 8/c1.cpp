#include <iostream>
#include <cmath>
using namespace std;

class TPoint {
protected:
    int x, y;
public:
    TPoint() {
        x = 0; y = 0;
    }
    TPoint(int x, int y) {
        this->x = x; this->y = y;
    }
    friend istream &operator>>(istream &is, TPoint &T) {
        is >> T.x >> T.y;
        return is;
    }
    friend ostream &operator<<(ostream &os, TPoint &T) {
        os << T.x << " " << T.y << " ";
        return os;
    }
};

class TCircle : public TPoint {
private:
    int r;
public:
    TCircle() : TPoint() {
        r = 0;
    }
    TCircle(int x, int y, int r) : TPoint(x, y) {
        this->r = r;
    }
    friend istream & operator>>(istream &is, TCircle &T) {
        is >> T.x >> T.y >> T.r;
        return is;
    }
    friend ostream & operator<<(ostream &os, TCircle &T) {
        os << T.x << " " << T.y << " " << T.r;
        return os;
    }
    double P() {
        return 2 * 3.14 * r;
    }
    double S() {
        return r * r * 3.14;
    }
    friend int VTTD(TCircle T1, TCircle T2) {
        double s = sqrt((T1.x - T2.x) * (T1.x - T2.x) + (T1.y - T2.y) * (T1.y - T2.y));
        if (s == T1.r + T2.r) return 0;
        else if (s < T1.r + T2.r) return 1;
        else if (s > T1.r - T2.r) return 2;
        return 3;
    }


};

int main() {
    TCircle t1, t2,  t3;
    cin >> t1 >> t2 >> t3;
    if (VTTD(t1, t2) == 1) {
        cout << 1 << " " << 2 << endl;
    }
    if (VTTD(t1, t3) == 1) {
        cout << 1 << " " << 3 << endl;
    }
    if (VTTD(t2, t3) == 1) {
        cout << 2 << " " << 3 << endl;
    }
    return 0;
}