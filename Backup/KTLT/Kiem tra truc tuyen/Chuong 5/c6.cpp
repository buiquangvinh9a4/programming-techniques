#include <iostream>
#include <iomanip>
using namespace std;

class TPupil {
private:
    double dtoan, dly, dhoa;
public:
    void enter();
    void display();
    double average();
    int xeploai();
};

void TPupil::enter() {
    cin >> dtoan >> dly >> dhoa;
}

double TPupil::average() {
    double ave = (dtoan + dly + dhoa) / 3;
    return ave;
}

int TPupil::xeploai() {
    double ave = average();
    if (ave >= 8 && ave <= 10) {
        return 1;
    }
    else if (ave >= 6 && ave < 8) {
        return 2;
    }
    else if (ave >= 4 && ave < 6) {
        return 3;
    }
    else if (ave >= 0 && ave < 4) {
        return 4; 
    }
    return 0;
}

void TPupil::display() {
    cout << fixed << setprecision(1);
    cout << average() << " ";
    if (xeploai() == 1) cout << "A";
    else if (xeploai() == 2) cout << "B";
    else if (xeploai() == 3) cout << "C";
    else if (xeploai() == 4) cout << "D";
}

int main() {
    TPupil t1, t2;
    t1.enter();
    t2.enter();
    t1.display();
    cout << endl;
    t2.display();
    return 0;
}