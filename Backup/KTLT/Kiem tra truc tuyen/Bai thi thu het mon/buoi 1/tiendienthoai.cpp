#include <iostream>
using namespace std;

int main() {
    int p;
    cin >> p;

    const int phi = 150000;   // const: gia tri mac dinh, khong the thay doi
    int tien;

    if (p <= 50) {
        tien = 600 * p;
    } else if (p > 51 && p <= 200) {
        tien = 600 * 50 + 400 * (p - 50);
    } else {
        tien = 600 * 50 + 400 * 150 + 200 * (p - 200);
    }
    tien = tien + phi;

    cout << tien;
    return 0;
}