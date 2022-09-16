#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	double a,b,c;
	do {
		cout << "Enter a: "; cin >> a;
		cout << "Enter b: "; cin >> b;
		cout << "Enter c: "; cin >> c;
		if (a<=0) cout << "A is not valid, please re-enter!";
		else if (b<=0) cout << "B is not valid, please re-enter!";
		else if (c<=0) cout << "C is not valid, please re-enter!";
		if (a+b<=c || b+c<=a || a+c<=b) cout << "Not Triangle!"; 
		cout << endl;
	} while (a<=0 || b<=0 || c<=0 || a+b<=c || b+c<=a || a+c<=b);
	double p = (a + b + c)/2 , s = sqrt(p*(p-a)*(p-b)*(p-c));
	double R = (a*b*c) / (4*s), r = s / p;
	cout << setprecision(5);
	cout << "- S triangle = " << s << endl;
	cout << "- R triangle = " << R << endl;
	cout << "- r triangle = " << r ;
	return 0;
}
