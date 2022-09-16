#include <iostream>
#include <string>
using namespace std;

/*  Chuong 3 _ 3-6
    Nhap chuoi ki tu bat ki s
    Dem so tu co trong chuoi s
*/

int main(){
    string a;
    getline(cin, a);
    int s = a.length();
    int count = 0;
    if (a[0] != ' ') {
        for (int i = 0; i < s; i++) {
            if (a[i] == ' ' && a[i+1] != ' ' && (a[i+2] != ' ') )
            count ++;
        }
        cout << ++count;
    }
    else {
       for (int i = 0; i < s; i++) {
            if (a[i] == ' ' && a[i+1] != ' ' && (a[i+2] != ' ') )
            count ++;
        }
        cout << count;
    }
    return 0;
}