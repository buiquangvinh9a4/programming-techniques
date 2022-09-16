#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    cin >> n;
    int phi = 150000, tien;
    if (n >= 0 && n <= 50)
        tien = n * 600 + phi;
    else if (n >= 50 && n <= 200)
        tien = 50 * 600 + (n - 50) * 400 + phi;
    else if (n >= 200)
        tien = 50 * 600 + 150 * 400 + (n - 200) * 200 + phi;
    cout << tien;
    return 0;
}