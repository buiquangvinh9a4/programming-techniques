#include <iostream>
#include <conio.h>
using namespace std;

// --------------------- Ham in ra duong ke line
void line() {
    cout << "-----------------------\n";
}

// --------------------- Ham nhap vao day so voi n phan tu
void inputArr(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << "- Enter number " << i + 1 << " = ";
        cin >> *(a + i);
    }
    line();
}

// --------------------- Ham hien thi day so voi n phan tu
void display(int *a, int n) {
    cout << "My Array: ";
    for (int i = 0; i < n; i++) {
        cout << *(a + i) << " ";
    }
    cout << endl;
    line();
}

void maxSequence(int *a, int n, int &lastPosition, int &maxQuantity) {
    int currentPosition = 0;  // vi tri hien tai
    int currentQuantity = 1;  // so luong day dang xet
    int i = 0;
    while (i < n - 1) {
        if (a[i] < a[i+1]) {
            currentPosition = i + 1;
            currentQuantity++;
        }
        else {
            currentQuantity = 1;    
            currentPosition = i;
        }
        if (maxQuantity < currentQuantity) {
            maxQuantity = currentQuantity;    // maxQuantity: bien luu luong lon nhat trong day
            lastPosition = currentPosition;   // lastPosition: vi tri cuoi cung
        }
        i++;
    }
}



int main() {
    // --------------------- Khai bao va nhap n
    int n, lastPosition = 0, maxQuantity = 1;
    cout << "Enter n: "; cin >> n;
    // --------------------- Cap phat dong cho con tro array voi bo nho la n
    int *array = new int[n];
    // --------------------- Nhap vao day so array voi n phan tu, hien thi sau khi nhap
    inputArr(array, n);
    display(array, n);
    // --------------------- In ra day khong giam dai nhat
    maxSequence(array, n, lastPosition, maxQuantity);
    for (int i = lastPosition - maxQuantity + 1; i <= lastPosition; i++) {
        cout << array[i] << " ";
    }
    // --------------------- Thu hoi bo nho n cua day so array khi dung xong
    delete [] array;

    getch();
    return 0;
}