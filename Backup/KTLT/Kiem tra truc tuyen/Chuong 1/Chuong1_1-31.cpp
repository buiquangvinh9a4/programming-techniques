#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    unsigned int n, i, s = 0;
    cin >> n;
    float sum = 0;
    for (i = 1; i <= n; i++) {
        s += i;
        sum += 1/ float(s);
    }
    cout << fixed << setprecision(2);
    cout << sum; 
    return 0;
}