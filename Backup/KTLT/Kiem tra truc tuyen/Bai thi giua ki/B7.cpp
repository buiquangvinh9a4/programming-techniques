#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    getline(cin, a);
    int s = a.length();
    int count = 0;
    if (a[0] != ' ') {
        for (int i = 0; i < s; i++) {
            if (a[i] == ' ' && a[i+1] != ' ')
            count ++;
        }
        cout << ++count;
    }
    else {
       for (int i = 0; i < s; i++) {
            if (a[i] == ' ' && a[i+1] != ' ')
            count ++;
        }
        cout << count;
    }
    return 0;
}