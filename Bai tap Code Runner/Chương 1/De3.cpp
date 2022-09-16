#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    unsigned n, i;
    cin >> n;
    float temp = 0, sum = 0;
    for (i = 1; i <= n; i++) {
        temp += i;
        sum += 1 / float(temp);
    }
    cout << fixed << setprecision(2);
    cout << sum;
    return 0;
}