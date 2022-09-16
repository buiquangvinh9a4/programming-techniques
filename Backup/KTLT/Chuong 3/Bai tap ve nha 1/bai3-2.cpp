#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
#define size 100

// ham nhap mang a[size] co n phan tu
void inputArr(int n, int a[size]) {
    for (int i = 0; i < n; i++) {
        cout << "Enter a[" << i << "]= ";
        cin >> a[i];
    }
}

// ham in mang a[size] co n phan tu
void outputArr(int n, int a[size]) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// ham in ra max cua mang a
int maxNumber(int n, int a[size]) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (max < a[i]) 
            max = a[i];
    }
    return max;
} 

// ham in ra min cua mang a
int minNumber(int n, int a[size]) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (min > a[i]) 
            min = a[i];
    }
    return min;
} 

// ham kiem tra so chinh phuong
bool isSquare(int n) {
    int sqr = sqrt(n);
    if (sqr * sqr == n)
        return true;
    else return false;
}

// ham kien tra so nguyen to
bool isPrime(int n) {
    if (n < 2) return false;
    else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) return false;   
        }
    }
    return true;
}

// ham sap xep day so nguyen trong mang theo chieu tang dan
void sortSL(int n, int a[size]) {
    for (int i = 0; i < n - 1; i++) 
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

// ham sap xep day so nguyen trong mang theo chieu tang dan
void sortLS(int n, int a[size]) {
    for (int i = 0; i < n - 1; i++) 
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

// 

int main(){
    int n, a[size];
    cout << "Enter n: "; cin >> n;
    inputArr(n, a);
    // ----------------------------------------
    cout << "Max Number Array = " << maxNumber(n, a) << endl;
    cout << "Min Number Array = " << minNumber(n, a) << endl;
    // ----------------------------------------
    int countPrime = 0, countSquare = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) countPrime++;
        if (isSquare(a[i])) countSquare++;
    }
    cout << "Count Prime Number = " << countPrime << endl;
    cout << "Count Square Number = " << countSquare << endl;
    // ----------------------------------------
    sortSL(n, a);
    cout << "Ascending: "; outputArr(n, a);
    sortLS(n, a);
    cout << "Decreasing: "; outputArr(n, a);
    // ----------------------------------------
    int evenNumber = 0, oddNumber = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) evenNumber ++;
        else oddNumber ++;
    }
    if (evenNumber < oddNumber)
        cout << "Even Number < Odd Number\n";
    else if (evenNumber > oddNumber)
        cout << "Even Number > Odd Number\n";
    else
        cout << "Even Number = Odd Number\n";
    getch();
    return 0; 
}
