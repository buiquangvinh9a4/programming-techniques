#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

class DATE {
private:
    int d, m, y;
public:
    DATE();
    DATE(int xd, int xm, int xy);
    DATE nextDay();
    friend istream & operator>>(istream &is, DATE &D);
    friend DATE operator+(DATE, int);
    friend ostream & operator<<(ostream &os, DATE &D);
    friend bool operator>(DATE D1, DATE D2);
    friend bool operator<(DATE D1, DATE D2);
    friend bool operator==(DATE D1, DATE D2);
    int getDay();
    int getMonth();
    int getYear();

};

DATE::DATE() {
    d = 1;
    m = 1;
    y = 1;
}

DATE::DATE(int xd, int xm, int xy) {
    d = xd;
    m = xm;
    y = xy;
}

istream & operator>>(istream &is, DATE &D) {
    cout << "Enter day: "; is >> D.d;
    cout << "Enter month: "; is >> D.m;
    cout << "Enter year: "; is >> D.y;
    return is;
}

int numberOfDay(int m, int y) {
    bool isLeapYear = (y % 4 == 0 && y % 100 != 0) ? 1 : 0;
    int day = 31;
    if (m == 2)
        day = (isLeapYear) ? 29 : 28;
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        day = 30;
    return day;
}

// DATE operator+(DATE D, int n) {
//     DATE D1 = D;
//     while (n > 0) {
//         int temp = numberOfDay(D1.m, D1.y) - D1.d;
//         if (n + D1.d > numberOfDay(D1.m, D1.y)) {
//             D1.d = 1;
//             D1.m = (D1.m == 12) ? 1 : D1.m + 1;
//             D1.y = (D1.m == 1) ? D1.y + 1 : D1.y;
//             n = n - temp - 1;
//         } else {
//             D1.d += n;
//             break;
//         }
//     }
//     return D1;
// }

DATE operator+(DATE D, int n) {
    DATE D1;
    D1.d = D.d;
    D1.m = D.m;
    D1.y = D.y;
    for (int i = 0; i < n; i++) {
        D1 = D1.nextDay();
    }
    return D1;
}

DATE DATE::nextDay() {
    DATE D1;
    D1.d = d + 1;
    if (D1.d > numberOfDay(m, y)) {
        D1.d = 1;
        D1.m = m + 1;
        if (D1.m == 13) {
            D1.m = 1;
            D1.y = y + 1;
        }
    } else {

        D1.m = m;
        D1.y = y;
    }
    return D1;
}

bool operator>(DATE D1, DATE D2) {
    if (D1.y > D2.y) return true;
    if (D1.y == D2.y && D1.m > D2.m) return true;
    if (D1.y == D2.y && D1.m == D2.m && D1.d > D2.d) return true;
    return false;
}

bool operator<(DATE D1, DATE D2) {
    if (D1.y < D2.y) return true;
    if (D1.y == D2.y && D1.m < D2.m) return true;
    if (D1.y == D2.y && D1.m == D2.m && D1.d < D2.d) return true;
    return false;
}

bool operator==(DATE D1, DATE D2) {
    return (D1.y == D2.y && D1.m == D2.m && D1.d == D2.d) ? true : false;
}

ostream & operator<<(ostream &os, DATE &D) {
    os << setfill('0') << setw(2) << D.d << "/";
    os << setfill('0') << setw(2) << D.m << "/";
    os << setfill('0') << setw(4) << D.y << endl;
    return os;
}


int DATE::getDay() {
    return d;
}

int DATE::getMonth() {
    return m;
}

int DATE::getYear() {
    return y;
}



int main() {
    system("cls");
    DATE d1;
    cin >> d1;
    cout << d1;

    DATE d2;
    DATE d3 = d3.nextDay();
    int n = 45;
    d2 = d1 + n;
    cout << "After " << n << " days: " << d2;

    if (d1 == d2)
        cout << "D1 = D2\n";
    else if (d1 < d2)
        cout << "D1 < D2\n";
    else
        cout << "D1 > D2\n";
    
    cout << "Next day: ";
    cout << d3 << endl;
    d1.nextDay();
    cout << d3 << endl;

    cout << "Day = " << d1.getDay() << endl;
    cout << "Month = " << d1.getMonth() << endl;
    cout << "Year = " << d1.getYear() << endl;
    
    return 0;
}