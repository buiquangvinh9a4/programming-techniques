#include <iostream>
using namespace std;

int main() {
    int n, x, a[100];
    cin >> n >> x;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
        }
    }
    
    cout << count;
    return 0;
}