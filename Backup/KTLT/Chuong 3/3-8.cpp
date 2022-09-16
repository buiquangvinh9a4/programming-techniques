#include <iostream>
#include <cmath>         // dung de lay ham sqrt
#include <conio.h>       // dung de lay ham getch - dung man hinh
#include <iomanip>       // dung de lay ham setw() - thay doi khoang cach va setprecision() - thay doi gia tri thap phan
using namespace std;

// kieu ban ghi vecTor, luu tru gia tri cua vector: name (x, y)
struct vecTor {
    char name[2];    // ten vector
    double x, y;     // toa do cua vector
};
vecTor vt[10];

// ham in duong ke line
void line(){
    cout << "---------------------------\n";
}

// ham nhap vector
void inputVector(int n) {
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". Name Vector: ";
        cin.ignore(1);
        cin.get(vt[i].name, 3);
        cout << "- Enter x: "; cin >> vt[i].x;
        cout << "- Enter y: "; cin >> vt[i].y;
    }
}

// ham xuat vector ra man hinh
void outputVector(int n) {
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << vt[i].name << " = (" << vt[i].x << ", " << vt[i].y << ")\n";
    }
}

// ham tinh do dai cua vector
double lengthVector(const vecTor &vt) {
    double x = sqrt(vt.x * vt.x + vt.y * vt.y);     // cong thuc tinh do dai vector
    return x; 
}

// ham tinh tong va hieu cua 2 vector
void calcuVector(int i, int j) {
    cout << vt[i].name << " + " << vt[j].name << " = (" << vt[i].x + vt[j].x << ", " << vt[i].y + vt[j].y << ")\n";
    cout << vt[i].name << " - " << vt[j].name << " = (" << vt[j].x - vt[i].x << ", " << vt[j].y - vt[i].y << ")\n";
}


int main(){
    int n;
    // nhap so luong vector 
    cout << "Quantity Vector: "; cin >> n;

    // goi ham nhap gia tri cac vector
    inputVector(n); line();

    // in cac vector da nhap ra man hinh
    cout << "--- LIST VECTOR ---\n";
    outputVector(n); line();
    getch();

    // nhap vector can kiem tra do dai
    cout << "--- LENGTH VECTOR ---\n";
    cout << setprecision(3);            // set do dai vector co 2 chu so phan thap phan
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << vt[i].name << setw(2) << " = " << lengthVector(vt[i]) << endl;
    }
    line();
    getch();
    
    // nhap 2 vector can tinh tong & hieu
    cout << "--- CALCULATE VECTOR ---\n";
    int vt1, vt2;
    cout << "Enter First Vector (Enter 1, 2, ...): "; cin >> vt1;
    cout << "Enter Second Vector (Enter 1, 2, ...): "; cin >> vt2;

    // tinh tong va hieu cho 2 vector vt1, vt2 va in ra man hinh
    calcuVector(vt1 - 1, vt2 - 1);
    line();
    getch();
    return 0;
}