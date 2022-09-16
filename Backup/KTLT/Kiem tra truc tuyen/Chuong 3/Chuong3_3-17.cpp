#include <iostream>
using namespace std;

/*  Chuong 3 _ 3-17
    Nhap n va 2 day so n gom a[0], a[1], ... , a[n]
                         va b[0], b[1], ... , b[n]
    In ra day so tong
*/
void inputArr(int a[], int n) {
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

int main(){
    int n; cin >> n;
    int a[n], b[n], c[n];
    inputArr(a, n);
    inputArr(b, n);
    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
        cout << c[i] << " ";
    }
    return 0;
}