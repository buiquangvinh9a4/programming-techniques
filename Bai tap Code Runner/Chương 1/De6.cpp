#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.length();
    bool check = true;
    for (int i = 0; i < len / 2; i++)
        if (s[i] != s[len - i - 1])
            check = false;

    if (check) cout << "Yes";
    else cout << "No";
    return 0;
}