#include <iostream>
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
    TCircle() {
        x = 0; y = 0; r = 0;
    }
    TCircle(int x, int y, int r) {
        this->x = x;
        this->y = y;
        this->r = r;
    }
    TCircle(TCircle &T) {
        x = T.x; y = T.y; r = T.r;
    }
    double S() {
        return 3.141592653589793 * r * r;
    }
    friend bool operator>(TCircle t1, TCircle t2) {
        return (t1.S() > t2.S()) ? true : false;
    }
    friend bool operator>=(TCircle t1, TCircle t2) {
        return (t1.S() >= t2.S()) ? true : false;
    }
    friend bool operator<(TCircle t1, TCircle t2) {
        return (t1.S() < t2.S()) ? true : false;
    }
    friend bool operator<=(TCircle t1, TCircle t2) {
        return (t1.S() <= t2.S()) ? true : false;
    }
    friend bool operator==(TCircle t1, TCircle t2) {
        return (t1.S() == t2.S()) ? true : false;
    }
    friend bool operator!=(TCircle t1, TCircle t2) {
        return (t1.S() != t2.S()) ? true : false;
    }
    friend istream & operator>>(istream &is, TCircle &t) {
        is >> t.x >> t.y >> t.r;
        return is;
    }
    friend ostream & operator<<(ostream &os, TCircle &t) {
        os << t.x << " " << t.y << " " << t.r;
        return os;
    }
};

int main() {
    TCircle t1, t2, t3;
    cin >> t1 >> t2 >> t3;

    TCircle min = t1;
    if (min > t2) {
        min = t2;
    }
    if (min > t3) {
        min = t3;
    }

    cout << min;
    return 0;
}