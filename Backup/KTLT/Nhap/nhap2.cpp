#include <iostream>
#include <iomanip>
using namespace std;


int main(){
	int n, m;
	cin >> m >> n;
	float a[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
    cout << fixed << setprecision(1);
	for (int i = 0; i < m; i++) {
		float sum = 0, average = 0;
		for (int j = 0; j < n; j++) {
			sum += a[i][j];
		}
		average = sum / float(n);
		cout << average << " ";
	}
}