#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a, b, c;
    cin >> a >> b >> c;
    int count = 0;
    int denta = b * b - 4 * a * c;
    if (a == 0) {
        count = 1;
    }
    else {
        if (denta < 0) count = 0;
        else if (denta == 0) count = 1;
        else count = 2;
    }
    cout << count;
    return 0;
}