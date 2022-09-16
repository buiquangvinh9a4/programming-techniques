#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

void nhapDL(int *p, int n);
void xuatDL(int *p, int n);
int songuyento(int n);
int demsonguyento(int *p, int n);

 int main () {
 	int *p, n;
 	cout << "\nSo luong phan tu cua mang la ";
 	cin >> n;
 	p = new int [n];
 	nhapDL(p, n);
 	xuatDL(p, n);
 	cout <<"\nCac so nguyen to la " << demsonguyento(p, n) << endl;
 	return 0;
 }
 
 void nhapDL(int *p, int n){
 	cout <<"\nCac phan tu cua mang la ";
 	for (int i = 0; i<n; i++) {
 		cout << "A[" << i << "]= ";
		cin >> *(p+i);
	}
}


 
 void xuatDL(int *p, int n){
 	cout << "\nCac phan tu vua nhap la ";
	for (int i = 0; i<n; i++) {
		cout << *(p+i);	
	}
}

int songuyento(int n){
	if (n < 2){
        return false;
    }           
    for (int i = 2; i < (n - 1); i++){
        if (n % i == 0){
            return false;
        }   
    }   
    return true;
}


int demsonguyento(int *p, int n){
	int demNT = 0;
    for(int i = 0; i < n; i++)
   {
     if(songuyento(*(p+i)) == true){
         demNT++;
     	}
   }
   return demNT;
}
