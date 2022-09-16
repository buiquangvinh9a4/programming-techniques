#include <iostream>
using namespace std;

class TDate {
private:
    int d, m, y;
public:
    void enter();
    void display();
    friend bool operator>(TDate D1, TDate D2);
    friend bool operator>=(TDate D1, TDate D2);
    friend bool operator<(TDate D1, TDate D2);
    friend bool operator<=(TDate D1, TDate D2);
    friend bool operator!=(TDate D1, TDate D2);
    friend bool operator==(TDate D1, TDate D2);
    friend istream & operator>>(istream &is, TDate &D);
    friend ostream & operator<<(ostream &os, TDate &D);    
};

void TDate::enter() {
    cin >> d >> m >> y;
}

void TDate::display() {
    cout << d << " " << m << " " << y;
}

bool operator>(TDate D1, TDate D2) {
    if (D1.y > D2.y) return true;
    if (D1.y == D2.y) {
        if (D1.m > D2.m) return true;
        if (D1.m == D2.m) {
            if (D1.d > D2.d) return true;
        }
    }
    return false;
}

bool operator>=(TDate D1, TDate D2) {
    if (D1.y > D2.y) return true;
    if (D1.y == D2.y) {
        if (D1.m > D2.m) return true;
        if (D1.m == D2.m) {
            if (D1.d >= D2.d) return true;
        }
    }
    return false;
}

bool operator<(TDate D1, TDate D2) {
    if (D1.y < D2.y) return true;
    if (D1.y == D2.y) {
        if (D1.m < D2.m) return true;
        if (D1.m == D2.m) {
            if (D1.d < D2.d) return true;
        }
    }
    return false;
}

bool operator<=(TDate D1, TDate D2) {
    if (D1.y < D2.y) return true;
    if (D1.y == D2.y) {
        if (D1.m < D2.m) return true;
        if (D1.m == D2.m) {
            if (D1.d <= D2.d) return true;
        }
    }
    return false;
}

bool operator!=(TDate D1, TDate D2) {
    return (D1.y != D2.y || D1.m != D2.m || D1.d != D2.d) ? true : false;
}

bool operator==(TDate D1, TDate D2) {
    return (D1.y == D2.y && D1.m == D2.m && D1.d == D2.d) ? true : false;
}

istream & operator>>(istream &is, TDate &D) {
    is >> D.d >> D.m >> D.y;
    return is;
}

ostream & operator<<(ostream &os, TDate &D) {
    os << D.d << " " << D.m << " " << D.y;
    return os;
}

int main() {
    TDate t1, t2, t3;
    cin >> t1;
    cin >> t2;
    cin >> t3;
    TDate min = t1;
    if (t2 < min) min = t2;
    if (t3 < min) min = t3;
    cout << min;
    return 0;
}