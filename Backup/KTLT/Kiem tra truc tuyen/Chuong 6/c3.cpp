#include <iostream>
#include <cmath>
using namespace std;

class TCircle {
private:
    int x, y, r;
public:
    TCircle();
    TCircle(int x, int y, int r);
    TCircle(TCircle &T1);
    void enter();
    void display();
    friend int Intersect(TCircle a, TCircle b);

};

int Intersect(TCircle a, TCircle b) {
    double s = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    if (s == a.r + b.r)
        return 0;
    else if (s < a.r + b.r)
        return 1;
    else
        return 2;
}

TCircle::TCircle() {
    x = 0;
    y = 0;
    r = 0;
}

TCircle::TCircle(int x, int y, int r) {
    this->x = x;
    this->y = y;
    this->r = r;
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
    cout << x << " " << y << " " << r;
}


int main() {
    TCircle t1, t2;
    t1.enter();
    t2.enter();

    if (Intersect(t1, t2) == 0) {
        cout << "TIEP_XUC";
    } else if (Intersect(t1, t2) == 1) {
        cout << "GIAO_NHAU";
    } else {
        cout << "KHONG_GIAO_NHAU";
    }
    
    
    return 0;
}
