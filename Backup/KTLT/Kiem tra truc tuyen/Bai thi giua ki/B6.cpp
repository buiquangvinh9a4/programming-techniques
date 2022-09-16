#include <iostream>
#include <string>
using namespace std;

int main(){
    string b; getline(cin, b);
    string a = b;
    int s = a.length();
    if (a[0] != ' '){
        a[0] = (a[0] >= 'a' && a[0] <= 'z') ? a[0] - 32 : a[0];
        for (int i = 1; i < s; i++){
            if (a[i] == ' ' && a[i+1] != ' ' && ((a[i+1] >= 'a' && a[i+1] <= 'z')))
                a[i+1] -= 32;
            else if (a[i-1] != ' ' && (a[i] >= 'A' && a[i] <= 'Z'))
                a[i] += 32;
        }
    }
    else {
         for (int i = 0; i < s; i++){
            if (a[i] == ' ' && a[i+1] != ' ' && ((a[i+1] >= 'a' && a[i+1] <= 'z')))
                a[i+1] -= 32;
            else if (a[i-1] != ' ' && (a[i] >= 'A' && a[i] <= 'Z'))
                a[i] += 32;
        }
    }
    cout << a;
	return 0;
}