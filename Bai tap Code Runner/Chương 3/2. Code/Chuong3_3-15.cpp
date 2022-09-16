#include <iostream>
#include <cmath>
using namespace std;

/*  Chuong 3 _ 3-15
    Nhap n va day so n gom a[0], a[1], ... , a[n]
    Dem cac so chinh phuong co trong day
*/

bool sochinhphuong(int n){
    int sqr = sqrt(n);
    if (sqr * sqr == n)
        return true;
    else
        return false;
}

int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int count = 0;
    for (int i = 0; i < n; i++)
        if (sochinhphuong(a[i]))
            count++;
    cout << count;
	return 0;
}