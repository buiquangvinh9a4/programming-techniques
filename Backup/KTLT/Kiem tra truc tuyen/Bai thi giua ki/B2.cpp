#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    cin >> n;
    int p = 0;
    int temp = 0;
    while (n > 0) {
        temp = n % 10;
        p = p * 10 + temp;
        n /= 10;
    }
    cout << p;
    return 0;
}