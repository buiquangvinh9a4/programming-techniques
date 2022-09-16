#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

struct Tphanso {
    int ts, ms;
};
Tphanso ps[100];

// ham: hien thi phan so ra man hinh
void display (int i){
    cout << i + 1 << ". " << setw(5) << ps[i].ts << " / " << ps[i].ms << endl;
}

// ham: nhap phan so
void inpTphanso (Tphanso ps[], int n){
    for (int i = 0; i < n; i++) {
        cout << "Fraction " << i + 1 << ":\n";
        do {
            cout << "- Numerator   = "; cin >> ps[i].ts;
            cout << "- Denominator = "; cin >> ps[i].ms;
        } while (ps[i].ms == 0);
    }
}

// ham: tim uoc chung lon nhat
int UCLN (int a, int b) {
    if(a == b) return a;
    if(a > b) 
        UCLN(a - b, b);
    else
        UCLN(a, b - a);
    
}

// ham: tim boi chung nho nhat
int BCNN (int a, int b) {
    return (a * b / UCLN(a, b));
}

// ham: rut gon phan so
void compact_Fraction (Tphanso ps[], int i) {
    int k = UCLN(ps[i].ts, ps[i].ms);
    ps[i].ts /= k;
    ps[i].ms /= k;
}

// ham: tinh tong 2 phan so
void sum_Fraction (Tphanso ps[]) {
    int k = BCNN(ps[0].ms, ps[1].ms);
    ps[2].ts = ps[0].ts * (k / ps[0].ms) + ps[1].ts * (k / ps[1].ms);
    ps[2].ms = k;
    //compact_Fraction(ps, 2);
    cout << "\nSUM Fraction A and B = "<< ps[2].ts << " / " << ps[2].ms << endl;
}

int main(){
    system("cls");
    int n = 2;
    inpTphanso(ps, n);
    cout << "\n--LIST FRACTION--\n";
    for (int i = 0; i < n; i++) {
        display(i);
    }
    sum_Fraction(ps);
    getch();
    return 0;
}