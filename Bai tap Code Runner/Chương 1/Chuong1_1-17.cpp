#include <iostream>
using namespace std;

int main(){
    float a, b, c;
    cin >> a >> b >> c;
    if (a <= b && b <= c)
        cout << a;
    else if (b <= c)
        cout << b;
    else
        cout << c;
    return 0;
}