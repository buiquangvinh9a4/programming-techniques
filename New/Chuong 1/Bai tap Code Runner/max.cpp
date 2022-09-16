#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;

    float max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;

    cout << max;

    return 0;
}