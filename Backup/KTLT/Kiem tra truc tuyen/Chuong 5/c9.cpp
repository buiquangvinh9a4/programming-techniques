#include <iostream>
#include <iomanip>
using namespace std;

class TStudent {
private:
    string msv, name;
    double average;
public:
    void enter();
    void display();
    friend void sapxep(TStudent t1, TStudent t2);
};

void TStudent::enter() {
    getline(cin, msv);
    getline(cin, name);
    cin >> average;
    cin.ignore();
}

void TStudent::display() {
    cout << fixed << setprecision(1);
    cout << msv << ";" << name << ";" << average;
}

void sapxep(TStudent t1, TStudent t2) {
    if (t1.average >= t2.average) {
        t1.display(); cout << endl;
        t2.display();
    } else {
        t2.display(); cout << endl;
        t1.display();
    }
}


int main() {
    TStudent t1, t2;
    t1.enter();
    t2.enter();
    sapxep(t1, t2);
    
    return 0;
}