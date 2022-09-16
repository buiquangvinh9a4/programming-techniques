#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int hour, money_hour;
    cout << "So gio lam viec trong tuan: "; cin >> hour;
    cout << "Thu lao 1 gio lam viec: "; cin >> money_hour;

    int money = hour * money_hour;

    cout << "So tien can tra cho nhan vien: " << money;

    return 0;
}