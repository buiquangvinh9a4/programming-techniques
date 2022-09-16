#include <iostream>
#include <string>
#include <conio.h>   // dung de lay ham getch()
#define MAX 1000
using namespace std;

// ham nhap chuoi S
void inputString(string &S) {
    cout << "Enter String S: ";
    getline(cin, S);
}


// ham kiem tra co ton tai phan tu k trong xau S hay khong
bool isFind(char k, string S){
    int x = 0;        // khai bao bien x lam "linh canh", theo doi vong lap
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == k)   
            x++;
    }
    if (x == 0) return false;    // neu x khong tang, hay khong tim thay ki tu k, tra ve false, nguoc lai
    else return true;
}

// ham ma hoa
void enCode(string &S, string &E) {
    int x, c, k;
    for (int i = 0 ; i < S.length(); i++) {
        x = 2;   // bien x de luu gia tri ma hoa
        
        /*  xau E chua ki tu tu A - Z chia lam 8 phan theo thu tu ban phim dien thoai:
                        - 2: ABC   - 3: DEF   
            - 4: GHI    - 5: JKL   - 6: MNO   
            - 7: PQRS   - 8: TUV   - 9: WXYZ
            E co do dai E.length() = 26
            Su dung vong lap voi j voi buoc nhay:
              - i += 3  neu  x = 3
              - i += 4  neu  x = 4
              trong do: x la gia tri ma hoa xet tai vi tri ma hoa 
            Neu duyet den phan tu la ki tu Symbol, thi in ki tu do ra man hinh
        */

        for (int j = 0; j < E.length(); j = (j == 15 || j == 22) ? (j + 4) : (j + 3)  ) {
            c = (x == 7 || x == 9) ? 4 : 3;
            /*
                - E.substr(j,c) la phep tra ve 1 xau con trong xau E, bat dau tu j, lay c ki tu
                - isFind(S[i], E.substr(j,c)) la ham kiem tra ton tai ki tu S[i] trong xau con E.substr(j,c)
                 
              
            */

            if (isFind(S[i], E.substr(j, c))) {   
                cout << x;
                break;
            } else if (S[i] < 65 || S[i] > 90) {
                cout << S[i];
                break;
            }
            else x++;
        }
        
    }
}

int main() {
    string S, E = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // xau E chua noi dung tim kiem de ma hoa
    inputString(S);      // goi ham nhap chuoi String S   
    enCode(S, E);        // goi ham ma hoa enCode
    getch();     
    return 0;
}
 
