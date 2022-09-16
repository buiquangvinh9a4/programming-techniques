#include <iostream>
#include <iomanip>
using namespace std;



int main() {
    int n; cin >> n;
    double s = 1;
    for (int i = 1; i <= n; i++) {
        s += 1/double(2 * i + 1);
    }
    cout << fixed << setprecision(2);
    cout << s;
    return 0;
}