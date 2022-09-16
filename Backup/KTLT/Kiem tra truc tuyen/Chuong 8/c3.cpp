#include <iostream>
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
};

class TRectangle : public TPoint {
private:
    int w, h;
public:
    TRectangle() : TPoint() {
        w = 0; h = 0;
    }
    TRectangle(int x, int y, int w, int h) : TPoint(x, y) {
        this->w = w;
        this->h = h;
    }
    friend istream & operator>>(istream &is, TRectangle &T) {
        is >> T.x >> T.y >> T.w >> T.h;
        return is;
    }
    friend ostream & operator<<(ostream &os, TRectangle &T) {
        os << T.x << " " << T.y << " " << T.w << " " << T.h;
        return os;
    }
    double P() {
        return (w + h) * 2;
    }
    double S() {
        return w * h;
    }
};

void swap(double &x, double &y) {
    double temp = x;
    x = y;
    y = temp;
}

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    TRectangle t1, t2,  t3;
    TCircle t4, t5, t6;
    cin >> t1 >> t2 >> t3 >> t4 >> t5 >> t6;

    double a[6] = {t1.S(), t2.S(), t3.S(), t4.S(), t5.S(), t6.S()};
    int b[6] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (a[i] < a[j]) {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }

    for (int i = 0; i < 6; i++) {
        cout << b[i] << " ";
    }
    return 0;
}