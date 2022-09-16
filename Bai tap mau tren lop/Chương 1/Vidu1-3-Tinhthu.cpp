#include <iostream>
using namespace std;
	
int main(){
	int d, m, m1, y, c, k;
	cout << "Nhap ngay: "; cin >> d;
	cout << "Nhap thang: "; cin >> m;
	cout << "Nhap nam: "; cin >> y;
	c = y / 100;
	m1 = (m==1 || m==2) ? m+12 : m;
	k = (m==1 || m==2) ? y%100 -1 : y%100;	
	int DOW = (d + (26 * (m + 1) / 10) + k + (k / 4) + (c / 4) + 5 * c) % 7;
	
	switch (DOW){
		case 0: {
			cout << "Saturday";
			break;
		}
		case 1: {
			cout << "Sunday";
			break;
		}
		case 2: {
			cout << "Monday";
			break;
		}
		case 3: {
			cout << "Tuesday";
			break;
		}
		case 4: {
			cout << "Wednesday";
			break;
		}
		case 5: {
			cout << "Thursday";
			break;
		}
		case 6: {
			cout << "Friday";
			break;
		}
		default: {
			cout << "Du lieu nhap khong hop le!";			
		}	
	}
	return 0;
}
