#include <iostream>
#include <iomanip>
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

class TSegment : public TPoint {
private:
    double g, d;
public:
    TSegment() : TPoint() {
        g = 0;
        d = 0;
    }
    TSegment(int x, int y, double g, double d) : TPoint(x, y) {
        this->g = g;
        this->d = d;
    }
    friend istream &operator>>(istream &is, TSegment &T) {
        is >> T.x >> T.y >> T.g >> T.d;
        return is;
    }
    friend ostream &operator<<(ostream &os, TSegment &T) {
        os << T.x << " " << T.y << " " << T.g << " " << T.d;
        return os;
    }
    friend bool VTTD(TSegment T1, TSegment T2) {
        
    }

};

int main() {
    TSegment t1, t2 ,t3;
    cin >> t1 >> t2 >> t3;

}