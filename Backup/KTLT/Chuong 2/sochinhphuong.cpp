#include <iostream>
const int x = 10000, y = 1000; // khai bao hang so x, y 
using namespace std;

// ham kiem tra so chinh phuong
bool squareNumber(int n){
	for (int i = 0; i < n; i++){
		if (i * i == n) return true;
	}
	return false;
}

int main(){
	// in ra cac so chinh phuong nho hon 10000
	cout << "Square Number less than 10000: \n";
	for (int i = 0; i < x; i++) {
		if (squareNumber(i)) cout << i << " ";  // neu ham tra ve true, in ra so i
	}
	cout << endl;
	
	// dem cac so chinh phuong nho hon 1000
	int count = 0;    // khai bao bien dem count
	for (int i = 0; i < y; i++){
		if (squareNumber(i)) count++;
	}
	cout << "The number of square number less than 1000 is: " << count << endl;
	
	return 0;
}
