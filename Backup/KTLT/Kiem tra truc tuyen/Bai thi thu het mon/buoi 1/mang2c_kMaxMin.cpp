#include <iostream>
using namespace std;


int main() {
    int m, n, k;
    cin >> m >> n >> k;
    int a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int max = a[k][0];
    for (int i = 0; i < n; i++) {
        if (max < a[k][i]) {
            max = a[k][i];
        }
    }
    int min = a[k][0];
    for (int i = 0; i < n; i++) {
        if (min > a[k][i]) {
            min = a[k][i];
        }
    }
    if (k >= m) {
        cout << -1 << " " << -1;
    }
    else {
        cout << min << " " << max;
    }
    // for (int i = 0; i < m; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}