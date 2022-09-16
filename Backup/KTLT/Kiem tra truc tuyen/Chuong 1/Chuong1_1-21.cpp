#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    unsigned int n, i;
    float s = 1;
    cin >> n;
    for (i = 1; i <= n; i++) {
        s += (1/float(2 * i + 1));

    }
    cout << fixed << setprecision(2);
    cout << s;
    return 0;
}