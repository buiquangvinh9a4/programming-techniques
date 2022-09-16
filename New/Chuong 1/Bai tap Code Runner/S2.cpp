#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // S = 1/(1*2) + 1/(2*3) + 1/(3*4) + ... + 1/(n*(n+1))

    unsigned int n, i;
    cin >> n;

    float s = 0;
    for (i = 1; i <= n; i++) {
        s += 1.0 / (i * (i + 1));
    }

    cout << fixed << setprecision(2) << s;
    return 0;
}