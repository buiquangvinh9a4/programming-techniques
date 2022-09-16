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

class TRectangle : public TPoint {
private:
    int w, h;
public:
    TRectangle() : TPoint() {
        w = 0;
        h = 0;
    }
    TRectangle(int x, int y, int w, int h) : TPoint(x, y) {
        this->w = w; this->h = h;
    }
    friend istream & operator>>(istream &is, TRectangle &T) {
        is >> T.x >> T.y >> T.w >> T.h;
        return is;
    }
    friend ostream & operator<<(ostream &os, TRectangle &T) {
        os << T.x << " " << T.y << " " << T.w << " " << T.h;
        return os;
    }
    int P() {
        return (w + h) * 2;
    }
    int S() {
        return w * h;
    }
    friend bool VTTD(TRectangle T1, TRectangle T2) {
        if(T1.x + T1.w/2 < T2.x - T2.w/2) return false;
        else if (T1.x - T1.w/2 > T2.x + T2.w/2) return false;
        else if (T1.y + T1.h/2 < T2.y - T2.h/2) return false;
        else if (T1.y - T1.h/2 > T2.y + T2.h/2) return false;
        return true;
    }

};

int main() {
    TRectangle t1, t2,  t3;
    cin >> t1 >> t2 >> t3;
    if (VTTD(t1, t2)) {
        cout << 1 << " " << 2 << endl;
    }
    if (VTTD(t1, t3)) {
        cout << 1 << " " << 3 << endl;
    }
    if (VTTD(t2, t3)) {
        cout << 2 << " " << 3 << endl;
    }
    return 0;
}