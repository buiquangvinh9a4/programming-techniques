#include <iostream>
using namespace std;

int main() {
    string s, ten;
    getline(cin, s);
    int x = 0, i, l = s.length();
    for (i = l - 1; i >= 0; i--) {
        if (s[i] == ' ')
            break;
    }
    for (int j = i + 1; j < l; j++) {
        ten += s[j];
    }
    cout << ten;
    
    
    return 0;
}