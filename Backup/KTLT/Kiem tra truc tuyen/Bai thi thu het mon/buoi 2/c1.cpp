#include <iostream>
using namespace std;

int main() {
    int s;
    cin >> s;

    int tien = 0;
    if (s < 51) {
        tien = s * 1600;
    } else if ( s >= 51 && s <= 100) {
        tien = 1600 * 50 + (s - 50) * 1700;
    } else if (s >= 101 && s <= 200) {
        tien = 1600 * 50 + 1700 * 50 + (s - 100) * 2000; 
    }  else if (s >= 201 && s <= 300) {
        tien = 1600 * 50 + 1700 * 50 + 2000 * 100 + (s - 200) * 2500; 
    } else {
        tien = 1600 * 50 + 1700 * 50 + 2000 * 100 + 2500 * 100 + (s - 300) * 4000;
    }

    cout << tien;
    return 0;
}