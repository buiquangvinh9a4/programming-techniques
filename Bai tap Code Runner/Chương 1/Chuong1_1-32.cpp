#include <iostream>
using namespace std;

int main(){
    unsigned int x, y, i;
    cin >> x >> y;
    int s = 0;
    for (i = x; i <= y; i++)
        if (i % 2 != 0)
            s += i;
    cout << s;
    return 0;
}