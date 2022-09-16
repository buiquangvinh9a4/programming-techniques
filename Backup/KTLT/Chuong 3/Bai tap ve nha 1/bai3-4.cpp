#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <conio.h>
#include <iomanip>
using namespace std;
#define size 100

//-------------------- Ham in ra duong ke line
void line() {
    cout << "-----------------------\n";
}

//--------------------- Ham tao khoang random sinh ngau nhien
int rand(int minN, int maxN) {
    return minN + rand() % (maxN + 1 - minN);
}

//-------------------- Ham sinh so ngau nhien vao array
void inArray(int m, int n, int array[size][size]) {
    srand((int)time(0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = rand(0,255);
        }
    }
}

//---------------------- Ham xuat mang array ra man hinh
void displayArray(int m, int n, int array[size][size]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << array[i][j] << "\t";
        cout << endl;
    }        
}

//------------------------ Ham tim kiem diem sang nhat, diem toi nhat
void find_pixel(int m, int n, int array[size][size]) {
    int max = array[0][0], min = array[0][0], i, j;
    for (i = 0; i < m; i++) {        // tim kiem diem sang Max, diem toi Min
        for (j = 0; j < n; j++) {
            if (max < array[i][j])
                max = array[i][j];
            if (min > array[i][j])
                min = array[i][j];
        }
    }
    for (i = 0; i < m; i++) {      // in ra diem sang nhat
        for (j = 0; j < n; j++) 
            if (max == array[i][j]) {
               cout << "The Brightest pixel : [" << i << "][" << j << "]" << endl;
               break; 
            }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) 
            if (min == array[i][j]) {   // in ra diem toi nhat
               cout << "The Darkest pixel : [" << i << "][" << j << "]" << endl;
               break; 
            }
    }
}

//------------------------ Ham thong ke so diem anh co gia tri sang < 70
int count_pixel(int m, int n, int array[size][size]) {
    int count = 0;
    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) 
            if (array[i][j] < 70) 
                count++;
    return count;
}

//------------------------ Ham cong them 5 vao moi gia tri diem anh
void add_valuePixel(int m, int n, int array[size][size]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] += 5;
            if (array[i][j] > 255)
                array[i][j] = 255;
        }
    }
}

//------------------------ ham kiem tra anh sang hay anh toi
void fix_pixel(int m, int n, int array[size][size]) {
    if (m * n * 0.8 > count_pixel(m, n, array))
        cout << "Light photo!\n";
    else {
        cout << "Dark photo!\n";
        do{
            add_valuePixel(m, n, array);
        } while (m * n * 0.8 <= count_pixel(m, n, array));
        cout << "UPDATE PIXEL!\n";
        cout << "Pixels smaller than 70: " << count_pixel(m, n, array) << endl;
    }
}

int main(){
    int array[size][size], n, m;
    //-------------------------------- Nhap m, n co dieu kien
    do {
        cout << "Enter m: "; cin >> m;
        cout << "Enter n: "; cin >> n;
        if (m <= 0 || m >= 100)
            cout << "Error M. ReEnter!\n";
        else if (n <= 0 || n >= 100)
            cout << "Error N. ReEnter!\n";
    } while (m <= 0 || m >= 100 || n <=0 ||n >= 100);
    //-----------------------------------------
    inArray(m, n, array);
    displayArray(m, n, array);
    line();
    find_pixel(m, n, array);
    cout << "Pixels smaller than 70: " << count_pixel(m, n, array) << endl;
    fix_pixel(m, n, array);
    displayArray(m, n, array);
    getch();
    return 0;
}