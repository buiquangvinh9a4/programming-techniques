#include <iostream>
#include <cmath>
using namespace std;

int dem(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main(){
    unsigned int n; cin >> n;
    int s = 0;
    if (n < 51)
        s = n * 1600;
    else if (n >= 51 && n <= 100)
        s = 50 * 1600 + (n - 50) * 1700;
    else if (n >= 101 && n <= 200)
        s = 50 * 1600 + 50 * 1700 + (n - 100) * 2000;
    else if (n >= 201 && n <= 300)
        s = 50 * 1600 + 50 * 1700 + 100 * 2000 + (n - 200) * 2500;
    else {
        int x, p = n, count = dem(n);
        while (p > 0) {
            x = p % 10;
            p /= 10;
        }
        s = 50 * 1600 + 50 * 1700 + 100 * 2000 + 100 * 2500 + (n - (x * pow(10, count - 1))) * 4000;
    } cout << s << endl;
    return 0;
}