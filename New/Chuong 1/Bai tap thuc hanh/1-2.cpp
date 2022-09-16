#include <iostream>
using namespace std;

int main() {
    int ga, cho;     // khai bao 2 bien ga, cho de luu so luong tuong ung
    for (ga = 1; ga < 36; ga++) {
        for (cho = 1; cho < 36; cho++) {
            if ((ga + cho == 36) && (2 * ga + 4 * cho == 100)) {   // ga: 2 chan, cho: 4 chan
                cout << ga << " " << cho;
                break;
            }
        }
    }
    return 0;
}