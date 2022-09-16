#include <iostream>
using namespace std;

int main() {
    // Hinh 1:
    cout << "*" << endl;
    cout << "**" << endl;
    cout << "***" << endl;
    cout << "*****" << endl;
    cout << "******" << endl;

    cout << "\n---------------------\n";  // ngan cach cac hinh

    // Hinh 2:
    cout << "    *" << endl;
    cout << "   ***   " << endl;
    cout << "  *****  " << endl;
    cout << " ******* " << endl;
    cout << "*********" << endl;

    cout << "\n---------------------\n";  // ngan cach cac hinh

    // Hinh 3:
    cout << "**************" << endl;
    cout << "*            *" << endl;
    cout << "*            *" << endl;
    cout << "*            *" << endl;
    cout << "**************" << endl;
    
    return 0;
}



    // int i, j, k;

    // // Hinh 1:
    // for (i = 1; i <= 5; i++) {
    //     for (j = 1; j <= i; j++) {
    //         cout << '*';
    //     }
    //     cout << endl;
    // }

    // cout << endl;


   
    // // Hinh 2
    // for (i = 0; i < 5; i++) {
    //     for (j = 1; j < 5 - i + 1; j++) {
    //         cout << " ";
    //     }
    //     for (j = 1; j <= 2 * i + 1; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // cout << endl << endl;

    // // Hinh 3
    // for (int i = 1; i <= 5; i++) {
    //     if (i == 1 || i == 5) {
    //         for (j = 1; j <= 14; j++) {
    //             cout << "*";
    //         }
    //         cout << endl << endl;
    //     } else {
    //         cout << "*";
    //         for (j = 1; j <= 12; j++) {
    //             cout << " ";
    //         }
    //         cout << "*" << endl << endl;
    //     }
    // }