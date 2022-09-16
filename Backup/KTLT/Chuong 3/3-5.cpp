#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

// ham kiem tra ki tu khac chu
int check_Symbol(string s, int i) {
    if (s[i] < 'A' || s[i] > 'z' || (s[i] > 'Z' && s[i] < 'a')) return 0;
    else if (s[i] >= 'A' && s[i] <= 'Z') return 1;
    else return 2;
}

// ham chuyen chu hoa thanh chu thuong trong xau s
string lowercase(string s) {
    string lower;
    for (int i = 0 ; i < s.length() ; i++) {
        s[i] = (check_Symbol(s, i) == 1) ? s[i] + 32 : s[i];
    }
    lower = s;
    return lower;
}

// ham chuyen chu thuong thanh chu hoa trong xau s
string upppercase(string s) {
    string upper;
    for (int i = 0 ; i < s.length() ; i++) {
        if (check_Symbol(s, i) == 2) s[i] -= 32;
    }
    upper = s;
    return upper;
}

//ham viet hoa chu cai dau xau s
string sentenceCase(string s) {
    string sentence;
    for (int i = 0; i < s.length(); i++)
    	if (check_Symbol(s, i) == 0 && check_Symbol(s, i + 1) == 2)
    		s[i] -= 32;
    sentence = s;
    return sentence;
}

// ham viet hoa chu cai dau tu xau s
string Capitalize(string s) {

}

int main(){
    system("cls");
    string S;
    cout << "Enter String S: "; getline(cin, S);
    // ------------------ chuyen chu hoa thanh chu thuong xau S
    cout << "Lowercase: " << lowercase(S) << endl;
    // ------------------ chuyen chu thuong thanh chu hoa xau S
    cout << "Uppercase: " << upppercase(S)<< endl;
    // ------------------ viet hoa chu cai dau xau s 
    cout << "SentenceCase: " << sentenceCase(S) << endl;
    getch();
    return 0;
}
