#include <iostream>
#include <string>
using namespace std;

// Y tuong bai toan: Dua vao bang ma ASCII

// ham chuyen chu hoa thanh chu thuong trong xau s
void lowercase(string &s) {
    for (int i = 0 ; i < s.length() ; i++) {
        s[i] = (s[i] >= 65 && s[i] <= 90) ? s[i] + 32 : s[i];
    }
}

// ham chuyen chu thuong thanh chu hoa trong xau s
void upppercase(string &s) {
    for (int i = 0 ; i < s.length() ; i++) {
        s[i] = (s[i] >= 97 && s[i] <= 122) ? s[i] - 32 : s[i];
    }
}

int main(){
    string S;
    cout << "Enter String S: "; getline(cin, S);
    // chuyen chu hoa thanh chu thuong xau S
    lowercase(S);
    cout << "Lowercase: " << S << endl;
    // chuyen chu thuong thanh chu hoa xau S
    upppercase(S);
    cout << "Uppercase: " << S << endl;
}