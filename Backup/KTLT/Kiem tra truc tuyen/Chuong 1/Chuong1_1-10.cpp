#include <iostream>
using namespace std;

int main(){
    unsigned int n, thue, luong;
    cin >> n;
    if (n < 10000000) {
        thue = 0 * n;
    }
    else if (n >= 10000000 && n <= 15000000) {
        thue = 0.1 * n;
    }
    else if (n >= 15000000 && n <= 30000000) {
        thue = 0.2 * n;
    }
    else if (n >= 30000000) {
        thue = 0.3 * n;
    }
    luong = n - thue;
    cout << thue << " " << luong;
    return 0;

}