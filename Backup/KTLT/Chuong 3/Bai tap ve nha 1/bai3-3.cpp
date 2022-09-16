#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <conio.h>
#include <iomanip>
#define size 30
using namespace std;

/*
  CHUONG TRINH DANG DE CHE DO NHAP LA SINH NGAU NHIEN
  
*/
// ham line ke duong thang
void line() {
    cout << "----------------------------\n";
}
//----------------------------------------------


// sinh gia tri ngau nhien
float float_rand( float min, float max )
{
    float scale = rand() / (float) RAND_MAX; /* [0, 1.0] */
    return min + scale * ( max - min );      /* [min, max] */
}
//----------------------------------------------



// // ham nhap diem sinh vien 
// void inputInfo(int m, int n, double a[size1][size2]) {
//     for (int i = 0; i < m; i++) {
//         line();
//         cout << "Student " << i + 1 << ": \n";
//         for (int j = 0; j < n; j++) {
//             cout << "Enter the subject point " << j + 1 << " : ";
//             cin >> a[i][j];
//         }
        
//     }
// }
//----------------------------------------------


// ham in ra diem cua sinh vien
void outputInfo(int m, int n, double a[size][size]) {
    line();
    cout << setw(10) << " - STUDENT SCORE - \n";           // in ra ten bang
    line();
    for (int i = 0; i < m + 2; i++) {
        for (int j = 0; j < n + 1; j++) {
            if (i == 0) {
                if (j == 0)
                    cout << setw(5) << "St|Sb" << "|";        // in ra ten cot va dong
                else
                    cout << setw(8) << j;            // in ra so thu tu mon hoc
            }
            else if (i == 1) {
                cout << "-------------------------------------------------";
                break; 
            }
            else {
                if (j == 0) 
                    cout << setw(3) << i-1 << setw(5) << "|  ";        // in ra so thu tu hoc sinh
                else
                    cout << setw(8) << a[i-2][j-1];;        // in ra diem cua hoc sinh
            }
        }
        cout << endl;
    }
}
//----------------------------------------------

// ham tinh gia tri trung binh cac mon hoc
void average_subject(int m, int n, double a[size][size], double b[size]) {
    for (int i = 0; i < n; i++) {
        double temp = 0;
        for (int j = 0; j < m; j++) {
            temp += a[j][i];
        }
        b[i] = temp / double(m);
    }
}
//----------------------------------------------

// in ra gia tri diem trung binh cua ca lop
double average_class(int n, double a[size]) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum / double(n);
}
//----------------------------------------------

// ham tim hoc sinh gioi nhat va kem nhat
void find_student(int m, int n, double a[size][size], double c[size]) {
    // tinh diem trung binh cua moi hoc sinh vao mang c[size]
    for (int i = 0; i < m; i++) {
        double temp = 0;
        for (int j = 0; j < n; j++) {
            temp += a[i][j];
        }
        c[i] = temp / double(n);
    }
    // tim max, min
    double max = c[0], min = c[0];
    for (int i = 1; i < m; i++) {
        if (max < c[i]) max = c[i];
        if (min > c[i]) min = c[i];
    }
    // so sanh cac gia tri max, min voi c[i]
    for (int i = 0; i < m; i++) {
        if (max == c[i]) {
            cout << "Best Student: Student " << i + 1 << endl;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (min == c[i]) {
            cout << "Weak Student: Student " << i + 1 << endl;
            break;
        }
    }
}
//----------------------------------------------

// ham thong ke hoc luc hoc sinh
void list_student(int m, double c[size]) {
    int countG = 0, countK = 0, countTB = 0, countY = 0;
    for (int i = 0; i < m; i++) {
        if (c[i] >= 8.0) countG++;
        else if (c[i] >= 6.0 && c[i] < 8.0) countK++;
        else if (c[i] >= 5.0 && c[i] < 6.0) countTB++;
        else countY++;
    }
    cout << "Good students: " << countG << endl;
    cout << "Normal students: " << countK << endl;
    cout << "Average students: " << countTB << endl;
    cout << "Weak students: " << countY << endl;

}

int main() {
    int n, m; 
    double a[size][size], b[size], c[size];
    //----------------------------------------------   // nhap so hoc sinh m va so mon n co dieu kien
    do {
        cout << "Enter Student Number: "; cin >> m;
        cout << "Enter Subject Number: "; cin >> n;
        if (m < 10 || m > 30)
            cout << "Not Value Student [10, 30]. ReEnter!\n";
        if (n < 5 || n > 10)
            cout << "Not Value Subject [5, 10]. ReEnter!\n";
    } while (n < 5 || n > 10 || m < 10 || m > 30);
    //----------------------------------------------  // nhap diem hoc sinh vao mang 2 chieu
    float min = 0.1, max = 10.0;
	cout << setprecision(2);
	for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
		    a[i][j] = float_rand(min, max);
	    }
    }
    //----------------------------------------------
    // inputInfo(m, n, a);
    line();
    outputInfo(m, n, a);
    line();
    //----------------------------------------------
    average_subject(m, n, a, b);
    for (int i = 0; i < n; i++) 
        cout << "Average subject " << i + 1 <<" = " << b[i] << endl;
    
    cout << "Average class: " << average_class(n, b) << endl;
    line();
    //----------------------------------------------
    find_student(m, n, a, c);
    line();
    //----------------------------------------------
    list_student(m, c);
    getch();
    return 0;
}