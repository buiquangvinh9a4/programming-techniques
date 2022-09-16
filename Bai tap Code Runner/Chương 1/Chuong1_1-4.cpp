#include <iostream>
using namespace std;

int main(){
    char s; cin >> s;
    if (s >= 'a' && s <= 'z')
        s -= 32;
    cout << s;
    return 0;
}