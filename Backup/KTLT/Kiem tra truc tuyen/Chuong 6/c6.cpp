#include <iostream>
#include <iomanip>
using namespace std;

class TStudent {
private:
    string msv, name;
    double average;
public:
    TStudent();
    TStudent(TStudent &T1);
    void enter();
    void display();
    friend bool sosanh(TStudent t1, TStudent t2);
};

TStudent::TStudent() {
    msv = "unknown";
    name = "unknown";
    average = 0;
}

TStudent::TStudent(TStudent &T1) {
    msv = T1.msv;
    name = T1.name;
    average = T1.average;
}

void TStudent::enter() {
    getline(cin, msv);
    getline(cin, name);
    cin >> average;
    cin.ignore();
}

void TStudent::display() {
    cout << fixed << setprecision(1);
    cout << name;
}

bool sosanh(TStudent t1, TStudent t2) {
    if (t1.average >= t2.average)
        return true;
    else return false;
}

void hoanvi(TStudent &t1, TStudent &t2) {
    TStudent temp = t1;
    t1 = t2;
    t2 = temp;
}

void xephang(TStudent &t1, TStudent &t2, TStudent &t3) {
    if (!sosanh(t1, t2)) {
        hoanvi(t1, t2);
    }
    if (!sosanh(t2, t3)) {
        hoanvi(t2, t3);
    }
    if (!sosanh(t1, t3)) {
        hoanvi(t1, t3);
    }
}

int main() {
    TStudent t1, t2, t3;
    t1.enter();
    t2.enter();
    t3.enter();
    xephang(t1, t2, t3);
    t1.display(); cout << " 1\n";
    t2.display(); cout << " 2\n";
    t3.display(); cout << " 3";
    return 0;
}