#include <iostream>
#include <conio.h>
#include <iomanip> // thu vien thay doi do rong cua be rong
#define size 100
using namespace std;

// ham tao dau ke ngan cach
void line(){
	cout << "--------------\n";
}

// ham nhap vao so N, M voi N, M < 100
void inputNumber(int &N, int &M) {
	do {
		cout << "Enter N: "; cin >> N;
		cout << "Enter M: "; cin >> M;
	} while (N <= 0 || M <= 0 || N >= 100 || M >= 100);
}

// ham nhap vao mang arr voi kich thuoc N x M
void inputArray(int N, int M, int arr[size][size]) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << "Arr[" << i << "][" << j << "] = " ;
			cin >> arr[i][j];
		}
	}
	line();
}

// ham in ra mang arr voi kich thuoc N x M
void outputArray(int N, int M, int arr[size][size]) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << setw(3)<< arr[i][j] << setw(3);  // setw(3) in ra do rong la 3
		}
		cout << endl;
	}
	line();
}

// ham tim MAX va tra ve vi tri MAX
void maxNumber(int N, int M, int arr[size][size]) {
	// tim max
	int max = arr[0][0];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (i == 0 && j == 0) continue;
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	cout << "MAX = " << max << " ,in: \n";
	
	// tim vi tri max
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (arr[i][j] == max)
				cout << "- Arr[" << i << "][" << j << "] \n";
		}
	}
	line();
}

// ham sap xep dong k trong mang
void sortArray(int M, int k, int arr[size][size]) {
	for (int i = 0; i < M-1; i++) {
		for (int j = i + 1; j < M; j++) {
			if (arr[k-1][i] > arr[k-1][j]) {
				int temp = arr[k-1][i];
				arr[k-1][i] = arr[k-1][j];
				arr[k-1][j] = temp;
			}
		}
	}
}

// chuyen vi ma tran NxM
void transpose(int N, int M, int arr[size][size], int arr2[size][size]){
	for (int i = 0; i < N; i++){
		for (int  j = 0; j < M; j++){
			arr2[j][i] = arr[i][j];
		}
	}
}


int main(){
	int N, M, arr[size][size], arr2[size][size], k;
	inputNumber(N, M);    // goi ham nhap N, M
	line();
	inputArray(N, M, arr);   // nhap mang arr kich thuoc N x M
	outputArray(N, M, arr);  // in ra mang
	maxNumber(N, M, arr);     // tim max cua mang arr, in ra vi tri
	cout << "Enter k: "; cin >> k;
	sortArray(M, k, arr);         // sap xep dong k cua mang arr khong giam
	line();
	outputArray(N, M, arr);      // in ra mang sau khi sap xep
	cout << "Transpose Matrix: \n";
	transpose(N, M, arr, arr2);   // goi ham chuyen vi
	outputArray(M, N, arr2);   // xuat ra ma tran da chuyen vi
	getch();
	return 0;
}
