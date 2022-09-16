#include <iostream>
#include <iomanip>
using namespace std;


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
    
    double max = b[0], min = b[0];
    for (int i = 1; i < m; i++) {
        if (max < b[i]) {
            max = b[i];
        }
        if (min > b[i]) {
            min = b[i];
        }
    }
    cout << setprecision(2);
    cout << min << " " << max << endl;

    return 0;
}