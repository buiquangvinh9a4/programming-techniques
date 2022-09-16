#include <iostream>
#include <cmath>
using namespace std;

bool snt(int n) {
    if (n < 2) return false;
    else {
        for (int i = 2; i < sqrt(n); i++) {
            if (n % i == 0) return false;
        }
    }
    return true;
}

int main(){
    unsigned int n;
    cin >> n;
    if (snt(n)) cout << "Co";
    else cout << "Khong";
    return 0;
}