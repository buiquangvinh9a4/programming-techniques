#include <iostream>
using namespace std;

bool chanle(int a){
    if (a % 2 == 0) return true;
    else return false;
}

int main(){
    int n, countc = 0, countl = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (chanle(a[i])) countc ++;
        else countl++;
    }
    cout << countc << " " << countl;
    return 0;
}