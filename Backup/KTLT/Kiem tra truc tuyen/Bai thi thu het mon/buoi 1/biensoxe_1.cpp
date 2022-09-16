#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    if (s[0] == '2' && s[1] == '9') {
        cout << "Yes";
        return 0;
    }
    if (s[0] == '3' && s[1] == '0') {
        cout << "Yes";
        return 0;
    }
    if (s[0] == '3' && s[1] == '1') {
        cout << "Yes";
        return 0;
    }
    cout << "No";
    return 0;
}