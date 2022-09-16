#include <iostream>
#include <cmath>
using namespace std;

struct Tpoint {
    int x;
    int y;
};

int main() {
    Tpoint A, B;
    cin >> A.x >> A.y;
    cin >> B.x >> B.y;

    float s = sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
    float money = s * 5;

    cout << money << endl;

    return 0;
}