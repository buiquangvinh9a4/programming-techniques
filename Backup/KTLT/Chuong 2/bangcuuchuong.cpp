#include <iostream>
#include <iomanip>
using namespace std;

void line(){
	cout << "------";
}

int main(){
	for (int i = 0; i <= 11; i++){
		for (int j = 0; j <= 10; j++){
			if (i == 0 && j == 0) {
				cout << setw(3) << "x" << setw(3) << "|";
				continue; 
			}
			if (i == 0) cout << setw(6) << j ;
			else if (i == 1) line();
			else if (j == 0) cout << setw(3) << i - 1 << setw(3) << "|";
			else cout << setw(6) << (i-1) * j;
		}
		cout << endl;
	}
}
