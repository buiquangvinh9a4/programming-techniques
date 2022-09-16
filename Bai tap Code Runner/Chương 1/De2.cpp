#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
    int sl = 0, m = n, p = n;
    while (m > 0) {
        m /= 10;
        sl++;
    }
    int sum = 0;
    for (int i = 0; i < sl; i++) {
        sum += pow((p % 10), sl);
        p /= 10; 
    }
    if (sum == n)
        cout << "Co";
    else
        cout << "Khong";

    return 0;
}