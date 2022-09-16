#include <iostream>
using namespace std;

int main() {
    int m, y;
    cin >> m >> y;
    bool isLeapYear;
	isLeapYear = ((y % 4 == 0 && y % 100 != 0) || y % 400 != 0) ? true : false;
    int numberOfDay = 31;
	if (m == 2) numberOfDay = (isLeapYear == true) ? 29 : 28;
	else if (m == 4 || m == 6 || m == 9 || m == 11) numberOfDay = 30;
    cout << numberOfDay;
    return 0;
}