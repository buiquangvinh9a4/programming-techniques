#include <iostream>
#include <string>
#include <cmath>
#include <conio.h>

using namespace std;

int num(string s) {
    int sum = 0;
    int mu = 0;
    for (int i = s.length() - 1; i >= 0; i--){
        sum = sum + ((s[i] - 48) * pow(10, mu));
        mu++;
    }
    return sum;
}

int main(){
    system("cls");
    string s = "12345";
    cout << "Before s = " << s  << endl;

    cout << "After s = " << num(s) << endl;
}