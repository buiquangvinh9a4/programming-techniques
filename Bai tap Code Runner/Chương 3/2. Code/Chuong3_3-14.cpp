#include <iostream>
#include <iomanip>
using namespace std;

/*  Chuong 3 _ 3-14
    nhap va luu tru diem cua so hoc sinh (m) va mon hoc(n)
    in ra diem trung binh cua m hoc sinh
*/

int main(){
    int m, n;
    cin >> m >> n;
    float a[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    float b[m];
    for (int i = 0; i < m; i++) {
        float sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[i][j];
        }
        b[i] = sum / float(n);
    }
    cout << setprecision(2);
    for (int i = 0; i < m; i++)
    	cout << b[i] << " ";

	return 0;
}