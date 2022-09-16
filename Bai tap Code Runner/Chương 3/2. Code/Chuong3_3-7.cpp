#include <iostream>
using namespace std;

/*  Chuong 3 _ 3-7
    Nhap n va n so nguyen a[0], a[1], ..., a[n-1]
    Dem so luong so chan, so le trong day
*/

bool chanle(int a){
    if (a % 2 == 0) return true;
    else return false;
}

int main(){
    int n, countc = 0, countl = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (chanle(a[i])) countc ++;
        else countl++;
    }
    cout << countc << " " << countl;
    return 0;
}