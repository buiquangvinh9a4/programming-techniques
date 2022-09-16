#include <iostream>
using namespace std;

int main(){
    float x, y, z;
    cin >> x >> y >> z;
    float dc;
    cin >> dc;
    if (x + y + z >= dc)
        cout << "Pass";
    else
        cout << "Fail";
    return 0;
}