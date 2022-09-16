#include <iostream>
using namespace std;

class People {
protected:
    string name, address;
    int age;
public:
    People();
    People(string name, int age, string address);
    string getName();
    void setName(string name);
    int getAge();
    void setAge(int age);
    string getAddress();
    void setAddress(string address);
    void display();
    ~People();
};

People::People() {
    name = "Unknown";
    age = 0;
    address = "Unknown";
}

People::People(string name, int age, string address) {
    this->name = name;
    this->age = age;
    this->address = address;
}

string People::getName() {
    return name;
}

void People::setName(string name) {
    this->name = name;
}

int People::getAge() {
    return age;
}

void People::setAge(int age) {
    this->age = age;
}

string People::getAddress() {
    return address;
}

void People::setAddress(string address) {
    this->address = address;
}

void People::display() {
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "Address : " << address << endl;
}

People::~People() {

}


//-----------------------------------------------

class Students:public People {
private:
    int id;
    double math, chemistry;
public:
    Students();
    Students(string, int, string, int, double, double);

    int getId();
    void setId(int id);
    double getMath();
    void setMath(double math);
    double getChemistry();
    void setChemistry(double chemistry);
    double GPA();
    void display();
    ~Students();
};

Students::Students(){
    id = 0;
    math = 0;
    chemistry = 0;
}

Students::Students(string name, int age, string address, int id, double math, double chemistry) {
    this->name = name;
    this->age = age;
    this->address = address;
    this->id = id;
    this->math = math;
    this->chemistry = chemistry;
}

int Students::getId() { return id; }
void Students::setId(int id) { this->id = id; }
double Students::getMath() { return math; }
void Students::setMath(double math) { this->math = math; }
double Students::getChemistry() { return chemistry; }
void Students::setChemistry(double chemistry) { this->chemistry = chemistry; }
double Students::GPA() { return (math + chemistry) / 2;} 
void Students::display() {
    People::display();
    cout << "GPA = " << GPA() << endl;
}
Students::~Students() {

}
//-----------------------------------------------




int main() {
    Students p1("Vinh", 20, "Ha Noi", 1234, 9.0, 8.0);
    p1.display();

}