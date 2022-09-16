#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};

class Circle : public Shape {
private:
    double r;
public:
    Circle() {
        r = 0;
    }
    Circle(double r) {
        this->r = r;
    }
    double getArea() {
        return r * r * 3.14;
    }
    double getPerimeter() {
        return 2 * r * 3.14;
    }
};

class Rectangle : public Shape {
private:
    double w, h;
public:
    Rectangle() {
        w = 0;
        h = 0;
    }
    Rectangle(double w, double h) {
        this->w = w;
        this->h = h;
    }
    double getArea() {
        return w * h;
    }
    double getPerimeter() {
        return (w + h) * 2;
    }
};

class Triangle : public Shape {
private:
    double a, b, c;
public:
    Triangle() {
        a = 0;
        b = 0;
        c = 0;
    }
    Triangle(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    double getArea() {
        double p = getPerimeter();
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    double getPerimeter() {
        return a + b + c;
    }

};

int main() {
    Shape **s = new Shape *[3];
    s[0] = new Circle(2.3);
    s[1] = new Rectangle(7.5, 9.5);
    s[2] = new Triangle(2, 3, 4);
    
    for (int i = 0; i < 3; i++) {
        cout << "Shape " << i << " : \n";
        cout << "- Area = " << s[i]->getArea() << endl;
        cout << "- Perimeter = " << s[i]->getPerimeter() << endl;
    }

    return 0;
}