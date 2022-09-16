#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m, n; cin >> m >> n;
    float a[30][30];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    cout << fixed << setprecision(1);
    for (int i = 0; i < m; i++) {
        float sum = 0, ave = 0;
        for (int j = 0; j < n; j++) {
            sum += a[i][j]; 
        }
        ave = sum / n;
        cout << ave << " ";
    }
    return 0;
}