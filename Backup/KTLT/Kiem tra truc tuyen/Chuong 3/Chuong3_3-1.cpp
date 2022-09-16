#include <iostream>
#include <string.h>
using namespace std;

/*  Chuong 3 _ 3-1
    nhap vao chuoi a va b
    dem so lan xuat hien chuoi b trong a
*/

int main(){
	string a, b;
    getline(cin, a);
    getline(cin, b);
    int s = a.length(), z = 0, count = 0;   
    for (int i = z; i < s; i++) {
        int x = a.find(b, z);
        if (x != -1) {
            count++;
            if (x == -1) break;
            z = x + 1;    
        }
    }
    cout << count;
	return 0;
}