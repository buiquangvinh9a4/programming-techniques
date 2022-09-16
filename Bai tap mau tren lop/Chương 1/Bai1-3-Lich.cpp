#include <iostream>
using namespace std; 

int main(){
	// khai bao va nhap du lieu
	int m, m1, y, c, k, DOW;
	
	cout << "Nhap thang: "; cin >> m;
	cout << "Nhap nam: "; cin >> y;


	
	// tinh ngay dau tien cua thang
	c = y / 100; 
	k = (m==1 || m==2) ? y%100 -1 : y%100;
	m1 = (m==1 || m==2) ? m+12 : m;
	DOW = (1 + (26 * (m1 + 1) / 10) + k + (k / 4) + (c / 4) + 5 * c) % 7;
		
	// kiem tra nam nhuan
	bool isLeapYear;
	isLeapYear = ((y%4 == 0 && y%100 != 0) || y % 400 == 0) ? true : false;
	
	// set thu 7
	if (DOW==0) DOW = 7;

	// in ra lich cua thang
	int numberOfDays = 31;
	if (m==2) numberOfDays = (isLeapYear==true) ? 29 : 28;
	else if (m == 4 || m == 6 || m == 9 || m == 11) numberOfDays = 30;
	
	int j;
	cout << "CN\tT2\tT3\tT4\tT5\tT6\tT7\n";
	for (j=1; j<DOW; j++) //khong in cac thu khong co dau thang
	    cout << "\t"; 
	    
	for (int x=1; x<=numberOfDays; x++) //bat dau nó duin cac ngay trong thang
	{
	    cout << x << "\t";
		j++;
		if (j>7)  //het 7 ngay thi xuong dong va tinh lai j=1
		{
		    cout<<endl; //xuong dong 
		    j = 1; //tinh lai tu dau
		}
	}
}
