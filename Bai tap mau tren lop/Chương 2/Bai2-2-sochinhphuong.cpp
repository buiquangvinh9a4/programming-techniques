#include <iostream>
#include <cmath>
const int x = 10000, y = 1000; // khai bao hang so x, y 
using namespace std;

// ham kiem tra so chinh phuong
bool isSquare(int n){
	int t = (int) sqrt(n);
	if (t * t == n) return true;
	else return false;
}

int main(){
	// in ra cac so chinh phuong nho hon 10000
	cout << "Square Number less than 10000: \n";
	for (int i = 0; i < x; i++) 
		if (isSquare(i)==true) cout << i << " ";  // neu ham tra ve true, in ra so i
	cout << endl;
	
	// dem cac so chinh phuong nho hon 1000
	int count = 0;    // khai bao bien dem count
	for (int i = 0; i < y; i++)
		if (isSquare(i)==true) count++;
	
	// hien thi ket qua dem cac so chinh phuong nho hon 1000
	cout << "The number of square number less than 1000 is: " << count << endl;
	
	return 0;
}
