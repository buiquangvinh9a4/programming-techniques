#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    int m, n;
    cin >> m >> n;
    float a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    float b[m];
    for (int i = 0; i < m; i++) {
        float sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[i][j];
        }
        b[i] = sum / float(n);
    }
    cout << setprecision(2);
    for (int i = 0; i < m; i++) {
    	cout << b[i] << " ";
    }

	return 0;
}