#include <iostream>
#include <cmath>
using namespace std;

/*  Chuong 3 _ 3-2
    nhap tu ban phim n va n so nguyen a[0], a[1],... 
    Dem so nguyen to co trong day

*/
bool check(int n) {
		if (n < 2) return false;
		else {
			for (int i = 2; i <= sqrt(n); i++) {
				if (n % i== 0) return false;
			}
		}
		return true;

}

int main() {
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int count = 0;

	for (int i = 0; i < n; i++) {
		if (check(a[i])) count++;
	}
	cout << count;
}