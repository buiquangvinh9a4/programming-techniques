#include <iostream>
using namespace std;

int main() {
    // ki_tu = 'A'  -> Ma ASCII 'A' = ?

    // Moi tay qua dung for ?
    for (int i = int('a'); i <= int('z'); i++) {
        cout << int(i) << endl;
    }

    // Khong thich dung for
    cout << "Ma ASCII cua A la: " << int('A') << endl;
    cout << "Ma ASCII cua B la: " << int('B') << endl;
    cout << "Ma ASCII cua C la: " << int('C') << endl;
    cout << "Ma ASCII cua D la: " << int('D') << endl;
    // to be continue...



    return 0;
}