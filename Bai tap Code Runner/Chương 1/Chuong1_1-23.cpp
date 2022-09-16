#include <iostream>
using namespace std;

int main(){
    float a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    float s[] = {a, b, c, d, e};
    float max = s[0];
    for (int i = 1; i < 5; i++) {
        if (s[i] > max) max = s[i];
    }
    for (int i = 0; i <  4; i++)
        for (int j = i + 1; j < 5; j++)
            if (s[i] < s[j]) {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
    float max2 = max;
    for (int i = 1; i < 5; i++) {
        if (s[i] < max2) {
            max2 = s[i];
            break;
        }
    }
    cout << max2;
    return 0;
}