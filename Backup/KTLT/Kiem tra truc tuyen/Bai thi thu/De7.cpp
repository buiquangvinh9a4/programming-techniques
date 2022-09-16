#include <iostream>
#include <cmath>
using namespace std;

bool snt (int n) {
    if (n < 2) return false;
    else {
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0;
    for (int i = 0; i < n; i++)
        if (snt(a[i]))
            sum += a[i];
    cout << sum;
    return 0;
}