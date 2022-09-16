#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float x, y, z, t;
    cin >> x >> y >> z >> t;
    float sum = x + y + z + t;
    float average = sum / 4;
    cout << sum << " ";
    cout << fixed << setprecision(1);
    cout << average;
    return 0;
}