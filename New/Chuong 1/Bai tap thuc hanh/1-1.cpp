#include <iostream>
#include <cmath>    // khai bao thu vien cmath lay ham sqrt
using namespace std;

int main() {
    float h, v, g = 9.8;
    cout << "Nhap chieu cao h: "; cin >> h;

    // Tinh van toc theo cong thuc v^2 = 2gh <=> v = sqrt(2gh)
    v = sqrt(2 * g * h);
    
    cout << "Van toc v: " << v << " m/s";
    return 0;
}