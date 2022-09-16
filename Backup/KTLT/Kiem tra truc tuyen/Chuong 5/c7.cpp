#include <iostream>
using namespace std;

class TDate {
private:
    int day, month, year;
public:
    void enter();
    void display();
    void tang(int n);

};

void TDate::enter() {
    cin >> day >> month >> year;
}

void TDate::display() {
    cout << day << " " << month << " " << year;
}

bool ktnamnhuan(int year) {
    if (year % 4 == 0 && year % 100 != 0) {
        return true;
    }
    else
        return false;
}

int songay1thang(int month, int year) {
    int ngay = 31;
    if (month == 2) {
        ngay = (ktnamnhuan(year)) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        ngay = 30;
    }
    return ngay;
}

void TDate::tang(int n) {
    while (n > 0) {
        int temp = songay1thang(month, year) - day;
        if (n + day > songay1thang(month, year)) {
            day = 1;
            month = (month == 12) ? 1 : month + 1;
            year = (month == 1) ? year + 1 : year;
            n = n - temp - 1;
        } else {
            day += n;
            break;
        }
    }
}

int main() {
    TDate t1, t2;
    t1.enter();
    t2.enter();
    int n;
    cin >> n;
    t1.tang(n);
    t2.tang(n);
    t1.display();
    cout << endl;
    t2.display();
    return 0;
}