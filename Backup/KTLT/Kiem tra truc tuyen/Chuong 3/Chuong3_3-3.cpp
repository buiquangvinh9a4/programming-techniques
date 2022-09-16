#include <iostream>
using namespace std;

/*  Chuong 3 _ 3-3
    nhap va luu tru diem cua so hoc sinh (m) va mon hoc(n)
    thong ke gioi, kha, trung binh, yeu
*/

int main(){
	int n, m;
	cin >> m >> n;
	float a[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	int gioi = 0, kha = 0, tb = 0, yeu = 0;
	for (int i = 0; i < m; i++) {
		float sum = 0, average = 0;
		for (int j = 0; j < n; j++) {
			sum += a[i][j];
		}
		average = sum / float(n);
		if (average >= 8.0) gioi++;
		else if (average >= 6.0 && average < 8.0) kha++;
		else if (average >= 5.0 && average < 6.0) tb++;
		else yeu++; 
	}
	cout << gioi << " " << kha << " " << tb << " " << yeu;
}