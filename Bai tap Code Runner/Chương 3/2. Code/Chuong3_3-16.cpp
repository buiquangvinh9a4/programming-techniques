#include <iostream>
using namespace std;

/*  Chuong 3 _ 3-16
    Nhap n va day so n gom a[0], a[1], ... , a[n]
    Dem so nguyen duong, nguyen am trong day
*/

int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int demduong = 0, demam = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) demam++;
        else if (a[i] > 0) demduong++;
    }
    cout << demduong << " " << demam;
}