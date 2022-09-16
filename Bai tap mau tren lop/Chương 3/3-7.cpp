#include <iostream>
#include <string>
#include <conio.h>   // dung de lay ham getch() - dung man hinh
#include <iomanip>   // dung de lay ham setw() - thay doi khoang cach
#define max 100
using namespace std;

struct Product {
    string code, name;          // ma san pham, ten san pham
    int year, quantity;         // nam san xuat, so luong
    double price;               //gia san pham
                                
}; 

Product pr[max];

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
        cout << "Year: "; cin >> pr[i].year;
        cout << "Quantity: "; cin >> pr[i].quantity;
        cout << "Price: "; cin >> pr[i].price;
        cout << endl;
        line();
    }
}

// ham dua ra cac san pham san xuat nam 2020
void ProductByYear(Product pr[max], int n) {
    int d = 0; //dem so san pham
    for (int i = 0; i < n; i++) {
        if (pr[i].year == 2020) {                      // neu nam san xuat san pham pr[i] = 2020 
            cout << pr[i].name <<": "<<pr[i].year<< endl;      // in ra ten cua san pham  pr[i]
            d++;
        }
    }
    if (d==0) cout<<"No product is published in 2020"<<endl;
    else cout<<d<<" products are published in 2020"<<endl;
}

// ham dua ra gia san pham khi biet ten san pham
void ProductByName(Product pr[max], int n, string tname) {
    int d = 0; //dem so san pham
    for (int i = 0; i < n; i++) {
        if (pr[i].name == tname)
        {
            cout<<pr[i].name <<": "<<pr[i].price<<endl;
            d++; 
        }
    }
    if (d==0) cout<<"No product with name = "<<tname<<endl;
    else cout<<d<<" products with name="<<tname<<endl;
}

// ham tinh tong gia tri cua san pham da nhap
double TotalValue(Product pr[max], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pr[i].quantity * pr[i].price;
    }
    return sum;
}

int main(){
    int n; pr[max];
    inputN(n);
    inputStruct(pr, n);   // nhap vao danh sach san pham 

    // hien thi ra cac san pham co nam san xuat la 2020
    cout << "Products are published in 2020: \n";
    ProductByYear(pr, n);

    // nhap vao ten san pham, in ra gia cua san pham do
    string pr2, dummy;
    getline(cin, dummy);
    cout << "Enter Product name: ";
    getline(cin, pr2);
    cout << "Products are published with name \n";
    ProductByName(pr, n, pr2);
    
    
    // hien thi tong gia tri cua san pham da nhap
    double sum_price = TotalValue(pr, n);
    cout << "Total value of imported products: " << sum_price << endl;
    getch();

    return 0;
}
