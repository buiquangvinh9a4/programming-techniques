#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    unsigned int n, i;
    cin >> n;
    float s = 0;
    for (i = 1; i <= n; i++)
        s += (i / float(i + 1));
    cout << fixed << setprecision(2);
    cout << s;
    return 0;
}