#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter n: "; cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter " << i << " : ";
		cin >> *(a + i);
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		 if (*(a + i) % 2 == 0 && *(a + i) % 3 == 0) // (a[i]%2==0 && a[i]%3==0)
		 	sum += *(a + i); // sum += a[i];
	}
	cout << "SUM = " << sum;
	delete [] a;
	return 0;
	
}
