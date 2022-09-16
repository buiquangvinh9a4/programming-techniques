#include <iostream>
#include <conio.h>
using namespace std;
#define max 100

int sumarrays(int a, int n[max], int m[max]) {
    int sum1 = 0;
    for (int i = 0; i < a; i++) {
        sum1 += n[i];
    }
    int sum2 = 0;
    for (int i = 0; i < a; i++) {
        sum2 += m[i];
    }
    return sum1 + sum2;
}

void inputArr(int n, int a[max]) {
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i + 1 << " = ";
        cin >> a[i];
    }
}


int main(){
    int n, a[max], b[max];
    cout << "Enter n: "; cin >> n;
    cout << "Enter Array a: \n"; inputArr(n, a);
    cout << "Enter Array b: \n"; inputArr(n, b);
    cout << "Sum Array a and b = " << sumarrays(n, a, b);
    getch();
    return 0; 
}
