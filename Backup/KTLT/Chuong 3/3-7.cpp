#include <iostream>
#include <string>
#include <conio.h>   // dung de lay ham getch() - dung man hinh
#include <iomanip>   // dung de lay ham setw() - thay doi khoang cach
#define max 100
using namespace std;

struct Product {
    string code, name;       // ma san pham, ten san pham
  	int mfg, quantity, price;          // nam san xuat (viet tat cua Manufacturing Date)
										// so luong va gia thanh san pham
}; Product pr[max];

// ham in duong ke ngang
void line() {
    cout << setfill('-');  // set fill bang ki tu '-' thay vi ' '
    cout << setw(15) << "-" << endl;      //  fill 15 ki tu '-'
    
    // reset fill bang ki tu ' '
    cout << setfill(' '); 
}

// ham nhap so luong san pham n
void inputN(int &n) {
    cout << "Enter n product: "; cin >> n;
}

// ham nhap cac thong tin cho san pham
void inputStruct(Product pr[max], int &n) {
    string dummy;
    for (int i = 0; i < n; i++) {
        getline(cin, dummy);                     // xuong dong 
        cout << "\n Product " << i+1 << ": \n"; 
        cout << "Code: "; getline(cin, pr[i].code);
        cout << "Name: "; getline(cin, pr[i].name);
        cout << "MFG: "; cin >> pr[i].mfg;
        cout << "Quantity: "; cin >> pr[i].quantity;
        cout << "Price: "; cin >> pr[i].price;
        cout << endl;
        line();
    }
}

// ham dua ra cac san pham san xuat nam 2020
void Production2020(Product pr[max], int n) {
    for (int i = 0; i < n; i++) {
        if (pr[i].mfg == 2020) {                      // neu nam san xuat san pham pr[i] = 2020 
            cout << " - " << pr[i].name << endl;      // in ra ten cua san pham  pr[i]
        }
    }
}

// ham dua ra gia san pham khi biet ten san pham
int ProductPrice(Product pr[max], int n, string pr2) {
    for (int i = 0; i < n; i++) {
        if (pr[i].name == pr2)
            return pr[i].price;
    }
}

// ham tinh tong gia tri cua san pham da nhap
int TotalValue(Product pr[max], int n) {
    int value = 0;
    for (int i = 0; i < n; i++) {
        value += pr[i].quantity * pr[i].price;
    }
    return value;
}

int main(){
    int n; pr[max];
    inputN(n);
    inputStruct(pr, n);   // nhap vao danh sach san pham 

    // hien thi ra cac san pham co nam san xuat la 2020
    cout << "Production products in 2020: \n";
    Production2020(pr, n);

    // nhap vao ten san pham, in ra gia cua san pham do
    string pr2, dummy;
    getline(cin, dummy);
    cout << "Enter Product name: ";
    getline(cin, pr2);
    cout << pr2 << " - Price: " << ProductPrice(pr, n, pr2) << endl;
    
    // hien thi tong gia tri cua san pham da nhap
    cout << "Total value of imported products: " << TotalValue(pr, n) << endl;
    getch();
    return 0;

}
