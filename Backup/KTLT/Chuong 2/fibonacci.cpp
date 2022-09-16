#include <iostream>
using namespace std;

int Fibonacci(int n) {
	if (n == 1 || n == 2) 
		return 1;
	else 
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main(){
	int n;
	cout << "Enter number n: "; cin >> n;
	cout << "FIBONACCI Number in " << n << " = " << Fibonacci(n);
}
