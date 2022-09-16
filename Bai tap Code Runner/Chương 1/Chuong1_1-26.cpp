#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    cin >> n;
    unsigned i, sum = 0;
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }         
    }
    if (n == sum) cout << "Co";
    else cout << "Khong";
    return 0;
}