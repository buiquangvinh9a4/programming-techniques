#include <iostream>
#include <string>
#include <conio.h>   // dung de lay ham getch()
#define MAX 1000
using namespace std;

// ham ma hoa 
/*  - 2: ABC   - 3: DEF   
    - 4: GHI    - 5: JKL   - 6: MNO   
    - 7: PQRS   - 8: TUV   - 9: WXYZ    
*/

string enCode(string s) {
    string t=s;
    //doi tat ca chu thuong thanh chu hoa
    for (int i=0; i<s.length(); i++) 
    {
        if (t[i]>='a' && t[i]<='z')
            t[i] -= 32;        
    }
    //ma hoa theo qui tac
    for (int i=0; i<=t.length(); i++)
    {
        if (t[i]>='A' && t[i]<='C') t[i] = '2';
        else if (t[i]>='D' && t[i]<='E') t[i] = '3';
        else if (t[i]>='G' && t[i]<='I') t[i] = '4';
        else if (t[i]>='J' && t[i]<='L') t[i] = '5';
        else if (t[i]>='M' && t[i]<='O') t[i] = '6';
        else if (t[i]>='P' && t[i]<='S') t[i] = '7';
        else if (t[i]>='T' && t[i]<='V') t[i] = '8';
        else if (t[i]>='W' && t[i]<='Z') t[i] = '9';
    }
    return t;
}

int main() {
    string s;
    cout << "Enter String S: ";
    getline(cin, s);
    cout<<"Before encode: "<<s<<endl;
    string kq = enCode(s);        // goi ham ma hoa enCode
    cout<<"After encode: "<<kq<<endl;
    getch();     
    return 0;
}
 
