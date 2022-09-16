#include <iostream>
using namespace std;

int main(){
	for (int i = 0; i <= 10; i++){
		for (int j = 0; j <= 10; j++){
			if (i == 0 && j == 0) {
				cout << "x\t";
				continue;
			}
			if (i == 0) cout << j << "\t";
			else if (j == 0) cout << i << "\t";
			else cout << i * j << "\t";
		}
		cout << endl;
	}
}
