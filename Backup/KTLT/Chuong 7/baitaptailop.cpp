#include <iostream>
#include <cmath>
using namespace std;

class shape {
public:
    double getPerimeter() {
        return 0;
    }
    double getArea() {
        return 0;
    }
};

class twodimenshape : public shape {
private:
    int x, y;
public:
    void set_values(int a, int b) {
        x = a;
        y = b;
    }
};

class threedimenshape : public shape {
protected:
    int x, y, z;
public:
    void set_values(int a, int b, int c) {
        x = a;
        y = b;
        z = c;
    }

};

class circle : public twodimenshape {
private:
    int r;
public:
    void set_values(int a, int b, int c) {
        twodimenshape::set_values(a, b);
        r = c;
    }
    double getPerimeter() {
        return 2 * r * 3.14;
    }
    double getArea() {
        return 3.14 * r * r;
    }
};

class square : public twodimenshape {
private:
    int w, h;
public:
    void set_values(int a, int b, int c, int d) {
        twodimenshape::set_values(a, b);
        w = c;
        h = d;
    }
    int getPerimeter() {
        return (w + h) * 2;
    }
    int getArea() {
        return w * h;
    }
};

class triangle : public twodimenshape {
private:
    int m, n, o;
public:
    void set_values(int a, int b, int c, int d, int e) {
        twodimenshape::set_values(a, b);
        m = c;
        n = d;
        o = e;
    }
    double getPerimeter() {
        return m + n + o;
    }
    double getArea() {
        double p = getPerimeter() / 2;
        return sqrt(p * (p - m) * (p - n) * (p - o));
    }
};

class sphere : public threedimenshape {
private:
    int r;
public:
    void set_values(int a, int b, int c, int d) {
        threedimenshape::set_values(a, b, c);
        r = d;
    }
    double getPerimeter() {
        return 2 * 3.14 * r;
    }
    double getArea() {
        return 4 * 3.14 * r * r;
    }
};

class cube : public threedimenshape {
private:
    int e;
public:
    void set_values(int a, int b, int c, int d) {
        threedimenshape::set_values(a, b, c);
        e = d;
    }
    int getPerimeter() {
        return 12 * e;
    }
    int getArea() {
        return 6 * e * e;
    }
};

int main() {
    circle c;
    c.set_values(2, 3, 5);
    cout << c.getArea() << endl;
    cout << c.getPerimeter() << endl;

    square s;
    s.set_values(5, 5, 5, 5);
    cout << s.getArea() << endl;
    cout << s.getPerimeter() << endl;

    triangle t;
    t.set_values(4, 4, 5, 6, 7);
    cout << t.getArea() << endl;
    cout << t.getPerimeter() << endl;

    cube aa;
    aa.set_values(3, 3, 5, 6);
    cout << aa.getArea() << endl;
    cout << aa.getPerimeter() << endl;
    
    return 0;
}