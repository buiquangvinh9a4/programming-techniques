#include <iostream>
using namespace std;

class TCircle {
private:
    double r;
    string color;
public:
    TCircle();
    TCircle(double r, string color);
    double getR();
    string getColor();
    void setR(double r);
    void setColor(string color);
    void display();
    double getArea();
    ~TCircle();
};

TCircle::TCircle() {
    r = 1;
    color = "unknown";
}

TCircle::TCircle(double r, string color) {
    this->r = r;
    this->color = color;
}

double TCircle::getR() {
    return r;
}

string TCircle::getColor() {
    return color;
}

void TCircle::setR(double r) {
    this->r = r;
}

void TCircle::setColor(string color) {
    this->color = color;
}

void TCircle::display() {
    cout << "Circle: r = " << r << " _ " << "color: " << color << endl; 
}

double TCircle::getArea() {
    return 3.14 * r * r;
}

TCircle::~TCircle() {
    cout << "This is a destructor.\n";
}

int main() {

    // khoi tao mac dinh
    TCircle t1;
    t1.display();

    // khoi tao co tham so
    TCircle t2(2.5, "Red");
    t2.display();

    // thiet lap ban kinh va mau sac
    t1.setR(5);
    t1.setColor("blue");
    t2.setR(12.5);
    t2.setColor("yellow");

    t1.display();
    t2.display();

    // tinh dien tich hinh tron
    cout << "Circle Area 1 = " << t1.getArea() << endl;
    cout << "Circle Area 2 = " << t2.getArea() << endl;
 
    return 0;
}