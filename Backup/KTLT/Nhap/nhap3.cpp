#include <iostream>
using namespace std;

int main() {
    unsigned int n, i;
    cin >> n;
    int sum = 0;
    for (i = 1; i <= n; i++) {
        sum += (i * i);
    }
    cout << sum;
    return 0;
}