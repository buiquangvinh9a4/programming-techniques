#include <iostream>
using namespace std;

class TRectangle {
private:
    int x, y;
    int a, b;
public:
    void enter();
    int chuvi();
    int dientich();
    void display();

};

void TRectangle::enter() {
    cin >> x >> y >> a >> b;
}

void TRectangle::display() {
    cout << chuvi() << " " << dientich();
}

int TRectangle::chuvi() {
    int cv = (a + b) * 2;
    return cv;
}

int TRectangle::dientich() {
    int dt = a * b;
    return dt;
}

int main() {
    TRectangle t1, t2, t3;
    t1.enter();
    t2.enter();
    t3.enter();
    t1.display(); cout << endl;
    t2.display(); cout << endl;
    t3.display();
    return 0;
}