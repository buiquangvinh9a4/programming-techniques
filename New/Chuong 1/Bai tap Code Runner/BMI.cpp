#include <iostream>
using namespace std;

int main(){
    float kg, cm;
    cin >> kg >> cm;
    float BMI = kg / (cm * cm);
    if (BMI < 18.5)
        cout << "thinness";
    else if (BMI < 25)
        cout << "normal";
    else if (BMI < 30)
        cout << "overweight";
    else if (BMI < 35)
        cout << "obese 1";
    else if (BMI < 40)
        cout << "obese 2";
    else
        cout << "obese 3";
    return 0;
}