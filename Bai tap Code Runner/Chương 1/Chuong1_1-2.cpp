#include <iostream>
using namespace std;

int UCLN(int a, int b)
{
	if (a % b == 0)
		return b;
	return UCLN(b, a % b);
}

int BCNN(int a, int b) {
    return (a * b / UCLN(a, b));
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int p[] = {a, b, c, d};
    int temp = BCNN(p[0], p[1]);
    for (int i = 2; i < 4; i++)
        temp = BCNN(temp, p[i]);
    cout << temp; 
    return 0;
}