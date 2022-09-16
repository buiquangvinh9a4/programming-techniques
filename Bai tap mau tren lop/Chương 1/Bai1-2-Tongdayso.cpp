#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	do {
		cout << "Nhap vao so nguyen duong n: ";
		cin >> n;
		if (n <= 0) cout << "n khong hop le. Nhap lai\n";
	} while (n <= 0);
	double s1 = 0;
	for (int i = 1; i <= n; i++){
		s1 += 1 / float((i * (i + 1)));
	}
	double sum = 0, s2 = 0;
	for (int i = 1; i <= n; i++){
		sum += i;
		s2 += 1 / float(sum);
	}
	cout << fixed << setprecision(3);
	cout << "S1 = " << s1 << endl;
	cout << "S2 = " << s2 << endl;
}
