#include <iostream>
using namespace std;
#define SIZE 1000

// ham nhap mang A gom N phan tu
void inputArr(int N, int myArr[SIZE]) {
	for (int i = 0; i < N; i++) {
		cout << "N[" << i+1 << "] = ";
		cin >> myArr[i];
	}
}


// ham xuat mang A gom N phan tu
void outputArr(int N, int myArr[SIZE]) {
	for (int i = 0; i < N; i++) {
		cout << myArr[i] << " ";
	}
	cout << endl; 
}

// ham tim gia tri nho nhat trong mang myArr
int Smallest(int N, int myArr[SIZE]){
	int min = myArr[0]; 
	for (int i = 1; i < N; i++)
		if (min > myArr[i])
			min = myArr[i];
	return min;
}

// ham tim gia tri lon nhat trong mang myArr
int Largest(int N, int myArr[SIZE]){
	int max = myArr[0];
	for (int i = 1; i < N; i++)
		if (max < myArr[i])
			max = myArr[i];
	return max;
}

// ham tim gia tri nho thu hai trong mang myArr
int secondSmallest(int N, int myArr[SIZE]) {
	int min2 = Largest(N, myArr);			
	for (int i = 0; i < N; i++)
		if (Smallest(N, myArr) == myArr[i]) continue;
		else {
			if (min2 > myArr[i])
				min2 = myArr[i];
		}
	return min2;
}

// ham tim gai tri lon thu hai trong mang myArr
int secondLargest(int N, int myArr[SIZE]) {
	int max2 = Smallest(N, myArr);			
	for (int i = 0; i < N; i++)
		if (Largest(N, myArr) == myArr[i]) continue;
		else {
			if (max2 < myArr[i])
				max2 = myArr[i];
		}
	return max2;
}

// ham nhan doi voi vi tri chia het cho 3
void multipNumber(int N, int myArr[SIZE]) {
	for (int i = 0; i < N ; i++) {
		if ((i+1) % 3 == 0)
			myArr[i] *= 2;
	}
}

int main(){
	int N, myArr[SIZE];
	
	// nhap N voi N < 1000
	do {
		cout << "Enter N: "; cin >> N;
	} while (N <= 0 || N >= 1000);
	
	inputArr(N, myArr);
	
	
	// in ra gia tri nho thu 2 va lon thu 2
	if (Smallest(N, myArr) != secondSmallest(N, myArr)) {
		cout << "The second Smallest Number is: " << secondSmallest(N, myArr) << endl;
		cout << "The second Largest Number is: " << secondLargest(N, myArr) << endl;
	}
	else
		cout << "No Largest and Smallest value!\n";
	
	// hien thi day so truoc khi nhan 
	cout << "My Array before multiplication: ";
	outputArr(N, myArr);
	
	// hien thi day so sau khi nhan
	multipNumber(N, myArr);
	cout << "My Array after multiplication: ";
	outputArr(N, myArr);

	return 0;
}

