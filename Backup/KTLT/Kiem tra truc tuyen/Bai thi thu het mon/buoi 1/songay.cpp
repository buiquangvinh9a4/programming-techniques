#include <iostream>
using namespace std;

bool Check(int y) {
    if ((y % 4 == 0 || y % 100 == 0 )&& y % 400 != 0)
        return true;
    return false;
}

int main()
{
    int m, y;
    cin >> m >> y;
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m ==10 || m == 12){
    	cout << "31";
    }
    if(m == 4 || m == 6 || m ==9 || m == 11){
    	cout << "30";
    }
    if(m == 2){
    if (Check(y)== true)
            cout << 29;
        else
            cout << 28;
    }

    return 0;
}