#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

// ham: them so 0 vao truoc chuoi
void insert_String(string &a, string &b) {
    if (a.length() < b.length()) {
        int k = b.length() - a.length();
        for (int i = 0; i < k; i++)
            a.insert(0, "0");
    }
    else {
        int k = a.length() - b.length();
        for (int i = 0; i < k; i++)
            b.insert(0, "0");
    }
}

// ham: dao nguoc chuoi a
void reverse_String(string a) {
    for (int i = a.length() - 1; i >= 0; i--)
        cout << a[i];
    cout << endl;
}

// ham: tinh tong
void sum(string a, string b, string &c) {
    int temp = 0, sum = 0, k = 0;
    for (int i = a.length() - 1; i >= 0; i--) {
        sum = (a[i] - 48) + (b[i] - 48) + temp;
        temp = sum / 10;
        c[k] = (sum % 10) + 48;
        k++;
    }
    if (temp != 0) {
        c[k] = temp + 48;
    }

}

int main(){
    system("cls");
    string a, b, c;
    cout << "A = "; cin >> a;
    cout << "B = "; cin >> b;
    cout << a << " + " << b << " = ";
    insert_String(a, b);
    c.resize(a.length() + 1);
    sum(a, b, c);
    reverse_String(c);
    getch();
    return 0;
}