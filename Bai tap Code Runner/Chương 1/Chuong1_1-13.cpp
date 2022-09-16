#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    unsigned int n, i;
    cin >> n;
    float sum = 0;
    for (i = 1; i <= n; i++)
        sum += 1 / float(i * (i + 1));
    cout << fixed << setprecision(2);
    cout << sum;
    return 0;
}