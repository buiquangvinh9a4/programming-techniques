#include <iostream>
using namespace std;

int main() {
    double d, x;
    cin >> d >> x;

    // Do dai day thep gai -> 3 vong
    float p = 3 * (d * 3.14);
    cout << p  << endl;

    // Tinh so luong bo
    float s = (3.14 * (d / 2.0) * (d / 2.0)) / x;
    cout << int(s) << endl;

    return 0;
}