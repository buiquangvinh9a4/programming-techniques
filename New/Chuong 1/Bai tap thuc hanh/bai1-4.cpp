#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // cout << "STT\tHo\t\tTen\t Dia chi\n";
    // cout << "---------------------------------------------\n";
    // cout << "1\tNguyen\t\tHuyen\t Hai Duong\n";
    // cout << "2\tTran\t\tHung\t Phu Tho\n";
    // cout << "3\tLe\t\tLoi\t Tuyen Quang\n";
    // cout << "4\tHoang\t\tHy\t Bac Ninh\n";

    cout << setw(10) << left << "STT" << setw(10) << left << "Ho" << setw(15) << left << "Ten" << setw(10) <<  "Dia chi" << endl;
    cout << setfill('-');
    cout << setw(50) << "-" << endl;
    cout << setfill(' ');
    cout << setw(10) << "1" << setw(10) << "Nguyen" << setw(15) << "Huyen" << setw(10) <<  "Hai Duong" << endl;
    cout << setw(10) << "2" << setw(10) << "Tran" << setw(15) << "Hung" << setw(10) <<  "Phu Tho" << endl;
    cout << setw(10) << "3" << setw(10) << "Le" << setw(15) << "Loi" << setw(10) <<  "Tuyen Quang" << endl;
    cout << setw(10) << "4" << setw(10) << "Hoang" << setw(15) << "Hy" << setw(10) <<  "Bac Ninh" << endl;
    
    // Co the dung setw() trong thu vien <iomanip>
    return 0;
}

