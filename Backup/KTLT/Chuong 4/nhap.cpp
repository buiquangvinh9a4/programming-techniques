#include <iostream>
#include <cmath>
using namespace std;

bool songuyento(int n){
	if (n < 2) return false;
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) return false;
		}
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	// nhap mang
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	// tinh tong cac so nguyen to
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (songuyento(a[i]) == true)
			sum += a[i];
	}
	cout << sum;
	return 0;
}
