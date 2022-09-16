#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

// ham ve duong line
void line() {
    cout << "------------------------\n";
}

// ham tra ve true neu chu in hoa, false neu chu thuong
bool check_Char(string s, int i) {
    if (s[i] >= 'A' && s[i] <= 'Z')
        return true;
    else if (s[i] >= 'a' && s[i] <= 'z')
        return false;
}

// ham chuc nang lowercase
string lowercase(string s) {
    string lower;
    for (int i = 0 ; i < s.length() ; i++) {
        s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] + 32 : s[i];
    }
    lower = s;
    return lower;
}

// ham chuc nang UPPERCASE
string UPPERCASE(string s) {
    string upper;
    for (int i = 0 ; i < s.length() ; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
    }
    upper = s;
    return upper;
}

// ham chuc nang Sentence case
string Sentencecase(string s) {
    string sentence;
    if (s[0] != ' ')     // kiem tra ki tu dau tien co phai space
        s[0] = (!check_Char(s, 0)) ? s[0] - 32 : s[0];
        for (int i =1; i < s.length(); i++)
            if (s[i] == '.' && s[i + 1] == ' ' && s[i + 2] != ' ' && !check_Char(s, i + 2))
                s[i + 2] -= 32;
    else 
        for (int i = 0; i < s.length(); i++)
            if (s[i] == '.' && s[i + 1] == ' ' && s[i + 2] != ' ' && !check_Char(s, i + 2))
                s[i + 2] -= 32;
    sentence = s;
    return s;
}

// ham chuc nang Capitalize Each Word
string Capitalize(string s) {
	string cap;
	int i;
    if (s[0] != ' ') {          // kiem tra ki tu dau tien co phai space
        s[0] = (!check_Char(s, 0)) ? s[0] - 32 : s[0];
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == ' ' && s[i + 1] != ' ' && !check_Char(s, i + 1))
                s[i + 1] -= 32;
            else if (s[i - 1] != ' ' && check_Char(s, i))
               s[i] += 32;
        }
    } else {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ' && s[i + 1] != ' ' && !check_Char(s, i + 1))
                s[i + 1] -= 32;
            else if (s[i - 1] != ' ' && check_Char(s, i))
               s[i] += 32;
        }
    }
    cap = s;
    return cap;
}

// ham chuc nang tOGGLE cASE
string tOGGLEcASE(string s) {
	string toggle;
	if (s[0] != ' ') {          // kiem tra ki tu dau tien co phai space
        s[0] = (check_Char(s, 0)) ? s[0] + 32 : s[0];
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == ' ' && s[i + 1] != ' ' && check_Char(s, i + 1))
                s[i + 1] += 32;
            else if (s[i - 1] != ' ' && s[i] >= 'a' && s[i] <= 'z')
               s[i] -= 32;
        }
    } else {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ' && s[i + 1] != ' ' && check_Char(s, i + 1))
                s[i + 1] += 32;
            else if (s[i - 1] != ' ' && s[i] >= 'a' && s[i] <= 'z')
               s[i] -= 32;
        }
    }
	toggle = s;
	return toggle;
}

// ham chuc nang dem tu trong xau S
int countString(string s, int &count) {
    int i, k = 0;
    if (s[0] != ' ') { 
        for (i = 1; i < s.length(); i++)
            if (s[i] == ' ' && s[i + 1] != ' ')
                count++;
    } else {
        count--;
        for (i = 0; i < s.length(); i++)
            if (s[i] == ' ' && s[i + 1] != ' ')
                count++;
    }
    if (s[s.length() - 1] == ' ') return count++;
    return ++count;
}

int main(){
    system("cls");     // lenh xoa man hinh
    string S;
    cout << "Enter String S: "; getline(cin, S);
    line();
    // ------------------> lowercase
    cout << "- lowercase: " << lowercase(S) << endl; line();
    // ------------------> UPPERCASE
    cout << "- UPPERCASE: " << UPPERCASE(S)<< endl; line();
    // ------------------> Sentence case
    cout << "- Sentence case: " << Sentencecase(S) << endl; line();
    // ------------------> Capitalize Each Word
    cout << "- Capitalize Each Word: " << Capitalize(S) << endl; line();
    // ------------------> tOGGLE cASE
    cout << "- tOGGLE cASE: " << tOGGLEcASE(S) << endl; line();
    // ------------------>
    int count = 0;
    cout << "- COUNT STRING = " << countString(S, count) << endl; line();
	getch();          // lenh dung man hinh
    return 0;
}
