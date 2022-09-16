#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

// --------------------- Ham in ra duong ke line
void line() {
	cout << "----------------------------\n";
}

// --------------------- Ham nhap vao day so voi n phan tu
void input(int *a, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Enter number " << i + 1 << " : ";
		cin >> a[i];
	}
	line();
}

// --------------------- Ham in ra day so voi n phan tu
void output(int *a, int n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	line();
}

// --------------------- Ham kiem tra so nguyen to
bool isPrime(int n){
	if (n < 2) return false;
	else 
		for (int i = 2; i <= sqrt(n); i++)
			if (n % i == 0)
				return false;
	return true;
}

// --------------------- Ham dem so luong nguyen to, su dung con tro
int countPrime(int *a, int n, bool(*Prime)(int)) {
	int count = 0;
	for (int i = 0; i < n; i++)
		if ((Prime)(a[i]))
			count++;
	return count;
}

int main() {
	//----------------- Khai bao va nhap n
	int n;
	cout << "Enter n: "; cin >> n;

	//----------------- Cap phat dong cho con tro ptr so vung nho la n
	int *ptr = new int [n];

	//----------------- Nhap vao ptr day so voi n phan tu, in ra day so sau khi nhap
	input(ptr, n);
	cout << "Number Array: ";
	output(ptr, n);

	//----------------- Hien thi so luong so nguyen to co trong day so
	cout << "The number of Prime Number: "<< countPrime(ptr, n, isPrime) << endl;
	//----------------- Thu hoi vung nho sau khi da su dung
	delete [] ptr;

	getch();
	return 0;
}