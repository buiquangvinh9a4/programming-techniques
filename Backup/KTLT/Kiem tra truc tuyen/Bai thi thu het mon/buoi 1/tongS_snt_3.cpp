#include <iostream>
#include <cmath>
using namespace std;

bool snt(int a) {
    if (a < 2) {
        return false;
    } else {
        for (int i = 2; i <= sqrt(a); i++) {
            if (a % i == 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n; cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (snt(a[i]) == true) {
            sum += a[i];
        }
    }

    cout << sum;
    return 0;
}