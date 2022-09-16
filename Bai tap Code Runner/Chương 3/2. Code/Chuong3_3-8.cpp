#include <iostream>
#include <iomanip>
using namespace std;

/*  Chuong 3 _ 3-8
    Nhap va luu tru diem cua so hoc sinh (m) va mon hoc(n)
    Hien thi diem trung binh sinh vien thap nhat va cao nhat
*/

int main(){
    int n, m;
    cin >> m >> n;
    float a[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    float c[m];
    for (int i = 0; i < m; i++){
        float sum = 0;
        for (int j = 0; j < n; j++){
            sum += a[i][j];
        }
        c[i] = sum / float(n);
        
    }
    float max = c[0], min = c[0];
    for (int i = 0; i < m; i++) {
        if (max < c[i]) max = c[i];
        if (min > c[i]) min = c[i];
    }
    cout << setprecision(2);
    cout << min << " " << max;
    return 0;

}