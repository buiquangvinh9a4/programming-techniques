#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int paymentPerHour;
public:
    Employee() {
        name = "unknown";
        paymentPerHour = 0;
    }
    Employee(string name, int p) {
        this->name = name;
        paymentPerHour = p;
    }
    virtual int calculateSalary() = 0;
};

class PartTime : public Employee {
private:
    int workingHours;
public:
    PartTime() : Employee() {
        workingHours = 0;
    }
    PartTime(string name, int n, int w) : Employee(name, n) {
        workingHours = w;
    }
    int calculateSalary() {
        return workingHours * paymentPerHour;
    }
};

class FullTime : public Employee {
public:
    FullTime() : Employee() {
        
    }
    FullTime(string name, int n) : Employee(name, n) {
        
    }
    int calculateSalary() {
        return paymentPerHour * 8;
    }
};

int main() {
    Employee *e = new PartTime("Vinh", 20000, 5);
    cout << e->calculateSalary() << endl;
    
    Employee *e2 = new FullTime("Vinh", 25000);
    cout << e2->calculateSalary() << endl;
    return 0;
}