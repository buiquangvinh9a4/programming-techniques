#include <iostream>
using namespace std;

int main(){
    unsigned int m, y;
    cin >> m >> y;
    bool nhuan;
    nhuan = ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) ? true : false;
    int d = 31;
    if (m == 2)
        d = (nhuan == true) ? 29 : 28;
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        d = 30;
    cout << d;
    return 0;
}