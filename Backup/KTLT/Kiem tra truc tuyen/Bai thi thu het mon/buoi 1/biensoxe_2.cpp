#include <iostream>
using namespace std;

bool isNumber(char n) {
    return (n >= '0' && n <= '9') ? true : false;
}

bool isChar(char n) {
    if (n >= 'A' && n <= 'Z') return true;
    if (n >= 'a' && n <= 'z') return true;
    return false;
}


int main() {
    string s;
    getline(cin, s);
    
    int l = s.length(), c = 0;

    if (l == 11) {
        if (isNumber(s[0]) && isNumber(s[1])) {
            if (s[2] == '-' && s[8] == '.') {
                if (isChar(s[3])) {
                    if (isNumber(s[4]) && isNumber(s[5]) && isNumber(s[6]) && isNumber(s[7])) {
                        if (isNumber(s[9]) && isNumber(s[10])) {
                            c = 1;
                        }
                    }
                }
            }
        } 
    }

    if (c == 1) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
