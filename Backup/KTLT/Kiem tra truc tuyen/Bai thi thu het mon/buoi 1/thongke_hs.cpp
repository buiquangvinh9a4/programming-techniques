#include <iostream>
using namespace std;

int xeploai(double x) {
    if (x >= 8.0) {
        return 0;
    } else if (x >= 6.0 && x < 8.0) {
        return 1;
    } else if (x >= 5.0 && x < 6.0) {
        return 2;
    } else {
        return 3;
    }
    return -1;
}

int main() {
    int m, n;
    cin >> m >> n;

    double a[30][30];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    double b[30];     // mang 1 chieu luu diem trung binh

    for (int i = 0; i < m; i++) {
        double sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[i][j];
        }
        b[i] = sum / n;
    }
    
    int d0 = 0, d1 = 0, d2 = 0, d3 = 0;
    for (int i = 0; i < m; i++) {
        if (xeploai(b[i]) == 0) {
            d0++;
        } else if (xeploai(b[i]) == 1) {
            d1++;
        } else if (xeploai(b[i]) == 2) {
            d2++;
        } else {
            d3++;
        }
    }
    
    cout << d0 << " " << d1 << " " << d2 << " " << d3;

    return 0;
}