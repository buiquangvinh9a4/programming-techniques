#include <iostream>
#include <string>
using namespace std;

/*  Chuong 3 _ 3-4
    Chuong trinh nhap chuoi s bat ki:
        - Viet thuong all ki tu trong s
        - Viet hoa all ki tu trong s
*/

string lower(string s) {
	string a;
	int b = s.length();
	for (int i = 0; i < b; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 32;
		}
	}
	a = s;
	return a;
}

string upper(string s) {
	string a;
	int b = s.length();
	for (int i = 0; i < b; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] -= 32;
		}
	}
	a = s;
	return a;
}

int main() {
	string s;
	getline(cin, s);
	cout << lower(s) << endl;
	cout << upper(s) << endl;


}