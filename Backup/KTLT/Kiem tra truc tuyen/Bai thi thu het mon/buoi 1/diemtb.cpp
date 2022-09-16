#include <iostream>
using namespace std;


int main() {
    double x, y, z;
    cin >> x >> y >> z;
    double tb = (x + y + z) / 3;
    if (tb >= 8.0 && tb <= 10) {
        cout << "A";
    }
    else if (tb >= 6.0 && tb < 8.0) {
        cout << "B";
    }
    else if (tb >= 4.0 && tb < 6) {
        cout << "C";
    }
    else {
        cout << "D";
    }
    return 0;
}