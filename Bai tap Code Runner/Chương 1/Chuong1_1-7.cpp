#include <iostream>
using namespace std;

// Viết chương trình cho phép thực nhiên các công việc sau:

// Nhập hai số nguyên dương x, y từ bàn phím (x<y)
// Tính tổng bình phương các số từ x đến y
//  Input: 

// Dòng 1:  Số nguyên dương x, y
// Output: 

// Dòng 2: Tổng bình phương các số từ x đến y

int main(){
    unsigned x, y, i;
    cin >> x >> y;
    int sum = 0;
    for (i = x; i <= y; i++) {
        sum += (i * i);
    }
    cout << sum;
    return 0;
}