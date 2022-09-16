#include <iostream>
using namespace std;

int main() {
    unsigned x, y, i;
    cin >> x >> y;
    unsigned s = 0;
    for (i = x; i <= y; i++) {
        s += i * i;
    }
    cout << s;
    return 0;
}