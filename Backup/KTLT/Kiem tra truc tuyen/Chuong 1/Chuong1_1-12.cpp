#include <iostream>
using namespace std;

int main(){
    char s; cin >> s;
    if (s >= 'A' && s <= 'Z')
        s += 32;
    cout << s;
    return 0;
}