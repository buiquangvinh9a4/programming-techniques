#include <iostream>
using namespace std;

void addNum(int &N){
	do {
		cout << "Enter N: ";
		cin >> N;
	} while (N <= 0 || N >= 20);
}

int factorials(int N){
	int factorial = 1;
	for (int i = 1; i <= N; i++){
		factorial *= i;	
	}
	return factorial;
}

int main(){
	int N;
	addNum(N);
	cout << "Factorial of the number n: " << factorials(N);
	return 0;
}
