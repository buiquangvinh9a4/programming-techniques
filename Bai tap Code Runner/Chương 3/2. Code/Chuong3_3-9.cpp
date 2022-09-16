#include <iostream>
#include <string>
using namespace std;

/*  Chuong 3 _ 3-9
    Nhap vao chuoi ki tu bat ki s
    Viet thuong cac ki tu dau tu trong s, viet hoa cac ki tu con lai
*/

int main(){
    string a;
    getline(cin, a);
    int s = a.length();
    if (a[0] != ' '){
        a[0] = (a[0] >= 'A' && a[0] <= 'Z') ? a[0] + 32 : a[0];
        for (int i = 1; i < s; i++){
            if (a[i] == ' ' && a[i+1] != ' ' && (a[i+1] >= 'A' && a[i+1] <= 'Z'))
                a[i+1] += 32;
            else if (a[i-1] != ' ' && (a[i] >= 'a' && a[i] <= 'z'))
                a[i] -= 32;
        }
    }
    else {
        for (int i = 0; i < s; i++) {
            if (a[i] == ' ' && a[i+1] != ' ' && (a[i+1] >= 'A' && a[i+1] <= 'Z'))
                a[i+1] += 32;
            else if (a[i-1] != ' ' && (a[i] >= 'a' && a[i] <= 'z'))
                a[i] -= 32;
        }
    }
    cout << a;
    return 0;
}