#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <iomanip>
using namespace std;



int main() {
	fstream f;
	f.open("sinhvien.txt");
	if(f.fail()) {
		cout << "Do not open the file successfully!";
		return 0;
	}
	int n;
	float x;
	string s;
	cout << "Enter the number students: "; cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "SINH VIEN " << i + 1;
		cout << "\n- Enter full name: ";
		cin.ignore(); getline(cin, s);
		cout << "- Final Point = "; cin >> x;
		int k = s.find("Hoang", s.length() - 5);
		if (k != -1) {
			f << s << setw(6) << x << endl;
		}
	}
	f.close();
	getch();
	return 0;
}

