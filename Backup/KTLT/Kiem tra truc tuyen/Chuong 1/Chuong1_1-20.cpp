#include <iostream>
using namespace std;

int main(){
    unsigned int n, p, temp, sum = 0;
    cin >> n;
    p = n;
    while (p > 0) {
        temp = p % 10;
        sum = sum * 10 + temp;
        p /= 10;
    }
    cout << sum;
}