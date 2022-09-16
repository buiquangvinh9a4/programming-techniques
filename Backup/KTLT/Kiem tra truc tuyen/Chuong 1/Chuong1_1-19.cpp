#include <iostream>
using namespace std;

int main(){
    unsigned a, b, temp;
    cin >> a >> b;
    temp = a;
    while (a % b != 0 || a / b != 2) {
        a++;
        b++;
    }
    cout << a - temp;
    return 0;
}