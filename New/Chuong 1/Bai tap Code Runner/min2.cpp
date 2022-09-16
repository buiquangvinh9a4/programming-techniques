#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int max = a, min = a;
    if (min > b)
        min = b;
    if (min > c)
        min = c;
    if (min > d)
        min = d;
    if (min > e)
        min = e;


    if (max < b)
        max = b;
    if (max < c)
        max = c;
    if (max < d)
        max = d;
    if (max < e)
        max = e;

    int min2 = max;
    if (min2 > a && a != min)
        min2 = a;
    if (min2 > b && b != min)
        min2 = b;
    if (min2 > c && c != min)
        min2 = c;
    if (min2 > d && d != min)
        min2 = d;
    if (min2 > e && e != min)
        min2 = e;

    cout << min2;
    return 0;
}