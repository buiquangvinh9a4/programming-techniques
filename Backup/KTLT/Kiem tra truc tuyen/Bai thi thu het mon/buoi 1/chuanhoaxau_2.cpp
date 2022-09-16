#include <iostream>
using namespace std;


int main() {
    string s;
    getline(cin, s);
    if (s[0] >= 'A' && s[0] <= 'Z') {
        s[0] += 32;
    }
    int l = s.length();
    for (int i = 1; i < l; i++) {
        if (s[i] == ' ' && (s[i + 1] >= 'A' && s[i + 1] <= 'Z')) {
            s[i + 1] += 32;
        }
        else if (s[i - 1] != ' ' && (s[i] >= 'a' && s[i] <= 'z')) {
            s[i] -= 32;
        }
    }
    cout << s;
    return 0;
}