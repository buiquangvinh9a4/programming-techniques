#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (min > a[i] && a[i] > 0) {
            min = a[i];
        }
    }

    int j;
    for (j = 0; j < n; j++) {
        if (min == a[j]) {
            break;
        }
    }

    cout << j;
    return 0;
}