#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    unsigned int n, i;
    float x;
    cin >> n >> x;
    float s = 0;
    for (i = 1; i <= n; i++) {
        s += pow(x, i);
    }
    cout << fixed << setprecision(2);
    cout << s;
    return 0;
}