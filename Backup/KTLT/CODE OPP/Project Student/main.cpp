#include <iostream>
#include <conio.h>
#include <iomanip>
#include <fstream>
using namespace std;

void menu();


class SinhVien {
private:
    string ten;
    int tuoi;
    char lop[4];
    double dtoan;
public:
    friend void ghitt(fstream &ip, SinhVien &s) {
        cin.ignore();
        getline(cin, s.ten); ip << s.ten << ", ";
        cin >> s.tuoi; ip << s.tuoi << " ";
        cin >> s.lop; ip << s.lop << " ";
        cin >> s.dtoan; ip << s.dtoan << "\n";
    }
};

void ghitths(fstream &op, SinhVien *s) {
    int n;
    cout << "Nhap so hs: "; cin >> n;
    for (int i = 0; i < n; i++) {
        SinhVien ss;
        ghitt(op, ss);
    }
}

void xuaths(fstream &op) {
    while (!op.eof()) {
        string s;
        getline(op, s); cout << s << endl;
    }
}

int main() {
    system("cls");
    fstream ip, op;

    menu();
    int n; cout << "Nhap lua chon: "; cin >> n;
    switch (n) {
        case 1: {
            op.open("data.txt");
            xuaths(op);
            op.close();
            break;
        }
        case 2: {
            SinhVien *s;
            ip.open("data.txt", ios::app);
            ghitths(ip, s);
            ip.close();
            break;
        }
        default: {
            cout << "NOOO!\n";
            break;
        }
    }


    
    // 
    

    

    return 0;
}

void menu() {
    cout << "********************************\n";
    cout << "CHUONG TRINH QUAN LY SINH VIEN\n";
    cout << "********************************\n";
    cout << "1 - In danh sach SV\n";
    cout << "2 - Them\n";
    cout << "3 - Sua\n";
    cout << "4 - Xoa\n";
    cout << "5 - Tim kiem\n";
    cout << "6 - Sap xep\n";
    cout << "7 - Thong ke\n";
    cout << "8 - Sao luu\n";
    cout << "9 - Thoat\n";

}