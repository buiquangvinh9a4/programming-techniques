#include <iostream>
using namespace std;

class HOCSINH {
private:
    string name;
    double math, phys, chem, aver;
public:
    void enter();
    void average();
    string rank();
    void display();
};

void HOCSINH::enter() {
    cout << "Enter full name: ";
    getline(cin, name);
    cout << "- Math = "; cin >> math;
    cout << "- Physics = "; cin >> phys;
    cout << "- Chemistry = "; cin >> chem;
    cin.ignore();
}

void HOCSINH::average() {
    aver = (math + phys + chem) / 3;
}

string HOCSINH::rank() {
    
    if (aver >= 8 && aver <= 10)
        return "Very good.\n";
    else if (aver >= 6 && aver < 8)
        return "Good.\n";
    else if (aver >= 4 && aver < 6)
        return "Average.\n";
    else
        return "Weak.\n";
}

void HOCSINH::display() {
    cout << "Name: " << name << endl;
    cout << "- Math score = " << math << endl;
    cout << "- Physics score = " << phys << endl;
    cout << "- Chemistry score = " << chem << endl;
    average();
    cout << "- Average score = " << aver << endl;
    cout << "- Rank: " << rank() << endl;
}

int main(){
    HOCSINH h1, h2;
    h1.enter();
    h1.display();

    h2.enter();
    h2.display();
    
    return 0;
}