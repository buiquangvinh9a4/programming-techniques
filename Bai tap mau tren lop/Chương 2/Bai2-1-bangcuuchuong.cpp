#include <iostream>
#include <iomanip>
using namespace std;

// ham in ra duong line ngang
void displaySeperatorLine(){
    for (int i=0; i<=10; i++) {
	    cout << "------";
    }
    cout<<endl;
}

//In 1 dong thu n trong bang cuu chuong
void displayOneLine(int n)
{
    cout << setw(5) << n << " |";
    for (int j = 1; j <= 10; j++){
		cout << setw(6) << n * j;
	}
	cout << endl;
}

int main(){
    
	//Hien thi header
    cout << setw(5) << "x" << " |";
	for (int j = 1; j <= 10; j++){
		cout << setw(6) << j ;
	}
    cout<<endl;
    displaySeperatorLine();
    
    //Hien thi tung dong trong bang cuu chuong
	for (int i = 1; i <= 10; i++){
		displayOneLine (i);
	}
	return 0;
}

