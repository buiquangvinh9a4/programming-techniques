#include <iostream>
using namespace std;

/*  Chuong 3 _ 3-12
    Nhap n va n so nguyen a[0], a[1], ..., a[n-1]
    Hien thi min va max trong day
*/

int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max = a[0], min = a[0];
    for (int i = 1; i < n; i++) {
        if (max < a[i]) max = a[i];
        if (min > a[i]) min = a[i];
    }
    cout << min << " " << max;
	return 0;
}