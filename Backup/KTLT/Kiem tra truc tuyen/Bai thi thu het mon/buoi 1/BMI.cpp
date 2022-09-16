#include <iostream>
using namespace std;

int main() {
    double w, h;
    cin >> w >> h;
    double bmi = w / (h * h);
    if (bmi < 18.5) {
        cout << "thinness";
    } else if (bmi >= 18.5 && bmi < 25) {
        cout << "normal";
    } else if (bmi >= 25 && bmi < 30) {
        cout << "overweight";
    } else if (bmi >= 30 && bmi < 35) {
        cout << "obese 1";
    } else if (bmi >= 35 && bmi < 40) {
        cout << "obese 2";
    } else {
        cout << "obese 3";
    }
    return 0;
}