#include <iostream>
using namespace std;

int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);

    int count = 0, l = a.length();

    for (int i = 0; i < l; i++) {
        int x = a.find(b, i);
        if (x != -1) {
            count++;
            i = x;
        }
    }
    cout << count;
    return 0;
}