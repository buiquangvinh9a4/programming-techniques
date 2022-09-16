#include <iostream>
#include <cmath>    // khai bao thu vien cmath lay ham sqrt
using namespace std;

int main() {
    int a, b;   // khoi tao bien a: so bac si, b: so y ta
    cout << "Nhap so bac si: "; cin >> a;
    cout << "Nhap so y ta: "; cin >> b;

    // Vong lap se hoat dong khi a != b, dung lai khi a = b
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }

    // Sau khi thoat vong lap, a = b nên co the hien thi ra a hoac b deu duoc
    cout << "Co the chia nhieu nhat: " << a << " nhom.";
    return 0;
}