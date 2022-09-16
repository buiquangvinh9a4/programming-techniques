#include <iostream>
#include <iomanip>
using namespace std;

// Viết chương trình cho phép thực nhiên các công việc sau:

// Nhập một số nguyên dương n và số thực x từ bàn phím 
// Tính giá trị biểu thức S = x/(1*2) + x/(2*3) + x/(3*4) + ... + x/(n*(n+1))
//  Input: 

// Dòng 1:  Số nguyên dương n và số thực x
// Output: 

// Dòng 2: Giá trị của S (1 chữ số sau dấu chấm thập phân)

int main(){
    unsigned int n, i; double x;
    cin >> n >> x;
    double sum = 0;
    for (i = 1.0; i <= n; i++)
        sum += (x / float(i * (i + 1)));
    cout << setprecision(1) << fixed;
    cout << sum;
    return 0;
}