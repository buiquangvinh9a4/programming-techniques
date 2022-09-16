#include <iostream>
using namespace std;

bool sole(int x) {
    if (x % 2 == 0) return false;
    else return true;
}

int main(){
    int x, y;
    cin >> x >> y;
    int sum = 0;
    for (int i = x; i <= y; i++)
        if (sole(i))
            sum += i;
    cout << sum;
    return 0;
}