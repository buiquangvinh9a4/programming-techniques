#include <iostream>
using namespace std;

/*  Chuong 3 _ 3-11
    Nhap 2 chuoi a va b
	Kiem tra a va b co la hai chuoi anagram hay khong?
*/

int main(){
    string a, b, c;
    getline(cin , a);
    getline(cin , b);
    c = b;
    int s1 = a.length(), s2 = b.length();
    for (int i = 0; i < s1; i++) {
        int k = c.find(a[i]);
        if (k != -1) c.erase(k, 1);
    }
    int s3 = c.length();
    if (s1 == s2 && s3 == 0)
        cout << "co";
    else cout << "khong";
	return 0;
}