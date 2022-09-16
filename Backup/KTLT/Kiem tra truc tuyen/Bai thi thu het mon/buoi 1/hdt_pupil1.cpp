#include <iostream>
#include <iomanip>
using namespace std;

class TPupil {
private:
    double t, l, h;
public:
    void enter();
    void show();
    double average();
    char rank();
};

void TPupil::enter() {
    cin >> t >> l >> h;
}

void TPupil::show() {
    cout << t << " " << l << " " << h;
}

double TPupil::average() {
    return (t + l + h) / 3;
}

char TPupil::rank() {
    double a = average();
    if (a >= 8 && a <= 10) {
        return 'A';
    } else if (a >= 6 && a < 8) {
        return 'B';
    } else if (a >= 4 && a < 6) {
        return 'C';
    } else {
        return 'D';
    }
    return 1;
}

int main() {
    TPupil t1, t2;
    t1.enter();
    t2.enter();
    cout << fixed << setprecision(1);
    cout << t1.average() << " " << t1.rank() << endl;
    cout << t2.average() << " " << t2.rank();

    return 0;
}