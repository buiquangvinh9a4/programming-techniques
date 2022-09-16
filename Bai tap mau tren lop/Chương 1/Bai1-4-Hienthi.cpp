#include <iostream>
using namespace std;

int main(){
	int n,p,q = 0;
	cout << "Enter number n: "; cin >> n;
	p = n-1;
	for (int i=1; i<=n+p; i++){
		if (i>n){
			for (int j=1; j<=p-q; j++){
				if (j==1) cout << "* ";
				else cout << "* * "; 
			} cout << endl;
			q++;
		} else {
			for (int j=1; j<=i;j++){
				if (j==1) cout << "* ";
				else cout << "* * ";
			} cout << endl;
		}
	}
}
