#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

// m: so hoc sinh, n: mon hoc

int main() {
    system("cls");
    int m, n;
    cin >> m >> n;
    
    double a[m][n];
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    double b[m];    // mang b[m] luu tru gia tri DTB cua m hs
    for (int i = 0; i < m; i++) {
        double sum = 0;
        for (int j = 0; j < n; j++) {
            sum = sum + a[i][j];
        }
        b[i] = sum / n;
    }
    
    double max, min;
    max = b[0]; min = b[0];
    
    for (int i = 0; i < m; i++) {
        if (max < b[i]) {
            max = b[i];
        }
        if (min > b[i]) {
            min = b[i];
        }
    }
    cout << min << " " << max << endl;

    for (int i = 0; i < m; i++) {
        if (min == b[i]) {
            cout << i << " ";
        }
    }
    
    for (int i = 0; i < m; i++) {
        if (max == b[i]) {
            cout << i;
        }
    }

    
    
    getch();
    return 0;
}