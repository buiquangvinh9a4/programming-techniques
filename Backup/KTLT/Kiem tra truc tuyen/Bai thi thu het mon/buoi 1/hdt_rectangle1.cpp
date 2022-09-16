#include <iostream>
using namespace std;

class TRectangle {
private:
    int x, y, a, b;
public:
    void enter();
    void show();
    int p();
    int s();
};

void TRectangle::enter() {
    cin >> x >> y >> a >> b;
}

void TRectangle::show() {
    cout << x << " " << y << " " << a << " " << b;
}

int TRectangle::p() {
    return (a + b) * 2;
}

int TRectangle::s() {
    return a * b;
}

int main() {
    TRectangle t1, t2, t3;
    t1.enter();
    t2.enter();
    t3.enter();
    cout << t1.p() << " " << t1.s() << endl;
    cout << t2.p() << " " << t2.s() << endl;
    cout << t3.p() << " " << t3.s();

    return 0;
}