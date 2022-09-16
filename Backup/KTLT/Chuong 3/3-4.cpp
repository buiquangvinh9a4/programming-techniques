#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;

void line(){        // ham in ra duong ke ngang line
    cout << "--------------" <<  endl;
}

// ham nhap cac gia tri vao vector
void inVector(int n, vector<double> &X) {
    for (int i = 0; i < n; i++) {
        int x;
        cout << "Enter number " << i + 1 << ": ";
        cin >> x;
        X.push_back(x);
    }
    line();
}

// ham in ra cac gia tri trong vector
void outVector(vector<double> X) {
    for (int i = 0; i < X.size(); i++) {
        cout << X.at(i) << " ";
    }
    cout << endl;
}



// ham sap xep vector theo chieu khong giam
void sortVectors(vector<double> &X) {
    for (int i = 0; i < X.size() - 1; i++) {
        for (int j = i + 1; j < X.size(); j++) {
            if (X.at(i) > X.at(j)) {
                int temp = X.at(i);
                X.at(i) = X.at(j);
                X.at(j) = temp;
            }
        }    
    }
}

// ham ghep noi cac phan tu cua day X va Y, chieu khong giam
void linkVector(vector<double> &X, vector<double> &Y, vector<double> &Z) {
    Z.resize(X.size() + Y.size());          // resize kich thuoc cua day Z
    for (int i = 0; i < Z.size(); i++) {
        if (i < X.size()) {
            Z.at(i) = X.at(i);
        }else {
            Z.at(i) = Y.at(i - X.size());
		} 
    }
    sortVectors(Z);
}

int main(){
    // nhap kich thuoc vector n, m
    int n, m;
    vector<double> X(n);             // khai bao vector X, kich thuoc n
    vector<double> Y(m);            // khai bao vector Y, kich thuoc m
    cout << "Enter n: "; cin >> n;
    inVector(n, X);                  // goi ham nhap vector X, kich thuoc n
    cout << "Enter m: "; cin >> m; 
    inVector(m, Y);                 // goi ham nhap vector X, kich thuoc m

    // ---------------------------------

    // in ra vector X, Y
    cout << "Vector before sorting: \n";
    cout << "X: "; outVector(X);
    cout << "Y: "; outVector(Y);
    line();                        

    // ---------------------------------

    // sap xep va in ra vector X, Y
    cout << "Vector after sorting from smallest to largest: \n";
    //  goi ham sap xep vector "sortVectors"
    sortVectors(X);            
    sortVectors(Y);
    cout << "X: ";  outVector(X);
    cout << "Y: ";  outVector(Y);
    line();
    
    // ---------------------------------

    // ghep noi 2 vector X va Y thanh Z va sap xep no
    vector<double> Z;              // khai bao vector Z
    cout << "Pairing and sorting Z: "; 
    linkVector(X, Y, Z);          // ham noi 2 vector X va Y va sap xep Z
    outVector(Z);  
    getch();     
    return 0;

}