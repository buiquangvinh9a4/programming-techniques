#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int l = s.length(), check;
    for (int i = 0; i < l / 2; i++) {
        if (s[i] != s[l - i - 1]) {
            check = -1;
            break;
        }
    }

    if (check != -1) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}