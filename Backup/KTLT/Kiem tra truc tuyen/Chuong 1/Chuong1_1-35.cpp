#include <iostream>
using namespace std;

int main(){
    int luong;
    cin >> luong;
    int thue, thuc;
    if (luong < 10000000)
        thue = 0;
    else if (luong > 10000000 && luong <= 15000000)
        thue = luong * 0.1;
    else if (luong > 15000000 && luong <= 30000000)
        thue = luong * 0.2;
    else
        thue = luong * 0.3;
    thuc = luong - thue;
    cout << thue << " " << thuc;
    return 0;
}