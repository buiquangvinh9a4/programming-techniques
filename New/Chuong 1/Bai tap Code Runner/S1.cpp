#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // S = 1/1 + 1/3 + 1/5 + ... + 1/(2n-1) + 1/(2n+1)

    unsigned int n, i;
    cin >> n;

    float s = 0;
    for (i = 0; i <= n; i++) {
        s += 1.0 / (2 * i + 1);
    }

    cout << fixed << setprecision(2) << s;
    return 0;
}