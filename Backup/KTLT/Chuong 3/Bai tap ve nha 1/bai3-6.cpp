#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

// ham ve duong line
void line() {
    cout << "------------------------\n";
}

// Ham: nhap chuoi a tu ban phim
void inp_String(string &a) {
    cout << "Enter string: "; 
    getline(cin, a);
}

// Ham: tim kiem vi tri cua chuoi b trong chuoi a tu vi tri n
int find_String(string a, string b, int n) {
    int location;
    location = a.find(b, n);
    return location;
}

// Ham: chen chuoi b vao chuoi a tu vi tri k
string insert_String(string a, string b, int k) {
    string a_insert;
    a.insert(k, b);
    a_insert = a;
    return a_insert;
}

// Ham: Kiem tra chuoi A co phai la uoc cua chuoi B khong
bool isDivisor(string a, string b) {
    int check = 0, temp = 0, i;
    for (i = temp; i < b.length(); i++) {
        if(b.find(a, temp) == -1) break;
        else {
            check++;
            temp = 1 + find_String(b, a, temp);
        }
    }
    float length = b.length() / float(a.length());
    if (check == length) return true;
    else return false; 
}

// Ham: Kiem tra 2 chuoi Anagram
bool is_Anagram(string a, string b) {
    string c = b;
    int k;
    for (int i = 0; i < a.length(); i++) {
        k = c.find(a[i]);
        if (k != -1) {
            c.erase(k, 1);
        }
    }
    if (a.length() == b.length() && c.length() == 0) 
        return true;
    else
        return false;
}


int main() {
    system("cls");
    // ----------------------------->  Nhap chuoi A, B tu ban phim

    string A, B;
    cout << "String A -> "; inp_String(A);
    cout << "String B -> "; inp_String(B);
    line();

    // -----------------------------> Tim kiem vi tri xuat hien xau B trong xau A va so lan xuat hien

    int count = 0;  // Bien dem so lan xuat hien xau B trong xau A
    if (find_String(A, B, 0) == -1)
        cout << "!! No string A found in string B !!\n";
    else {
        int z = 0;
        for (int i = z; i < A.length(); i++) {
            cout << "Location of string B in string A = " << find_String(A, B, z) << endl;
            count++;
            z = find_String(A, B, z) + 1;
            if (find_String(A, B, z) == -1) break;
        }
    } line();
    cout << "The numbers of time string B in string A is: " << count << endl;
    line();
    getch();

    // -----------------------------> Chen chuoi B vao chuoi A tu vi tri k

    int k;
    cout << "Enter location k Insert: "; cin >> k;
    cout << "String A after insertion: " << insert_String(A, B, k) << endl;
    line();

    // -----------------------------> Kiem tra chuoi A co phai la uoc cua chuoi B khong
    
    if (isDivisor(A, B))
        cout << "A is a divisor of B\n";
    else
        cout << "A is not a divisor of B\n";
    line();

    // -----------------------------> Kiem tra 2 chuoi A va B co phai la Anagram
    
    if (is_Anagram(A, B)) 
        cout << "String A and String B is Anagram\n";
    else 
        cout << "String A and String B is not Anagram\n";
    
    getch();
    return 0;
}