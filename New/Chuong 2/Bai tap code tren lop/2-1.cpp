#include <iostream>
#include <cmath>    // khai bao thu vien cmath lay ham sqrt() va pow()
#include <iomanip> // khai bao thu vien iomanip lay fixed va setprecision()
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;


    float S1 = 0, S2 = 0, S3 = 0, S4 = 0;

    S1 = pow(a, 2) - 2 * b + (a * b) / (pow(c, 2) + 3);
    S2 = (pow(b, 2) - 4 * a * c) / (2 * a);
    S3 = 3 * a - pow(b, 3) + 2 * sqrt(pow(c, 2) + 1);
    S4 = sqrt((pow(a, 2) / b) - 4 * (a / (b * c)) + 1);

    cout << fixed << setprecision(3);   // khai bao cu phap lam tron 3 chu so thap phan
    cout << S1 << endl;
    cout << S2 << endl;
    cout << S3 << endl;
    cout << S4 << endl;
    return 0;
}