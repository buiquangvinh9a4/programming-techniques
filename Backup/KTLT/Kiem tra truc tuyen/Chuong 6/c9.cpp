#include <iostream>
using namespace std;

class TRectangle {
private:
    int x, y;
    int a, b;
public:
    TRectangle();
    TRectangle(int x, int y, int a, int b);
    void enter();
    int dientich();
    void display();
    friend bool F(TRectangle t1, TRectangle t2);

};

TRectangle::TRectangle() {
	x = 0; y = 0; a = 0; b = 0;
}

TRectangle::TRectangle(int x, int y, int a, int b) {
	this->x = x;
	this->y = y;
	this->a = a;
	this->b = b;
}

void TRectangle::enter() {
    cin >> x >> y >> a >> b;
}

void TRectangle::display() {
    cout << x << " " << y << " " << a << " " << b;
}


int TRectangle::dientich() {
    int dt = a * b;
    return dt;
}

bool F(TRectangle t1, TRectangle t2) {
    if (t1.dientich() >= t2.dientich())
        return true;
    else return false;
}


void sapxep(TRectangle &t1, TRectangle &t2) {
    TRectangle temp = t1;
    t1 = t2;
    t2 = temp;

}

void swap(TRectangle &t1, TRectangle &t2, TRectangle &t3) {
    if (!F(t1, t2)) {
        sapxep(t1, t2);
    }
    if (!F(t1, t3)) {
        sapxep(t1, t3);
    }
    if (!F(t2, t3)) {
        sapxep(t2, t3);
    }
}

int main() {
    TRectangle t1, t2, t3;
    t1.enter();
    t2.enter();
    t3.enter();
    swap(t1, t2, t3);
    t1.display(); cout << endl;
    t2.display(); cout << endl;
    t3.display();
    return 0;
}