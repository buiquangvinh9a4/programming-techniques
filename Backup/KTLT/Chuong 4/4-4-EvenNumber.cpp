#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main(){
	ifstream f;
	f.open("dayso.txt");
	if (f.fail()) {
		cout << "Do not open the file successfully!";
		return 0;
	}
	int x, i = 0, count = 0;
	cout << "Even numbers in file Dayso.txt: ";
	while (!f.eof()) {
		f >> x;
		if (x % 2 == 0)
			count++;
		i++;
	}
	cout << count << endl;
	getch();
	return 0;
}
