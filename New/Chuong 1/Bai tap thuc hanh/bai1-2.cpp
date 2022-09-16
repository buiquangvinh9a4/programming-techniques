#include <iostream>
#include <iomanip>   // khai bao thu vien iomanip de lay ham fixed & setprecision
using namespace std;

int main() {
    const double H = 1.7e-7;  // const: hang so
    const double K = 1.38e-23;
    const double PI = 3.14159;

    // Truoc khi hien tri ra man hinh thi khai bao ham fixed & setprecision
    cout << fixed << setprecision(3);
    
    cout << "H = " << H << endl;
    cout << "K = " << K << endl;
    cout << "PI = " << PI << endl; 

    return 0;
}
